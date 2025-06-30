//--------------------------------------------------------------------------------------------------
//
//  Routines for checking LL(1) condition
//
//  Copyright (C) 1994, ..., 2023 Pierre Molinaro.
//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
//--------------------------------------------------------------------------------------------------

#include "HTMLString.h"
#include "MF_MemoryControl.h"
#include "Compiler.h"
#include "BinaryDecisionDiagramRelation.h"

//--------------------------------------------------------------------------------------------------

#include "LL1_computations.h"
#include "PureBNFproductionsList.h"
#include "GrammarVocabulary.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

class cAffichagePremiersProduction : public C_bdd_value_traversing {
//--- Attributs
  protected: HTMLString & mFichierBNF ;
  protected: const GrammarVocabulary & mVocabulary ;

//--- Constructeur
  public: cAffichagePremiersProduction (HTMLString & inHTMLfile,
                                         const GrammarVocabulary & inVocabulary) ;

//--- Methode virtelle appelee pour chaque valeur
  public: virtual void action (const bool * tableauDesValeurs,
                                const uint32_t nombreVariables) ;
} ;

//--------------------------------------------------------------------------------------------------

cAffichagePremiersProduction::cAffichagePremiersProduction (HTMLString & inHTMLfile,
                                                            const GrammarVocabulary & inVocabulary) :
mFichierBNF (inHTMLfile),
mVocabulary (inVocabulary) {
}

//--------------------------------------------------------------------------------------------------

void cAffichagePremiersProduction::action (const bool * tableauDesValeurs,
                                           const uint32_t nombreVariables) {
  int32_t element = 0 ;
  for (int32_t i=((int32_t) nombreVariables) - 1 ; i>=0 ; i--) {
    element = (element << 1) + tableauDesValeurs [i] ;
  }
  mFichierBNF.appendCString (" ") ;
  mVocabulary.printInFile (mFichierBNF, element COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

static bool
check_LL1_condition (const PureBNFproductionsList & inPureBNFproductions,
                     const BinaryDecisionDiagramRelation & inFIRSTsets,
                     const BinaryDecisionDiagramRelation & inFOLLOWsets,
                     const TC_UniqueArray <bool> & vocabulaireSeDerivantEnVide,
                     const GrammarVocabulary & inVocabulary,
                     HTMLString & ioHTMLFileContents,
                     const bool inPopulateHTMLHelperString,
                     const bool inVerboseOptionOn) {
//--- Pour chaque non-terminal presentant plusieurs inPureBNFproductions, calculer le 'premiers' de chacune d'elle,
// et verifier l'absence de conflit.
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p>") ;
    ioHTMLFileContents.appendCString ("The FIRST of a production is :\n"
                   " if the production is empty, the FOLLOW of the left nonterminal symbol ;\n"
                   " if the production is not empty (e.g. g -> x) :\n"
                   "         -- the FIRST of x, and\n"
                   "         -- if x est a nonterminal symbol deriving in the empty string, union the FOLLOW of x.\n\n"
                   "Only are listed the nonterminal having more than one production (see step 2\n"
                   "for inPureBNFproductions numbering) :\n\n") ;
    ioHTMLFileContents.addRawData ("</p>") ;
  }
  int32_t nombreDeConflits = 0 ;
  const int32_t nombreNonTerminaux = inVocabulary.getNonTerminalSymbolsCount () ;
  const int32_t terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<table class=\"result\">") ;
  }
  for (int32_t i=0 ; i<nombreNonTerminaux ; i++) {
    const int32_t first = inPureBNFproductions.tableauIndicePremiereProduction (i COMMA_HERE) ;
      if (first >= 0) { // first<0 means the non terminal symbol is useless
      const int32_t derniere = inPureBNFproductions.tableauIndiceDerniereProduction (i COMMA_HERE) ;
      if (derniere > first) { // Plusieurs inPureBNFproductions d'un meme non-terminal
      //--- Calculer et afficher les premiers
        if (inPopulateHTMLHelperString) {
          ioHTMLFileContents.addRawData ("<tr><td class=\"result_title\" colspan=\"2\"><code>") ;
          inVocabulary.printInFile (ioHTMLFileContents, i + terminalSymbolsCount COMMA_HERE) ;
          ioHTMLFileContents.addRawData ("</code></td></tr>") ;
        }
        for (int32_t j=first ; j<=derniere ; j++) {
          const int32_t numeroProduction = inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) ;
          if (inPopulateHTMLHelperString) {
            ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><a href=\"#pure_bnf_") ;
            ioHTMLFileContents.appendSigned (numeroProduction) ;
            ioHTMLFileContents.addRawData ("\">") ;
            ioHTMLFileContents.appendSigned (numeroProduction) ;
            ioHTMLFileContents.addRawData ("</a></td><td><code>") ;
          }
          GrammarProduction & p = inPureBNFproductions.mProductionArray (numeroProduction COMMA_HERE) ;
          if (p.derivationLength () == 0) {
            BinaryDecisionDiagramRelation temp (inFOLLOWsets.configuration(), 0, BinaryDecisionDiagram::kEqual, (uint32_t) p.leftNonTerminalIndex () COMMA_HERE) ;
            p.mDerivationFirst = temp.andOp (inFOLLOWsets COMMA_HERE).transposedRelation (HERE).relationByDeletingLastVariable (HERE) ;
          }else{
            const uint32_t elementEnTete = (uint32_t) p.derivationAtIndex (0 COMMA_HERE) ;
            BinaryDecisionDiagramRelation t (inFOLLOWsets.configuration(), 0, BinaryDecisionDiagram::kEqual, elementEnTete COMMA_HERE) ;
            if (((int32_t) elementEnTete) < terminalSymbolsCount) {
              p.mDerivationFirst = t.relationByDeletingLastVariable (HERE) ;
            }else{
              p.mDerivationFirst = t.andOp (inFIRSTsets COMMA_HERE).transposedRelation (HERE).relationByDeletingLastVariable (HERE) ;
              if (vocabulaireSeDerivantEnVide ((int32_t) elementEnTete COMMA_HERE)) {
                p.mDerivationFirst.orWith (t.andOp (inFOLLOWsets COMMA_HERE).transposedRelation (HERE).relationByDeletingLastVariable (HERE) COMMA_HERE) ;
              }
            }
          }
          if (inPopulateHTMLHelperString) {
            TC_UniqueArray <uint64_t> array ;
            p.derivationFirst ().getValueArray (array) ;
            for (int32_t k=0 ; k < array.count () ; k++) {
              const uint64_t symbol = array (k COMMA_HERE) ;
              inVocabulary.printInFile (ioHTMLFileContents, (int32_t) symbol COMMA_HERE) ;
              ioHTMLFileContents.appendCString (" ") ;
            }
            ioHTMLFileContents.addRawData ("</code></td></tr>") ;
          }
        }
     //--- Verifier l'absence de conflit
        for (int32_t pr1=first ; pr1<derniere ; pr1++) {
          const int32_t numeroProductionJ = inPureBNFproductions.tableauIndirectionProduction (pr1 COMMA_HERE) ;
          for (int32_t k=pr1+1 ; k<=derniere ; k++) {
            const int32_t numeroProductionK = inPureBNFproductions.tableauIndirectionProduction (k COMMA_HERE) ;
            const BinaryDecisionDiagramRelation rJ = inPureBNFproductions.mProductionArray (numeroProductionJ COMMA_HERE).derivationFirst () ;
            const BinaryDecisionDiagramRelation rK = inPureBNFproductions.mProductionArray (numeroProductionK COMMA_HERE).derivationFirst () ;
            const bool ok = rJ.andOp (rK COMMA_HERE).isEmpty () ;
            if (! ok) {
              nombreDeConflits ++ ;
              if (inPopulateHTMLHelperString) {
                ioHTMLFileContents.addRawData ("<tr><td colspan=\"2\"><span class=\"error\">") ;
                ioHTMLFileContents.appendCString ("***** Conflict between the productions ") ;
                ioHTMLFileContents.appendSigned (numeroProductionJ) ;
                ioHTMLFileContents.appendCString (" and ") ;
                ioHTMLFileContents.appendSigned (numeroProductionK) ;
                ioHTMLFileContents.appendCString (" *****") ;
                ioHTMLFileContents.addRawData ("</span></td></tr>\n") ;
              }
            }
          }
        }
        ioHTMLFileContents.appendCString ("\n") ;
      }
    }
  }
  ioHTMLFileContents.addRawData ("</table><p>") ;
//--- Bilan de l'analyse
  if (inVerboseOptionOn) {
    if (nombreDeConflits == 0) {
      gCout.appendCString ("ok.\n") ;
    }else{
      gCout.appendCString ("error.\n") ;
    }
    gCout.flush () ;
  }
  if (inPopulateHTMLHelperString) {
    if (nombreDeConflits == 0) {
      ioHTMLFileContents.addRawData ("<span class=\"success\">") ;
      ioHTMLFileContents.appendCString ("No conflict : the grammar is LL (1).\n") ;
      ioHTMLFileContents.addRawData ("</span>") ;
    }else{
      ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
      ioHTMLFileContents.appendCString ("The grammar is not  LL (1) : ") ;
      ioHTMLFileContents.appendSigned (nombreDeConflits) ;
      ioHTMLFileContents.appendCString (" conflict") ;
      ioHTMLFileContents.appendString ((nombreDeConflits > 1) ? "s" : "") ;
      ioHTMLFileContents.appendCString (".") ;
      ioHTMLFileContents.addRawData ("</span>") ;
    }
    ioHTMLFileContents.addRawData ("</p>") ;
  }
  return nombreDeConflits == 0 ;
}

//--------------------------------------------------------------------------------------------------

class cEcrireNonTerminal : public C_bdd_value_traversing {
//--- Attributs
  protected: HTMLString & mFichierBNF ;
  protected: const GrammarVocabulary & mVocabulary ;
  protected: String aNomClasseLexique ;
  protected: int16_t aIndice ;

//--- Constructeur
  public: cEcrireNonTerminal (HTMLString & inHTMLfile,
                               const GrammarVocabulary & inVocabulary,
                               const String & nomClasseLexique) ;

//--- Methode virtuelle appelee pour chaque valeur
  public: virtual void action (const bool * tableauDesValeurs,
                                const uint32_t nombreVariables) ;
} ;

//--------------------------------------------------------------------------------------------------

cEcrireNonTerminal::
cEcrireNonTerminal (HTMLString & inHTMLfile,
                    const GrammarVocabulary & inVocabulary,
                    const String & nomClasseLexique) :
mFichierBNF (inHTMLfile),
mVocabulary (inVocabulary),
aNomClasseLexique (nomClasseLexique),
aIndice (0) {
}

//--------------------------------------------------------------------------------------------------

void cEcrireNonTerminal::action (const bool * tableauDesValeurs,
                                 const uint32_t nombreVariables) {
  int32_t element = 0 ;
  for (int32_t i=((int32_t) nombreVariables) - 1 ; i>=0 ; i--) {
    element = (element << 1) + tableauDesValeurs [i] ;
  }
  aIndice ++ ;
  if (aIndice == 2) {
    mFichierBNF.appendCString ("\n") ;
    aIndice = 0 ;
  }
  mFichierBNF.appendString (aNomClasseLexique) ;
  mFichierBNF.appendCString ("::kToken_") ;
  mFichierBNF.appendString (mVocabulary.getSymbol (element COMMA_HERE).identifierRepresentation ()) ;
  mFichierBNF.appendCString (", ") ;
}

//--------------------------------------------------------------------------------------------------

static void
engendrerAiguillageNonTerminaux (const GrammarVocabulary & inVocabulary,
                                 const int32_t inOriginalGrammarProductionLeftNonTerminalIndex,
                                 const int16_t nombreDeParametres,
                                 const PureBNFproductionsList & inPureBNFproductions,
                                 AbstractOutputStream & fichierCPP,
                                 const String & inAltName,
                                 const String & inSyntaxDirectedTranslationVarName) {
  const int32_t first = inPureBNFproductions.tableauIndicePremiereProduction (inOriginalGrammarProductionLeftNonTerminalIndex COMMA_HERE) ;
  if (first >= 0) { // Au moins une production
    const int32_t derniere = inPureBNFproductions.tableauIndiceDerniereProduction (inOriginalGrammarProductionLeftNonTerminalIndex COMMA_HERE) ;
    if (first == derniere) { // Une seule production, pas de conflit
      const int32_t indiceProduction = inPureBNFproductions.tableauIndirectionProduction (first COMMA_HERE) ;
      inPureBNFproductions.mProductionArray (indiceProduction COMMA_HERE).engendrerAppelProduction (nombreDeParametres, inVocabulary, inAltName, fichierCPP, inSyntaxDirectedTranslationVarName) ;
    }else{ // Plusieurs inPureBNFproductions : engendrer l'aiguillage
      fichierCPP.appendCString ("  switch (inLexique->nextProductionIndex ()) {\n") ;
      for (int32_t j=first ; j<=derniere ; j++) {
        fichierCPP.appendCString ("  case ") ;
        fichierCPP.appendSigned ((int32_t)(j - first + 1)) ;
        fichierCPP.appendCString (" :\n  ") ;
        const int32_t indiceProduction = inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) ;
        inPureBNFproductions.mProductionArray (indiceProduction COMMA_HERE).engendrerAppelProduction (nombreDeParametres, inVocabulary, inAltName, fichierCPP, inSyntaxDirectedTranslationVarName) ;
        fichierCPP.appendCString ("    break ;\n") ;
      }
      fichierCPP.appendCString ("  default :\n") ;
      fichierCPP.appendCString ("    break ;\n") ;
      fichierCPP.appendCString ("  }\n") ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

class C_ProductionNameDescriptor {
  public: String mName ;
  public: String mFileName ;
  public: uint32_t mLineNumber ;

  public: C_ProductionNameDescriptor (void) ;

  public: C_ProductionNameDescriptor (const String & inName,
                                       const String & inFileName,
                                       const uint32_t inLineNumber) ;
} ;

//--------------------------------------------------------------------------------------------------

C_ProductionNameDescriptor::C_ProductionNameDescriptor (void) :
mName (),
mFileName (),
mLineNumber (0) {
} ;

//--------------------------------------------------------------------------------------------------

C_ProductionNameDescriptor::C_ProductionNameDescriptor (const String & inName,
                                                        const String & inFileName,
                                                        const uint32_t inLineNumber) :
mName (inName),
mFileName (inFileName),
mLineNumber (inLineNumber) {
} ;

//--------------------------------------------------------------------------------------------------

static void
printProductions (const PureBNFproductionsList & inPureBNFproductions,
                  const GrammarVocabulary & inVocabulary,
                  const String & inLexiqueName,
                  const int32_t inNonterminalIndex,
                  int16_t & ioProductionIndex,
                  bool & ioFirst,
                  TC_UniqueArray <int16_t> & ioProductionRulesIndex,
                  TC_UniqueArray <String> & ioProductionRulesTitle,
                  TC_UniqueArray <C_ProductionNameDescriptor> & ioProductionRuleDescription,
                  TC_UniqueArray <int16_t> & ioFirstProductionRuleIndex,
                  AbstractOutputStream & inCppFile) {
  ioFirstProductionRuleIndex.appendObject ((int16_t) ioProductionRulesIndex.count ()) ;
  const int32_t firstProduction = inPureBNFproductions.tableauIndicePremiereProduction (inNonterminalIndex COMMA_HERE) ;
  if (firstProduction >= 0) {
    const int32_t lastProduction = inPureBNFproductions.tableauIndiceDerniereProduction (inNonterminalIndex COMMA_HERE) ;
    for (int32_t j=firstProduction ; j<=lastProduction ; j++) {
      ioProductionRulesIndex.appendObject (ioProductionIndex) ;
      GrammarProduction & p = inPureBNFproductions.mProductionArray (inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) COMMA_HERE) ;
      String title ;
      inVocabulary.printInFile (title, p.leftNonTerminalIndex () COMMA_HERE) ;
      const C_ProductionNameDescriptor description (title, p.sourceFileName (), (uint32_t) ioProductionIndex) ;
      ioProductionRuleDescription.appendObject (description) ;
      title.appendCString (", in file '") ;
      title.appendString (p.sourceFileName ()) ;
      title.appendCString (".ggs', line ") ;
      title.appendSigned (p.lineDefinition ()) ;
      inCppFile.appendCString ("// At index ") ;
      inCppFile.appendSigned (ioProductionIndex) ;
      inCppFile.appendCString (" : ") ;
      inCppFile.appendString (title) ;
      inCppFile.appendCString ("\n") ;
      ioProductionRulesTitle.appendObjectUsingSwap (title) ;
      const int32_t derivationLength = p.derivationLength () ;
      for (int32_t item=0 ; item<=derivationLength ; item++) {
        if (ioFirst) {
          inCppFile.appendCString ("  ") ;
          ioFirst = false ;
        }else{
          inCppFile.appendCString (", ") ;
        }
        if (item < derivationLength) {
          const int32_t v = p.derivationAtIndex (item COMMA_HERE) ;
          if (v < inVocabulary.getTerminalSymbolsCount ()) {
            inCppFile.appendCString ("TOP_DOWN_TERMINAL (") ;
            inCppFile.appendCString ("Lexique_") ;
            inCppFile.appendString (inLexiqueName.identifierRepresentation ()) ;
            inCppFile.appendCString ("::kToken_") ;
            inCppFile.appendString (inVocabulary.getSymbol (v COMMA_HERE).identifierRepresentation ()) ;
            inCppFile.appendCString (") // $") ;
            inCppFile.appendString (inVocabulary.getSymbol (v COMMA_HERE)) ;
            inCppFile.appendCString ("$\n") ;
          }else{
            inCppFile.appendCString ("TOP_DOWN_NONTERMINAL (") ;
            inCppFile.appendSigned ((int32_t) (v - inVocabulary.getTerminalSymbolsCount ())) ;
            inCppFile.appendCString (") // <") ;
            inCppFile.appendString (inVocabulary.getSymbol (v COMMA_HERE)) ;
            inCppFile.appendCString (">\n") ;
          }
        }else{
          inCppFile.appendCString ("TOP_DOWN_END_PRODUCTION ()\n") ;
        }
      }
      ioProductionIndex = (int16_t) (ioProductionIndex + derivationLength + 1) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

static void
printDecisionTable (const PureBNFproductionsList & inPureBNFproductions,
                    const GrammarVocabulary & inVocabulary,
                    const String & inLexiqueName,
                    const int32_t inNonterminalIndex,
                    int16_t & ioDecisionTableIndex,
                    TC_UniqueArray <int16_t> & ioProductionDecisionTableIndex,
                    AbstractOutputStream & inCppFile) {
  ioProductionDecisionTableIndex.appendObject (ioDecisionTableIndex) ;
  inCppFile.appendCString ("// At index ") ;
  inCppFile.appendSigned (ioDecisionTableIndex) ;
  inCppFile.appendCString (" : <") ;
  inCppFile.appendString (inVocabulary.getSymbol (inNonterminalIndex + inVocabulary.getTerminalSymbolsCount () COMMA_HERE)) ;
  inCppFile.appendCString (">") ;
  const int32_t firstProduction = inPureBNFproductions.tableauIndicePremiereProduction (inNonterminalIndex COMMA_HERE) ;
  if (firstProduction >= 0) { // At least one production
    const int32_t lastProduction = inPureBNFproductions.tableauIndiceDerniereProduction (inNonterminalIndex COMMA_HERE) ;
    if (firstProduction == lastProduction) { // Only one production, no choice
      inCppFile.appendCString (" only one production, no choice\n"
                           "  -1,\n") ;
      ioDecisionTableIndex ++ ;
    }else{ // Several productions : generate decision table
      inCppFile.appendCString ("\n") ;
      for (int32_t j=firstProduction ; j<=lastProduction ; j++) {
        GrammarProduction & p = inPureBNFproductions.mProductionArray (inPureBNFproductions.tableauIndirectionProduction (j COMMA_HERE) COMMA_HERE) ;
        TC_UniqueArray <uint64_t> array ;
        p.derivationFirst ().getValueArray (array) ;
        for (int32_t i=0 ; i < array.count () ; i++) {
          const uint64_t symbol = array (i COMMA_HERE) ;
          inCppFile.appendCString ("Lexique_") ;
          inCppFile.appendString (inLexiqueName.identifierRepresentation ()) ;
          inCppFile.appendCString ("::kToken_") ;
          inCppFile.appendString (inVocabulary.getSymbol ((int32_t) symbol COMMA_HERE).identifierRepresentation ()) ;
          inCppFile.appendCString (", ") ;
        }
        inCppFile.appendCString ("-1, // Choice ") ;
        inCppFile.appendSigned ((int32_t)(j - firstProduction + 1)) ;
        inCppFile.appendCString ("\n") ;
        ioDecisionTableIndex = (int16_t) (ioDecisionTableIndex + (int16_t) p.derivationFirst ().value64Count ()) ;
        ioDecisionTableIndex ++ ;
      }
      inCppFile.appendCString ("  -1,\n") ;
      ioDecisionTableIndex ++ ;
    }
   }else{
    inCppFile.appendCString (" no production\n") ;
  }
}

//--------------------------------------------------------------------------------------------------

static void
generate_LL1_grammar_Cpp_file (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                               const uint32_t inOriginalGrammarStartSymbol,
                               const String & inTargetFileName,
                               String & ioCppFileContents,
                               const String & inLexiqueName,
                               const GrammarVocabulary & inVocabulary,
                               const PureBNFproductionsList & inPureBNFproductions,
                               const String & inSyntaxDirectedTranslationVarName) {
//--- Generate header file inclusion --------------------------------------------------------------
  ioCppFileContents.appendCppHyphenLineComment () ;
  ioCppFileContents.appendCString ("#include \"MF_MemoryControl.h\"\n") ;
  ioCppFileContents.appendCString ("#include \"C_galgas_CLI_Options.h\"\n\n") ;
  ioCppFileContents.appendCString ("#include \"FileManager.h\"\n\n") ;

  ioCppFileContents.appendCppHyphenLineComment () ;
  ioCppFileContents.appendCString ("\n") ;

//--- Generate LL(1) tables
  const int32_t productionsCount = inPureBNFproductions.mProductionArray.count () ;
  TC_UniqueArray <int16_t> productionRulesIndex (500 COMMA_HERE);
  TC_UniqueArray <int16_t> firstProductionRuleIndex (500 COMMA_HERE) ;
  TC_UniqueArray <C_ProductionNameDescriptor> productionRuleDescription ;
  TC_UniqueArray <String> productionRulesTitle (500 COMMA_HERE) ;

  ioCppFileContents.appendCppTitleComment ("LL(1) PRODUCTION RULES") ;
  ioCppFileContents.appendCString ("static const int32_t gProductions_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [] = {\n") ;
  UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis) ;
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
  ioCppFileContents.appendCString ("//---- Added productions from 'select' and 'repeat' instructions\n") ;
  for (int32_t i=inVocabulary.getTerminalSymbolsCount () + (int32_t) inNonTerminalSymbolSortedListForGrammarAnalysis.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    printProductions (inPureBNFproductions, inVocabulary,  inLexiqueName,
                      i - inVocabulary.getTerminalSymbolsCount (),
                      productionIndex, first,
                      productionRulesIndex, productionRulesTitle,
                      productionRuleDescription,
                      firstProductionRuleIndex, ioCppFileContents) ;
  }
  ioCppFileContents.appendCString ("} ;\n\n") ;

//--- Generate productions names table
  ioCppFileContents.appendCppTitleComment ("P R O D U C T I O N    N A M E S") ;
  ioCppFileContents.appendCString ("static const ProductionNameDescriptor gProductionNames_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [") ;
  ioCppFileContents.appendSigned (productionRuleDescription.count ()) ;
  ioCppFileContents.appendCString ("] = {\n") ;
  for (int32_t p=0 ; p<productionRuleDescription.count () ; p++) {
    ioCppFileContents.appendCString (" {\"") ;
    ioCppFileContents.appendString (productionRuleDescription (p COMMA_HERE).mName) ;
    ioCppFileContents.appendCString ("\", \"") ;
    ioCppFileContents.appendString (productionRuleDescription (p COMMA_HERE).mFileName) ;
    ioCppFileContents.appendCString ("\", ") ;
    ioCppFileContents.appendUnsigned (productionRuleDescription (p COMMA_HERE).mLineNumber) ;
    ioCppFileContents.appendCString ("}") ;
    ioCppFileContents.appendString ((p == (productionsCount-1)) ? "" : ",") ;
    ioCppFileContents.appendCString (" // at index ") ;
    ioCppFileContents.appendSigned (p) ;
    ioCppFileContents.appendCString ("\n") ;
  }
  ioCppFileContents.appendCString ("} ;\n\n") ;

//--- Generate productions indexes table
  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    P R O D U C T I O N    I N D E X E S") ;
  ioCppFileContents.appendCString ("static const int32_t gProductionIndexes_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [") ;
  ioCppFileContents.appendSigned (productionRulesIndex.count ()) ;
  ioCppFileContents.appendCString ("] = {\n") ;
  for (int32_t p=0 ; p<productionRulesIndex.count () ; p++) {
    ioCppFileContents.appendSigned (productionRulesIndex (p COMMA_HERE));
    ioCppFileContents.appendString ((p == (productionsCount-1)) ? "" : ",");
    ioCppFileContents.appendCString (" // index ") ;
    ioCppFileContents.appendSigned (p);
    ioCppFileContents.appendCString (" : ") ;
    ioCppFileContents.appendString (productionRulesTitle (p COMMA_HERE)) ;
    ioCppFileContents.appendCString ("\n") ;
  }
  ioCppFileContents.appendCString ("} ;\n\n") ;
  productionRulesTitle.removeAllKeepingCapacity () ;

//--- Generate decision tables indexes
  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S") ;
  ioCppFileContents.appendCString ("static const int32_t gFirstProductionIndexes_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [") ;
  ioCppFileContents.appendSigned ((int32_t)(firstProductionRuleIndex.count () + 1)) ;
  ioCppFileContents.appendCString ("] = {\n") ;
  for (int32_t i=0 ; i<firstProductionRuleIndex.count () ; i++) {
    ioCppFileContents.appendSigned (firstProductionRuleIndex (i COMMA_HERE));
    ioCppFileContents.appendCString (", // at ") ;
    ioCppFileContents.appendSigned (i) ;
    ioCppFileContents.appendString ( " : <") ;
    ioCppFileContents.appendString (inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)) ;
    ioCppFileContents.appendCString (">\n") ;
  }
  ioCppFileContents.appendCString ("0} ;\n\n") ;

//--- Generate decision tables
  TC_UniqueArray <int16_t> productionDecisionIndex (500 COMMA_HERE) ;
  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S") ;
  ioCppFileContents.appendCString ("static const int32_t gDecision_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [] = {\n") ;
  int16_t decisionTableIndex = 0 ;
  nonTerminal.rewind () ;
  while (nonTerminal.hasCurrentObject ()) {
    printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                        (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), decisionTableIndex,
                        productionDecisionIndex, ioCppFileContents) ;
    nonTerminal.gotoNextObject () ;
  }
  ioCppFileContents.appendCString ("//---- Added non terminal symbols from 'select' and 'repeat' instructions\n") ;
  { for (int32_t i=inVocabulary.getTerminalSymbolsCount () + (int32_t) inNonTerminalSymbolSortedListForGrammarAnalysis.count () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
      printDecisionTable (inPureBNFproductions, inVocabulary, inLexiqueName,
                          i - inVocabulary.getTerminalSymbolsCount (), decisionTableIndex,
                          productionDecisionIndex, ioCppFileContents) ;
    }
  }
  ioCppFileContents.appendCString ("0} ;\n\n") ;

//--- Generate decision tables indexes
  ioCppFileContents.appendCppTitleComment ("L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S") ;
  ioCppFileContents.appendCString ("static const int32_t gDecisionIndexes_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [") ;
  ioCppFileContents.appendSigned ((int32_t)(productionDecisionIndex.count () + 1));
  ioCppFileContents.appendCString ("] = {\n") ;
  for (int32_t i=0 ; i<productionDecisionIndex.count () ; i++) {
    ioCppFileContents.appendSigned (productionDecisionIndex (i COMMA_HERE));
    ioCppFileContents.appendCString (", // at ") ;
    ioCppFileContents.appendSigned (i) ;
    ioCppFileContents.appendCString (" : <") ;
    ioCppFileContents.appendString (inVocabulary.getSymbol ((i + inVocabulary.getTerminalSymbolsCount ()) COMMA_HERE)) ;
    ioCppFileContents.appendCString (">\n") ;
  }
  ioCppFileContents.appendCString ("0} ;\n\n") ;

//--- Generate non terminal implementation ----------------------------
  nonTerminal.rewind () ;
  while (nonTerminal.hasCurrentObject ()) {
    ioCppFileContents.appendCppTitleComment (String ("'") + nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue () + "' non terminal implementation") ;
    const bool existeProduction = inPureBNFproductions.tableauIndicePremiereProduction ((int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue () COMMA_HERE) >= 0 ;
  //--- Parse label
      ioCppFileContents.appendCString ("void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::nt_") ;
      ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("_parse (") ;
      if (inSyntaxDirectedTranslationVarName.length () > 0) {
        ioCppFileContents.appendCString ("String & ") ;
        ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
        ioCppFileContents.appendCString (", ") ;
      }
      ioCppFileContents.appendCString ("Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * ") ;
      ioCppFileContents.appendString (existeProduction ? "inLexique" : "") ;
      ioCppFileContents.appendCString (") {\n") ;
     engendrerAiguillageNonTerminaux (inVocabulary, (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), 0,
                                      inPureBNFproductions, ioCppFileContents,
                                      "parse",
                                      inSyntaxDirectedTranslationVarName) ;
    ioCppFileContents.appendCString ("}\n\n") ;
  //--- Indexing ?
    ioCppFileContents.appendCString ("void cGrammar_") ;
    ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("::nt_") ;
    ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("_indexing (Lexique_") ;
    ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString (" * ") ;
    ioCppFileContents.appendString (existeProduction ? "inLexique" : "");
    ioCppFileContents.appendCString (") {\n") ;
    engendrerAiguillageNonTerminaux (inVocabulary, (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), 0,
                                     inPureBNFproductions, ioCppFileContents,
                                     "indexing",
                                     "") ;
    ioCppFileContents.appendCString ("}\n\n") ;
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal (nonTerminal.current_mNonterminalSymbolParametersMap (HERE)) ;
    while (currentAltForNonTerminal.hasCurrentObject ()) {
      ioCppFileContents.appendCString ("void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::nt_") ;
      ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("_") ;
      ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (") ;
      UpEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal.current_mFormalParametersList (HERE)) ;
      int16_t numeroParametre = 1 ;
      while (parametre.hasCurrentObject ()) {
        if (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn) {
          ioCppFileContents.appendCString ("const ") ;
        }
        ioCppFileContents.appendCString ("GGS_") ;
        ioCppFileContents.appendString (parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
          ioCppFileContents.appendCString (" ") ;
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
          ioCppFileContents.appendCString (" ") ;
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
          ioCppFileContents.appendCString (" & ") ;
          break ;
        default : break ;
        }
        if (existeProduction) {
          ioCppFileContents.appendCString ("parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
        }
        parametre.gotoNextObject () ;
        numeroParametre ++ ;
        ioCppFileContents.appendCString (",\n                                ") ;
      }
      if (inSyntaxDirectedTranslationVarName.length () > 0) {
        ioCppFileContents.appendCString ("String & ") ;
        ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
        ioCppFileContents.appendCString (",\n                                ") ;
      }
      ioCppFileContents.appendCString ("Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * ") ;
      ioCppFileContents.appendString (existeProduction ? "inLexique" : "") ;
      ioCppFileContents.appendCString (") {\n") ;
      engendrerAiguillageNonTerminaux (inVocabulary, (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue (), numeroParametre,
                                       inPureBNFproductions, ioCppFileContents,
                                       currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue (),
                                       inSyntaxDirectedTranslationVarName) ;
      ioCppFileContents.appendCString ("}\n\n") ;
      currentAltForNonTerminal.gotoNextObject () ;
    }
  //--- Generate 'startParsing' method ?
    if (nonTerminal.current_mNonTerminalIndex (HERE).uintValue () == inOriginalGrammarStartSymbol) {
      ioCppFileContents.appendCString ("void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::performIndexing (Compiler * inCompiler,\n"
                                   "             const String & inSourceFilePath) {\n"
                                   "  Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                           "  macroMyNew (scanner, Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (inCompiler, inSourceFilePath COMMA_HERE)) ;\n"
                           "  scanner->enableIndexing () ;\n"
                           "  if (scanner->sourceText ().isValid ()) {\n"
                           "    const bool ok = scanner->performTopDownParsing (gProductions_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gProductionNames_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gProductionIndexes_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (",\n"
                           "                                                    gFirstProductionIndexes_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gDecision_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gDecisionIndexes_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", ") ;
      ioCppFileContents.appendSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE));
      ioCppFileContents.appendCString (") ;\n"
                           "    if (ok) {\n"
                           "      cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" grammar ;\n      grammar.nt_") ;
      ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("_indexing (scanner) ;\n"
                           "    }\n"
                           "    scanner->generateIndexFile () ;\n"
                           "  }\n"
                           "  macroDetachSharedObject (scanner) ;\n"
                           "}\n\n"
                           "void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ());
      ioCppFileContents.appendCString ("::performOnlyLexicalAnalysis (Compiler * inCompiler,\n"
                           "             const String & inSourceFilePath) {\n"
                           "  Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                           "  macroMyNew (scanner, Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (inCompiler, inSourceFilePath COMMA_HERE)) ;\n"
                           "  if (scanner->sourceText ().isValid ()) {\n"
                           "    scanner->performLexicalAnalysis () ;\n"
                           "  }\n"
                           "  macroDetachSharedObject (scanner) ;\n"
                           "}\n\n"
                           "void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::performOnlySyntaxAnalysis (Compiler * inCompiler,\n"
                           "             const String & inSourceFilePath) {\n"
                           "  Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                           "  macroMyNew (scanner, Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (inCompiler, inSourceFilePath COMMA_HERE)) ;\n"
                           "  if (scanner->sourceText ().isValid ()) {\n"
                           "    scanner->performTopDownParsing (gProductions_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gProductionNames_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gProductionIndexes_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (",\n"
                           "                                    gFirstProductionIndexes_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gDecision_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gDecisionIndexes_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", ") ;
      ioCppFileContents.appendSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE));
      ioCppFileContents.appendCString (") ;\n"
                           "  }\n"
                           "  macroDetachSharedObject (scanner) ;\n"
                           "}\n\n") ;
      currentAltForNonTerminal.rewind () ;
      while (currentAltForNonTerminal.hasCurrentObject ()) {
        ioCppFileContents.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        ioCppFileContents.appendCString ("void cGrammar_") ;
        ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ());
        ioCppFileContents.appendCString ("::_performSourceFileParsing_") ;
        ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ());
        ioCppFileContents.appendCString (" (Compiler * inCompiler"
                             ",\n                                ") ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendCString ("String & ") ;
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (",\n                                ") ;
        }
        ioCppFileContents.appendCString ("GGS_lstring inFilePath") ;
        UpEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal.current_mFormalParametersList (HERE)) ;
        int16_t numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents.appendCString (",\n                                ") ;
          if (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn) {
            ioCppFileContents.appendCString ("const ") ;
          }
          ioCppFileContents.appendCString ("GGS_") ;
          ioCppFileContents.appendString (parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
            ioCppFileContents.appendCString (" ") ;
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
            ioCppFileContents.appendCString (" ") ;
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
            ioCppFileContents.appendCString (" & ") ;
            break ;
          default : break ;
          }
          ioCppFileContents.appendCString (" parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        ioCppFileContents.appendCString ("\n                                ") ;
        ioCppFileContents.appendString ( "COMMA_LOCATION_ARGS) {\n"
                            "  if (inFilePath.isValid ()) {\n"
                            "    const GGS_string filePathAsString = inFilePath.readProperty_string () ;\n"
                            "    String filePath = filePathAsString.stringValue () ;\n"
                            "    if (! FileManager::isAbsolutePath (filePath)) {\n"
                            "      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;\n"
                            "    }\n"
                            "    if (FileManager::fileExistsAtPath (filePath)) {\n"
                            "    Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                            "    macroMyNew (scanner, Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (inCompiler, filePath COMMA_HERE)) ;\n"
                            "    if (scanner->sourceText ().isValid ()) {\n"
                            "      const bool ok = scanner->performTopDownParsing (gProductions_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gProductionNames_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gProductionIndexes_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (",\n"
                            "                                                      gFirstProductionIndexes_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gDecision_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gDecisionIndexes_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", ") ;
        ioCppFileContents.appendSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE)) ;
        ioCppFileContents.appendCString (") ;\n"
                            "      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                            "        cGrammar_") ;
        ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" grammar ;\n        grammar.nt_") ;
        ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString ("_") ;
        ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (") ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents.appendCString ("parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
          ioCppFileContents.appendCString (", ") ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (", ") ;
        }
        ioCppFileContents.appendCString ("scanner) ;\n") ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendCString ("          scanner->appendLastSeparatorTo (") ;
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (") ;\n") ;
        }
        ioCppFileContents.appendCString ("        }\n"
                             "      }else{\n"
                             "        String message ;\n"
                             "        message.appendString (\"the '\") ;\n"
                             "        message.appendString (filePath) ;\n"
                             "        message.appendString (\"' file exists, but cannot be read\") ;\n"
                             "        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;\n"
                             "        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;\n"
                             "      }\n"
                             "      macroDetachSharedObject (scanner) ;\n"
                             "    }else{\n"
                             "      String message ;\n"
                             "      message.appendString (\"the '\") ;\n"
                             "      message.appendString (filePath) ;\n"
                             "      message.appendString (\"' file does not exist\") ;\n"
                             "      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;\n"
                             "      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;\n"
                             "    }\n"
                             "  }\n"
                             "}\n\n") ;
      //--- Define string parsing static method
        ioCppFileContents.appendCppHyphenLineComment () ;
        ioCppFileContents.appendCString ("void cGrammar_") ;
        ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString ("::_performSourceStringParsing_") ;
        ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (Compiler * inCompiler"
                            ",\n                                ") ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendCString ("String & ") ;
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (",\n                                ") ;
        }
        ioCppFileContents.appendCString ("GGS_string inSourceString") ;
        ioCppFileContents.appendCString (",\n                                ") ;
        ioCppFileContents.appendCString ("GGS_string inNameString") ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents.appendCString (",\n                                ") ;
          if (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn) {
            ioCppFileContents.appendCString ("const ") ;
          }
          ioCppFileContents.appendCString ("GGS_") ;
          ioCppFileContents.appendString (parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
            ioCppFileContents.appendCString (" ") ;
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
            ioCppFileContents.appendCString (" ") ;
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
            ioCppFileContents.appendCString (" & ") ;
            break ;
          default : break ;
          }
          ioCppFileContents.appendCString (" parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        ioCppFileContents.appendCString ("\n                                ") ;
        ioCppFileContents.appendCString ("COMMA_UNUSED_LOCATION_ARGS) {\n"
                            "  if (inSourceString.isValid () && inNameString.isValid ()) {\n"
                            "    const String sourceString = inSourceString.stringValue () ;\n"
                            "    const String nameString = inNameString.stringValue () ;\n"
                            "    Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                             "    macroMyNew (scanner, Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (inCompiler, sourceString, nameString COMMA_HERE)) ;\n"
                             "    const bool ok = scanner->performTopDownParsing (gProductions_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gProductionNames_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gProductionIndexes_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (",\n"
                             "                                                    gFirstProductionIndexes_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gDecision_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gDecisionIndexes_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", ") ;
        ioCppFileContents.appendSigned (productionRulesIndex (productionRulesIndex.count () - 1 COMMA_HERE)) ;
        ioCppFileContents.appendCString (") ;\n"
                             "    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                             "      cGrammar_") ;
        ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" grammar ;\n      grammar.nt_") ;
        ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString ("_") ;
        ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (") ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents.appendCString ("parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
          ioCppFileContents.appendCString (", ") ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (", ") ;
        }
        ioCppFileContents.appendCString ("scanner) ;\n"
                          "    }\n"
                          "    macroDetachSharedObject (scanner) ;\n"
                          "  }\n"
                          "}\n\n") ;
        currentAltForNonTerminal.gotoNextObject () ;
      }
    }
    nonTerminal.gotoNextObject () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions
  for (int32_t nt=inVocabulary.getTerminalSymbolsCount () ; nt<inVocabulary.getAllSymbolsCount () ; nt++) {
    if (inVocabulary.needToGenerateChoice (nt COMMA_HERE)) {
      ioCppFileContents.appendCppTitleComment (String ("'") + inVocabulary.getSymbol (nt COMMA_HERE) + "' added non terminal implementation") ;
      ioCppFileContents.appendCString ("int32_t cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ());
      ioCppFileContents.appendCString ("::") ;
      ioCppFileContents.appendString (inVocabulary.getSymbol (nt COMMA_HERE));
      ioCppFileContents.appendCString (" (Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * inLexique) {\n"
                           "  return inLexique->nextProductionIndex () ;\n"
                           "}\n\n") ;
    }
  }
//--- Fin du fichier ---------------------------------
  ioCppFileContents.appendCppHyphenLineComment () ;
}

//--------------------------------------------------------------------------------------------------

void
LL1_computations (const PureBNFproductionsList & inPureBNFproductions,
                  HTMLString & ioHTMLFileContents,
                  const bool inPopulateHTMLHelperString,
                  const GrammarVocabulary & inVocabulary,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                  const BinaryDecisionDiagramRelation & inFIRSTsets,
                  const BinaryDecisionDiagramRelation & inFOLLOWsets,
                  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                  const uint32_t inOriginalGrammarStartSymbol,
                  const String & inTargetFileName,
                  String & ioCppFileContents,
                  const String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn,
                  const String & inSyntaxDirectedTranslationVarName) {

//--- Console display
  if (inVerboseOptionOn) {
    gCout.appendCString ("  LL(1) condition... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  ioHTMLFileContents.appendTitleComment ("Checking LL(1) condition", "title") ;

//--- Check LL(1) condition
  outOk = check_LL1_condition (inPureBNFproductions,
                               inFIRSTsets,
                               inFOLLOWsets,
                               inVocabularyDerivingToEmpty_Array,
                               inVocabulary,
                               ioHTMLFileContents,
                               inPopulateHTMLHelperString,
                               inVerboseOptionOn) ;

//--- Generate C++ file
  if (outOk) {
    generate_LL1_grammar_Cpp_file (inNonTerminalSymbolSortedListForGrammarAnalysis,
                                   inOriginalGrammarStartSymbol,
                                   inTargetFileName,
                                   ioCppFileContents,
                                   inLexiqueName,
                                   inVocabulary,
                                   inPureBNFproductions,
                                   inSyntaxDirectedTranslationVarName) ;
  }
}

//--------------------------------------------------------------------------------------------------
