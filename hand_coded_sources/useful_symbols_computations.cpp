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
                      const uint16_t inStartSymbolIndex,
                      int32_t & outIterationsCount) {
//--- Traverse all productions for getting direct accessibility
  C_BDD_Set2 ex_accessibility (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_leftNonterminal (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_rightVocabulary (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_rightSymbol (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD accessibility ;
  C_RelationConfiguration vocabulary2 ;
  vocabulary2.addVariable ("source", inVocabularyBDDType) ;
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
 //       rightVocabularyRelation |= C_Relation (vocabulary2, 1, C_BDD::kEqual, (uint64_t) p.derivationAtIndex (j COMMA_HERE)) ; 
        rightVocabulary |= rightSymbol ;
      }
      const C_BDD leftNonterminal = C_BDD::varCompareConst (0,
                                                            inVocabularyBDDType.BDDBitCount (),
                                                            C_BDD::kEqual,
                                                            (uint32_t) p.leftNonTerminalIndex ()) ;  
      accessibility |= leftNonterminal & rightVocabulary ;
      ex_leftNonterminal.initDimension1 (C_BDD::kEqual, (uint16_t) p.leftNonTerminalIndex ()) ;
      ex_accessibility |= ex_leftNonterminal & ex_rightVocabulary ;
    }
  } 
//--- Compute useful vocabulary
  C_BDD_Set1 ex_initialValue (ex_outUsefulSymbols) ;
  ex_initialValue.init (C_BDD::kEqual, inStartSymbolIndex) ;
  ex_outUsefulSymbols = ex_accessibility.getAccessibility (ex_initialValue, outIterationsCount) ;
  const C_BDD initialValue = C_BDD::varCompareConst (0,
                                                     inVocabularyBDDType.BDDBitCount (),
                                                     C_BDD::kEqual,
                                                     (uint32_t) inStartSymbolIndex) ;  
  C_BDD outUsefulSymbols = accessibility.accessibleStates (initialValue, inVocabularyBDDType.BDDBitCount (), NULL) ;
  if (! outUsefulSymbols.isEqualToBDD (ex_outUsefulSymbols.bdd ())) {
    printf ("\n********* USEFUL SYMBOLS ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    printf ("inVocabularyBDDType.BDDBitCount () %u\n", inVocabularyBDDType.BDDBitCount ()) ;
    printf ("initialValue '%s'\n", initialValue.queryStringValue (HERE).cString (HERE)) ;
    printf ("accessibility '%s'\n", accessibility.queryStringValue (HERE).cString (HERE)) ;
    printf ("outUsefulSymbols '%s'\n", outUsefulSymbols.queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_initialValue '%s'\n", ex_initialValue.bdd ().queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_accessibility '%s'\n", ex_accessibility.bdd ().queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_outUsefulSymbols '%s'\n", ex_outUsefulSymbols.bdd ().queryStringValue (HERE).cString (HERE)) ;
  }
}

//-----------------------------------------------------------------------------*

static bool displayUnusefulSymbols (C_Compiler * inCompiler,
                                    const GALGAS_location & inErrorLocation,
                                    const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                                    const C_BDD_Set1 & inUsefulSymbols,
                                    const C_RelationSingleType & inVocabularyBDDType,
                                    C_HTML_FileWrite * inHTMLfile,
                                    const cVocabulary & inVocabulary,
                                    const int32_t inIterationCount,
                                    const bool inVerboseOptionOn) {
  TC_UniqueArray <uint32_t> unusedNonTerminalArray ;
  cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis currentNT (inUnusedNonTerminalSymbolsForGrammar, kEnumeration_up) ;
  while (currentNT.hasCurrentObject ()) {
    const uint32_t nt = currentNT.current_mNonTerminalIndex (HERE).uintValue () + (uint32_t) inVocabulary.getTerminalSymbolsCount () ;
    unusedNonTerminalArray.addObject (nt) ;
    // printf ("DECLARED UNUSED %u ", nt) ;
    currentNT.gotoNextObject () ;
  }

  bool warning = false ;
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p><a name=\"useful_symbols\"></a>") ;
    *inHTMLfile << "Calculus completed in "
                << cStringWithSigned (inIterationCount)
                << " iterations.\n" ;
    inHTMLfile->outputRawData ("</p>") ;
  }
//--- Get index of last non terminal to check (don't check augmented symbol '<>')
  const uint32_t lastNonterminalToCheck = (uint32_t) (inVocabulary.getAllSymbolsCount () - 2) ;

  C_BDD_Set1 ex_unusefulSymbols = (~ inUsefulSymbols) ;
  C_BDD_Set1 temp (ex_unusefulSymbols) ;
  temp.init (C_BDD::kLowerOrEqual, lastNonterminalToCheck) ;
  ex_unusefulSymbols &= temp ;
  temp.init (C_BDD::kStrictGreater, (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; // Don't display 'empty string' symbol
  ex_unusefulSymbols &= temp ;

  const C_BDD unusefulSymbols = (~ inUsefulSymbols.bdd ())
    & C_BDD::varCompareConst (0, inVocabularyBDDType.BDDBitCount (), C_BDD::kLowerOrEqual, lastNonterminalToCheck)
    & C_BDD::varCompareConst (0, inVocabularyBDDType.BDDBitCount (), C_BDD::kStrictGreater, (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex ())
  ;

//--- Compute user useless symbol count
  TC_UniqueArray <bool> uselessArray ;
  ex_unusefulSymbols.getArray (uselessArray) ;
  uint32_t userUselessSymbolCount = 0 ;
  const int32_t symbolsCount = inVocabulary.originalGrammarSymbolsCount () ;
  for (int32_t symbol=0 ; symbol < symbolsCount ; symbol++) {
    if (uselessArray (symbol COMMA_HERE) && ! unusedNonTerminalArray.containsObjectEqualTo ( (uint32_t) symbol)) {
      userUselessSymbolCount += uselessArray (symbol COMMA_HERE) ;
      // printf ("ACTUALLY UNUSED %u ", symbol) ;
    }
  }
  
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
  }
  if (userUselessSymbolCount == 0) {
    if (inHTMLfile != NULL) {
      inHTMLfile->outputRawData ("<span class=\"success\">") ;
      *inHTMLfile << "All terminal and nonterminal symbols are useful.\n\n" ;
      inHTMLfile->outputRawData ("</span>") ;
    }
    if (inVerboseOptionOn) {
      co << "all, ok.\n" ;
    }
  }else{
    if (inHTMLfile != NULL) {
      inHTMLfile->outputRawData ("<span class=\"warning\">") ;
      *inHTMLfile << "The vocabulary has " ;
      inHTMLfile->appendUnsigned (userUselessSymbolCount) ;
      *inHTMLfile << " useless symbol(s) : \n" ;
      TC_UniqueArray <bool> array ;
      ex_unusefulSymbols.getArray (array) ;
      inHTMLfile->outputRawData ("<code>") ;
      for (int32_t symbol=0 ; symbol < symbolsCount ; symbol++) {
        if (array (symbol COMMA_HERE)) {
          inHTMLfile->outputRawData ("<br>") ;
          inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
        }
      }
      inHTMLfile->outputRawData ("</code></span>") ;
    }
    if (inVerboseOptionOn) {
      co << "warning.\n" ;
    }
    warning = true ;
  }
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("</p>") ;
  }
  co.flush () ;
//--- Print warning
  if (userUselessSymbolCount > 0) {
    C_String warningMessage ;
    if (userUselessSymbolCount == 1) {
      warningMessage << "there is 1 useless symbol, not declared as unused: " ;
    }else{
      warningMessage << "there are " ;
      warningMessage.appendUnsigned (userUselessSymbolCount) ;
      warningMessage << " useless symbols, not declared as unused: " ;
    }
    bool first = true ;
    for (int32_t symbol=0 ; symbol < symbolsCount ; symbol++) {
      if (uselessArray (symbol COMMA_HERE) && ! unusedNonTerminalArray.containsObjectEqualTo ((uint32_t) symbol)) {
        if (first) {
          first = false ;
        }else{
          warningMessage << ", " ;
        }
        inVocabulary.printInFile (warningMessage, symbol COMMA_HERE) ;
      }
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }
  
//--- Check if there are nonterminal symbols declared as unused and actually used
  uint32_t declaredUnusedAndActuallyUsedCount = 0 ;
  for (int32_t i=0 ; i<unusedNonTerminalArray.count () ; i++) {
    if (! uselessArray ((int32_t) unusedNonTerminalArray (i COMMA_HERE) COMMA_HERE)) {
      declaredUnusedAndActuallyUsedCount ++ ;
    }
  }
  if (declaredUnusedAndActuallyUsedCount > 0) {
    C_String warningMessage ;
    if (declaredUnusedAndActuallyUsedCount == 1) {
      warningMessage << "there is 1 useful symbol declared as unused: " ;
    }else{
      warningMessage << "there are " ;
      warningMessage.appendUnsigned (declaredUnusedAndActuallyUsedCount) ;
      warningMessage << " useful symbols declared as unused: " ;
    }
    bool first = true ;
    for (int32_t i=0 ; i<unusedNonTerminalArray.count () ; i++) {
      const int32_t symbol = (int32_t) unusedNonTerminalArray (i COMMA_HERE) ;
      if (! uselessArray (symbol COMMA_HERE)) {
        if (first) {
          first = false ;
        }else{
          warningMessage << ", " ;
        }
        inVocabulary.printInFile (warningMessage, symbol COMMA_HERE) ;
      }
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
                        (uint16_t) inVocabulary.getStartSymbol (),
                        iterationsCount) ;
  const bool warning = displayUnusefulSymbols (inCompiler,
                                               inErrorLocation,
                                               inUnusedNonTerminalSymbolsForGrammar,
                                               outUsefulSymbols,
                                               inVocabularyBDDType,
                                               inHTMLfile,
                                               inVocabulary,
                                               iterationsCount,
                                               inVerboseOptionOn) ;
  
  outWarningFlag |= warning ;
}

//-----------------------------------------------------------------------------*
