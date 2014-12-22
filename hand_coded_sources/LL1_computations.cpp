//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Routines for checking LL(1) condition                                                                              *
//                                                                                                                     *
//  Copyright (C) 1994, ..., 2014 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                                                              *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it                                            *
//  under the terms of the GNU General Public License as published by the                                              *
//  Free Software Foundation.                                                                                          *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "strings/C_HTMLString.h"
#include "files/C_TextFileWrite.h"
#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_Compiler.h"
#include "bdd/C_Relation.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "LL1_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "grammarCompilation.h"

//---------------------------------------------------------------------------------------------------------------------*

class cAffichagePremiersProduction : public C_bdd_value_traversing {
//--- Attributs
  protected : C_HTMLString & mFichierBNF ;
  protected : const cVocabulary & mVocabulary ;

//--- Constructeur
  public : cAffichagePremiersProduction (C_HTMLString & inHTMLfile,
                                         const cVocabulary & inVocabulary) ;

//--- Methode virtelle appelee pour chaque valeur
  public : virtual void action (const bool tableauDesValeurs [],
                                const uint32_t nombreVariables) ;
} ;
  
//---------------------------------------------------------------------------------------------------------------------*

cAffichagePremiersProduction::cAffichagePremiersProduction (C_HTMLString & inHTMLfile,
                                                            const cVocabulary & inVocabulary) :
mFichierBNF (inHTMLfile),
mVocabulary (inVocabulary) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cAffichagePremiersProduction::action (const bool tableauDesValeurs [],
                                           const uint32_t nombreVariables) {
  int32_t element = 0 ;
  for (int32_t i=((int32_t) nombreVariables) - 1 ; i>=0 ; i--) {
    element = (element << 1) + tableauDesValeurs [i] ;
  }
  mFichierBNF << " " ;
  mVocabulary.printInFile (mFichierBNF, element COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static bool
check_LL1_condition (const cPureBNFproductionsList & inPureBNFproductions,
                     const C_Relation & inFIRSTsets,
                     const C_Relation & inFOLLOWsets,
                     const TC_UniqueArray <bool> & vocabulaireSeDerivantEnVide,
                     const cVocabulary & inVocabulary,
                     C_HTMLString & ioHTMLFileContents,
                     const bool inVerboseOptionOn) {
//--- Pour chaque non-terminal presentant plusieurs inPureBNFproductions, calculer le 'premiers' de chacune d'elle,
// et verifier l'absence de conflit.
  if (ioHTMLFileContents.registeringIsEnabled ()) {
    ioHTMLFileContents.outputRawData ("<p>") ;
    ioHTMLFileContents << "The FIRST of a production is :\n"
                   " if the production is empty, the FOLLOW of the left nonterminal symbol ;\n"
                   " if the production is not empty (e.g. g -> x) :\n"
                   "         -- the FIRST of x, and\n"
                   "         -- if x est a nonterminal symbol deriving in the empty string, union the FOLLOW of x.\n\n"
                   "Only are listed the nonterminal having more than one production (see step 2\n"
                   "for inPureBNFproductions numbering) :\n\n" ;
    ioHTMLFileContents.outputRawData ("</p>") ;
  }
  
  C_Relation t (inFOLLOWsets.configuration(), false) ;
  
  int32_t nombreDeConflits = 0 ;
  const int32_t nombreNonTerminaux = inVocabulary.getNonTerminalSymbolsCount () ;
  const int32_t terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  if (ioHTMLFileContents.registeringIsEnabled ()) {
    ioHTMLFileContents.outputRawData ("<table class=\"result\">") ;
  }
  for (int32_t i=0 ; i<nombreNonTerminaux ; i++) {
    const int32_t first = inPureBNFproductions.tableauIndicePremiereProduction (i COMMA_HERE) ;
      if (first >= 0) { // first<0 means the non terminal symbol is useless
      const int32_t derniere = inPureBNFproductions.tableauIndiceDerniereProduction (i COMMA_HERE) ;
      if (derniere > first) { // Plusieurs inPureBNFproductions d'un meme non-terminal
      //--- Calculer et afficher les premiers
        if (ioHTMLFileContents.registeringIsEnabled ()) {
          ioHTMLFileContents.outputRawData ("<tr><td class=\"result_title\" colspan=\"2\"><code>") ;
          inVocabulary.printInFile (ioHTMLFileContents, i + terminalSymbolsCount COMMA_HERE) ;
          ioHTMLFileContents.outputRawData ("</code></td></tr>") ;
        }
        for (int32_t j=first ; j<=derniere ; j++) {
          const int32_t numeroProduction = inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) ;
          if (ioHTMLFileContents.registeringIsEnabled ()) {
            ioHTMLFileContents.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><a href=\"#pure_bnf_") ;
            ioHTMLFileContents << cStringWithSigned (numeroProduction) ;
            ioHTMLFileContents.outputRawData ("\">") ;
            ioHTMLFileContents << cStringWithSigned (numeroProduction) ;
            ioHTMLFileContents.outputRawData ("</a></td><td><code>") ;
          }
          cProduction & p = inPureBNFproductions (numeroProduction COMMA_HERE) ;
          if (p.derivationLength () == 0) {
            C_Relation temp (inFOLLOWsets.configuration(), 0, C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex () COMMA_HERE) ;
            p.mDerivationFirst = temp.andOp (inFOLLOWsets COMMA_HERE).transposedRelation (HERE).relationByDeletingLastVariable (HERE) ;
          }else{
            const uint32_t elementEnTete = (uint32_t) p.derivationAtIndex (0 COMMA_HERE) ;
            C_Relation t (inFOLLOWsets.configuration(), 0, C_BDD::kEqual, elementEnTete COMMA_HERE) ;
            if (((int32_t) elementEnTete) < terminalSymbolsCount) {
              p.mDerivationFirst = t.relationByDeletingLastVariable (HERE) ;
            }else{
              p.mDerivationFirst = t.andOp (inFIRSTsets COMMA_HERE).transposedRelation (HERE).relationByDeletingLastVariable (HERE) ;
              if (vocabulaireSeDerivantEnVide ((int32_t) elementEnTete COMMA_HERE)) {
                p.mDerivationFirst.orWith (t.andOp (inFOLLOWsets COMMA_HERE).transposedRelation (HERE).relationByDeletingLastVariable (HERE) COMMA_HERE) ;
              }
            }
          }
          if (ioHTMLFileContents.registeringIsEnabled ()) {
            TC_UniqueArray <uint64_t> array ;
            p.derivationFirst ().getValueArray (array) ;
            for (int32_t i=0 ; i < array.count () ; i++) {
              const uint64_t symbol = array (i COMMA_HERE) ;
              inVocabulary.printInFile (ioHTMLFileContents, (int32_t) symbol COMMA_HERE) ;
              ioHTMLFileContents << " " ;
            }
            ioHTMLFileContents.outputRawData ("</code></td></tr>") ;
          }
        }
     //--- Verifier l'absence de conflit
        for (int32_t pr1=first ; pr1<derniere ; pr1++) {
          const int32_t numeroProductionJ = inPureBNFproductions.tableauIndirectionProduction (pr1 COMMA_HERE) ;
          for (int32_t k=pr1+1 ; k<=derniere ; k++) {
            const int32_t numeroProductionK = inPureBNFproductions.tableauIndirectionProduction (k COMMA_HERE) ;
            const C_Relation rJ = inPureBNFproductions (numeroProductionJ COMMA_HERE).derivationFirst () ;
            const C_Relation rK = inPureBNFproductions (numeroProductionK COMMA_HERE).derivationFirst () ;
            const bool ok = rJ.andOp (rK COMMA_HERE).isEmpty () ;
            if (! ok) {
              nombreDeConflits ++ ;
              if (ioHTMLFileContents.registeringIsEnabled ()) {
                ioHTMLFileContents.outputRawData ("<tr><td colspan=\"2\"><span class=\"error\">") ;
                ioHTMLFileContents << "***** Conflict between the productions "
                            << cStringWithSigned (numeroProductionJ)
                            << " and "
                            << cStringWithSigned (numeroProductionK)
                            << " *****" ;
                ioHTMLFileContents.outputRawData ("</span></td></tr>\n") ;
              }
            }
          }
        }
        ioHTMLFileContents << "\n" ;
      }
    }
  }
  ioHTMLFileContents.outputRawData ("</table><p>") ;
//--- Bilan de l'analyse
  if (inVerboseOptionOn) {
    if (nombreDeConflits == 0) {
      co << "ok.\n" ;
    }else{
      co << "error.\n" ;
    }
    co.flush () ;
  }
  if (ioHTMLFileContents.registeringIsEnabled ()) {
    if (nombreDeConflits == 0) {
      ioHTMLFileContents.outputRawData ("<span class=\"success\">") ;
      ioHTMLFileContents << "No conflict : the grammar is LL (1).\n" ;
      ioHTMLFileContents.outputRawData ("</span>") ;
    }else{
      ioHTMLFileContents.outputRawData ("<span class=\"error\">") ;
      ioHTMLFileContents << "The grammar is not  LL (1) : "
                  << cStringWithSigned (nombreDeConflits)
                  << " conflict"
                  << ((nombreDeConflits > 1) ? "s" : "")
                  << "." ;
      ioHTMLFileContents.outputRawData ("</span>") ;
    }
    ioHTMLFileContents.outputRawData ("</p>") ;
  }
  return nombreDeConflits == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

class cEcrireNonTerminal : public C_bdd_value_traversing {
//--- Attributs
  protected : C_HTMLString & mFichierBNF ;
  protected : const cVocabulary & mVocabulary ;
  protected : C_String aNomClasseLexique ;
  protected : int16_t aIndice ;

//--- Constructeur
  public : cEcrireNonTerminal (C_HTMLString & inHTMLfile,
                               const cVocabulary & inVocabulary,
                               const C_String & nomClasseLexique) ;

//--- Methode virtuelle appelee pour chaque valeur
  public : virtual void action (const bool tableauDesValeurs [],
                                const uint32_t nombreVariables) ;
} ;
  
//---------------------------------------------------------------------------------------------------------------------*

cEcrireNonTerminal::
cEcrireNonTerminal (C_HTMLString & inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const C_String & nomClasseLexique) :
mFichierBNF (inHTMLfile),
mVocabulary (inVocabulary),
aNomClasseLexique (nomClasseLexique),
aIndice (0) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cEcrireNonTerminal::action (const bool tableauDesValeurs [],
                                 const uint32_t nombreVariables) {
  int32_t element = 0 ;
  for (int32_t i=((int32_t) nombreVariables) - 1 ; i>=0 ; i--) {
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

//---------------------------------------------------------------------------------------------------------------------*

static void
engendrerAiguillageNonTerminaux (const cVocabulary & inVocabulary,
                                 const int32_t inOriginalGrammarProductionLeftNonTerminalIndex,
                                 const int16_t nombreDeParametres,
                                 const cPureBNFproductionsList & inPureBNFproductions,
                                 AC_OutputStream & fichierCPP,
                                 const C_String & inAltName,
                                 const C_String & inSyntaxDirectedTranslationVarName) {
  const int32_t first = inPureBNFproductions.tableauIndicePremiereProduction (inOriginalGrammarProductionLeftNonTerminalIndex COMMA_HERE) ;
  if (first >= 0) { // Au moins une production
    const int32_t derniere = inPureBNFproductions.tableauIndiceDerniereProduction (inOriginalGrammarProductionLeftNonTerminalIndex COMMA_HERE) ;
    if (first == derniere) { // Une seule production, pas de conflit
      const int32_t indiceProduction = inPureBNFproductions.tableauIndirectionProduction (first COMMA_HERE) ;
      inPureBNFproductions (indiceProduction COMMA_HERE).engendrerAppelProduction (nombreDeParametres, inVocabulary, inAltName, fichierCPP, inSyntaxDirectedTranslationVarName) ;
    }else{ // Plusieurs inPureBNFproductions : engendrer l'aiguillage
      fichierCPP << "  switch (inLexique->nextProductionIndex ()) {\n" ;
      for (int32_t j=first ; j<=derniere ; j++) {
        fichierCPP << "  case " << cStringWithSigned ((int32_t)(j - first + 1)) << " :\n  " ;
        const int32_t indiceProduction = inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) ;
        inPureBNFproductions (indiceProduction COMMA_HERE).engendrerAppelProduction (nombreDeParametres, inVocabulary, inAltName, fichierCPP, inSyntaxDirectedTranslationVarName) ;
        fichierCPP << "    break ;\n" ;
      }
      fichierCPP << "  default :\n"
                 << "    break ;\n"
                 << "  }\n" ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

class C_ProductionNameDescriptor {
  public : C_String mName ;
  public : C_String mFileName ;
  public : uint32_t mLineNumber ;
  
  public : C_ProductionNameDescriptor (void) ;
  
  public : C_ProductionNameDescriptor (const C_String & inName,
                                       const C_String & inFileName,
                                       const uint32_t inLineNumber) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

C_ProductionNameDescriptor::C_ProductionNameDescriptor (void) :
mName (),
mFileName (),
mLineNumber (0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

C_ProductionNameDescriptor::C_ProductionNameDescriptor (const C_String & inName,
                                                        const C_String & inFileName,
                                                        const uint32_t inLineNumber) :
mName (inName),
mFileName (inFileName),
mLineNumber (inLineNumber) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

static void
printProductions (const cPureBNFproductionsList & inPureBNFproductions,
                  const cVocabulary & inVocabulary,
                  const C_String & inLexiqueName,
                  const int32_t inNonterminalIndex,
                  int16_t & ioProductionIndex,
                  bool & ioFirst,
                  TC_UniqueArray <int16_t> & ioProductionRulesIndex,
                  TC_UniqueArray <C_String> & ioProductionRulesTitle,
                  TC_UniqueArray <C_ProductionNameDescriptor> & ioProductionRuleDescription,
                  TC_UniqueArray <int16_t> & ioFirstProductionRuleIndex,
                  AC_OutputStream & inCppFile) {
  ioFirstProductionRuleIndex.addObject ((int16_t) ioProductionRulesIndex.count ()) ;
  const int32_t firstProduction = inPureBNFproductions.tableauIndicePremiereProduction (inNonterminalIndex COMMA_HERE) ;
  if (firstProduction >= 0) {
    const int32_t lastProduction = inPureBNFproductions.tableauIndiceDerniereProduction (inNonterminalIndex COMMA_HERE) ;
    for (int32_t j=firstProduction ; j<=lastProduction ; j++) {
      ioProductionRulesIndex.addObject (ioProductionIndex) ;
      cProduction & p = inPureBNFproductions (inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) COMMA_HERE) ;
      C_String title ;
      inVocabulary.printInFile (title, p.leftNonTerminalIndex () COMMA_HERE) ;
      const C_ProductionNameDescriptor description (title, p.sourceFileName (), (uint32_t) ioProductionIndex) ;
      ioProductionRuleDescription.addObject (description) ;
      title << ", in file '" 
            << p.sourceFileName ()
            << ".ggs', line "
            << cStringWithSigned (p.lineDefinition ()) ;
      inCppFile << "// At index "
                << cStringWithSigned (ioProductionIndex)
                << " : "
                << title 
                << "\n" ;
      ioProductionRulesTitle.addObjectUsingSwap (title) ;
      const int32_t derivationLength = p.derivationLength () ;
      for (int32_t item=0 ; item<=derivationLength ; item++) {
        if (ioFirst) {
          inCppFile << "  " ;
          ioFirst = false ;
        }else{
          inCppFile << ", " ;
        }
        if (item < derivationLength) {
          const int32_t v = p.derivationAtIndex (item COMMA_HERE) ;
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
                      << cStringWithSigned ((int32_t) (v - inVocabulary.getTerminalSymbolsCount ()))
                      << ") // <"
                      << inVocabulary.getSymbol (v COMMA_HERE) 
                      << ">\n" ;        
          } 
        }else{
          inCppFile << "END_PRODUCTION\n" ;
        }
      }
      ioProductionIndex = (int16_t) (ioProductionIndex + derivationLength + 1) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void
printDecisionTable (const cPureBNFproductionsList & inPureBNFproductions,
                    const cVocabulary & inVocabulary,
                    const C_String & inLexiqueName,
                    const int32_t inNonterminalIndex,
                    int16_t & ioDecisionTableIndex,
                    TC_UniqueArray <int16_t> & ioProductionDecisionTableIndex,
                    AC_OutputStream & inCppFile) {
  ioProductionDecisionTableIndex.addObject (ioDecisionTableIndex) ;
  inCppFile << "// At index "
            << cStringWithSigned (ioDecisionTableIndex)
            << " : <"
            << inVocabulary.getSymbol (inNonterminalIndex + inVocabulary.getTerminalSymbolsCount () COMMA_HERE)
            << ">" ;
  const int32_t firstProduction = inPureBNFproductions.tableauIndicePremiereProduction (inNonterminalIndex COMMA_HERE) ;
  if (firstProduction >= 0) { // At least one production
    const int32_t lastProduction = inPureBNFproductions.tableauIndiceDerniereProduction (inNonterminalIndex COMMA_HERE) ;
    if (firstProduction == lastProduction) { // Only one production, no choice
      inCppFile << " only one production, no choice\n"
                   "  -1,\n" ;
      ioDecisionTableIndex ++ ;
    }else{ // Several productions : generate decision table
      inCppFile << "\n" ;
      for (int32_t j=firstProduction ; j<=lastProduction ; j++) {
        cProduction & p = inPureBNFproductions (inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) COMMA_HERE) ;
        TC_UniqueArray <uint64_t> array ;
        p.derivationFirst ().getValueArray (array) ;
        for (int32_t i=0 ; i < array.count () ; i++) {
          const uint64_t symbol = array (i COMMA_HERE) ;
          inCppFile << "C_Lexique_" << inLexiqueName.identifierRepresentation ()
                    << "::kToken_"
                    << inVocabulary.getSymbol ((int32_t) symbol COMMA_HERE).identifierRepresentation ()
                    << ", " ;
        }
        inCppFile << "-1, // Choice "
                  << cStringWithSigned ((int32_t)(j - firstProduction + 1))
                  << "\n" ;
        ioDecisionTableIndex = (int16_t) (ioDecisionTableIndex + (int16_t) p.derivationFirst ().value64Count ()) ;
        ioDecisionTableIndex ++ ;
      }
      inCppFile << "  -1,\n" ;
      ioDecisionTableIndex ++ ;
    }
   }else{
    inCppFile << " no production\n" ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void
generate_LL1_grammar_Cpp_file (const TC_UniqueArray <C_String> & inImplementationFileHeaderList,
                               const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                               const uint32_t inOriginalGrammarStartSymbol,
                               const C_String & inTargetFileName,
                               C_String & ioCppFileContents,
                               const C_String & inLexiqueName,
                               const cVocabulary & inVocabulary,
                               const cPureBNFproductionsList & inPureBNFproductions,
                               const bool inHasIndexing,
                               const C_String & inSyntaxDirectedTranslationVarName) {
//--- Generate header file inclusion --------------------------------------------------------------
  ioCppFileContents.appendCppHyphenLineComment () ;
  ioCppFileContents << "#include \"utilities/MF_MemoryControl.h\"\n" ;
  ioCppFileContents << "#include \"galgas2/C_galgas_CLI_Options.h\"\n\n" ;
  ioCppFileContents << "#include \"files/C_FileManager.h\"\n\n" ;

  ioCppFileContents.appendCppHyphenLineComment () ;
  for (int32_t i=0 ; i<inImplementationFileHeaderList.count () ; i++) {
    ioCppFileContents << "#include \"" << inImplementationFileHeaderList (i COMMA_HERE) << ".h\"\n" ;
  }
  ioCppFileContents << "\n" ;

//--- Generate LL(1) tables
  const int32_t productionsCount = inPureBNFproductions.length () ;
  TC_UniqueArray <int16_t> productionRulesIndex (500 COMMA_HERE);
  TC_UniqueArray <int16_t> firstProductionRuleIndex (500 COMMA_HERE) ;
  TC_UniqueArray <C_ProductionNameDescriptor> productionRuleDescription ;
  TC_UniqueArray <C_String> productionRulesTitle (500 COMMA_HERE) ;

  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    P R O D U C T I O N    R U L E S") ;
  ioCppFileContents << "#define TERMINAL(t)     ((t)+1)\n"
                    "#define NONTERMINAL(nt) ((-nt)-1)\n"
                    "#define END_PRODUCTION  (0)\n\n"
                    "static const int16_t gProductions_" << inTargetFileName << " [] = {\n" ;
  cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis, kEnumeration_up) ;
  int16_t productionIndex = 0 ;
  bool first = true ;
  while (nonTerminal.hasCurrentObject ()) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      productionRuleDescription,
                      firstProductionRuleIndex, ioCppFileContents) ;
    nonTerminal.gotoNextObject () ;
  }
  ioCppFileContents << "//---- Added productions from 'select' and 'repeat' instructions\n" ;
  for (int32_t i=inVocabulary.getTerminalSymbolsCount () + (int32_t) inNonTerminalSymbolSortedListForGrammarAnalysis.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      i - inVocabulary.getTerminalSymbolsCount (),
                      productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      productionRuleDescription,
                      firstProductionRuleIndex, ioCppFileContents) ;
  }
  ioCppFileContents << "} ;\n\n" ;

//--- Generate productions names table
  ioCppFileContents.appendCppTitleComment ("P R O D U C T I O N    N A M E S") ;
  ioCppFileContents << "static const cProductionNameDescriptor gProductionNames_" << inTargetFileName << " ["
                 << cStringWithSigned (productionRuleDescription.count ())
                 << "] = {\n" ;
  for (int32_t p=0 ; p<productionRuleDescription.count () ; p++) {
    ioCppFileContents << " {\"" << productionRuleDescription (p COMMA_HERE).mName
                   << "\", \""
                   << productionRuleDescription (p COMMA_HERE).mFileName
                   << "\", "
                   << cStringWithUnsigned (productionRuleDescription (p COMMA_HERE).mLineNumber)
                   << "}"
                   << ((p == (productionsCount-1)) ? "" : ",")
                   << " // at index " << cStringWithSigned (p) << "\n" ;
  }
  ioCppFileContents << "} ;\n\n" ;

//--- Generate productions indexes table
  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    P R O D U C T I O N    I N D E X E S") ;
  ioCppFileContents << "static const int16_t gProductionIndexes_" << inTargetFileName << " ["
                 << cStringWithSigned (productionRulesIndex.count ())
                 << "] = {\n" ;
  for (int32_t p=0 ; p<productionRulesIndex.count () ; p++) {
    ioCppFileContents << cStringWithSigned (productionRulesIndex (p COMMA_HERE))
            << ((p == (productionsCount-1)) ? "" : ",")
            << " // index " << cStringWithSigned (p)
            << " : " << productionRulesTitle (p COMMA_HERE)
            << "\n" ;
  }
  ioCppFileContents << "} ;\n\n" ;
  productionRulesTitle.setCountToZero () ;

//--- Generate decision tables indexes
  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S") ;
  ioCppFileContents << "static const int16_t gFirstProductionIndexes_" << inTargetFileName << " ["
          << cStringWithSigned ((int32_t)(firstProductionRuleIndex.count () + 1))
          << "] = {\n" ;
  { for (int32_t i=0 ; i<firstProductionRuleIndex.count () ; i++) {
      ioCppFileContents << cStringWithSigned (firstProductionRuleIndex (i COMMA_HERE))
              << ", // at " << cStringWithSigned (i) <<  " : <"
              << inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)
              << ">\n" ;
    }
  } 
  ioCppFileContents << "0} ;\n\n" ;
  
//--- Generate decision tables  
  TC_UniqueArray <int16_t> productionDecisionIndex (500 COMMA_HERE) ;
  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S") ;
  ioCppFileContents << "static const int16_t gDecision_" << inTargetFileName << " [] = {\n" ;
  int16_t decisionTableIndex = 0 ;
  nonTerminal.rewind () ;
  while (nonTerminal.hasCurrentObject ()) {
    printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                        (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), decisionTableIndex,
                        productionDecisionIndex, ioCppFileContents) ;
    nonTerminal.gotoNextObject () ;
  }
  ioCppFileContents << "//---- Added non terminal symbols from 'select' and 'repeat' instructions\n" ;
  { for (int32_t i=inVocabulary.getTerminalSymbolsCount () + (int32_t) inNonTerminalSymbolSortedListForGrammarAnalysis.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
      printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                          i - inVocabulary.getTerminalSymbolsCount (), decisionTableIndex,
                          productionDecisionIndex, ioCppFileContents) ;
    }
  }
  ioCppFileContents << "0} ;\n\n" ;

//--- Generate decision tables indexes
  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S") ;
  ioCppFileContents << "static const int16_t gDecisionIndexes_" << inTargetFileName << " ["
          << cStringWithSigned ((int32_t)(productionDecisionIndex.count () + 1))
          << "] = {\n" ;
  for (int32_t i=0 ; i<productionDecisionIndex.count () ; i++) {
  ioCppFileContents << cStringWithSigned (productionDecisionIndex (i COMMA_HERE))
                << ", // at " << cStringWithSigned (i) << " : <"
                << inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)
                << ">\n" ;
  }
  ioCppFileContents << "0} ;\n\n" ;
  
//--- Generate non terminal implementation ----------------------------
  nonTerminal.rewind () ;
  while (nonTerminal.hasCurrentObject ()) {
    ioCppFileContents.appendCppTitleComment (C_String ("'") + nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue () + "' non terminal implementation") ;
    const bool existeProduction = inPureBNFproductions.tableauIndicePremiereProduction ((int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue () COMMA_HERE) >= 0 ;
  //--- Parse label
      ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                     << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                     << "_parse (" ;
      if (inSyntaxDirectedTranslationVarName.length () > 0) {
        ioCppFileContents << "C_String & " << inSyntaxDirectedTranslationVarName << ", " ;
      }
      ioCppFileContents << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " * " << (existeProduction ? "inLexique" : "")
                     << ") {\n" ;
     engendrerAiguillageNonTerminaux (inVocabulary, (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), 0,
                                      inPureBNFproductions, ioCppFileContents,
                                      "parse",
                                      inSyntaxDirectedTranslationVarName) ;
    ioCppFileContents << "}\n\n" ;
  //--- Indexing ? 
    if (inHasIndexing) {
      ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                   << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                   << "_indexing (C_Lexique_" << inLexiqueName.identifierRepresentation () << " * " << (existeProduction ? "inLexique" : "")
                   << ") {\n" ; 
      engendrerAiguillageNonTerminaux (inVocabulary, (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), 0,
                                       inPureBNFproductions, ioCppFileContents,
                                       "indexing",
                                       "") ;
      ioCppFileContents << "}\n\n" ;
    }
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal (nonTerminal.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (currentAltForNonTerminal.hasCurrentObject ()) {
      ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                     << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                     << "_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                     << " (" ;
      cEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal.current_mFormalParametersList (HERE), kEnumeration_up) ;
      int16_t numeroParametre = 1 ;
      while (parametre.hasCurrentObject ()) {
        switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
          ioCppFileContents << "const " ;
          break ;
        default : break ;
        }
        ioCppFileContents << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
        switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
          ioCppFileContents << " " ;
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
          ioCppFileContents << " " ;
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
          ioCppFileContents << " & " ;
          break ;
        default : break ;
        }
        if (existeProduction) {
          ioCppFileContents << "parameter_" << cStringWithSigned (numeroParametre) ;
        }
        parametre.gotoNextObject () ;
        numeroParametre ++ ;
        ioCppFileContents << ",\n                                " ;
      }
      if (inSyntaxDirectedTranslationVarName.length () > 0) {
        ioCppFileContents << "C_String & " << inSyntaxDirectedTranslationVarName << ",\n                                " ;
      }
      ioCppFileContents << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " * " << (existeProduction ? "inLexique" : "")
                     << ") {\n" ; 
      engendrerAiguillageNonTerminaux (inVocabulary, (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), numeroParametre,
                                       inPureBNFproductions, ioCppFileContents,
                                       currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue (),
                                       inSyntaxDirectedTranslationVarName) ;
      ioCppFileContents << "}\n\n" ;
      currentAltForNonTerminal.gotoNextObject () ;
    }
  //--- Generate 'startParsing' method ?
    if (nonTerminal.current_mNonTerminalIndex (HERE).uintValue () == inOriginalGrammarStartSymbol) {
      if (inHasIndexing) {
        ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                          << "::performIndexing (C_Compiler * inCompiler,\n"
                             "             const C_String & inSourceFilePath) {\n"
                             "  C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                             "  macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", inSourceFilePath COMMA_HERE)) ;\n"
                             "  scanner->enableIndexing () ;\n"
                             "  if (scanner->sourceText () != NULL) {\n"
                             "    const bool ok = scanner->performTopDownParsing (gProductions_" << inTargetFileName << ", gProductionNames_" << inTargetFileName << ", gProductionIndexes_" << inTargetFileName << ",\n"
                             "                                                    gFirstProductionIndexes_" << inTargetFileName << ", gDecision_" << inTargetFileName << ", gDecisionIndexes_" << inTargetFileName << ", "
                          << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                          << ") ;\n"
                             "    if (ok) {\n"
                             "      cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                             "      grammar.nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation () << "_indexing (scanner) ;\n"
                             "    }\n"
                             "    scanner->generateIndexFile () ;\n"
                             "  }\n"
                             "  macroDetachSharedObject (scanner) ;\n"
                             "}\n\n" ;
      }else{
        ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                          << "::performIndexing (C_Compiler * /* inCompiler */,\n"
                             "             const C_String & /* inSourceFilePath */) {\n"
                             "}\n\n" ;
      }
      ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                        << "::performOnlyLexicalAnalysis (C_Compiler * inCompiler,\n"
                           "             const C_String & inSourceFilePath) {\n"
                           "  C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                           "  macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", inSourceFilePath COMMA_HERE)) ;\n"
                           "  if (scanner->sourceText () != NULL) {\n"
                           "    scanner->performTopDownParsing (gProductions_" << inTargetFileName << ", gProductionNames_" << inTargetFileName << ", gProductionIndexes_" << inTargetFileName << ",\n"
                           "                                    gFirstProductionIndexes_" << inTargetFileName << ", gDecision_" << inTargetFileName << ", gDecisionIndexes_" << inTargetFileName << ", "
                        << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                        << ") ;\n"
                           "  }\n"
                           "  macroDetachSharedObject (scanner) ;\n"
                           "}\n\n" ;
      ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                        << "::performOnlySyntaxAnalysis (C_Compiler * inCompiler,\n"
                           "             const C_String & inSourceFilePath) {\n"
                           "  C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                           "  macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", inSourceFilePath COMMA_HERE)) ;\n"
                           "  if (scanner->sourceText () != NULL) {\n"
                           "    scanner->performTopDownParsing (gProductions_" << inTargetFileName << ", gProductionNames_" << inTargetFileName << ", gProductionIndexes_" << inTargetFileName << ",\n"
                           "                                    gFirstProductionIndexes_" << inTargetFileName << ", gDecision_" << inTargetFileName << ", gDecisionIndexes_" << inTargetFileName << ", "
                        << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                        << ") ;\n"
                           "  }\n"
                           "  macroDetachSharedObject (scanner) ;\n"
                           "}\n\n" ;
      currentAltForNonTerminal.rewind () ;
      while (currentAltForNonTerminal.hasCurrentObject ()) {
        ioCppFileContents.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceFileParsing_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (C_Compiler * inCompiler"
                          ",\n                                " ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << "C_String & " << inSyntaxDirectedTranslationVarName << ",\n                                " ;
        }
        ioCppFileContents << "GALGAS_lstring inFilePath" ;
        cEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal.current_mFormalParametersList (HERE), kEnumeration_up) ;
        int16_t numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents << ",\n                                " ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            ioCppFileContents << "const " ;
            break ;
          default : break ;
          }
          ioCppFileContents << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            ioCppFileContents << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
            ioCppFileContents << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
            ioCppFileContents << " & " ;
            break ;
          default : break ;
          }
          ioCppFileContents << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        ioCppFileContents << "\n                                "
                          "COMMA_LOCATION_ARGS) {\n" ;
        ioCppFileContents << "  if (inFilePath.isValid ()) {\n"
                          "    const GALGAS_string filePathAsString = inFilePath.reader_string (HERE) ;\n"
                          "    C_String filePath = filePathAsString.stringValue () ;\n"
                          "    if (! C_FileManager::isAbsolutePath (filePath)) {\n"
                          "      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;\n"
                          "    }\n"
                          "    if (C_FileManager::fileExistsAtPath (filePath)) {\n"
                          "    C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "    macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", filePath COMMA_HERE)) ;\n"
                          "    if (scanner->sourceText () != NULL) {\n"
                          "      const bool ok = scanner->performTopDownParsing (gProductions_" << inTargetFileName << ", gProductionNames_" << inTargetFileName << ", gProductionIndexes_" << inTargetFileName << ",\n"
                          "                                                      gFirstProductionIndexes_" << inTargetFileName << ", gDecision_" << inTargetFileName << ", gDecisionIndexes_" << inTargetFileName << ", "
                       << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                       << ") ;\n"
                          "      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                          "        cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                          "        " ;
        ioCppFileContents << "grammar.nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << "_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents << "parameter_" << cStringWithSigned (numeroParametre) << ", " ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << inSyntaxDirectedTranslationVarName << ", " ;
        }
        ioCppFileContents << "scanner) ;\n" ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << "          scanner->appendLastSeparatorTo (" << inSyntaxDirectedTranslationVarName << ") ;\n" ;
        }
        ioCppFileContents << "        }\n"
                             "      }else{\n"
                             "        C_String message ;\n"
                             "        message << \"the '\" << filePath << \"' file exists, but cannot be read\" ;\n"
                             "        const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;\n"
                             "        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;\n"
                             "      }\n"
                             "      macroDetachSharedObject (scanner) ;\n"
                             "    }else{\n"
                             "      C_String message ;\n"
                             "      message << \"the '\" << filePath << \"' file does not exist\" ;\n"
                             "      const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;\n"
                             "      inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;\n"
                             "    }\n"
                             "  }\n"
                             "}\n\n" ;
      //--- Define string parsing static method
        ioCppFileContents.appendCppHyphenLineComment () ;
        ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceStringParsing_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (C_Compiler * inCompiler"
                          ",\n                                " ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << "C_String & " << inSyntaxDirectedTranslationVarName << ",\n                                " ;
        }
        ioCppFileContents << "GALGAS_string inSourceString" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents << ",\n                                " ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            ioCppFileContents << "const " ;
            break ;
          default : break ;
          }
          ioCppFileContents << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            ioCppFileContents << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
            ioCppFileContents << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
            ioCppFileContents << " & " ;
            break ;
          default : break ;
          }
          ioCppFileContents << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        ioCppFileContents << "\n                                "
                          "COMMA_UNUSED_LOCATION_ARGS) {\n" ;
        ioCppFileContents << "  if (inSourceString.isValid ()) {\n"
                          "    const C_String sourceString = inSourceString.stringValue () ;\n"
                          "    C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "    macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, sourceString, \"\" COMMA_HERE)) ;\n"
                          "    const bool ok = scanner->performTopDownParsing (gProductions_" << inTargetFileName << ", gProductionNames_" << inTargetFileName << ", gProductionIndexes_" << inTargetFileName << ",\n"
                          "                                                    gFirstProductionIndexes_" << inTargetFileName << ", gDecision_" << inTargetFileName << ", gDecisionIndexes_" << inTargetFileName << ", "
                       << cStringWithSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE))
                       << ") ;\n"
                          "    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                          "      cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                          "      grammar.nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << "_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents << "parameter_" << cStringWithSigned (numeroParametre) << ", " ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << inSyntaxDirectedTranslationVarName << ", " ;
        }
        ioCppFileContents << "scanner) ;\n"
                          "    }\n"
                          "    macroDetachSharedObject (scanner) ;\n"
                          "  }\n"
                          "}\n\n" ;
        currentAltForNonTerminal.gotoNextObject () ;
      }
    }
    nonTerminal.gotoNextObject () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions
  for (int32_t nt=inVocabulary.getTerminalSymbolsCount () ; nt<inVocabulary.getAllSymbolsCount () ; nt++) {
    if (inVocabulary.needToGenerateChoice (nt COMMA_HERE)) {
      ioCppFileContents.appendCppTitleComment (C_String ("'") + inVocabulary.getSymbol (nt COMMA_HERE) + "' added non terminal implementation") ;
      ioCppFileContents << "int32_t cGrammar_" << inTargetFileName.identifierRepresentation ()
              << "::" << inVocabulary.getSymbol (nt COMMA_HERE)
              << " (C_Lexique_" << inLexiqueName.identifierRepresentation ()
              << " * inLexique) {\n"
                 "  return inLexique->nextProductionIndex () ;\n"
                 "}\n\n" ;
    }
  }
//--- Fin du fichier ---------------------------------
  ioCppFileContents.appendCppHyphenLineComment () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void
LL1_computations (const TC_UniqueArray <C_String> & inImplementationFileHeaderList,
                  const cPureBNFproductionsList & inPureBNFproductions,
                  C_HTMLString & ioHTMLFileContents,
                  const cVocabulary & inVocabulary,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                  const C_Relation & inFIRSTsets,
                  const C_Relation & inFOLLOWsets,
                  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                  const uint32_t inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  C_String & ioCppFileContents,
                  const C_String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn,
                  const bool inHasIndexing,
                  const C_String & inSyntaxDirectedTranslationVarName) {

//--- Console display
  if (inVerboseOptionOn) {
    co << "  Checking LL(1) condition... " ;
    co.flush () ;
  }
//--- Print in BNF file
  ioHTMLFileContents.appendCppTitleComment ("Checking LL(1) condition", "title") ;

//--- Check LL(1) condition
  outOk = check_LL1_condition (inPureBNFproductions,
                               inFIRSTsets,
                               inFOLLOWsets,
                               inVocabularyDerivingToEmpty_Array,
                               inVocabulary,
                               ioHTMLFileContents,
                               inVerboseOptionOn) ;

//--- Generate C++ file
  if (outOk) {
    generate_LL1_grammar_Cpp_file (inImplementationFileHeaderList,
                                   inNonTerminalSymbolSortedListForGrammarAnalysis,
                                   inOriginalGrammarStartSymbol,
                                   inTargetFileName,
                                   ioCppFileContents,
                                   inLexiqueName,
                                   inVocabulary,
                                   inPureBNFproductions,
                                   inHasIndexing,
                                   inSyntaxDirectedTranslationVarName) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
