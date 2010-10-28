//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for checking LL(1) condition                                    *
//                                                                           *
//  Copyright (C) 1994, ..., 2010 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "files/C_HTML_FileWrite.h"
#include "files/C_TextFileWrite.h"
#include "utilities/MF_MemoryControl.h"
#include "bdd/C_BDD_Set2.h"

//---------------------------------------------------------------------------*

#include "LL1_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "semantics_instructions.h"
#include "galgas_cli_options.h"

//---------------------------------------------------------------------------*

class cAffichagePremiersProduction : public C_bdd_value_traversing {
//--- Attributs
  protected : C_HTML_FileWrite & mFichierBNF ;
  protected : const cVocabulary & mVocabulary ;

//--- Constructeur
  public : cAffichagePremiersProduction (C_HTML_FileWrite & inHTMLfile,
                                         const cVocabulary & inVocabulary) ;

//--- Methode virtelle appelee pour chaque valeur
  public : virtual void action (const bool tableauDesValeurs [],
                                const PMUInt16 nombreVariables) ;
} ;
  
//---------------------------------------------------------------------------*

cAffichagePremiersProduction::cAffichagePremiersProduction (C_HTML_FileWrite & inHTMLfile,
                                                            const cVocabulary & inVocabulary) :
mFichierBNF (inHTMLfile),
mVocabulary (inVocabulary) {
}

//---------------------------------------------------------------------------*

void cAffichagePremiersProduction::action (const bool tableauDesValeurs [],
                                           const PMUInt16 nombreVariables) {
  PMSInt32 element = 0L ;
  for (PMSInt32 i=nombreVariables - 1 ; i>=0 ; i--) {
    element = (element << 1) + tableauDesValeurs [i] ;
  }
  mFichierBNF << " " ;
  mVocabulary.printInFile (mFichierBNF, element COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

static bool
check_LL1_condition (const cPureBNFproductionsList & inPureBNFproductions,
                     const C_BDD_Set2 & inFIRSTsets,
                     const C_BDD_Set2 & inFOLLOWsets,
                     const TC_UniqueArray <bool> & vocabulaireSeDerivantEnVide,
                     const cVocabulary & inVocabulary,
                     C_HTML_FileWrite * inHTMLfile,
                     const bool inVerboseOptionOn) {
//--- Pour chaque non-terminal presentant plusieurs inPureBNFproductions, calculer le 'premiers' de chacune d'elle,
// et verifier l'absence de conflit.
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "The FIRST of a production is :\n"
                   " if the production is empty, the FOLLOW of the left nonterminal symbol ;\n"
                   " if the production is not empty (e.g. g -> x) :\n"
                   "         -- the FIRST of x, and\n"
                   "         -- if x est a nonterminal symbol deriving in the empty string, union the FOLLOW of x.\n\n"
                   "Only are listed the nonterminal having more than one production (see step 2\n"
                   "for inPureBNFproductions numbering) :\n\n" ;
    inHTMLfile->outputRawData ("</p>") ;
  }
  C_BDD_Set2 t (inFOLLOWsets) ; t.clear () ;
  C_BDD_Set1 premierDeProduction (inFOLLOWsets.getDescriptor1 ()) ;
  C_BDD_Set2 temp (inFOLLOWsets) ;
  PMSInt16 nombreDeConflits = 0 ;
  const PMSInt32 nombreNonTerminaux = inVocabulary.getNonTerminalSymbolsCount () ;
  const PMSInt32 terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<table class=\"result\">") ;
  }
  for (PMSInt32 i=0 ; i<nombreNonTerminaux ; i++) {
    const PMSInt32 first = inPureBNFproductions.tableauIndicePremiereProduction (i COMMA_HERE) ;
      if (first >= 0) { // first<0 means the non terminal symbol is unuseful
      const PMSInt32 derniere = inPureBNFproductions.tableauIndiceDerniereProduction (i COMMA_HERE) ;
      if (derniere > first) { // Plusieurs inPureBNFproductions d'un meme non-terminal
      //--- Calculer et afficher les premiers
        if (inHTMLfile != NULL) {
          inHTMLfile->outputRawData ("<tr><td class=\"result_title\" colspan=\"2\"><code>") ;
          inVocabulary.printInFile (*inHTMLfile, i + terminalSymbolsCount COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code></td></tr>") ;
        }
        for (PMSInt32 j=first ; j<=derniere ; j++) {
          const PMSInt32 numeroProduction = inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) ;
          if (inHTMLfile != NULL) {
            inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><a href=\"#pure_bnf_") ;
            *inHTMLfile << cStringWithSigned (numeroProduction) ;
            inHTMLfile->outputRawData ("\">") ;
            *inHTMLfile << cStringWithSigned (numeroProduction) ;
            inHTMLfile->outputRawData ("</a></td><td><code>") ;
          }
          cProduction & p = inPureBNFproductions (numeroProduction COMMA_HERE) ;
          premierDeProduction.clear () ;
          if (p.aDerivation.count () == 0) {
            temp.initDimension1 (C_BDD::kEqual, (PMUInt32) p.aNumeroNonTerminalGauche) ;
            p.aPremierDeProduction = (temp & inFOLLOWsets).projeterSurAxe2 () ;
          }else{
            const PMUInt32 elementEnTete = (PMUInt32) p.aDerivation (0 COMMA_HERE) ;
            t.initDimension1 (C_BDD::kEqual, elementEnTete) ;
            if (((PMSInt32) elementEnTete) < terminalSymbolsCount) {
              p.aPremierDeProduction = t.projeterSurAxe1 () ;
            }else{
              p.aPremierDeProduction = (t & inFIRSTsets).projeterSurAxe2 () ;
              if (vocabulaireSeDerivantEnVide ((PMSInt32) elementEnTete COMMA_HERE)) {
                p.aPremierDeProduction |= (t & inFOLLOWsets).projeterSurAxe2 () ;
              }
            }
          }
          if (inHTMLfile != NULL) {
            TC_UniqueArray <bool> array ;
            p.aPremierDeProduction.getArray (array) ;
            const PMSInt32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
            for (PMSInt32 symbol=0 ; symbol < symbolsCount ; symbol++) {
              if (array (symbol COMMA_HERE)) {
                inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
                *inHTMLfile << " " ;
              }
            }
            inHTMLfile->outputRawData ("</code></td></tr>") ;
          }
        }
     //--- Verifier l'absence de conflit
        for (PMSInt32 pr1=first ; pr1<derniere ; pr1++) {
          const PMSInt32 numeroProductionJ = inPureBNFproductions.tableauIndirectionProduction (pr1 COMMA_HERE) ;
          for (PMSInt32 k=pr1+1 ; k<=derniere ; k++) {
            const PMSInt32 numeroProductionK = inPureBNFproductions.tableauIndirectionProduction (k COMMA_HERE) ;
            if (! (inPureBNFproductions(numeroProductionJ COMMA_HERE).aPremierDeProduction &
                  inPureBNFproductions(numeroProductionK COMMA_HERE).aPremierDeProduction).isFalse ()) {
              nombreDeConflits ++ ;
              if (inHTMLfile != NULL) {
                inHTMLfile->outputRawData ("<tr><td colspan=\"2\"><span class=\"error\">") ;
                *inHTMLfile << "***** Conflict between the productions "
                            << cStringWithSigned (numeroProductionJ)
                            << " and "
                            << cStringWithSigned (numeroProductionK)
                            << " *****" ;
                inHTMLfile->outputRawData ("</span></td></tr>\n") ;
              }
            }
          }
        }
        if (inHTMLfile != NULL) {
          *inHTMLfile << "\n" ;
        }
      }
    }
  }
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("</table><p>") ;
  }
//--- Bilan de l'analyse
  if (inVerboseOptionOn) {
    if (nombreDeConflits == 0) {
      co << "ok.\n" ;
    }else{
      co << "error.\n" ;
    }
    co.flush () ;
  }
  if (inHTMLfile != NULL) {
    if (nombreDeConflits == 0) {
      inHTMLfile->outputRawData ("<span class=\"success\">") ;
      *inHTMLfile << "No conflict : the grammar is LL (1).\n" ;
      inHTMLfile->outputRawData ("</span>") ;
    }else{
      inHTMLfile->outputRawData ("<span class=\"error\">") ;
      *inHTMLfile << "The grammar is not  LL (1) : "
                  << cStringWithSigned (nombreDeConflits)
                  << " conflict"
                  << ((nombreDeConflits > 1) ? "s" : "")
                  << "." ;
      inHTMLfile->outputRawData ("</span>") ;
    }
    inHTMLfile->outputRawData ("</p>") ;
  }
  return nombreDeConflits == 0 ;
}

//---------------------------------------------------------------------------*

class cEcrireNonTerminal : public C_bdd_value_traversing {
//--- Attributs
  protected : C_HTML_FileWrite & mFichierBNF ;
  protected : const cVocabulary & mVocabulary ;
  protected : C_String aNomClasseLexique ;
  protected : PMSInt16 aIndice ;

//--- Constructeur
  public : cEcrireNonTerminal (C_HTML_FileWrite & inHTMLfile,
                               const cVocabulary & inVocabulary,
                               const C_String & nomClasseLexique) ;

//--- Methode virtuelle appelee pour chaque valeur
  public : virtual void action (const bool tableauDesValeurs [],
                                const PMUInt16 nombreVariables) ;
} ;
  
//---------------------------------------------------------------------------*

cEcrireNonTerminal::
cEcrireNonTerminal (C_HTML_FileWrite & inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const C_String & nomClasseLexique) :
mFichierBNF (inHTMLfile),
mVocabulary (inVocabulary),
aNomClasseLexique (nomClasseLexique),
aIndice (0) {
}

//---------------------------------------------------------------------------*

void cEcrireNonTerminal::action (const bool tableauDesValeurs [],
                                 const PMUInt16 nombreVariables) {
  PMSInt32 element = 0L ;
  for (PMSInt32 i=nombreVariables - 1 ; i>=0 ; i--) {
    element = (element << 1) + tableauDesValeurs [i] ;
  }
  aIndice ++ ;
  if (aIndice == 2) {
    mFichierBNF << "\n" ;
    aIndice = 0 ;
  }
  mFichierBNF << aNomClasseLexique << "::kToken_"
              << mVocabulary.getSymbol (element COMMA_HERE).identifierRepresentation ()
              << ", " ;
}

//---------------------------------------------------------------------------*

static void
engendrerAiguillageNonTerminaux (const cVocabulary & inVocabulary,
                                 const PMSInt32 inOriginalGrammarProductionLeftNonTerminalIndex,
                                 const PMSInt16 nombreDeParametres,
                                 const cPureBNFproductionsList & inPureBNFproductions,
                                 AC_OutputStream & fichierCPP,
                                 const C_String & inAltName) {
  const PMSInt32 first = inPureBNFproductions.tableauIndicePremiereProduction (inOriginalGrammarProductionLeftNonTerminalIndex COMMA_HERE) ;
  if (first >= 0) { // Au moins une production
    const PMSInt32 derniere = inPureBNFproductions.tableauIndiceDerniereProduction (inOriginalGrammarProductionLeftNonTerminalIndex COMMA_HERE) ;
    if (first == derniere) { // Une seule production, pas de conflit
      const PMSInt32 indiceProduction = inPureBNFproductions.tableauIndirectionProduction (first COMMA_HERE) ;
      inPureBNFproductions (indiceProduction COMMA_HERE).engendrerAppelProduction (nombreDeParametres, inVocabulary, inAltName, fichierCPP) ;
    }else{ // Plusieurs inPureBNFproductions : engendrer l'aiguillage
      if (! gOption_galgas_5F_cli_5F_options_legacyCodeGeneration.mValue) {
        fichierCPP << "  switch (inLexique->nextProductionIndex ()) {\n" ;
      }else{
        fichierCPP << "  switch (inLexique.nextProductionIndex ()) {\n" ;
      }
      for (PMSInt32 j=first ; j<=derniere ; j++) {
        fichierCPP << "  case " << cStringWithSigned ((PMSInt32)(j - first + 1)) << " :\n  " ;
        const PMSInt32 indiceProduction = inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) ;
        inPureBNFproductions (indiceProduction COMMA_HERE).engendrerAppelProduction (nombreDeParametres, inVocabulary, inAltName, fichierCPP) ;
        fichierCPP << "    break ;\n" ;
      }
      fichierCPP << "  default :\n"
                 << "    break ;\n"
                 << "  }\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

class C_ProductionNameDescriptor {
  public : C_String mName ;
  public : C_String mFileName ;
  public : PMUInt32 mLineNumber ;
  
  public : C_ProductionNameDescriptor (void) ;
  
  public : C_ProductionNameDescriptor (const C_String & inName,
                                       const C_String & inFileName,
                                       const PMUInt32 inLineNumber) ;
} ;

//---------------------------------------------------------------------------*

C_ProductionNameDescriptor::C_ProductionNameDescriptor (void) :
mName (),
mFileName (),
mLineNumber (0) {
} ;

//---------------------------------------------------------------------------*

C_ProductionNameDescriptor::C_ProductionNameDescriptor (const C_String & inName,
                                                        const C_String & inFileName,
                                                        const PMUInt32 inLineNumber) :
mName (inName),
mFileName (inFileName),
mLineNumber (inLineNumber) {
} ;

//---------------------------------------------------------------------------*

static void
printProductions (const cPureBNFproductionsList & inPureBNFproductions,
                  const cVocabulary & inVocabulary,
                  const C_String & inLexiqueName,
                  const PMSInt32 inNonterminalIndex,
                  PMSInt16 & ioProductionIndex,
                  bool & ioFirst,
                  TC_UniqueArray <PMSInt16> & ioProductionRulesIndex,
                  TC_UniqueArray <C_String> & ioProductionRulesTitle,
                  TC_UniqueArray <C_ProductionNameDescriptor> & ioProductionRuleDescription,
                  TC_UniqueArray <PMSInt16> & ioFirstProductionRuleIndex,
                  AC_OutputStream & inCppFile) {
  ioFirstProductionRuleIndex.addObject ((PMSInt16) ioProductionRulesIndex.count ()) ;
  const PMSInt32 firstProduction = inPureBNFproductions.tableauIndicePremiereProduction (inNonterminalIndex COMMA_HERE) ;
  if (firstProduction >= 0) {
    const PMSInt32 lastProduction = inPureBNFproductions.tableauIndiceDerniereProduction (inNonterminalIndex COMMA_HERE) ;
    for (PMSInt32 j=firstProduction ; j<=lastProduction ; j++) {
      ioProductionRulesIndex.addObject (ioProductionIndex) ;
      cProduction & p = inPureBNFproductions (inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) COMMA_HERE) ;
      C_String title ;
      inVocabulary.printInFile (title, p.aNumeroNonTerminalGauche COMMA_HERE) ;
      const C_ProductionNameDescriptor description (title, p.mSourceFileName, ioProductionIndex) ;
      ioProductionRuleDescription.addObject (description) ;
      title << ", in file '" 
            << p.mSourceFileName
            << ".ggs', line "
            << cStringWithSigned (p.aLigneDefinition) ;
      inCppFile << "// At index "
                << cStringWithSigned (ioProductionIndex)
                << " : "
                << title 
                << "\n" ;
      ioProductionRulesTitle.addObjectUsingSwap (title) ;
      const PMSInt32 derivationLength = p.aDerivation.count () ;
      for (PMSInt32 item=0 ; item<=derivationLength ; item++) {
        if (ioFirst) {
          inCppFile << "  " ;
          ioFirst = false ;
        }else{
          inCppFile << ", " ;
        }
        if (item < derivationLength) {
          const PMSInt32 v = p.aDerivation (item COMMA_HERE) ;
          if (v < inVocabulary.getTerminalSymbolsCount ()) {
            inCppFile << "TERMINAL ("
                    << "C_Lexique_" << inLexiqueName.identifierRepresentation ()
                    << "::kToken_"
                    << inVocabulary.getSymbol (v COMMA_HERE).identifierRepresentation ()
                    << ") // $"
                    << inVocabulary.getSymbol (v COMMA_HERE) 
                    << "$\n" ;
          }else{
            inCppFile << "NONTERMINAL ("
                      << cStringWithSigned ((PMSInt32) (v - inVocabulary.getTerminalSymbolsCount ()))
                      << ") // <"
                      << inVocabulary.getSymbol (v COMMA_HERE) 
                      << ">\n" ;        
          } 
        }else{
          inCppFile << "END_PRODUCTION\n" ;
        }
      }
      ioProductionIndex = (PMSInt16) (ioProductionIndex + derivationLength + 1) ;
    }
  }
}

//---------------------------------------------------------------------------*

static void
printDecisionTable (const cPureBNFproductionsList & inPureBNFproductions,
                    const cVocabulary & inVocabulary,
                    const C_String & inLexiqueName,
                    const PMSInt32 inNonterminalIndex,
                    PMSInt16 & ioDecisionTableIndex,
                    TC_UniqueArray <PMSInt16> & ioProductionDecisionTableIndex,
                    AC_OutputStream & inCppFile) {
  ioProductionDecisionTableIndex.addObject (ioDecisionTableIndex) ;
  inCppFile << "// At index "
            << cStringWithSigned (ioDecisionTableIndex)
            << " : <"
            << inVocabulary.getSymbol (inNonterminalIndex + inVocabulary.getTerminalSymbolsCount () COMMA_HERE)
            << ">" ;
  const PMSInt32 firstProduction = inPureBNFproductions.tableauIndicePremiereProduction (inNonterminalIndex COMMA_HERE) ;
  if (firstProduction >= 0) { // At least one production
    const PMSInt32 lastProduction = inPureBNFproductions.tableauIndiceDerniereProduction (inNonterminalIndex COMMA_HERE) ;
    if (firstProduction == lastProduction) { // Only one production, no choice
      inCppFile << " only one production, no choice\n"
                   "  -1,\n" ;
      ioDecisionTableIndex ++ ;
    }else{ // Several productions : generate decision table
      inCppFile << "\n" ;
      for (PMSInt32 j=firstProduction ; j<=lastProduction ; j++) {
        cProduction & p = inPureBNFproductions (inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) COMMA_HERE) ;
        TC_UniqueArray <bool> array ;
        p.aPremierDeProduction.getArray (array) ;
        const PMSInt32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
        for (PMSInt32 symbol=0 ; symbol < symbolsCount ; symbol++) {
          if (array (symbol COMMA_HERE)) {
            inCppFile << "C_Lexique_" << inLexiqueName.identifierRepresentation ()
                      << "::kToken_"
                      << inVocabulary.getSymbol (symbol COMMA_HERE).identifierRepresentation ()
                      << ", " ;
          }
        }
        inCppFile << "-1, // Choice "
                  << cStringWithSigned ((PMSInt32)(j - firstProduction + 1))
                  << "\n" ;
        ioDecisionTableIndex = (PMSInt16) (ioDecisionTableIndex + p.aPremierDeProduction.getValuesCount ()) ;
        ioDecisionTableIndex ++ ;
      }
      inCppFile << "  -1,\n" ;
      ioDecisionTableIndex ++ ;
    }
   }else{
    inCppFile << " no production\n" ;
  }
}

//---------------------------------------------------------------------------*

static void old_generate_LL1_grammar_Cpp_file (C_CompilerEx & inLexique,
                                               const GGS_nonTerminalSymbolMapForGrammarAnalysis & inNonterminalSymbolsMapForGrammar,
                                               const PMUInt32 inOriginalGrammarStartSymbol,
                                               const C_String & inTargetFileName,
                                               const C_String & inOutputDirectoryForCppFiles,
                                               const C_String & inLexiqueName,
                                               const cVocabulary & inVocabulary,
                                               const cPureBNFproductionsList & inPureBNFproductions) {
//--- Generate header file inclusion --------------------------------------------------------------
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if CURRENT_LIBPM_VERSION != VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER\n"
                    "  #error \"This file has been compiled with a version of GALGAS that uses libpm version VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER, different than the current version (CURRENT_LIBPM_VERSION) of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"utilities/MF_MemoryControl.h\"\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"" << inTargetFileName << ".h\"\n\n" ;

  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

//--- Generate LL(1) tables
  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;
  const PMSInt32 productionsCount = inPureBNFproductions.length () ;
  TC_UniqueArray <PMSInt16> productionRulesIndex (500 COMMA_HERE);
  TC_UniqueArray <PMSInt16> firstProductionRuleIndex (500 COMMA_HERE) ;
  TC_UniqueArray <C_ProductionNameDescriptor> productionRuleDescription ;
  TC_UniqueArray <C_String> productionRulesTitle (500 COMMA_HERE) ;

  generatedZone3.appendCppTitleComment ("L L ( 1 )    P R O D U C T I O N    R U L E S") ;
  generatedZone3 << "#define TERMINAL(t)     ((t)+1)\n"
                    "#define NONTERMINAL(nt) ((-nt)-1)\n"
                    "#define END_PRODUCTION  (0)\n\n"
                    "static const PMSInt16 gProductions [] = {\n" ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis::cEnumerator nonTerminal (inNonterminalSymbolsMapForGrammar) ;
  PMSInt16 productionIndex = 0 ;
  bool first = true ;
  while (nonTerminal.hasCurrentObject ()) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      nonTerminal._mID (HERE), productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      productionRuleDescription,
                      firstProductionRuleIndex, generatedZone3) ;
    nonTerminal.next () ;
  }
  generatedZone3 << "//---- Added productions from 'select' and 'repeat' instructions\n" ;  
  for (PMSInt32 i=inVocabulary.getTerminalSymbolsCount () + inNonterminalSymbolsMapForGrammar.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      i - inVocabulary.getTerminalSymbolsCount (),
                      productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      productionRuleDescription,
                      firstProductionRuleIndex, generatedZone3) ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate productions names table
  generatedZone3.appendCppTitleComment ("P R O D U C T I O N    N A M E S") ;
  generatedZone3 << "static const cProductionNameDescriptor gProductionNames ["
                 << cStringWithSigned (productionRuleDescription.count ())
                 << "] = {\n" ;
  for (PMSInt32 p=0 ; p<productionRuleDescription.count () ; p++) {
    generatedZone3 << " {\"" << productionRuleDescription (p COMMA_HERE).mName
                   << "\", \""
                   << productionRuleDescription (p COMMA_HERE).mFileName
                   << "\", "
                   << cStringWithUnsigned (productionRuleDescription (p COMMA_HERE).mLineNumber)
                   << "}"
                   << ((p == (productionsCount-1)) ? "" : ",")
                   << " // at index " << cStringWithSigned (p) << "\n" ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate productions indexes table
  generatedZone3.appendCppTitleComment ("L L ( 1 )    P R O D U C T I O N    I N D E X E S") ;
  generatedZone3 << "static const PMSInt16 gProductionIndexes ["
                 << cStringWithSigned (productionRulesIndex.count ())
                 << "] = {\n" ;
  for (PMSInt32 p=0 ; p<productionRulesIndex.count () ; p++) {
    generatedZone3 << cStringWithSigned (productionRulesIndex (p COMMA_HERE))
            << ((p == (productionsCount-1)) ? "" : ",")
            << " // index " << cStringWithSigned (p)
            << " : " << productionRulesTitle (p COMMA_HERE)
            << "\n" ;
  }
  generatedZone3 << "} ;\n\n" ;
  productionRulesTitle.clear () ;

//--- Generate decision tables indexes
  generatedZone3.appendCppTitleComment ("L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S") ;
  generatedZone3 << "static const PMSInt16 gFirstProductionIndexes ["
          << cStringWithSigned ((PMSInt32)(firstProductionRuleIndex.count () + 1))
          << "] = {\n" ;
  { for (PMSInt32 i=0 ; i<firstProductionRuleIndex.count () ; i++) {
      generatedZone3 << cStringWithSigned (firstProductionRuleIndex (i COMMA_HERE))
              << ", // at " << cStringWithSigned (i) <<  " : <"
              << inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)
              << ">\n" ;
    }
  } 
  generatedZone3 << "0} ;\n\n" ;
  
//--- Generate decision tables  
  TC_UniqueArray <PMSInt16> productionDecisionIndex (500 COMMA_HERE) ;
  generatedZone3.appendCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S") ;
  generatedZone3 << "static const PMSInt16 gDecision [] = {\n" ;
  PMSInt16 decisionTableIndex = 0 ;
  nonTerminal.rewind () ;
  while (nonTerminal.hasCurrentObject ()) {
    printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                        nonTerminal._mID (HERE), decisionTableIndex,
                        productionDecisionIndex, generatedZone3) ;
    nonTerminal.next () ;
  }
  generatedZone3 << "//---- Added non terminal symbols from 'select' and 'repeat' instructions\n" ;  
  { for (PMSInt32 i=inVocabulary.getTerminalSymbolsCount () + inNonterminalSymbolsMapForGrammar.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
      printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                          i - inVocabulary.getTerminalSymbolsCount (), decisionTableIndex,
                          productionDecisionIndex, generatedZone3) ;
    }
  }
  generatedZone3 << "0} ;\n\n" ;

//--- Generate decision tables indexes
  generatedZone3.appendCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S") ;
  generatedZone3 << "static const PMSInt16 gDecisionIndexes ["
          << cStringWithSigned ((PMSInt32)(productionDecisionIndex.count () + 1))
          << "] = {\n" ;
  for (PMSInt32 i=0 ; i<productionDecisionIndex.count () ; i++) {
  generatedZone3 << cStringWithSigned (productionDecisionIndex (i COMMA_HERE))
                << ", // at " << cStringWithSigned (i) << " : <"
                << inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)
                << ">\n" ;
  }
  generatedZone3 << "0} ;\n\n" ;
  
//--- Generate non terminal implementation ----------------------------
  nonTerminal.rewind () ;
  while (nonTerminal.hasCurrentObject ()) {
    generatedZone3.appendCppTitleComment (C_String ("'") + nonTerminal._key (HERE) + "' non terminal implementation") ;
    const bool existeProduction = inPureBNFproductions.tableauIndicePremiereProduction (nonTerminal._mID (HERE) COMMA_HERE) >= 0 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis::cEnumerator currentAltForNonTerminal (nonTerminal._mNonterminalSymbolParametersMap (HERE)) ;
    while (currentAltForNonTerminal.hasCurrentObject ()) {
      generatedZone3 << "void C_Grammar_" << inTargetFileName.identifierRepresentation ()
                     << "::\n"
                     << "nt_" << nonTerminal._key (HERE).identifierRepresentation ()
                     << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                     << " (" << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " & " << (existeProduction ? "inLexique" : "") ;
      GGS_signatureForGrammarAnalysis::cEnumerator parametre (currentAltForNonTerminal._mFormalParametersList (HERE), true) ;
      PMSInt16 numeroParametre = 1 ;
      while (parametre.hasCurrentObject ()) {
        generatedZone3 << ",\n                                " ;
        generateFormalArgumentFromTypeName (parametre._mGalgasTypeNameForGrammarAnalysis (HERE), parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE), generatedZone3) ;
        if (existeProduction) {
          generatedZone3 << " parameter_" << cStringWithSigned (numeroParametre) ;
        }
        parametre.next () ;
        numeroParametre ++ ;
      }
      generatedZone3 << ") {\n" ; 
      engendrerAiguillageNonTerminaux (inVocabulary, nonTerminal._mID (HERE), numeroParametre,
                                       inPureBNFproductions, generatedZone3,
                                       currentAltForNonTerminal._key (HERE)) ;
      generatedZone3 << "}\n\n" ;
      currentAltForNonTerminal.next () ;
    }
  //--- Generate 'startParsing' method ?
    if (nonTerminal._mID (HERE) == (PMSInt32) inOriginalGrammarStartSymbol) {
      currentAltForNonTerminal.rewind () ;
      while (currentAltForNonTerminal.hasCurrentObject ()) {
        generatedZone3.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        generatedZone3 << "void C_Grammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceFileParsing_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                       << " (C_CompilerEx & inCompiler"
                          ",\n                                "
                          "const C_String & inDependancyExtension"
                          ",\n                                "
                          "const C_String & inDependancyPath"
                          ",\n                                "
                          "GGS_string * inSentStringPtr"
                          ",\n                                "
                          "const GGS_lstring inFilePath" ;
        GGS_signatureForGrammarAnalysis::cEnumerator parametre (currentAltForNonTerminal._mFormalParametersList (HERE), true) ;
        PMSInt16 numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << ",\n                                " ;
          generateFormalArgumentFromTypeName (parametre._mGalgasTypeNameForGrammarAnalysis (HERE), parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE), generatedZone3) ;
          generatedZone3 << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "\n                                "
                          "COMMA_LOCATION_ARGS) {\n" ;
        generatedZone3 << "  const C_String sourceFileName = inFilePath.string ().isAbsolutePath ()\n"
                          "    ? inFilePath.string ()\n"
                          "    : inCompiler.sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (inFilePath.string ()) ;\n"
                          "  if (sourceFileName.fileExists ()) {\n"
                          "    C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "    macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (& inCompiler, inDependancyExtension, inDependancyPath, inCompiler.ioParametersPtr (), sourceFileName COMMA_HERE)) ;\n"
                          "    if (scanner->needsCompiling ()) {\n"
                          "      if (scanner->sourceText () != NULL) {\n"
                          "        scanner->mPerformGeneration = inCompiler.mPerformGeneration ;\n" ;
        generatedZone3 << "        const bool ok = scanner->performTopDownParsing (gProductions, gProductionNames, gProductionIndexes,\n"
                          "                                                         gFirstProductionIndexes, gDecision, gDecisionIndexes, "
                       << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                       << ") ;\n"
                          "        if (ok && ! scanner->mParseOnlyFlag) {\n"
                          "          C_Grammar_" << inTargetFileName.identifierRepresentation () << " _grammar ;\n"
                          "          " ;
        generatedZone3 << "_grammar.nt_" << nonTerminal._key (HERE).identifierRepresentation ()
                       << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                       << " (*scanner" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << ", parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << ") ;\n"
                          "          if (inSentStringPtr != NULL) {\n"
                          "            inSentStringPtr->dotAssign_operation (scanner->sentStringEX ()) ;\n"
                          "          }\n"
                          "        }\n" ;
        generatedZone3 << "      }else{\n"
                          "        C_String message ;\n"
                          "        message << \"the '\" << sourceFileName << \"' file exits, but cannot be read\" ;\n"
                          "        inFilePath.signalSemanticError (inCompiler, message COMMA_THERE) ;\n" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          if (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::enum_argumentOut) {
            generatedZone3 << "        parameter_" << cStringWithSigned (numeroParametre) << ".drop () ;\n" ;
          }
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "      }\n"
                          "    }\n"
                          "    macroReleaseObject (scanner) ;\n"
                          "  }else{\n"
                          "    C_String message ;\n"
                          "    message << \"the '\" << sourceFileName << \"' file does not exist\" ;\n"
                          "    inFilePath.signalSemanticError (inCompiler, message COMMA_THERE) ;\n" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          if (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::enum_argumentOut) {
            generatedZone3 << "    parameter_" << cStringWithSigned (numeroParametre) << ".drop () ;\n" ;
          }
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "  }\n"
                          "}\n\n" ;
      //--- Define string parsing static method
        generatedZone3.appendCppHyphenLineComment () ;
        generatedZone3 << "void C_Grammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceStringParsing_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                       << " (C_CompilerEx & inCompiler"
                          ",\n                                "
                          "GGS_string * inSentStringPtr"
                          ",\n                                "
                          "const GGS_string inSourceString" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << ",\n                                " ;
          generateFormalArgumentFromTypeName (parametre._mGalgasTypeNameForGrammarAnalysis (HERE), parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE), generatedZone3) ;
          generatedZone3 << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "\n                                "
                          "COMMA_UNUSED_LOCATION_ARGS) {\n" ;
        generatedZone3 << "  C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "  macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (& inCompiler, inCompiler.ioParametersPtr (), inSourceString.string (), \"Error when parsing dynamic string\" COMMA_HERE)) ;\n"
                          "  scanner->mPerformGeneration = inCompiler.mPerformGeneration ;\n" ;
        generatedZone3 << "  const bool ok = scanner->performTopDownParsing (gProductions, gProductionNames, gProductionIndexes,\n"
                          "                                                   gFirstProductionIndexes, gDecision, gDecisionIndexes, "
                       << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                       << ") ;\n"
                          "  if (ok && ! scanner->mParseOnlyFlag) {\n"
                          "    C_Grammar_" << inTargetFileName.identifierRepresentation () << " _grammar ;\n"
                          "    " ;
        generatedZone3 << "_grammar.nt_" << nonTerminal._key (HERE).identifierRepresentation ()
                       << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                       << " (*scanner" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << ", parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << ") ;\n"
                          "    if (inSentStringPtr != NULL) {\n"
                          "      inSentStringPtr->dotAssign_operation (scanner->sentStringEX ()) ;\n"
                          "    }\n"
                          "  }\n"
                          "  macroReleaseObject (scanner) ;\n"
                          "}\n\n" ;
        currentAltForNonTerminal.next () ;
      }
    }
    nonTerminal.next () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions
  for (PMSInt32 nt=inVocabulary.getTerminalSymbolsCount () ; nt<inVocabulary.getAllSymbolsCount () ; nt++) {
    if (inVocabulary.needToGenerateChoice (nt COMMA_HERE)) {
      generatedZone3.appendCppTitleComment (C_String ("'") + inVocabulary.getSymbol (nt COMMA_HERE) + "' added non terminal implementation") ;
      generatedZone3 << "PMSInt16 C_Grammar_" << inTargetFileName.identifierRepresentation ()
              << "::" << inVocabulary.getSymbol (nt COMMA_HERE)
              << " (C_Lexique_" << inLexiqueName.identifierRepresentation ()
              << " & inLexique) {\n"
                 "  return inLexique.nextProductionIndex () ;\n"
                 "}\n\n" ;
    }
  }
//--- Fin du fichier ---------------------------------
  generatedZone3.appendCppHyphenLineComment () ;

//--- Generate file
  TC_UniqueArray <C_String> directoriesToExclude ;
  directoriesToExclude.addObject ("DEPENDENCIES") ;
  inLexique.generateFileFromPathes (inOutputDirectoryForCppFiles,
                                    directoriesToExclude,
                                    "//",
                                    inTargetFileName + ".cpp",
                                    "\n\n", // User Zone 1
                                    generatedZone2,
                                    "\n\n", // User Zone 2
                                    generatedZone3) ;
}

//---------------------------------------------------------------------------*

static void
generate_LL1_grammar_Cpp_file (C_CompilerEx & inLexique,
                               const GGS_nonTerminalSymbolMapForGrammarAnalysis & inNonterminalSymbolsMapForGrammar,
                               const PMUInt32 inOriginalGrammarStartSymbol,
                               const C_String & inTargetFileName,
                               const C_String & inOutputDirectoryForCppFiles,
                               const C_String & inLexiqueName,
                               const cVocabulary & inVocabulary,
                               const cPureBNFproductionsList & inPureBNFproductions) {
//--- Generate header file inclusion --------------------------------------------------------------
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if CURRENT_LIBPM_VERSION != VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER\n"
                    "  #error \"This file has been compiled with a version of GALGAS that uses libpm version VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER, different than the current version (CURRENT_LIBPM_VERSION) of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"utilities/MF_MemoryControl.h\"\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"" << inTargetFileName << ".h\"\n\n" ;

  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

//--- Generate LL(1) tables
  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;
  const PMSInt32 productionsCount = inPureBNFproductions.length () ;
  TC_UniqueArray <PMSInt16> productionRulesIndex (500 COMMA_HERE);
  TC_UniqueArray <PMSInt16> firstProductionRuleIndex (500 COMMA_HERE) ;
  TC_UniqueArray <C_ProductionNameDescriptor> productionRuleDescription ;
  TC_UniqueArray <C_String> productionRulesTitle (500 COMMA_HERE) ;

  generatedZone3.appendCppTitleComment ("L L ( 1 )    P R O D U C T I O N    R U L E S") ;
  generatedZone3 << "#define TERMINAL(t)     ((t)+1)\n"
                    "#define NONTERMINAL(nt) ((-nt)-1)\n"
                    "#define END_PRODUCTION  (0)\n\n"
                    "static const PMSInt16 gProductions [] = {\n" ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis::cEnumerator nonTerminal (inNonterminalSymbolsMapForGrammar) ;
  PMSInt16 productionIndex = 0 ;
  bool first = true ;
  while (nonTerminal.hasCurrentObject ()) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      nonTerminal._mID (HERE), productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      productionRuleDescription,
                      firstProductionRuleIndex, generatedZone3) ;
    nonTerminal.next () ;
  }
  generatedZone3 << "//---- Added productions from 'select' and 'repeat' instructions\n" ;  
  for (PMSInt32 i=inVocabulary.getTerminalSymbolsCount () + inNonterminalSymbolsMapForGrammar.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      i - inVocabulary.getTerminalSymbolsCount (),
                      productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      productionRuleDescription,
                      firstProductionRuleIndex, generatedZone3) ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate productions names table
  generatedZone3.appendCppTitleComment ("P R O D U C T I O N    N A M E S") ;
  generatedZone3 << "static const cProductionNameDescriptor gProductionNames ["
                 << cStringWithSigned (productionRuleDescription.count ())
                 << "] = {\n" ;
  for (PMSInt32 p=0 ; p<productionRuleDescription.count () ; p++) {
    generatedZone3 << " {\"" << productionRuleDescription (p COMMA_HERE).mName
                   << "\", \""
                   << productionRuleDescription (p COMMA_HERE).mFileName
                   << "\", "
                   << cStringWithUnsigned (productionRuleDescription (p COMMA_HERE).mLineNumber)
                   << "}"
                   << ((p == (productionsCount-1)) ? "" : ",")
                   << " // at index " << cStringWithSigned (p) << "\n" ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate productions indexes table
  generatedZone3.appendCppTitleComment ("L L ( 1 )    P R O D U C T I O N    I N D E X E S") ;
  generatedZone3 << "static const PMSInt16 gProductionIndexes ["
                 << cStringWithSigned (productionRulesIndex.count ())
                 << "] = {\n" ;
  for (PMSInt32 p=0 ; p<productionRulesIndex.count () ; p++) {
    generatedZone3 << cStringWithSigned (productionRulesIndex (p COMMA_HERE))
            << ((p == (productionsCount-1)) ? "" : ",")
            << " // index " << cStringWithSigned (p)
            << " : " << productionRulesTitle (p COMMA_HERE)
            << "\n" ;
  }
  generatedZone3 << "} ;\n\n" ;
  productionRulesTitle.clear () ;

//--- Generate decision tables indexes
  generatedZone3.appendCppTitleComment ("L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S") ;
  generatedZone3 << "static const PMSInt16 gFirstProductionIndexes ["
          << cStringWithSigned ((PMSInt32)(firstProductionRuleIndex.count () + 1))
          << "] = {\n" ;
  { for (PMSInt32 i=0 ; i<firstProductionRuleIndex.count () ; i++) {
      generatedZone3 << cStringWithSigned (firstProductionRuleIndex (i COMMA_HERE))
              << ", // at " << cStringWithSigned (i) <<  " : <"
              << inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)
              << ">\n" ;
    }
  } 
  generatedZone3 << "0} ;\n\n" ;
  
//--- Generate decision tables  
  TC_UniqueArray <PMSInt16> productionDecisionIndex (500 COMMA_HERE) ;
  generatedZone3.appendCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S") ;
  generatedZone3 << "static const PMSInt16 gDecision [] = {\n" ;
  PMSInt16 decisionTableIndex = 0 ;
  nonTerminal.rewind () ;
  while (nonTerminal.hasCurrentObject ()) {
    printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                        nonTerminal._mID (HERE), decisionTableIndex,
                        productionDecisionIndex, generatedZone3) ;
    nonTerminal.next () ;
  }
  generatedZone3 << "//---- Added non terminal symbols from 'select' and 'repeat' instructions\n" ;  
  { for (PMSInt32 i=inVocabulary.getTerminalSymbolsCount () + inNonterminalSymbolsMapForGrammar.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
      printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                          i - inVocabulary.getTerminalSymbolsCount (), decisionTableIndex,
                          productionDecisionIndex, generatedZone3) ;
    }
  }
  generatedZone3 << "0} ;\n\n" ;

//--- Generate decision tables indexes
  generatedZone3.appendCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S") ;
  generatedZone3 << "static const PMSInt16 gDecisionIndexes ["
          << cStringWithSigned ((PMSInt32)(productionDecisionIndex.count () + 1))
          << "] = {\n" ;
  for (PMSInt32 i=0 ; i<productionDecisionIndex.count () ; i++) {
  generatedZone3 << cStringWithSigned (productionDecisionIndex (i COMMA_HERE))
                << ", // at " << cStringWithSigned (i) << " : <"
                << inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)
                << ">\n" ;
  }
  generatedZone3 << "0} ;\n\n" ;
  
//--- Generate non terminal implementation ----------------------------
  nonTerminal.rewind () ;
  while (nonTerminal.hasCurrentObject ()) {
    generatedZone3.appendCppTitleComment (C_String ("'") + nonTerminal._key (HERE) + "' non terminal implementation") ;
    const bool existeProduction = inPureBNFproductions.tableauIndicePremiereProduction (nonTerminal._mID (HERE) COMMA_HERE) >= 0 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis::cEnumerator currentAltForNonTerminal (nonTerminal._mNonterminalSymbolParametersMap (HERE)) ;
    while (currentAltForNonTerminal.hasCurrentObject ()) {
      generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                     << "::nt_" << nonTerminal._key (HERE).identifierRepresentation ()
                     << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                     << " (" ;
      GGS_signatureForGrammarAnalysis::cEnumerator parametre (currentAltForNonTerminal._mFormalParametersList (HERE), true) ;
      PMSInt16 numeroParametre = 1 ;
      while (parametre.hasCurrentObject ()) {
        switch (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::enum_argumentConstantIn :
          generatedZone3 << "const " ;
          break ;
        default : break ;
        }
        generatedZone3 << "GALGAS_" << parametre._mGalgasTypeNameForGrammarAnalysis (HERE).identifierRepresentation () ;
        switch (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::enum_argumentConstantIn :
          generatedZone3 << " " ;
          break ;
        case GGS_formalArgumentPassingModeAST::enum_argumentIn :
          generatedZone3 << " " ;
          break ;
        case GGS_formalArgumentPassingModeAST::enum_argumentInOut :
        case GGS_formalArgumentPassingModeAST::enum_argumentOut :
          generatedZone3 << " & " ;
          break ;
        default : break ;
        }
        if (existeProduction) {
          generatedZone3 << "parameter_" << cStringWithSigned (numeroParametre) ;
        }
        parametre.next () ;
        numeroParametre ++ ;
        generatedZone3 << ",\n                                " ;
      }
      generatedZone3 << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " * " << (existeProduction ? "inLexique" : "")
                     << ") {\n" ; 
      engendrerAiguillageNonTerminaux (inVocabulary, nonTerminal._mID (HERE), numeroParametre,
                                       inPureBNFproductions, generatedZone3,
                                       currentAltForNonTerminal._key (HERE)) ;
      generatedZone3 << "}\n\n" ;
      currentAltForNonTerminal.next () ;
    }
  //--- Generate 'startParsing' method ?
    if (nonTerminal._mID (HERE) == (PMSInt32) inOriginalGrammarStartSymbol) {
      currentAltForNonTerminal.rewind () ;
      while (currentAltForNonTerminal.hasCurrentObject ()) {
        generatedZone3.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceFileParsing_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                       << " (C_Compiler * inCompiler"
                          ",\n                                "
                          "GALGAS_lstring inFilePath" ;
        GGS_signatureForGrammarAnalysis::cEnumerator parametre (currentAltForNonTerminal._mFormalParametersList (HERE), true) ;
        PMSInt16 numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << ",\n                                " ;
          switch (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::enum_argumentConstantIn :
            generatedZone3 << "const " ;
            break ;
          default : break ;
          }
          generatedZone3 << "GALGAS_" << parametre._mGalgasTypeNameForGrammarAnalysis (HERE).identifierRepresentation () ;
          switch (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::enum_argumentConstantIn :
            generatedZone3 << " " ;
            break ;
          case GGS_formalArgumentPassingModeAST::enum_argumentIn :
            generatedZone3 << " " ;
            break ;
          case GGS_formalArgumentPassingModeAST::enum_argumentInOut :
          case GGS_formalArgumentPassingModeAST::enum_argumentOut :
            generatedZone3 << " & " ;
            break ;
          default : break ;
          }
          generatedZone3 << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "\n                                "
                          "COMMA_LOCATION_ARGS) {\n" ;
        generatedZone3 << "  if (inFilePath.isValid ()) {\n"
                          "    const GALGAS_string filePathAsString = inFilePath.reader_string (HERE) ;\n"
                          "    C_String filePath = filePathAsString.stringValue () ;\n"
                          "    if (! filePath.isAbsolutePath ()) {\n"
                          "      filePath = inCompiler->sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;\n"
                          "    }\n"
                          "    if (filePath.fileExists ()) {\n"
                          "    C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "    macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", inCompiler->ioParametersPtr (), filePath COMMA_HERE)) ;\n"
                          "    // if (scanner->needsCompiling ()) {\n"
                          "      if (scanner->sourceText () != NULL) {\n"
                          "        scanner->mPerformGeneration = inCompiler->mPerformGeneration ;\n"
                          "        const bool ok = scanner->performTopDownParsing (gProductions, gProductionNames, gProductionIndexes,\n"
                          "                                                         gFirstProductionIndexes, gDecision, gDecisionIndexes, "
                       << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                       << ") ;\n"
                          "        if (ok && ! scanner->mParseOnlyFlag) {\n"
                          "          cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                          "          " ;
        generatedZone3 << "grammar.nt_" << nonTerminal._key (HERE).identifierRepresentation ()
                       << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                       << " (" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << "parameter_" << cStringWithSigned (numeroParametre) << ", " ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "scanner) ;\n"
                          "        }\n"
                          "      }else{\n"
                          "        C_String message ;\n"
                          "        message << \"the '\" << filePath << \"' file exists, but cannot be read\" ;\n"
                          "        const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;\n"
                          "        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;\n" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          if (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::enum_argumentOut) {
            generatedZone3 << "        parameter_" << cStringWithSigned (numeroParametre) << ".drop () ;\n" ;
          }
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "      }\n"
                          "    // }\n"
                          "    macroReleaseObject (scanner) ;\n"
                          "  }else{\n"
                          "    C_String message ;\n"
                          "    message << \"the '\" << filePath << \"' file does not exist\" ;\n"
                          "    const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;\n"
                          "    inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;\n" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          if (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::enum_argumentOut) {
            generatedZone3 << "    parameter_" << cStringWithSigned (numeroParametre) << ".drop () ;\n" ;
          }
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "    }\n"
                          "  }\n"
                          "}\n\n" ;
      //--- Define string parsing static method
        generatedZone3.appendCppHyphenLineComment () ;
        generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceStringParsing_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                       << " (C_Compiler * inCompiler"
                          ",\n                                "
                          "GALGAS_string inSourceString" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << ",\n                                " ;
          switch (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::enum_argumentConstantIn :
            generatedZone3 << "const " ;
            break ;
          default : break ;
          }
          generatedZone3 << "GALGAS_" << parametre._mGalgasTypeNameForGrammarAnalysis (HERE).identifierRepresentation () ;
          switch (parametre._mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::enum_argumentConstantIn :
            generatedZone3 << " " ;
            break ;
          case GGS_formalArgumentPassingModeAST::enum_argumentIn :
            generatedZone3 << " " ;
            break ;
          case GGS_formalArgumentPassingModeAST::enum_argumentInOut :
          case GGS_formalArgumentPassingModeAST::enum_argumentOut :
            generatedZone3 << " & " ;
            break ;
          default : break ;
          }
          generatedZone3 << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "\n                                "
                          "COMMA_UNUSED_LOCATION_ARGS) {\n" ;
        generatedZone3 << "  if (inSourceString.isValid ()) {\n"
                          "    const C_String sourceString = inSourceString.stringValue () ;\n"
                          "    C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "    macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, inCompiler->ioParametersPtr (), sourceString, \"Error when parsing dynamic string\" COMMA_HERE)) ;\n"
                          "    scanner->mPerformGeneration = inCompiler->mPerformGeneration ;\n" ;
        generatedZone3 << "    const bool ok = scanner->performTopDownParsing (gProductions, gProductionNames, gProductionIndexes,\n"
                          "                                                    gFirstProductionIndexes, gDecision, gDecisionIndexes, "
                       << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                       << ") ;\n"
                          "    if (ok && ! scanner->mParseOnlyFlag) {\n"
                          "      cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                          "      grammar.nt_" << nonTerminal._key (HERE).identifierRepresentation ()
                       << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
                       << " (" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << "parameter_" << cStringWithSigned (numeroParametre) << ", " ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "scanner) ;\n"
                          "    }\n"
                          "    macroReleaseObject (scanner) ;\n"
                          "  }\n"
                          "}\n\n" ;
        currentAltForNonTerminal.next () ;
      }
    }
    nonTerminal.next () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions
  for (PMSInt32 nt=inVocabulary.getTerminalSymbolsCount () ; nt<inVocabulary.getAllSymbolsCount () ; nt++) {
    if (inVocabulary.needToGenerateChoice (nt COMMA_HERE)) {
      generatedZone3.appendCppTitleComment (C_String ("'") + inVocabulary.getSymbol (nt COMMA_HERE) + "' added non terminal implementation") ;
      generatedZone3 << "PMSInt32 cGrammar_" << inTargetFileName.identifierRepresentation ()
              << "::" << inVocabulary.getSymbol (nt COMMA_HERE)
              << " (C_Lexique_" << inLexiqueName.identifierRepresentation ()
              << " * inLexique) {\n"
                 "  return inLexique->nextProductionIndex () ;\n"
                 "}\n\n" ;
    }
  }
//--- Fin du fichier ---------------------------------
  generatedZone3.appendCppHyphenLineComment () ;

//--- Generate file
  TC_UniqueArray <C_String> directoriesToExclude ;
  directoriesToExclude.addObject ("DEPENDENCIES") ;
  inLexique.generateFileFromPathes (inOutputDirectoryForCppFiles,
                                    directoriesToExclude,
                                    "//",
                                    inTargetFileName + ".cpp",
                                    "\n\n", // User Zone 1
                                    generatedZone2,
                                    "\n\n", // User Zone 2
                                    generatedZone3) ;
}

//---------------------------------------------------------------------------*

void
LL1_computations (C_CompilerEx & inLexique,
                  const cPureBNFproductionsList & inPureBNFproductions,
                  C_HTML_FileWrite * inHTMLfile,
                  const cVocabulary & inVocabulary,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                  const C_BDD_Set2 & inFIRSTsets,
                  const C_BDD_Set2 & inFOLLOWsets,
                  const GGS_nonTerminalSymbolMapForGrammarAnalysis & inNonterminalSymbolsMapForOriginalGrammar,
                  const PMUInt32 inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  const C_String & inOutputDirectoryForCppFiles,
                  const C_String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Checking LL(1) condition... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->appendCppTitleComment ("Checking LL(1) condition", "title") ;
  }

//--- Check LL(1) condition
  outOk = check_LL1_condition (inPureBNFproductions,
                               inFIRSTsets,
                               inFOLLOWsets,
                               inVocabularyDerivingToEmpty_Array,
                               inVocabulary,
                               inHTMLfile,
                               inVerboseOptionOn) ;

//--- Generate C++ file
  if (outOk) {
    if (! gOption_galgas_5F_cli_5F_options_legacyCodeGeneration.mValue) {
      generate_LL1_grammar_Cpp_file (inLexique,
                                     inNonterminalSymbolsMapForOriginalGrammar,
                                     inOriginalGrammarStartSymbol,
                                     inTargetFileName,
                                     inOutputDirectoryForCppFiles,
                                     inLexiqueName,
                                     inVocabulary,
                                     inPureBNFproductions) ;
    }else{
      old_generate_LL1_grammar_Cpp_file (inLexique,
                                         inNonterminalSymbolsMapForOriginalGrammar,
                                         inOriginalGrammarStartSymbol,
                                         inTargetFileName,
                                         inOutputDirectoryForCppFiles,
                                         inLexiqueName,
                                         inVocabulary,
                                         inPureBNFproductions) ;
    }
  }
}

//---------------------------------------------------------------------------*
