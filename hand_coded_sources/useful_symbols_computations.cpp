//--------------------------------------------------------------------------------------------------
//
//  Routines for computing useful symbols of the pure BNF grammar                                
//
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.
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
#include "BinaryDecisionDiagramRelation.h"
#include "BinaryDecisionDiagramRelationSingleType.h"
#include "MF_MemoryControl.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

#include "useful_symbols_computations.h"
#include "PureBNFproductionsList.h"
#include "GrammarVocabulary.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

static void
computeUsefulSymbols (const PureBNFproductionsList & inPureBNFproductions,
                      const BinaryDecisionDiagramRelationSingleType & inVocabularyBDDType,
                      BinaryDecisionDiagramRelation & outUsefulSymbols,
                      const uint16_t inStartSymbolIndex,
                      int32_t & outIterationsCount) {
//--- Traverse all productions for getting direct accessibility
  BinaryDecisionDiagramRelationConfiguration vocabulary ;
  vocabulary.addVariable ("source", inVocabularyBDDType) ;
  BinaryDecisionDiagramRelationConfiguration vocabulary2 = vocabulary ;
  vocabulary2.addVariable ("target", inVocabularyBDDType) ;
  BinaryDecisionDiagramRelation accessibilityRelation (vocabulary2, false) ;
  for (int32_t i=0 ; i<inPureBNFproductions.mProductionArray.count () ; i++) {
    const GrammarProduction & p = inPureBNFproductions.mProductionArray (i COMMA_HERE) ;
    if (p.derivationLength () > 0) {
      BinaryDecisionDiagramRelation rightVocabularyRelation (vocabulary2, false) ;
      rightVocabularyRelation.setToEmpty () ;
      for (int32_t j=0 ; j<p.derivationLength () ; j++) {
        rightVocabularyRelation.orWith (BinaryDecisionDiagramRelation (vocabulary2, 1, BinaryDecisionDiagram::kEqual, (uint64_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) COMMA_HERE) ; 
      }
      const BinaryDecisionDiagramRelation leftNonterminalRelation = BinaryDecisionDiagramRelation (vocabulary2, 0, BinaryDecisionDiagram::kEqual, (uint64_t) p.leftNonTerminalIndex () COMMA_HERE) ; 
      accessibilityRelation.orWith (leftNonterminalRelation.andOp (rightVocabularyRelation COMMA_HERE) COMMA_HERE) ;
    }
  } 
//--- Compute useful vocabulary
  const BinaryDecisionDiagramRelation initialValueRelation (vocabulary, 0, BinaryDecisionDiagram::kEqual, inStartSymbolIndex COMMA_HERE) ;
  outUsefulSymbols = accessibilityRelation.accessibleStatesFrom (initialValueRelation, & outIterationsCount COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

static bool displayUnusefulSymbols (Compiler * inCompiler,
                                    const GGS_location & inErrorLocation,
                                    const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                                    const BinaryDecisionDiagramRelation & inUsefulSymbolsRelation,
                                    HTMLString & ioHTMLFileContents,
                                    const GrammarVocabulary & inVocabulary,
                                    const int32_t inIterationCount,
                                    const bool inVerboseOptionOn) {
  ioHTMLFileContents.addRawData ("<p><a name=\"useful_symbols\"></a>") ;
  ioHTMLFileContents.appendCString ("Calculus completed in ") ;
  ioHTMLFileContents.appendSigned (inIterationCount) ;
  ioHTMLFileContents.appendCString (" iterations.\n") ;
  ioHTMLFileContents.addRawData ("</p>") ;

//------------------------------------------------------ Compute useless symbols
  BinaryDecisionDiagramRelation uselessSymbols = ~ inUsefulSymbolsRelation ;
//--- Remove augmented symbol '<>'
//  const uint32_t lastNonterminalToCheck = (uint32_t) (inVocabulary.getAllSymbolsCount () - 2) ;
  const uint32_t lastNonterminalToCheck = (uint32_t) (inVocabulary.originalGrammarSymbolsCount () - 1) ;
  uselessSymbols.andWith (BinaryDecisionDiagramRelation (uselessSymbols.configuration(), 0, BinaryDecisionDiagram::kLowerOrEqual, lastNonterminalToCheck COMMA_HERE) COMMA_HERE) ;
//--- Remove terminal symbol and 'empty string' symbol
  uselessSymbols.andWith (BinaryDecisionDiagramRelation (uselessSymbols.configuration(), 0, BinaryDecisionDiagram::kStrictGreater, (uint64_t) inVocabulary.getEmptyStringTerminalSymbolIndex () COMMA_HERE) COMMA_HERE) ;
  BinaryDecisionDiagramRelation uselessSymbolsForWarning = uselessSymbols ;

//--------------------- Compute array of used symbols declared as unused by user
  UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis currentNT (inUnusedNonTerminalSymbolsForGrammar) ;
  GenericUniqueArray <String> usedSymbolDeclaredAsUnusedArray ;
  while (currentNT.hasCurrentObject ()) {
    const uint32_t nt = currentNT.current_mNonTerminalIndex (HERE).uintValue () + (uint32_t) inVocabulary.getTerminalSymbolsCount () ;
    if (uselessSymbols.containsValue (0, nt COMMA_HERE)) {
      uselessSymbolsForWarning.andWith (~ BinaryDecisionDiagramRelation (uselessSymbols.configuration (), 0, BinaryDecisionDiagram::kEqual, nt COMMA_HERE) COMMA_HERE) ;
    }else{
      usedSymbolDeclaredAsUnusedArray.appendObject (uselessSymbols.configuration ().constantNameForVariableAndValue (0, nt COMMA_HERE)) ;
    }
    currentNT.gotoNextObject () ;
  }

//---------------------------------------------- Compute array of unused symbols
  GenericUniqueArray <uint64_t> unusedSymbolArrayForWarning ;
  uselessSymbolsForWarning.getValueArray (unusedSymbolArrayForWarning) ;
//---------------------------------------------------------- Print in HTML file  
  ioHTMLFileContents.addRawData ("<p>") ;
  if (unusedSymbolArrayForWarning.count () == 0) {
    ioHTMLFileContents.addRawData ("<span class=\"success\">") ;
    ioHTMLFileContents.appendCString ("All terminal and nonterminal symbols are useful.\n\n") ;
    ioHTMLFileContents.addRawData ("</span>") ;
  }else{
    ioHTMLFileContents.addRawData ("<span class=\"warning\">") ;
    ioHTMLFileContents.appendCString ("The vocabulary has ") ;
    ioHTMLFileContents.appendSigned (unusedSymbolArrayForWarning.count ()) ;
    ioHTMLFileContents.appendCString (" useless symbol(s) : \n") ;
    ioHTMLFileContents.addRawData ("<code>") ;
    for (int32_t symbol=0 ; symbol < unusedSymbolArrayForWarning.count () ; symbol++) {
      ioHTMLFileContents.addRawData ("<br>") ;
      ioHTMLFileContents.appendString (uselessSymbolsForWarning.configuration().constantNameForVariableAndValue (0, (uint32_t) unusedSymbolArrayForWarning (symbol COMMA_HERE) COMMA_HERE)) ;
    }
    ioHTMLFileContents.addRawData ("</code></span>") ;
  }
  ioHTMLFileContents.addRawData ("</p>") ;

//---------------------------------------- Print messages and warnings on stdout
//--- Ok, or warning ?
  const bool warning = (usedSymbolDeclaredAsUnusedArray.count () > 0) || (unusedSymbolArrayForWarning.count () > 0) ;
  if (inVerboseOptionOn) {
    gCout.appendString (warning ? "warning.\n" : "all, ok.\n") ;
  }
  gCout.flush () ;
//--- Warn for unused symbols
  if (unusedSymbolArrayForWarning.count () > 0) {
    String warningMessage ;
    if (unusedSymbolArrayForWarning.count () == 1) {
      warningMessage.appendCString ("there is 1 useless symbol, not declared as unused: ") ;
    }else{
      warningMessage.appendCString ("there are ") ;
      warningMessage.appendSigned (unusedSymbolArrayForWarning.count ()) ;
      warningMessage.appendCString (" useless symbols, not declared as unused: ") ;
    }
    bool first = true ;
    for (int32_t symbol=0 ; symbol < unusedSymbolArrayForWarning.count () ; symbol++) {
      if (first) {
        first = false ;
      }else{
        warningMessage.appendCString (", ") ;
      }
      warningMessage.appendString (uselessSymbolsForWarning.configuration().constantNameForVariableAndValue (0, (uint32_t) unusedSymbolArrayForWarning (symbol COMMA_HERE) COMMA_HERE)) ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }
  //--- Warn for used symbols declared as unused
  if (usedSymbolDeclaredAsUnusedArray.count () > 0) {
    String warningMessage ;
    if (usedSymbolDeclaredAsUnusedArray.count () == 1) {
      warningMessage.appendCString ("there is 1 useful symbol declared as unused: ") ;
    }else{
      warningMessage.appendCString ("there are ") ;
      warningMessage.appendSigned (usedSymbolDeclaredAsUnusedArray.count ()) ;
      warningMessage.appendCString (" useful symbols declared as unused: ") ;
    }
    bool first = true ;
    for (int32_t i=0 ; i<usedSymbolDeclaredAsUnusedArray.count () ; i++) {
      if (first) {
        first = false ;
      }else{
        warningMessage.appendCString (", ") ;
      }
      warningMessage.appendString (usedSymbolDeclaredAsUnusedArray (i COMMA_HERE)) ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }
//---
  return warning ;
}

//--------------------------------------------------------------------------------------------------

void useful_symbols_computations (Compiler * inCompiler,
                                  const GGS_location & inErrorLocation,
                                  const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                                  const PureBNFproductionsList & inPureBNFproductions,
                                  const BinaryDecisionDiagramRelationSingleType & inVocabularyBDDType,
                                  const GrammarVocabulary & inVocabulary,
                                  HTMLString & ioHTMLFileContents,
                                  const bool inPopulateHTMLHelperString,
                                  BinaryDecisionDiagramRelation & outUsefulSymbols,
                                  bool & outWarningFlag,
                                  const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    gCout.appendCString ("  Useful nonterminal symbols... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.appendTitleComment ("Useful terminal and nonterminal symbols", "title") ;
  }
  int32_t iterationsCount = 0 ;
  computeUsefulSymbols (inPureBNFproductions,
                        inVocabularyBDDType,
                        outUsefulSymbols,
                        (uint16_t) inVocabulary.getStartSymbol (),
                        iterationsCount) ;

  const bool warning = displayUnusefulSymbols (inCompiler,
                                               inErrorLocation,
                                               inUnusedNonTerminalSymbolsForGrammar,
                                               outUsefulSymbols,
                                               ioHTMLFileContents,
                                               inVocabulary,
                                               iterationsCount,
                                               inVerboseOptionOn) ;
  
  outWarningFlag |= warning ;
}

//--------------------------------------------------------------------------------------------------
