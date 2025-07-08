//--------------------------------------------------------------------------------------------------
//
//  Routines for computing followed by empty strings symbols                                     
//
//  Copyright (C) 1999-2002 Pierre Molinaro.                                                     
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

#include "follow_by_empty_computation.h"
#include "HTMLString.h"
#include "BinaryDecisionDiagramRelation.h"

//--------------------------------------------------------------------------------------------------

#include "PureBNFproductionsList.h"
#include "GrammarVocabulary.h"

//--------------------------------------------------------------------------------------------------

static void
computeNonterminalFollowedByEmpty (const PureBNFproductionsList & inProductionRules,
                                   const GenericUniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                                   const GrammarVocabulary & inVocabulary,
                                   BinaryDecisionDiagramRelation & outVocabularyFollowedByEmpty,
                                   int32_t & outIterationsCount) {
  const int32_t allSymbolsCount = inVocabulary.getAllSymbolsCount () ;
  GenericUniqueArray <bool> vocabularyFollowedByEmpty_Array (allSymbolsCount, false COMMA_HERE) ;
  vocabularyFollowedByEmpty_Array.setObjectAtIndex (true, inVocabulary.getStartSymbol () COMMA_HERE) ;

  const int32_t productionsCount = inProductionRules.mProductionArray.count () ;
  GenericUniqueArray <bool> productionIsHandled (productionsCount, false COMMA_HERE) ;

  outIterationsCount = 0 ;
  bool loop = true ;
  while (loop) {
    loop = false ;
    outIterationsCount ++ ;
    for (int32_t i=0 ; i<productionsCount ; i++) {
      const GrammarProduction & p = inProductionRules.mProductionArray (i COMMA_HERE) ;
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
      outVocabularyFollowedByEmpty.orWith (BinaryDecisionDiagramRelation (outVocabularyFollowedByEmpty.configuration (), 0, BinaryDecisionDiagram::kEqual, (uint32_t) i COMMA_HERE) COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
 
static void
displayNonterminalSymbolsFollowedByEmpty (const BinaryDecisionDiagramRelation & inVocabularyFollowedByEmpty,
                                          HTMLString & ioHTMLFileContents,
                                          const bool inPopulateHTMLHelperString,
                                          const GrammarVocabulary & inVocabulary,
                                          const int32_t inIterationsCount,
                                          const bool inVerboseOptionOn) { 
  const uint64_t n = inVocabularyFollowedByEmpty.value64Count () ;

  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p><a name=\"follow_by_empty\"></a>") ;
    ioHTMLFileContents.appendCString ("Calculus completed in ") ;
    ioHTMLFileContents.appendSigned (inIterationsCount) ;
    ioHTMLFileContents.appendCString (" iterations.\n") ;
    ioHTMLFileContents.addRawData ("</p><p>") ;
    if (n == 1) {
      ioHTMLFileContents.appendCString ("One nonterminal symbol (the start symbol) can be followed by the empty string.\n") ;
    }else{
      ioHTMLFileContents.appendUnsigned (n) ;
       ioHTMLFileContents.appendCString (" nonterminal symbols (including the start symbol) can be followed by the empty string.\n") ;
    }
    ioHTMLFileContents.addRawData ("</p>") ;
    GenericUniqueArray <uint64_t> array ;
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
    gCout.appendUnsigned (n) ;
    gCout.appendCString (".\n") ;
    gCout.flush () ;
  }
}

//--------------------------------------------------------------------------------------------------

void
follow_by_empty_computations (const PureBNFproductionsList & inPureBNFproductions,
                              HTMLString & ioHTMLFileContents,
                              const bool inPopulateHTMLHelperString,
                              const GrammarVocabulary & inVocabulary,
                              const GenericUniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                              BinaryDecisionDiagramRelation & outVocabularyFollowedByEmpty,
                              const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    gCout.appendCString ("  Nonterminal symbols followed by empty... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.appendTitleComment ("Nonterminal symbol set followed by empty string", "title") ;
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
