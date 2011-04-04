//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for computing useful symbols of the pure BNF grammar            *
//                                                                           *
//  Copyright (C) 1999, ..., 2009 Pierre Molinaro.                           *
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
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

#include "files/C_HTML_FileWrite.h"
#include "bdd/C_BDD_Set2.h"
#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_Compiler.h"

//---------------------------------------------------------------------------*

#include "useful_symbols_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "grammarCompilation.h"

//---------------------------------------------------------------------------*

static void
computeUsefulSymbols (const cPureBNFproductionsList & inPureBNFproductions,
                      const PMUInt16 inBDDBitCount,
                      C_BDD_Set1 & ex_outUsefulSymbols,
                      const PMUInt16 inStartSymbolIndex,
                      PMSInt32 & outIterationsCount) {
//--- Traverse all productions for getting direct accessibility
  C_BDD_Set2 ex_accessibility (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_leftNonterminal (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_rightVocabulary (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_rightSymbol (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD accessibility ;
  for (PMSInt32 i=0 ; i<inPureBNFproductions.length () ; i++) {
    const cProduction & p = inPureBNFproductions (i COMMA_HERE) ;
    if (p.aDerivation.count () > 0) {
      ex_rightVocabulary.clear () ;
      C_BDD rightVocabulary ;
      for (PMSInt32 j=0 ; j<p.aDerivation.count () ; j++) {
        ex_rightSymbol.initDimension2 (C_BDD::kEqual, (PMUInt16) p.aDerivation (j COMMA_HERE)) ;
        ex_rightVocabulary |= ex_rightSymbol ;
        const C_BDD rightSymbol =
           C_BDD::varCompareConst (inBDDBitCount,
                                   inBDDBitCount,
                                   C_BDD::kEqual,
                                   (PMUInt32) p.aDerivation (j COMMA_HERE)) ;  
        rightVocabulary |= rightSymbol ;
      }
      const C_BDD leftNonterminal =
           C_BDD::varCompareConst (0,
                                   inBDDBitCount,
                                   C_BDD::kEqual,
                                   (PMUInt32) p.aNumeroNonTerminalGauche) ;  
      accessibility |= leftNonterminal & rightVocabulary ;
      ex_leftNonterminal.initDimension1 (C_BDD::kEqual, (PMUInt16) p.aNumeroNonTerminalGauche) ;
      ex_accessibility |= ex_leftNonterminal & ex_rightVocabulary ;
    }
  } 
//--- Compute useful vocabulary
  C_BDD_Set1 ex_initialValue (ex_outUsefulSymbols) ;
  ex_initialValue.init (C_BDD::kEqual, inStartSymbolIndex) ;
  ex_outUsefulSymbols = ex_accessibility.getAccessibility (ex_initialValue, outIterationsCount) ;
  const C_BDD initialValue = C_BDD::varCompareConst (0,
                                                     inBDDBitCount,
                                                     C_BDD::kEqual,
                                                     (PMUInt32) inStartSymbolIndex) ;  
  C_BDD outUsefulSymbols = accessibility.accessibleStates (initialValue, inBDDBitCount, NULL) ;
  if (! outUsefulSymbols.isEqualToBDD (ex_outUsefulSymbols.bdd ())) {
    printf ("\n********* USEFUL SYMBOLS ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    printf ("inBDDBitCount %hu\n", inBDDBitCount) ;
    printf ("initialValue '%s'\n", initialValue.queryStringValue (HERE).cString (HERE)) ;
    printf ("accessibility '%s'\n", accessibility.queryStringValue (HERE).cString (HERE)) ;
    printf ("outUsefulSymbols '%s'\n", outUsefulSymbols.queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_initialValue '%s'\n", ex_initialValue.bdd ().queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_accessibility '%s'\n", ex_accessibility.bdd ().queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_outUsefulSymbols '%s'\n", ex_outUsefulSymbols.bdd ().queryStringValue (HERE).cString (HERE)) ;
  }
}

//---------------------------------------------------------------------------*

static bool
displayUnusefulSymbols (C_Compiler * inCompiler,
                        const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                        const C_BDD_Set1 & inUsefulSymbols,
                        const PMUInt16 inBDDBitCount,
                        C_HTML_FileWrite * inHTMLfile,
                        const cVocabulary & inVocabulary,
                        const PMSInt32 inIterationCount,
                        const bool inVerboseOptionOn) {
  TC_UniqueArray <PMUInt32> unusedNonTerminalArray ;
  cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis currentNT (inUnusedNonTerminalSymbolsForGrammar, kEnumeration_up) ;
  while (currentNT.hasCurrentObject ()) {
    const PMUInt32 nt = currentNT.current_mNonTerminalIndex (HERE).uintValue () + inVocabulary.getTerminalSymbolsCount () ;
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
  const PMUInt32 lastNonterminalToCheck = (PMUInt32) (inVocabulary.getAllSymbolsCount () - 2) ;

  C_BDD_Set1 ex_unusefulSymbols = (~ inUsefulSymbols) ;
  C_BDD_Set1 temp (ex_unusefulSymbols) ;
  temp.init (C_BDD::kLowerOrEqual, lastNonterminalToCheck) ;
  ex_unusefulSymbols &= temp ;
  temp.init (C_BDD::kStrictGreater, (PMUInt32) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; // Don't display 'empty string' symbol
  ex_unusefulSymbols &= temp ;

  const C_BDD unusefulSymbols = (~ inUsefulSymbols.bdd ())
    & C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kLowerOrEqual, lastNonterminalToCheck)
    & C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kStrictGreater, (PMUInt32) inVocabulary.getEmptyStringTerminalSymbolIndex ())
  ;

//--- Compute user useless symbol count
  TC_UniqueArray <bool> uselessArray ;
  ex_unusefulSymbols.getArray (uselessArray) ;
  PMUInt32 userUselessSymbolCount = 0 ;
  const PMSInt32 symbolsCount = inVocabulary.originalGrammarSymbolsCount () ;
  for (PMSInt32 symbol=0 ; symbol < symbolsCount ; symbol++) {
    if (uselessArray (symbol COMMA_HERE) && ! unusedNonTerminalArray.containsObjectEqualTo ( (PMUInt32) symbol)) {
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
      for (PMSInt32 symbol=0 ; symbol < symbolsCount ; symbol++) {
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
    for (PMSInt32 symbol=0 ; symbol < symbolsCount ; symbol++) {
      if (uselessArray (symbol COMMA_HERE) && ! unusedNonTerminalArray.containsObjectEqualTo ((PMUInt32) symbol)) {
        if (first) {
          first = false ;
        }else{
          warningMessage << ", " ;
        }
        inVocabulary.printInFile (warningMessage, symbol COMMA_HERE) ;
      }
    }
    inCompiler->onTheFlySemanticWarning (warningMessage COMMA_HERE) ;
  }
  
//--- Check if there are nonterminal symbols declared as unused and actually used
  PMUInt32 declaredUnusedAndActuallyUsedCount = 0 ;
  for (PMSInt32 i=0 ; i<unusedNonTerminalArray.count () ; i++) {
    if (! uselessArray ((PMSInt32) unusedNonTerminalArray (i COMMA_HERE) COMMA_HERE)) {
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
    for (PMSInt32 i=0 ; i<unusedNonTerminalArray.count () ; i++) {
      const PMSInt32 symbol = (PMSInt32) unusedNonTerminalArray (i COMMA_HERE) ;
      if (! uselessArray (symbol COMMA_HERE)) {
        if (first) {
          first = false ;
        }else{
          warningMessage << ", " ;
        }
        inVocabulary.printInFile (warningMessage, symbol COMMA_HERE) ;
      }
    }
    inCompiler->onTheFlySemanticWarning (warningMessage COMMA_HERE) ;
  }
//---
  return warning ;
}

//---------------------------------------------------------------------------*

void
useful_symbols_computations (C_Compiler * inCompiler,
                             const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                             const cPureBNFproductionsList & inPureBNFproductions,
                             const PMUInt16 inBDDBitCount,
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
  PMSInt32 iterationsCount = 0 ;
  computeUsefulSymbols (inPureBNFproductions,
                        inBDDBitCount,
                        outUsefulSymbols,
                        (PMUInt16) inVocabulary.getStartSymbol (),
                        iterationsCount) ;
  const bool warning = displayUnusefulSymbols (inCompiler,
                                               inUnusedNonTerminalSymbolsForGrammar,
                                               outUsefulSymbols,
                                               inBDDBitCount,
                                               inHTMLfile,
                                               inVocabulary,
                                               iterationsCount,
                                               inVerboseOptionOn) ;
  
  outWarningFlag |= warning ;
}

//---------------------------------------------------------------------------*
