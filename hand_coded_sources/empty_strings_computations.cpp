//--------------------------------------------------------------------------------------------------
//
// Routines for computing empty string derivations
//
//  Copyright (C) 1999, ..., 2016 Pierre Molinaro.
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

//--------------------------------------------------------------------------------------------------

#include "empty_strings_computations.h"
#include "PureBNFproductionsList.h"
#include "GrammarVocabulary.h"

//--------------------------------------------------------------------------------------------------

static BinaryDecisionDiagramRelation
computeNonterminalSymbolsHavingEmptyDerivation (const PureBNFproductionsList & inProductionRules,
                                                const BinaryDecisionDiagramRelationConfiguration & inConfiguration) {
  BinaryDecisionDiagramRelation nonterminalSymbolsHavingEmptyDerivation (inConfiguration, false) ;
  for (int32_t i=0 ; i<inProductionRules.mProductionArray.count () ; i++) {
    const GrammarProduction & p = inProductionRules.mProductionArray (i COMMA_HERE) ;
    if (p.derivationLength () == 0) {
      nonterminalSymbolsHavingEmptyDerivation.orWith (BinaryDecisionDiagramRelation (inConfiguration, 0, BinaryDecisionDiagram::kEqual, (uint32_t) p.leftNonTerminalIndex () COMMA_HERE) COMMA_HERE) ;
    }
  }

  return nonterminalSymbolsHavingEmptyDerivation ;
}

//--------------------------------------------------------------------------------------------------

static void
printNonterminalSymbolsHavingEmptyDerivation (const BinaryDecisionDiagramRelation & inNonterminalSymbolsHavingEmptyDerivation,
                                              HTMLString & inHTMLfile) {
  GenericUniqueArray <uint64_t> valueArray ;
  inNonterminalSymbolsHavingEmptyDerivation.getValueArray (valueArray) ;
  const int32_t n = valueArray.count () ;
  inHTMLfile.addRawData ("<p><a name=\"empty_strings\"></a>") ;
  if (n == 0) {
    inHTMLfile.appendCString (" no nonterminal symbols has a empty production.\n") ;
  }else if (n == 1) {
    inHTMLfile.appendCString (" 1 nonterminal symbols has a empty production:\n") ;
  }else{
    inHTMLfile.appendSigned (n) ;
    inHTMLfile.appendCString (" nonterminal symbols have a empty production:\n") ;
  }
  inHTMLfile.addRawData ("</p>") ;
  if (n > 0) {
    inHTMLfile.addRawData ("<table class=\"result\">") ;
    for (int32_t i=0 ; i<valueArray.count () ; i++) {
      inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
      inHTMLfile.appendSigned (i) ;
      inHTMLfile.addRawData ("</td><td><code>") ;
      inHTMLfile.appendString (inNonterminalSymbolsHavingEmptyDerivation.configuration().constantNameForVariableAndValue(0, (uint32_t) valueArray (i COMMA_HERE) COMMA_HERE)) ;
      inHTMLfile.addRawData ("</code></td></tr>\n") ;
    }
    inHTMLfile.addRawData ("</table>") ;
  }
}

//--------------------------------------------------------------------------------------------------

static BinaryDecisionDiagramRelation
computeNonterminalDerivingInEmptyString (const PureBNFproductionsList & inProductionRules,
                                         const BinaryDecisionDiagramRelation & inNonTerminalHavingEmptyDerivation,
                                         GenericUniqueArray <bool> & outVocabulaireSeDerivantEnVide,
                                         const uint32_t inAllSymbolsCount,
                                         int32_t & outIterationsCount) {
  const int32_t productionCount = inProductionRules.mProductionArray.count () ;

  { GenericUniqueArray <bool> tempo ((int32_t) inAllSymbolsCount, false COMMA_HERE) ;
    swap (tempo, outVocabulaireSeDerivantEnVide) ;
  }

  GenericUniqueArray <bool> productionTraitee (productionCount, false COMMA_HERE) ;

  outIterationsCount = 0 ;
  bool onProgresse = true ;
  while (onProgresse) {
    onProgresse = false ;
    outIterationsCount ++ ;
    for (int32_t i=0 ; i<productionCount ; i++) {
      const GrammarProduction & p = inProductionRules.mProductionArray (i COMMA_HERE) ;
      if (! productionTraitee (i COMMA_HERE)) {
        const int32_t n = p.derivationLength () ;
        bool estVide = true ;
        for (int32_t j=0 ; (j<n) && estVide ; j++) {
          estVide = outVocabulaireSeDerivantEnVide (p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
        }
        if (estVide) {
          outVocabulaireSeDerivantEnVide (p.leftNonTerminalIndex () COMMA_HERE) = true ;
          productionTraitee (i COMMA_HERE) = true ;
          onProgresse = true ;
        }
      }
    }
  }

//--- Contruire le bdd
  BinaryDecisionDiagramRelation result = inNonTerminalHavingEmptyDerivation ;
  for (uint32_t i=0 ; i<inAllSymbolsCount ; i++) {
    if (outVocabulaireSeDerivantEnVide ((int32_t) i COMMA_HERE)) {
      result.orWith (BinaryDecisionDiagramRelation (inNonTerminalHavingEmptyDerivation.configuration(), 0, BinaryDecisionDiagram::kEqual, i COMMA_HERE) COMMA_HERE) ;
    }
  }

  return result ;
}

//--------------------------------------------------------------------------------------------------

static void
printNonterminalDerivingInEmptyString (const BinaryDecisionDiagramRelation & inVocabularyDerivingToEmpty,
                                       const BinaryDecisionDiagramRelation & inNonTerminalHavingEmptyDerivation,
                                       HTMLString & ioHTMLFileContents,
                                       const bool inPopulateHTMLstring,
                                       const int32_t inIterationsCount,
                                       const bool inVerboseOptionOn) {
  const uint64_t t = inVocabularyDerivingToEmpty.value64Count () ;
  if (inPopulateHTMLstring) {
    ioHTMLFileContents.addRawData ("<p>") ;
    ioHTMLFileContents.appendCString ("Nonterminal symbols deriving indirectly in empty string : calculus in ") ;
    ioHTMLFileContents.appendSigned (inIterationsCount) ;
    ioHTMLFileContents.appendCString (" iterations.\n") ;
    ioHTMLFileContents.addRawData ("</p>") ;
    const BinaryDecisionDiagramRelation newNonterminal = inVocabularyDerivingToEmpty.andOp (~ inNonTerminalHavingEmptyDerivation COMMA_HERE) ;
    const uint64_t n = newNonterminal.value64Count () ;
    if (n == 0) {
      ioHTMLFileContents.addRawData ("<p>") ;
      ioHTMLFileContents.appendCString ("No more than those deriving directly to the empty string.\n") ;
      ioHTMLFileContents.addRawData ("</p>") ;
    }else{
      ioHTMLFileContents.addRawData ("<p>") ;
      ioHTMLFileContents.appendUnsigned (n) ;
      ioHTMLFileContents.appendCString (" nonterminal symbol(s) in addition to those deriving directly to the empty string :\n") ;
      ioHTMLFileContents.addRawData ("</p>") ;
      GenericUniqueArray <uint64_t> nonTerminalArray ;
      newNonterminal.getValueArray (nonTerminalArray) ;
      int32_t index = 0 ;
      ioHTMLFileContents.addRawData ("<table class=\"result\">") ;
      for (int32_t i=0 ; i<nonTerminalArray.count () ; i++) {
        if (nonTerminalArray (i COMMA_HERE)) {
          ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
          ioHTMLFileContents.appendSigned (index) ;
          index ++ ;
          ioHTMLFileContents.addRawData ("</td><td><code>") ;
          ioHTMLFileContents.appendString (newNonterminal.configuration().constantNameForVariableAndValue(0, (uint32_t) nonTerminalArray (i COMMA_HERE) COMMA_HERE)) ;
          ioHTMLFileContents.addRawData ("</code></td></tr>") ;
        }
      }
      ioHTMLFileContents.addRawData ("</table>") ;
    }
  }
  if (inVerboseOptionOn) {
    gCout.appendUnsigned (t) ;
    gCout.appendCString (".\n") ;
    gCout.flush () ;
  }
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation
empty_strings_computations (const PureBNFproductionsList & inPureBNFproductions,
                            HTMLString & ioHTMLFileContents,
                            const bool inPopulateHTMLstring,
                            GenericUniqueArray <bool> & outVocabularyDerivingToEmpty_Array,
                            const BinaryDecisionDiagramRelationConfiguration & inVocabularyConfiguration,
                            const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    gCout.appendCString ("  Nonterminal symbols deriving in empty... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLstring) {
    ioHTMLFileContents.appendTitleComment ("Searching for nonterminal symbols deriving in empty string", "title") ;
  }

  const BinaryDecisionDiagramRelation nonTerminalHavingEmptyDerivation
    = computeNonterminalSymbolsHavingEmptyDerivation (inPureBNFproductions,
                                                      inVocabularyConfiguration) ;
  if (inPopulateHTMLstring) {
    printNonterminalSymbolsHavingEmptyDerivation (nonTerminalHavingEmptyDerivation, ioHTMLFileContents) ;
  }

//--- Compute non terminal symbol deriving in empty string
  const uint32_t allSymbolCount = inVocabularyConfiguration.constantCountForVariable (0 COMMA_HERE) ;

  int32_t iterationCount = 0 ;
  const BinaryDecisionDiagramRelation vocabularyDerivingToEmpty
     = computeNonterminalDerivingInEmptyString (inPureBNFproductions,
                                                nonTerminalHavingEmptyDerivation,
                                                outVocabularyDerivingToEmpty_Array,
                                                allSymbolCount,
                                                iterationCount) ;

  printNonterminalDerivingInEmptyString (vocabularyDerivingToEmpty,
                                         nonTerminalHavingEmptyDerivation,
                                         ioHTMLFileContents,
                                         inPopulateHTMLstring,
                                         iterationCount,
                                         inVerboseOptionOn) ;
  return vocabularyDerivingToEmpty ;
}

//--------------------------------------------------------------------------------------------------
