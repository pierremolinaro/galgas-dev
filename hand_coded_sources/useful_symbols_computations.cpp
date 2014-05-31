//-----------------------------------------------------------------------------*
//                                                                             *
//  Routines for computing useful symbols of the pure BNF grammar              *
//                                                                             *
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.                             *
//                                                                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//                                                                             *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//   more details.                                                             *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "files/C_HTML_FileWrite.h"
#include "bdd/C_Relation.h"
#include "bdd/C_RelationSingleType.h"
#include "bdd/C_BDD_Set2.h"
#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_Compiler.h"

//-----------------------------------------------------------------------------*

#include "useful_symbols_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "grammarCompilation.h"

//-----------------------------------------------------------------------------*

static void
computeUsefulSymbols (const cPureBNFproductionsList & inPureBNFproductions,
                      const C_RelationSingleType & inVocabularyBDDType,
                      C_BDD_Set1 & ex_outUsefulSymbols,
                      C_Relation & outUsefulSymbolsRelation,
                      const uint16_t inStartSymbolIndex,
                      int32_t & outIterationsCount) {
//--- Traverse all productions for getting direct accessibility
  C_BDD_Set2 ex_accessibility (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_leftNonterminal (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_rightVocabulary (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_rightSymbol (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD accessibility ;
  C_RelationConfiguration vocabulary ;
  vocabulary.addVariable ("source", inVocabularyBDDType) ;
  C_RelationConfiguration vocabulary2 = vocabulary ;
  vocabulary2.addVariable ("target", inVocabularyBDDType) ;
  C_Relation accessibilityRelation (vocabulary2, false) ;
  for (int32_t i=0 ; i<inPureBNFproductions.length () ; i++) {
    const cProduction & p = inPureBNFproductions (i COMMA_HERE) ;
    if (p.derivationLength () > 0) {
      ex_rightVocabulary.clear () ;
      C_BDD rightVocabulary ;
      C_Relation rightVocabularyRelation (vocabulary2, false) ;
      rightVocabularyRelation.setToEmpty () ;
      for (int32_t j=0 ; j<p.derivationLength () ; j++) {
        ex_rightSymbol.initDimension2 (C_BDD::kEqual, (uint16_t) p.derivationAtIndex (j COMMA_HERE)) ;
        ex_rightVocabulary |= ex_rightSymbol ;
        const C_BDD rightSymbol = C_BDD::varCompareConst (inVocabularyBDDType.BDDBitCount (),
                                                          inVocabularyBDDType.BDDBitCount (),
                                                          C_BDD::kEqual,
                                                          (uint32_t) p.derivationAtIndex (j COMMA_HERE)) ;  
        rightVocabularyRelation.orWith (C_Relation (vocabulary2, 1, C_BDD::kEqual, (uint64_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) COMMA_HERE) ; 
        rightVocabulary |= rightSymbol ;
      }
      const C_BDD leftNonterminal = C_BDD::varCompareConst (0,
                                                            inVocabularyBDDType.BDDBitCount (),
                                                            C_BDD::kEqual,
                                                            (uint32_t) p.leftNonTerminalIndex ()) ;  
      const C_Relation leftNonterminalRelation = C_Relation (vocabulary2, 0, C_BDD::kEqual, (uint64_t) p.leftNonTerminalIndex () COMMA_HERE) ; 
      accessibilityRelation.orWith (leftNonterminalRelation.andOp (rightVocabularyRelation COMMA_HERE) COMMA_HERE) ;
      accessibility |= leftNonterminal & rightVocabulary ;
      ex_leftNonterminal.initDimension1 (C_BDD::kEqual, (uint16_t) p.leftNonTerminalIndex ()) ;
      ex_accessibility |= ex_leftNonterminal & ex_rightVocabulary ;
    }
  } 
//--- Compute useful vocabulary
  if (accessibility != (accessibilityRelation.bdd())) {
    printf ("*** ! accessibility.isEqualToBDD(accessibilityRelation.bdd() ***\n") ;
    exit (1) ;
  }
  const C_Relation initialValueRelation (vocabulary, 0, C_BDD::kEqual, inStartSymbolIndex COMMA_HERE) ;
  outUsefulSymbolsRelation = accessibilityRelation.accessibleStatesFrom (initialValueRelation, & outIterationsCount COMMA_HERE) ;

  C_BDD_Set1 ex_initialValue (ex_outUsefulSymbols) ;
  ex_initialValue.init (C_BDD::kEqual, inStartSymbolIndex) ;
  ex_outUsefulSymbols = ex_accessibility.getAccessibility (ex_initialValue, outIterationsCount) ;
  const C_BDD initialValue = C_BDD::varCompareConst (0,
                                                     inVocabularyBDDType.BDDBitCount (),
                                                     C_BDD::kEqual,
                                                     (uint32_t) inStartSymbolIndex) ;  
  C_BDD outUsefulSymbols = accessibility.accessibleStates (initialValue, inVocabularyBDDType.BDDBitCount (), NULL) ;

  if (outUsefulSymbols != (outUsefulSymbolsRelation.bdd())) {
    printf ("*** ! outUsefulSymbols.isEqualToBDD (outUsefulSymbolsRelation.bdd() ***\n") ;
    exit (1) ;
  }
}

//-----------------------------------------------------------------------------*

static bool displayUnusefulSymbols (C_Compiler * inCompiler,
                                    const GALGAS_location & inErrorLocation,
                                    const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                                    const C_Relation & inUsefulSymbolsRelation,
                                    C_HTML_FileWrite * inHTMLfile,
                                    const cVocabulary & inVocabulary,
                                    const int32_t inIterationCount,
                                    const bool inVerboseOptionOn) {
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p><a name=\"useful_symbols\"></a>") ;
    *inHTMLfile << "Calculus completed in "
                << cStringWithSigned (inIterationCount)
                << " iterations.\n" ;
    inHTMLfile->outputRawData ("</p>") ;
  }

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
  cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis currentNT (inUnusedNonTerminalSymbolsForGrammar, kEnumeration_up) ;
  TC_UniqueArray <C_String> usedSymbolDeclaredAsUnusedArray ;
  while (currentNT.hasCurrentObject ()) {
    const uint32_t nt = currentNT.current_mNonTerminalIndex (HERE).uintValue () + (uint32_t) inVocabulary.getTerminalSymbolsCount () ;
    // printf ("*** UNUSED DECLARED SYMBOL %u *** \n", nt) ;
    if (uselessSymbols.containsValue (0, nt COMMA_HERE)) {
      uselessSymbolsForWarning.andWith (~ C_Relation (uselessSymbols.configuration (), 0, C_BDD::kEqual, nt COMMA_HERE) COMMA_HERE) ;
    }else{
      usedSymbolDeclaredAsUnusedArray.addObject (uselessSymbols.configuration ().constantNameForVariableAndValue (0, nt COMMA_HERE)) ;
    }
    currentNT.gotoNextObject () ;
  }

//---------------------------------------------- Compute array of unused symbols
  TC_UniqueArray <uint64_t> unusedSymbolArrayForWarning ;
  uselessSymbolsForWarning.getValueArray (unusedSymbolArrayForWarning) ;






//--- Get index of last non terminal to check (don't check augmented symbol '<>')
/*  C_BDD_Set1 ex_unusefulSymbols = (~ inUsefulSymbols) ;
  C_BDD_Set1 temp (ex_unusefulSymbols) ;
  temp.init (C_BDD::kLowerOrEqual, lastNonterminalToCheck) ;
  ex_unusefulSymbols &= temp ;
  temp.init (C_BDD::kStrictGreater, (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; // Don't display 'empty string' symbol
  ex_unusefulSymbols &= temp ;

  const C_BDD unusefulSymbols = (~ inUsefulSymbols.bdd ())
    & C_BDD::varCompareConst (0, inVocabularyBDDType.BDDBitCount (), C_BDD::kLowerOrEqual, lastNonterminalToCheck)
    & C_BDD::varCompareConst (0, inVocabularyBDDType.BDDBitCount (), C_BDD::kStrictGreater, (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex ())
  ;

  if (! uselessSymbols.bdd ().isEqualToBDD (unusefulSymbols)) {
    printf ("**** ! uselessSymbols.bdd ().isEqualToBDD (unusefulSymbols) ****\n") ;
    exit (1) ;
  }
//--- Compute user useless symbol count
  TC_UniqueArray <uint32_t> unusedNonTerminalArray ;
  currentNT.rewind () ;
//  cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis currentNT (inUnusedNonTerminalSymbolsForGrammar, kEnumeration_up) ;
  while (currentNT.hasCurrentObject ()) {
    const uint32_t nt = currentNT.current_mNonTerminalIndex (HERE).uintValue () + (uint32_t) inVocabulary.getTerminalSymbolsCount () ;
    unusedNonTerminalArray.addObject (nt) ;
    // printf ("DECLARED UNUSED %u ", nt) ;
    currentNT.gotoNextObject () ;
  }*/
/*  TC_UniqueArray <bool> uselessArray ;
  ex_unusefulSymbols.getArray (uselessArray) ;
  uint32_t userUselessSymbolCount = 0 ;
  const int32_t symbolsCount = inVocabulary.originalGrammarSymbolsCount () ;
  for (int32_t symbol=0 ; symbol < symbolsCount ; symbol++) {
    if (uselessArray (symbol COMMA_HERE) && ! unusedNonTerminalArray.containsObjectEqualTo ( (uint32_t) symbol)) {
      userUselessSymbolCount += uselessArray (symbol COMMA_HERE) ;
      // printf ("ACTUALLY UNUSED %u ", symbol) ;
    }
  }*/
  
/*  if (usedSymbolDeclaredAsUnused.count() != (int32_t) userUselessSymbolCount) {
    printf ("*** usedSymbolDeclaredAsUnused.count() != (int32_t) userUselessSymbolCount ***\n") ;
    exit (1) ;
  }*/
  
//  const int32_t userUselessSymbolCount = usedSymbolDeclaredAsUnusedArray.count() ;

//---------------------------------------------------------- Print in HTML file  
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    if (unusedSymbolArrayForWarning.count () == 0) {
      inHTMLfile->outputRawData ("<span class=\"success\">") ;
      *inHTMLfile << "All terminal and nonterminal symbols are useful.\n\n" ;
      inHTMLfile->outputRawData ("</span>") ;
    }else{
      inHTMLfile->outputRawData ("<span class=\"warning\">") ;
      *inHTMLfile << "The vocabulary has " ;
      inHTMLfile->appendSigned (unusedSymbolArrayForWarning.count ()) ;
      *inHTMLfile << " useless symbol(s) : \n" ;
      inHTMLfile->outputRawData ("<code>") ;
      for (int32_t symbol=0 ; symbol < unusedSymbolArrayForWarning.count () ; symbol++) {
        inHTMLfile->outputRawData ("<br>") ;
        *inHTMLfile << uselessSymbolsForWarning.configuration().constantNameForVariableAndValue (0, (uint32_t) unusedSymbolArrayForWarning (symbol COMMA_HERE) COMMA_HERE) ;
      }
      inHTMLfile->outputRawData ("</code></span>") ;
    }
    inHTMLfile->outputRawData ("</p>") ;
  }
//---------------------------------------- Print messages and warnings on stdout
//--- Ok, or warning ?
  const bool warning = (usedSymbolDeclaredAsUnusedArray.count () > 0) || (unusedSymbolArrayForWarning.count () > 0) ;
  if (inVerboseOptionOn) {
    co << (warning ? "warning.\n" : "all, ok.\n") ;
  }
  co.flush () ;
//--- Warn for unused symbols
  if (unusedSymbolArrayForWarning.count () > 0) {
    C_String warningMessage ;
    if (unusedSymbolArrayForWarning.count () == 1) {
      warningMessage << "there is 1 useless symbol, not declared as unused: " ;
    }else{
      warningMessage << "there are " ;
      warningMessage.appendSigned (unusedSymbolArrayForWarning.count ()) ;
      warningMessage << " useless symbols, not declared as unused: " ;
    }
    bool first = true ;
    for (int32_t symbol=0 ; symbol < unusedSymbolArrayForWarning.count () ; symbol++) {
      if (first) {
        first = false ;
      }else{
        warningMessage << ", " ;
      }
      warningMessage << uselessSymbolsForWarning.configuration().constantNameForVariableAndValue (0, (uint32_t) unusedSymbolArrayForWarning (symbol COMMA_HERE) COMMA_HERE) ;
      // inVocabulary.printInFile (warningMessage, symbol COMMA_HERE) ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }
  //--- Warn for used symbols declared as unused
  if (usedSymbolDeclaredAsUnusedArray.count () > 0) {
    C_String warningMessage ;
    if (usedSymbolDeclaredAsUnusedArray.count () == 1) {
      warningMessage << "there is 1 useful symbol declared as unused: " ;
    }else{
      warningMessage << "there are " ;
      warningMessage.appendSigned (usedSymbolDeclaredAsUnusedArray.count ()) ;
      warningMessage << " useful symbols declared as unused: " ;
    }
    bool first = true ;
    for (int32_t i=0 ; i<usedSymbolDeclaredAsUnusedArray.count () ; i++) {
      if (first) {
        first = false ;
      }else{
        warningMessage << ", " ;
      }
      warningMessage << usedSymbolDeclaredAsUnusedArray (i COMMA_HERE) ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }
//---
  return warning ;
}

//-----------------------------------------------------------------------------*

void useful_symbols_computations (C_Compiler * inCompiler,
                                  const GALGAS_location & inErrorLocation,
                                  const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                                  const cPureBNFproductionsList & inPureBNFproductions,
                                  const C_RelationSingleType & inVocabularyBDDType,
                                  const cVocabulary & inVocabulary,
                                  C_HTML_FileWrite * inHTMLfile,
                                  C_BDD_Set1 & outUsefulSymbols,
                                  C_Relation & outUsefulSymbolsRelation,
                                  bool & outWarningFlag,
                                  const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Searching for useful nonterminal symbols... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->appendCppTitleComment ("Useful terminal and nonterminal symbols", "title") ;
  }
  int32_t iterationsCount = 0 ;
  computeUsefulSymbols (inPureBNFproductions,
                        inVocabularyBDDType,
                        outUsefulSymbols,
                        outUsefulSymbolsRelation,
                        (uint16_t) inVocabulary.getStartSymbol (),
                        iterationsCount) ;
  if (outUsefulSymbolsRelation.bdd () != (outUsefulSymbols.bdd())) {
    printf ("*** ! outUsefulSymbolsRelation.bdd ().isEqualToBDD(outUsefulSymbols.bdd() ***\n") ;
    exit (1) ;
  }
  const bool warning = displayUnusefulSymbols (inCompiler,
                                               inErrorLocation,
                                               inUnusedNonTerminalSymbolsForGrammar,
                                               outUsefulSymbolsRelation,
                                               inHTMLfile,
                                               inVocabulary,
                                               iterationsCount,
                                               inVerboseOptionOn) ;
  
  outWarningFlag |= warning ;
}

//-----------------------------------------------------------------------------*
