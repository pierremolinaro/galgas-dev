//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for computing useful symbols of the pure BNF grammar            *
//                                                                           *
//  Copyright (C) 1999, ..., 2008 Pierre Molinaro.                           *
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

//---------------------------------------------------------------------------*

#include "useful_symbols_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*

static void
computeUsefulSymbols (const cPureBNFproductionsList & inPureBNFproductions,
                      const uint16 inBDDBitCount,
                      C_BDD_Set1 & ex_outUsefulSymbols,
                      const uint16 inStartSymbolIndex,
                      sint32 & outIterationsCount) {
//--- Traverse all productions for getting direct accessibility
  C_BDD_Set2 ex_accessibility (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_leftNonterminal (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_rightVocabulary (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD_Set2 ex_rightSymbol (ex_outUsefulSymbols.getDescriptor (), ex_outUsefulSymbols.getDescriptor ()) ;
  C_BDD accessibility ;
  for (sint32 i=0 ; i<inPureBNFproductions.length () ; i++) {
    const cProduction & p = inPureBNFproductions (i COMMA_HERE) ;
    if (p.aDerivation.count () > 0) {
      ex_rightVocabulary.clear () ;
      C_BDD rightVocabulary ;
      for (sint32 j=0 ; j<p.aDerivation.count () ; j++) {
        ex_rightSymbol.initDimension2 (C_BDD::kEqual, (uint16) p.aDerivation (j COMMA_HERE)) ;
        ex_rightVocabulary |= ex_rightSymbol ;
        const C_BDD rightSymbol =
           C_BDD::varCompareConst (inBDDBitCount,
                                   inBDDBitCount,
                                   C_BDD::kEqual,
                                   (uint32) p.aDerivation (j COMMA_HERE)) ;  
        rightVocabulary |= rightSymbol ;
      }
      const C_BDD leftNonterminal =
           C_BDD::varCompareConst (0,
                                   inBDDBitCount,
                                   C_BDD::kEqual,
                                   (uint32) p.aNumeroNonTerminalGauche) ;  
      accessibility |= leftNonterminal & rightVocabulary ;
      ex_leftNonterminal.initDimension1 (C_BDD::kEqual, (uint16) p.aNumeroNonTerminalGauche) ;
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
                                                     (uint32) inStartSymbolIndex) ;  
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
displayUnusefulSymbols (C_Compiler & inLexique,
                        const GGS_M_unusedNonTerminalSymbolsForGrammar & inUnusedNonTerminalSymbolsForGrammar,
                        const C_BDD_Set1 & inUsefulSymbols,
                        const uint16 inBDDBitCount,
                        C_HTML_FileWrite * inHTMLfile,
                        const cVocabulary & inVocabulary,
                        const sint32 inIterationCount,
                        const bool inVerboseOptionOn) {
  TC_UniqueArray <uint32> unusedNonTerminalArray ;
  GGS_M_unusedNonTerminalSymbolsForGrammar::cEnumerator currentNT (inUnusedNonTerminalSymbolsForGrammar) ;
  while (currentNT.hasCurrentObject ()) {
    const uint32 nt = currentNT._mSymbolIndex (HERE).uintValue () + inVocabulary.getTerminalSymbolsCount () ;
    unusedNonTerminalArray.addObject (nt) ;
    // printf ("DECLARED UNUSED %u ", nt) ;
    currentNT.next () ;
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
  const uint32 lastNonterminalToCheck = (uint32) (inVocabulary.getAllSymbolsCount () - 2) ;

  C_BDD_Set1 ex_unusefulSymbols = (~ inUsefulSymbols) ;
  C_BDD_Set1 temp (ex_unusefulSymbols) ;
  temp.init (C_BDD::kLowerOrEqual, lastNonterminalToCheck) ;
  ex_unusefulSymbols &= temp ;
  temp.init (C_BDD::kStrictGreater, (uint32) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; // Don't display 'empty string' symbol
  ex_unusefulSymbols &= temp ;

  const C_BDD unusefulSymbols = (~ inUsefulSymbols.bdd ())
    & C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kLowerOrEqual, lastNonterminalToCheck)
    & C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kStrictGreater, (uint32) inVocabulary.getEmptyStringTerminalSymbolIndex ())
  ;

//--- Compute user useless symbol count
  TC_UniqueArray <bool> array ;
  ex_unusefulSymbols.getArray (array) ;
  uint32 userUselessSymbolCount = 0 ;
  const sint32 symbolsCount = inVocabulary.originalGrammarSymbolsCount () ;
  for (sint32 symbol=0 ; symbol < symbolsCount ; symbol++) {
    if (array (symbol COMMA_HERE) && ! unusedNonTerminalArray.containsObjectEqualTo ( (uint32) symbol)) {
      userUselessSymbolCount += array (symbol COMMA_HERE) ;
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
      for (sint32 symbol=0 ; symbol < symbolsCount ; symbol++) {
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
    for (sint32 symbol=0 ; symbol < symbolsCount ; symbol++) {
      if (array (symbol COMMA_HERE) && ! unusedNonTerminalArray.containsObjectEqualTo ((uint32) symbol)) {
        if (first) {
          first = false ;
        }else{
          warningMessage << ", " ;
        }
        inVocabulary.printInFile (warningMessage, symbol COMMA_HERE) ;
      }
    }
    inLexique.onTheFlySemanticWarning (warningMessage COMMA_HERE) ;
  }
  
//--- Check if there are nonterminal symbols declared as unused and actually used
  uint32 declaredUnusedAndActuallyUsedCount = 0 ;
  for (sint32 i=0 ; i<unusedNonTerminalArray.count () ; i++) {
    if (! array ((sint32) unusedNonTerminalArray (i COMMA_HERE) COMMA_HERE)) {
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
    for (sint32 i=0 ; i<unusedNonTerminalArray.count () ; i++) {
      const sint32 symbol = (sint32) unusedNonTerminalArray (i COMMA_HERE) ;
      if (! array (symbol COMMA_HERE)) {
        if (first) {
          first = false ;
        }else{
          warningMessage << ", " ;
        }
        inVocabulary.printInFile (warningMessage, symbol COMMA_HERE) ;
      }
    }
    inLexique.onTheFlySemanticWarning (warningMessage COMMA_HERE) ;
  }
//---
  return warning ;
}

//---------------------------------------------------------------------------*

void
useful_symbols_computations (C_Compiler & inLexique,
                             const GGS_M_unusedNonTerminalSymbolsForGrammar & inUnusedNonTerminalSymbolsForGrammar,
                             const cPureBNFproductionsList & inPureBNFproductions,
                             const uint16 inBDDBitCount,
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
  sint32 iterationsCount = 0 ;
  computeUsefulSymbols (inPureBNFproductions,
                        inBDDBitCount,
                        outUsefulSymbols,
                        (uint16) inVocabulary.getStartSymbol (),
                        iterationsCount) ;
  const bool warning = displayUnusefulSymbols (inLexique,
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
