//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for checking LL(1) condition                                    *
//                                                                           *
//  Copyright (C) 1994, ..., 2007 Pierre Molinaro.                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
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
#include "grammarComputations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "common_semantics.h"
#include "semantics_instructions.h"
#include "scannerDecoderGeneration.h"

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
                                const uint16 nombreVariables) ;
} ;
  
//---------------------------------------------------------------------------*

cAffichagePremiersProduction::cAffichagePremiersProduction (C_HTML_FileWrite & inHTMLfile,
                                                            const cVocabulary & inVocabulary) :
mFichierBNF (inHTMLfile),
mVocabulary (inVocabulary) {
}

//---------------------------------------------------------------------------*

void cAffichagePremiersProduction::action (const bool tableauDesValeurs [],
                                           const uint16 nombreVariables) {
  sint32 element = 0L ;
  for (sint32 i=nombreVariables - 1 ; i>=0 ; i--) {
    element = (element << 1) + tableauDesValeurs [i] ;
  }
  mFichierBNF << ' ' ;
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
  sint16 nombreDeConflits = 0 ;
  const sint32 nombreNonTerminaux = inVocabulary.getNonTerminalSymbolsCount () ;
  const sint32 terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<table class=\"result\">") ;
  }
  for (sint32 i=0 ; i<nombreNonTerminaux ; i++) {
    const sint32 first = inPureBNFproductions.tableauIndicePremiereProduction (i COMMA_HERE) ;
      if (first >= 0) { // first<0 means the non terminal symbol is unuseful
      const sint32 derniere = inPureBNFproductions.tableauIndiceDerniereProduction (i COMMA_HERE) ;
      if (derniere > first) { // Plusieurs inPureBNFproductions d'un meme non-terminal
      //--- Calculer et afficher les premiers
        if (inHTMLfile != NULL) {
          inHTMLfile->outputRawData ("<tr><td class=\"result_title\" colspan=\"2\"><code>") ;
          inVocabulary.printInFile (*inHTMLfile, i + terminalSymbolsCount COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code></td></tr>") ;
        }
        for (sint32 j=first ; j<=derniere ; j++) {
          const sint32 numeroProduction = inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) ;
          if (inHTMLfile != NULL) {
            inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><a href=\"#pure_bnf_") ;
            *inHTMLfile << numeroProduction ;
            inHTMLfile->outputRawData ("\">") ;
            *inHTMLfile << numeroProduction ;
            inHTMLfile->outputRawData ("</a></td><td><code>") ;
          }
          cProduction & p = inPureBNFproductions (numeroProduction COMMA_HERE) ;
          premierDeProduction.clear () ;
          if (p.aDerivation.count () == 0) {
            temp.initDimension1 (C_BDD::kEqual, (uint32) p.aNumeroNonTerminalGauche) ;
            p.aPremierDeProduction = (temp & inFOLLOWsets).projeterSurAxe2 () ;
          }else{
            const uint32 elementEnTete = (uint32) p.aDerivation (0 COMMA_HERE) ;
            t.initDimension1 (C_BDD::kEqual, elementEnTete) ;
            if (((sint32) elementEnTete) < terminalSymbolsCount) {
              p.aPremierDeProduction = t.projeterSurAxe1 () ;
            }else{
              p.aPremierDeProduction = (t & inFIRSTsets).projeterSurAxe2 () ;
              if (vocabulaireSeDerivantEnVide ((sint32) elementEnTete COMMA_HERE)) {
                p.aPremierDeProduction |= (t & inFOLLOWsets).projeterSurAxe2 () ;
              }
            }
          }
          if (inHTMLfile != NULL) {
            TC_UniqueArray <bool> array ;
            p.aPremierDeProduction.getArray (array) ;
            const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
            for (sint32 symbol=0 ; symbol < symbolsCount ; symbol++) {
              if (array (symbol COMMA_HERE)) {
                inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
                *inHTMLfile << ' ' ;
              }
            }
            inHTMLfile->outputRawData ("</code></td></tr>") ;
          }
        }
     //--- Verifier l'absence de conflit
        for (sint32 pr1=first ; pr1<derniere ; pr1++) {
          const sint32 numeroProductionJ = inPureBNFproductions.tableauIndirectionProduction (pr1 COMMA_HERE) ;
          for (sint32 k=pr1+1 ; k<=derniere ; k++) {
            const sint32 numeroProductionK = inPureBNFproductions.tableauIndirectionProduction (k COMMA_HERE) ;
            if (! (inPureBNFproductions(numeroProductionJ COMMA_HERE).aPremierDeProduction &
                  inPureBNFproductions(numeroProductionK COMMA_HERE).aPremierDeProduction).isFalse ()) {
              nombreDeConflits ++ ;
              if (inHTMLfile != NULL) {
                inHTMLfile->outputRawData ("<tr><td colspan=\"2\"><span class=\"error\">") ;
                *inHTMLfile << "***** Conflict between the productions "
                            << numeroProductionJ
                            << " and "
                            << numeroProductionK
                            << " *****" ;
                inHTMLfile->outputRawData ("</span></td></tr>\n") ;
              }
            }
          }
        }
        if (inHTMLfile != NULL) {
          *inHTMLfile << '\n' ;
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
                  << nombreDeConflits
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
  protected : sint16 aIndice ;

//--- Constructeur
  public : cEcrireNonTerminal (C_HTML_FileWrite & inHTMLfile,
                               const cVocabulary & inVocabulary,
                               const C_String & nomClasseLexique) ;

//--- Methode virtuelle appelee pour chaque valeur
  public : virtual void action (const bool tableauDesValeurs [],
                                const uint16 nombreVariables) ;
} ;
  
//---------------------------------------------------------------------------*

cEcrireNonTerminal::cEcrireNonTerminal (C_HTML_FileWrite & inHTMLfile,
                                        const cVocabulary & inVocabulary,
                                        const C_String & nomClasseLexique) :
mFichierBNF (inHTMLfile),
mVocabulary (inVocabulary) {
  aNomClasseLexique = nomClasseLexique ;
  aIndice = 0 ;
}

//---------------------------------------------------------------------------*

void cEcrireNonTerminal::action (const bool tableauDesValeurs [],
                                 const uint16 nombreVariables) {
  sint32 element = 0L ;
  for (sint32 i=nombreVariables - 1 ; i>=0 ; i--) {
    element = (element << 1) + tableauDesValeurs [i] ;
  }
  aIndice ++ ;
  if (aIndice == 2) {
    mFichierBNF << '\n' ;
    aIndice = 0 ;
  }
  mFichierBNF << aNomClasseLexique << "::" << aNomClasseLexique << "_1_" ;
  generateTerminalSymbolCppName (mVocabulary.getSymbol (element COMMA_HERE), mFichierBNF) ;
  mFichierBNF << ", " ;
}

//---------------------------------------------------------------------------*

static void
engendrerAiguillageNonTerminaux (const cVocabulary & inVocabulary,
                                 const sint32 inOriginalGrammarProductionLeftNonTerminalIndex,
                                 const sint16 nombreDeParametres,
                                 const cPureBNFproductionsList & inPureBNFproductions,
                                 AC_OutputStream & fichierCPP,
                                 const bool inReturnsEntityInstance,
                                 const C_String & inAltName) {
  const sint32 first = inPureBNFproductions.tableauIndicePremiereProduction (inOriginalGrammarProductionLeftNonTerminalIndex COMMA_HERE) ;
  if (first >= 0) { // Au moins une production
    const sint32 derniere = inPureBNFproductions.tableauIndiceDerniereProduction (inOriginalGrammarProductionLeftNonTerminalIndex COMMA_HERE) ;
    if (first == derniere) { // Une seule production, pas de conflit
      const sint32 indiceProduction = inPureBNFproductions.tableauIndirectionProduction (first COMMA_HERE) ;
      inPureBNFproductions (indiceProduction COMMA_HERE).engendrerAppelProduction (nombreDeParametres, inVocabulary, inAltName, inReturnsEntityInstance, fichierCPP) ;
    }else{ // Plusieurs inPureBNFproductions : engendrer l'aiguillage
      fichierCPP << "  switch (_inLexique.nextProductionIndex ()) {\n" ;
      for (sint32 j=first ; j<=derniere ; j++) {
        fichierCPP << "  case " << ((sint32)(j - first + 1)) << " :\n  " ;
        const sint32 indiceProduction = inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) ;
        inPureBNFproductions (indiceProduction COMMA_HERE).engendrerAppelProduction (nombreDeParametres, inVocabulary, inAltName, inReturnsEntityInstance, fichierCPP) ;
        fichierCPP << "    break ;\n" ;
      }
      fichierCPP << "  default :\n"
                 << "    break ;\n"
                 << "  }\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

static void
printProductions (const cPureBNFproductionsList & inPureBNFproductions,
                  const cVocabulary & inVocabulary,
                  const C_String & inLexiqueName,
                  const sint32 inNonterminalIndex,
                  sint16 & ioProductionIndex,
                  bool & ioFirst,
                  TC_UniqueArray <sint16> & ioProductionRulesIndex,
                  TC_UniqueArray <C_String> & ioProductionRulesTitle,
                  TC_UniqueArray <sint16> & ioFirstProductionRuleIndex,
                  AC_OutputStream & inCppFile) {
  ioFirstProductionRuleIndex.addObject ((sint16) ioProductionRulesIndex.count ()) ;
  const sint32 firstProduction = inPureBNFproductions.tableauIndicePremiereProduction (inNonterminalIndex COMMA_HERE) ;
  if (firstProduction >= 0) {
    const sint32 lastProduction = inPureBNFproductions.tableauIndiceDerniereProduction (inNonterminalIndex COMMA_HERE) ;
    for (sint32 j=firstProduction ; j<=lastProduction ; j++) {
      ioProductionRulesIndex.addObject (ioProductionIndex) ;
      cProduction & p = inPureBNFproductions (inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) COMMA_HERE) ;
      C_String title ;
      inVocabulary.printInFile (title, p.aNumeroNonTerminalGauche COMMA_HERE) ;
      title << ", in file '" 
            << p.mSourceFileName
            << ".ggs', line "
            << p.aLigneDefinition ;
      inCppFile << "// At index "
                <<  ioProductionIndex
                << " : "
                << title 
                << '\n' ;
      ioProductionRulesTitle.addObjectUsingSwap (title) ;
      const sint32 derivationLength = p.aDerivation.count () ;
      for (sint32 item=0 ; item<=derivationLength ; item++) {
        if (ioFirst) {
          inCppFile << "  " ;
          ioFirst = false ;
        }else{
          inCppFile << ", " ;
        }
        if (item < derivationLength) {
          const long v = p.aDerivation (item COMMA_HERE) ;
          if (v < inVocabulary.getTerminalSymbolsCount ()) {
            inCppFile << "TERMINAL ("
                    << inLexiqueName << "::" << inLexiqueName
                    << "_1_" ;
            generateTerminalSymbolCppName (inVocabulary.getSymbol (v COMMA_HERE), inCppFile) ;
            inCppFile << ") // $"
                      << inVocabulary.getSymbol (v COMMA_HERE) 
                      << "$\n" ;
          }else{
            inCppFile << "NONTERMINAL ("
                      << ((sint32) (v - inVocabulary.getTerminalSymbolsCount ()))
                      << ") // <"
                      << inVocabulary.getSymbol (v COMMA_HERE) 
                      << ">\n" ;        
          } 
        }else{
          inCppFile << "END_PRODUCTION\n" ;
        }
      }
      ioProductionIndex += (sint16) (derivationLength + 1) ;
    }
  }
}

//---------------------------------------------------------------------------*

static void
printDecisionTable (const cPureBNFproductionsList & inPureBNFproductions,
                    const cVocabulary & inVocabulary,
                    const C_String & inLexiqueName,
                    const sint32 inNonterminalIndex,
                    sint16 & ioDecisionTableIndex,
                    TC_UniqueArray <sint16> & ioProductionDecisionTableIndex,
                    AC_OutputStream & inCppFile) {
  ioProductionDecisionTableIndex.addObject (ioDecisionTableIndex) ;
  inCppFile << "// At index "
            <<  ioDecisionTableIndex
            << " : <"
            << inVocabulary.getSymbol (inNonterminalIndex + inVocabulary.getTerminalSymbolsCount () COMMA_HERE)
            << '>' ;
  const sint32 firstProduction = inPureBNFproductions.tableauIndicePremiereProduction (inNonterminalIndex COMMA_HERE) ;
  if (firstProduction >= 0) { // At least one production
    const sint32 lastProduction = inPureBNFproductions.tableauIndiceDerniereProduction (inNonterminalIndex COMMA_HERE) ;
    if (firstProduction == lastProduction) { // Only one production, no choice
      inCppFile << " only one production, no choice\n"
                   "  -1,\n" ;
      ioDecisionTableIndex ++ ;
    }else{ // Several productions : generate decision table
      inCppFile << '\n' ;
      for (sint32 j=firstProduction ; j<=lastProduction ; j++) {
        cProduction & p = inPureBNFproductions (inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) COMMA_HERE) ;
        TC_UniqueArray <bool> array ;
        p.aPremierDeProduction.getArray (array) ;
        const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
        for (sint32 symbol=0 ; symbol < symbolsCount ; symbol++) {
          if (array (symbol COMMA_HERE)) {
            inCppFile << inLexiqueName << "::" << inLexiqueName << "_1_" ;
            generateTerminalSymbolCppName (inVocabulary.getSymbol (symbol COMMA_HERE), inCppFile) ;
            inCppFile << ", " ;
          }
        }
        inCppFile << "-1, // Choice "
                  << ((sint32)(j - firstProduction + 1))
                  << '\n' ;
        ioDecisionTableIndex += (sint16) p.aPremierDeProduction.getValuesCount () ;
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

static void
generate_LL1_grammar_Cpp_file (C_Lexique & inLexique,
                               const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                               const uint32 inOriginalGrammarStartSymbol,
                               const C_String & inTargetFileName,
                               const C_String & inLexiqueName,
                               const GGS_stringset & inClassesNamesSet,
                               const cVocabulary & inVocabulary,
                               const cPureBNFproductionsList & inPureBNFproductions,
                               const GGS_M_startSymbolEntityAndMetamodel & inStartSymbolEntityAndMetamodelMap) {
//--- Generate header file inclusion --------------------------------------------------------------
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"" << inTargetFileName << ".h\"\n\n" ;

  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  static const char gGGSsourceFile [] = \"" << inLexique.sourceFileName ().lastPathComponent () << "\" ;\n"
                    "  #define SOURCE_FILE_AT_LINE(line) , gGGSsourceFile, line\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

//--- Generate LL(1) tables
  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;
  const sint32 productionsCount = inPureBNFproductions.length () ;
  TC_UniqueArray <sint16> productionRulesIndex (500 COMMA_HERE);
  TC_UniqueArray <sint16> firstProductionRuleIndex (500 COMMA_HERE) ;
  TC_UniqueArray <C_String> productionRulesTitle (500 COMMA_HERE) ;

  generatedZone3.writeCppTitleComment ("L L ( 1 )    P R O D U C T I O N    R U L E S") ;
  generatedZone3 << "#define TERMINAL(t)     ((t)+1)\n"
                    "#define NONTERMINAL(nt) ((-nt)-1)\n"
                    "#define END_PRODUCTION  (0)\n\n"
                    "static const sint16 gProductions [] = {\n" ;
  GGS_M_nonTerminalSymbolsForGrammar::element_type * nonTerminal = inNonterminalSymbolsMapForGrammar.firstObject () ;
  sint16 productionIndex = 0 ;
  bool first = true ;
  while (nonTerminal != NULL) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      nonTerminal->mIndex, productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      firstProductionRuleIndex, generatedZone3) ;
    nonTerminal = nonTerminal->nextObject () ;
  }
  generatedZone3 << "//---- Added productions from 'select' and 'repeat' instructions\n" ;  
  for (sint32 i=inVocabulary.getTerminalSymbolsCount () + inNonterminalSymbolsMapForGrammar.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      i - inVocabulary.getTerminalSymbolsCount (),
                      productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      firstProductionRuleIndex, generatedZone3) ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate productions names table
  generatedZone3.writeCppTitleComment ("P R O D U C T I O N    N A M E S") ;
  generatedZone3 << "static const char * gProductionNames ["
                 << productionRulesIndex.count ()
                 << "] = {\n" ;
  for (sint32 p=0 ; p<productionRulesIndex.count () ; p++) {
    generatedZone3 << " \"" << productionRulesTitle (p COMMA_HERE)
                   << "\""
                   << ((p == (productionsCount-1)) ? "" : ",")
                   << " // at index " << p << "\n" ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate productions indexes table
  generatedZone3.writeCppTitleComment ("L L ( 1 )    P R O D U C T I O N    I N D E X E S") ;
  generatedZone3 << "static const sint16 gProductionIndexes ["
                 << productionRulesIndex.count ()
                 << "] = {\n" ;
  for (sint32 p=0 ; p<productionRulesIndex.count () ; p++) {
    generatedZone3 << productionRulesIndex (p COMMA_HERE)
            << ((p == (productionsCount-1)) ? "" : ",")
            << " // index " << p
            << " : " << productionRulesTitle (p COMMA_HERE)
            << '\n' ;
  }
  generatedZone3 << "} ;\n\n" ;
  productionRulesTitle.clear () ;

//--- Generate decision tables indexes
  generatedZone3.writeCppTitleComment ("L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S") ;
  generatedZone3 << "static const sint16 gFirstProductionIndexes ["
          << ((sint32)(firstProductionRuleIndex.count () + 1))
          << "] = {\n" ;
  { for (sint32 i=0 ; i<firstProductionRuleIndex.count () ; i++) {
      generatedZone3 << firstProductionRuleIndex (i COMMA_HERE)
              << ", // at " << i <<  " : <"
              << inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)
              << ">\n" ;
    }
  } 
  generatedZone3 << "0} ;\n\n" ;
  
//--- Generate decision tables  
  TC_UniqueArray <sint16> productionDecisionIndex (500 COMMA_HERE) ;
  generatedZone3.writeCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S") ;
  generatedZone3 << "static const sint16 gDecision [] = {\n" ;
  sint16 decisionTableIndex = 0 ;
  nonTerminal = inNonterminalSymbolsMapForGrammar.firstObject () ;
  while (nonTerminal != NULL) {
    macroValidPointer (nonTerminal) ;
    printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                        nonTerminal->mIndex, decisionTableIndex,
                        productionDecisionIndex, generatedZone3) ;
    nonTerminal = nonTerminal->nextObject () ;
  }
  generatedZone3 << "//---- Added non terminal symbols from 'select' and 'repeat' instructions\n" ;  
  { for (sint32 i=inVocabulary.getTerminalSymbolsCount () + inNonterminalSymbolsMapForGrammar.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
      printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                          i - inVocabulary.getTerminalSymbolsCount (), decisionTableIndex,
                          productionDecisionIndex, generatedZone3) ;
    }
  }
  generatedZone3 << "0} ;\n\n" ;

//--- Generate decision tables indexes
  generatedZone3.writeCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S") ;
  generatedZone3 << "static const sint16 gDecisionIndexes ["
          << ((sint32)(productionDecisionIndex.count () + 1))
          << "] = {\n" ;
  nonTerminal = inNonterminalSymbolsMapForGrammar.firstObject () ;
  { for (sint32 i=0 ; i<productionDecisionIndex.count () ; i++) {
      generatedZone3 << productionDecisionIndex (i COMMA_HERE)
              << ", // at " << i << " : <"
              << inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)
              << ">\n" ;
    }
  }
  generatedZone3 << "0} ;\n\n" ;
  
//--- Generate non terminal implementation ----------------------------
  nonTerminal = inNonterminalSymbolsMapForGrammar.firstObject () ;
  while (nonTerminal != NULL) {
    macroValidPointer (nonTerminal) ;
    generatedZone3.writeCppTitleComment (C_String ("'") + nonTerminal->mKey + "' non terminal implementation") ;
    const bool existeProduction = inPureBNFproductions.tableauIndicePremiereProduction (nonTerminal->mIndex COMMA_HERE) >= 0 ;
    GGS_M_nonterminalSymbolAltsForGrammar::element_type * currentAltForNonTerminal = nonTerminal->mInfo.mNonterminalSymbolParametersMap.firstObject () ;
    while (currentAltForNonTerminal != NULL) {
      macroValidPointer (currentAltForNonTerminal) ;
      macroValidPointer (currentAltForNonTerminal) ;
      if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
        generatedZone3 << "GGM_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                       << " * " ;      
      }else{
        generatedZone3 << "void " ;
      }
      generatedZone3 << inTargetFileName
                     << "::\n"
                     << "nt_" << nonTerminal->mKey << '_' << currentAltForNonTerminal->mKey
                     << " (" << inLexiqueName << " & " << (existeProduction ? "_inLexique" : "") ;
      GGS_L_signature::element_type * parametre = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
      sint16 numeroParametre = 1 ;
      while (parametre != NULL) {
        macroValidPointer (parametre) ;
        generatedZone3 << ",\n                                " ;
        generateFormalArgumentFromTypeName (parametre->mGalgasTypeName, parametre->mFormalArgumentPassingMode, generatedZone3) ;
        if (existeProduction) {
          generatedZone3 << " parameter_" << numeroParametre ;
        }
        parametre = parametre->nextObject () ;
        numeroParametre ++ ;
      }
      generatedZone3 << ") {\n" ; 
      if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
        generatedZone3 << "  GGM_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                       << " * _outReturnedModelInstance = NULL ;\n" ;      
      }
      engendrerAiguillageNonTerminaux (inVocabulary, nonTerminal->mIndex, numeroParametre,
                                       inPureBNFproductions, generatedZone3,
                                       currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0,
                                       currentAltForNonTerminal->mKey) ;
      if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
        generatedZone3 << "  return _outReturnedModelInstance ;\n" ;      
      }
      generatedZone3 << "}\n\n" ;
      currentAltForNonTerminal = currentAltForNonTerminal->nextObject () ;
    }
  //--- Generate 'startParsing' method ?
    if (nonTerminal->mIndex == (sint32) inOriginalGrammarStartSymbol) {
      generatedZone3.writeCppTitleComment ("Grammar start symbol implementation") ;
      currentAltForNonTerminal = nonTerminal->mInfo.mNonterminalSymbolParametersMap.firstObject () ;
      while (currentAltForNonTerminal != NULL) {
        macroValidPointer (currentAltForNonTerminal) ;
        generatedZone3 << "\n" ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "GGM_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                         << " * " ;      
        }else{
          generatedZone3 << "void " ;
        }
        generatedZone3 << inTargetFileName
                       << "::startParsing_"  << currentAltForNonTerminal->mKey
                       << " (" << inLexiqueName << " & _inLexique" ;
        GGS_L_signature::element_type * parametre = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
        sint16 numeroParametre = 1 ;
        while (parametre != NULL) {
          macroValidPointer (parametre) ;
          generatedZone3 << ",\n                                " ;
          generateFormalArgumentFromTypeName (parametre->mGalgasTypeName, parametre->mFormalArgumentPassingMode, generatedZone3) ;
          generatedZone3 << " parameter_" << numeroParametre ;
          parametre = parametre->nextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << ") {\n" ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "  GGM_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                         << " * _outReturnedModelInstance = NULL ;\n" ;      
        }
        generateClassRegistering (generatedZone3, inClassesNamesSet) ;
        generatedZone3 << "  const bool ok = _inLexique"
                   ".performTopDownParsing (gProductions, gProductionNames, gProductionIndexes"
                   ",\n                     gFirstProductionIndexes, gDecision, gDecisionIndexes, "
                << productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE)
                << ") ;\n"
                   "  if (ok && ! _inLexique.mParseOnlyFlag) {\n"
                   "    " ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "_outReturnedModelInstance = " ;      
        }
        generatedZone3 << "nt_" << nonTerminal->mKey << '_' << currentAltForNonTerminal->mKey
                       << " (_inLexique" ;
        parametre = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
        numeroParametre = 1 ;
        while (parametre != NULL) {
          macroValidPointer (parametre) ;
          generatedZone3 << ", parameter_" << numeroParametre ;
          parametre = parametre->nextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << ") ;\n" ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          GGS_lstring entityName ;
          GGS_lstring metamodelName ;
          inStartSymbolEntityAndMetamodelMap.method_searchKey (inLexique,
                                                                currentAltForNonTerminal->mKey,
                                                                entityName,
                                                                metamodelName
                                                                COMMA_HERE) ;
        }
        generatedZone3 << "  }\n" ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "  return _outReturnedModelInstance ;\n" ;      
        }
        generatedZone3 << "}\n\n" ;
        currentAltForNonTerminal = currentAltForNonTerminal->nextObject () ;
      }
    }
    nonTerminal = nonTerminal->nextObject () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions
  for (sint32 nt=inVocabulary.getTerminalSymbolsCount () ; nt<inVocabulary.getAllSymbolsCount () ; nt++) {
    if (inVocabulary.needToGenerateChoice (nt COMMA_HERE)) {
      generatedZone3.writeCppTitleComment (C_String ("'") + inVocabulary.getSymbol (nt COMMA_HERE) + "' added non terminal implementation") ;
      generatedZone3 << "\nsint16 " << inTargetFileName
              << "::" << inVocabulary.getSymbol (nt COMMA_HERE)
              << " (" << inLexiqueName << " & _inLexique) {\n"
                 "  return _inLexique.nextProductionIndex () ;\n"
                 "}\n\n" ;
    }
  }
//--- Fin du fichier ---------------------------------
  generatedZone3.writeCppHyphenLineComment () ;

//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  inLexique.generateFile ("//",
                          inTargetFileName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

void
LL1_computations (C_Lexique & inLexique,
                  const cPureBNFproductionsList & inPureBNFproductions,
                  C_HTML_FileWrite * inHTMLfile,
                  const cVocabulary & inVocabulary,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                  const C_BDD_Set2 & inFIRSTsets,
                  const C_BDD_Set2 & inFOLLOWsets,
                  const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForOriginalGrammar,
                  const uint32 inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  const C_String & inLexiqueName,
                  const GGS_stringset & inClassesNamesSet,
                  bool & outOk,
                  const GGS_M_startSymbolEntityAndMetamodel & inStartSymbolEntityAndMetamodelMap,
                  const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Checking LL(1) condition... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->writeCppTitleComment ("Checking LL(1) condition", "title") ;
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
    generate_LL1_grammar_Cpp_file (inLexique,
                                   inNonterminalSymbolsMapForOriginalGrammar,
                                   inOriginalGrammarStartSymbol,
                                   inTargetFileName,
                                   inLexiqueName,
                                   inClassesNamesSet,
                                   inVocabulary,
                                   inPureBNFproductions,
                                   inStartSymbolEntityAndMetamodelMap) ;
  }
}

//---------------------------------------------------------------------------*
