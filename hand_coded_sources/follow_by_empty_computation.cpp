//--------------------------------------------------------------------------------------------------
//
//  Routines for computing followed by empty strings symbols                                     
//
//  Copyright (C) 1999-2002 Pierre Molinaro.                                                     
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

#include "follow_by_empty_computation.h"
#include "HTMLString.h"
#include "C_Relation.h"

//--------------------------------------------------------------------------------------------------

#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//--------------------------------------------------------------------------------------------------

static void
computeNonterminalFollowedByEmpty (const cPureBNFproductionsList & inProductionRules,
                                   const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                                   const cVocabulary & inVocabulary,
                                   C_Relation & outVocabularyFollowedByEmpty,
                                   int32_t & outIterationsCount) {
  const int32_t allSymbolsCount = inVocabulary.getAllSymbolsCount () ;
  TC_UniqueArray <bool> vocabularyFollowedByEmpty_Array (allSymbolsCount, false COMMA_HERE) ;
  vocabularyFollowedByEmpty_Array.setObjectAtIndex (true, inVocabulary.getStartSymbol () COMMA_HERE) ;

  const int32_t productionsCount = inProductionRules.mProductionArray.count () ;
  TC_UniqueArray <bool> productionIsHandled (productionsCount, false COMMA_HERE) ;

  outIterationsCount = 0 ;
  bool loop = true ;
  while (loop) {
    loop = false ;
    outIterationsCount ++ ;
    for (int32_t i=0 ; i<productionsCount ; i++) {
      const cProduction & p = inProductionRules.mProductionArray (i COMMA_HERE) ;
      if (! productionIsHandled (i COMMA_HERE)) {
        if (vocabularyFollowedByEmpty_Array (p.leftNonTerminalIndex () COMMA_HERE)) {
          const int32_t n = p.derivationLength () ;
          bool followedByEmpty = true ;
          for (int32_t j=n-1 ; (j>=0) && followedByEmpty ; j--) {
            vocabularyFollowedByEmpty_Array (p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) = true ;
            followedByEmpty = inVocabularyDerivingToEmpty_Array (p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
          }
          productionIsHandled (i COMMA_HERE) = true ;
          loop = true ;
        }
      }
    }
  }
  
//--- Contruire le bdd, limité aux seuls non terminaux
  macroAssert (vocabularyFollowedByEmpty_Array.count () == allSymbolsCount, "vocabularyFollowedByEmpty_Array.count () == %lld != allSymbolsCount = %lld", vocabularyFollowedByEmpty_Array.count (), allSymbolsCount)
  for (int32_t i=inVocabulary.getTerminalSymbolsCount () ; i<vocabularyFollowedByEmpty_Array.count () ; i++) {
    if (vocabularyFollowedByEmpty_Array (i COMMA_HERE)) {
      outVocabularyFollowedByEmpty.orWith (C_Relation (outVocabularyFollowedByEmpty.configuration (), 0, C_BDD::kEqual, (uint32_t) i COMMA_HERE) COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
 
static void
displayNonterminalSymbolsFollowedByEmpty (const C_Relation & inVocabularyFollowedByEmpty,
                                          HTMLString & ioHTMLFileContents,
                                          const bool inPopulateHTMLHelperString,
                                          const cVocabulary & inVocabulary,
                                          const int32_t inIterationsCount,
                                          const bool inVerboseOptionOn) { 
  const uint64_t n = inVocabularyFollowedByEmpty.value64Count () ;

  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p><a name=\"follow_by_empty\"></a>") ;
    ioHTMLFileContents.addString ("Calculus completed in ") ;
    ioHTMLFileContents.addSigned (inIterationsCount) ;
    ioHTMLFileContents.addString (" iterations.\n") ;
    ioHTMLFileContents.addRawData ("</p><p>") ;
    if (n == 1) {
      ioHTMLFileContents.addString ("One nonterminal symbol (the start symbol) can be followed by the empty string.\n") ;
    }else{
      ioHTMLFileContents.addUnsigned (n) ;
       ioHTMLFileContents.addString (" nonterminal symbols (including the start symbol) can be followed by the empty string.\n") ;
    }
    ioHTMLFileContents.addRawData ("</p>") ;
    TC_UniqueArray <uint64_t> array ;
    inVocabularyFollowedByEmpty.getValueArray (array) ;
    ioHTMLFileContents.addRawData ("<table class=\"result\">") ;
    for (int32_t i=0 ; i < array.count () ; i++) {
      ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      const uint64_t symbol = array (i COMMA_HERE) ;
      inVocabulary.printInFile (ioHTMLFileContents, (int32_t) symbol COMMA_HERE) ;
      ioHTMLFileContents.addRawData ("</code></td></tr>") ;
    }
    ioHTMLFileContents.addRawData ("</table>") ;
  }
  if (inVerboseOptionOn) {
    gCout.addUnsigned (n) ;
    gCout.addString (".\n") ;
    gCout.flush () ;
  }
}

//--------------------------------------------------------------------------------------------------

void
follow_by_empty_computations (const cPureBNFproductionsList & inPureBNFproductions,
                              HTMLString & ioHTMLFileContents,
                              const bool inPopulateHTMLHelperString,
                              const cVocabulary & inVocabulary,
                              const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                              C_Relation & outVocabularyFollowedByEmpty,
                              const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    gCout.addString ("  Nonterminal symbols followed by empty... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addCppTitleComment ("Nonterminal symbol set followed by empty string", "title") ;
  }

//--- Compute nonterminal symbols followed by empty 
  int32_t iterationsCount = 0 ;
  computeNonterminalFollowedByEmpty (inPureBNFproductions,
                                     inVocabularyDerivingToEmpty_Array,
                                     inVocabulary,
                                     outVocabularyFollowedByEmpty,
                                     iterationsCount) ;

//--- Display nonterminal symbols followed by empty 
 displayNonterminalSymbolsFollowedByEmpty (outVocabularyFollowedByEmpty,
                                           ioHTMLFileContents,
                                           inPopulateHTMLHelperString,
                                           inVocabulary,
                                           iterationsCount,
                                           inVerboseOptionOn) ; 
}

//--------------------------------------------------------------------------------------------------
