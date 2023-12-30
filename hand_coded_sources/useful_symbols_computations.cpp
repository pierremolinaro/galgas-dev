//--------------------------------------------------------------------------------------------------
//
//  Routines for computing useful symbols of the pure BNF grammar                                
//
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.                                        
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "HTMLString.h"
#include "C_Relation.h"
#include "C_RelationSingleType.h"
#include "MF_MemoryControl.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

#include "useful_symbols_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

static void
computeUsefulSymbols (const cPureBNFproductionsList & inPureBNFproductions,
                      const C_RelationSingleType & inVocabularyBDDType,
                      C_Relation & outUsefulSymbols,
                      const uint16_t inStartSymbolIndex,
                      int32_t & outIterationsCount) {
//--- Traverse all productions for getting direct accessibility
  C_RelationConfiguration vocabulary ;
  vocabulary.addVariable ("source", inVocabularyBDDType) ;
  C_RelationConfiguration vocabulary2 = vocabulary ;
  vocabulary2.addVariable ("target", inVocabularyBDDType) ;
  C_Relation accessibilityRelation (vocabulary2, false) ;
  for (int32_t i=0 ; i<inPureBNFproductions.mProductionArray.count () ; i++) {
    const cProduction & p = inPureBNFproductions.mProductionArray (i COMMA_HERE) ;
    if (p.derivationLength () > 0) {
      C_Relation rightVocabularyRelation (vocabulary2, false) ;
      rightVocabularyRelation.setToEmpty () ;
      for (int32_t j=0 ; j<p.derivationLength () ; j++) {
        rightVocabularyRelation.orWith (C_Relation (vocabulary2, 1, C_BDD::kEqual, (uint64_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) COMMA_HERE) ; 
      }
      const C_Relation leftNonterminalRelation = C_Relation (vocabulary2, 0, C_BDD::kEqual, (uint64_t) p.leftNonTerminalIndex () COMMA_HERE) ; 
      accessibilityRelation.orWith (leftNonterminalRelation.andOp (rightVocabularyRelation COMMA_HERE) COMMA_HERE) ;
    }
  } 
//--- Compute useful vocabulary
  const C_Relation initialValueRelation (vocabulary, 0, C_BDD::kEqual, inStartSymbolIndex COMMA_HERE) ;
  outUsefulSymbols = accessibilityRelation.accessibleStatesFrom (initialValueRelation, & outIterationsCount COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

static bool displayUnusefulSymbols (Compiler * inCompiler,
                                    const GALGAS_location & inErrorLocation,
                                    const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                                    const C_Relation & inUsefulSymbolsRelation,
                                    HTMLString & ioHTMLFileContents,
                                    const cVocabulary & inVocabulary,
                                    const int32_t inIterationCount,
                                    const bool inVerboseOptionOn) {
  ioHTMLFileContents.addRawData ("<p><a name=\"useful_symbols\"></a>") ;
  ioHTMLFileContents.addString ("Calculus completed in ") ;
  ioHTMLFileContents.addSigned (inIterationCount) ;
  ioHTMLFileContents.addString (" iterations.\n") ;
  ioHTMLFileContents.addRawData ("</p>") ;

//------------------------------------------------------ Compute useless symbols
  C_Relation uselessSymbols = ~ inUsefulSymbolsRelation ;
//--- Remove augmented symbol '<>'
//  const uint32_t lastNonterminalToCheck = (uint32_t) (inVocabulary.getAllSymbolsCount () - 2) ;
  const uint32_t lastNonterminalToCheck = (uint32_t) (inVocabulary.originalGrammarSymbolsCount () - 1) ;
  uselessSymbols.andWith (C_Relation (uselessSymbols.configuration(), 0, C_BDD::kLowerOrEqual, lastNonterminalToCheck COMMA_HERE) COMMA_HERE) ;
//--- Remove terminal symbol and 'empty string' symbol
  uselessSymbols.andWith (C_Relation (uselessSymbols.configuration(), 0, C_BDD::kStrictGreater, (uint64_t) inVocabulary.getEmptyStringTerminalSymbolIndex () COMMA_HERE) COMMA_HERE) ;
  C_Relation uselessSymbolsForWarning = uselessSymbols ;

//--------------------- Compute array of used symbols declared as unused by user
  cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis currentNT (inUnusedNonTerminalSymbolsForGrammar, kENUMERATION_UP) ;
  TC_UniqueArray <String> usedSymbolDeclaredAsUnusedArray ;
  while (currentNT.hasCurrentObject ()) {
    const uint32_t nt = currentNT.current_mNonTerminalIndex (HERE).uintValue () + (uint32_t) inVocabulary.getTerminalSymbolsCount () ;
    if (uselessSymbols.containsValue (0, nt COMMA_HERE)) {
      uselessSymbolsForWarning.andWith (~ C_Relation (uselessSymbols.configuration (), 0, C_BDD::kEqual, nt COMMA_HERE) COMMA_HERE) ;
    }else{
      usedSymbolDeclaredAsUnusedArray.appendObject (uselessSymbols.configuration ().constantNameForVariableAndValue (0, nt COMMA_HERE)) ;
    }
    currentNT.gotoNextObject () ;
  }

//---------------------------------------------- Compute array of unused symbols
  TC_UniqueArray <uint64_t> unusedSymbolArrayForWarning ;
  uselessSymbolsForWarning.getValueArray (unusedSymbolArrayForWarning) ;
//---------------------------------------------------------- Print in HTML file  
  ioHTMLFileContents.addRawData ("<p>") ;
  if (unusedSymbolArrayForWarning.count () == 0) {
    ioHTMLFileContents.addRawData ("<span class=\"success\">") ;
    ioHTMLFileContents.addString ("All terminal and nonterminal symbols are useful.\n\n") ;
    ioHTMLFileContents.addRawData ("</span>") ;
  }else{
    ioHTMLFileContents.addRawData ("<span class=\"warning\">") ;
    ioHTMLFileContents.addString ("The vocabulary has ") ;
    ioHTMLFileContents.addSigned (unusedSymbolArrayForWarning.count ()) ;
    ioHTMLFileContents.addString (" useless symbol(s) : \n") ;
    ioHTMLFileContents.addRawData ("<code>") ;
    for (int32_t symbol=0 ; symbol < unusedSymbolArrayForWarning.count () ; symbol++) {
      ioHTMLFileContents.addRawData ("<br>") ;
      ioHTMLFileContents.addString (uselessSymbolsForWarning.configuration().constantNameForVariableAndValue (0, (uint32_t) unusedSymbolArrayForWarning (symbol COMMA_HERE) COMMA_HERE)) ;
    }
    ioHTMLFileContents.addRawData ("</code></span>") ;
  }
  ioHTMLFileContents.addRawData ("</p>") ;

//---------------------------------------- Print messages and warnings on stdout
//--- Ok, or warning ?
  const bool warning = (usedSymbolDeclaredAsUnusedArray.count () > 0) || (unusedSymbolArrayForWarning.count () > 0) ;
  if (inVerboseOptionOn) {
    gCout.addString (warning ? "warning.\n" : "all, ok.\n") ;
  }
  gCout.flush () ;
//--- Warn for unused symbols
  if (unusedSymbolArrayForWarning.count () > 0) {
    String warningMessage ;
    if (unusedSymbolArrayForWarning.count () == 1) {
      warningMessage.addString ("there is 1 useless symbol, not declared as unused: ") ;
    }else{
      warningMessage.addString ("there are ") ;
      warningMessage.addSigned (unusedSymbolArrayForWarning.count ()) ;
      warningMessage.addString (" useless symbols, not declared as unused: ") ;
    }
    bool first = true ;
    for (int32_t symbol=0 ; symbol < unusedSymbolArrayForWarning.count () ; symbol++) {
      if (first) {
        first = false ;
      }else{
        warningMessage.addString (", ") ;
      }
      warningMessage.addString (uselessSymbolsForWarning.configuration().constantNameForVariableAndValue (0, (uint32_t) unusedSymbolArrayForWarning (symbol COMMA_HERE) COMMA_HERE)) ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }
  //--- Warn for used symbols declared as unused
  if (usedSymbolDeclaredAsUnusedArray.count () > 0) {
    String warningMessage ;
    if (usedSymbolDeclaredAsUnusedArray.count () == 1) {
      warningMessage.addString ("there is 1 useful symbol declared as unused: ") ;
    }else{
      warningMessage.addString ("there are ") ;
      warningMessage.addSigned (usedSymbolDeclaredAsUnusedArray.count ()) ;
      warningMessage.addString (" useful symbols declared as unused: ") ;
    }
    bool first = true ;
    for (int32_t i=0 ; i<usedSymbolDeclaredAsUnusedArray.count () ; i++) {
      if (first) {
        first = false ;
      }else{
        warningMessage.addString (", ") ;
      }
      warningMessage.addString (usedSymbolDeclaredAsUnusedArray (i COMMA_HERE)) ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }
//---
  return warning ;
}

//--------------------------------------------------------------------------------------------------

void useful_symbols_computations (Compiler * inCompiler,
                                  const GALGAS_location & inErrorLocation,
                                  const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                                  const cPureBNFproductionsList & inPureBNFproductions,
                                  const C_RelationSingleType & inVocabularyBDDType,
                                  const cVocabulary & inVocabulary,
                                  HTMLString & ioHTMLFileContents,
                                  const bool inPopulateHTMLHelperString,
                                  C_Relation & outUsefulSymbols,
                                  bool & outWarningFlag,
                                  const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    gCout.addString ("  Useful nonterminal symbols... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addCppTitleComment ("Useful terminal and nonterminal symbols", "title") ;
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
