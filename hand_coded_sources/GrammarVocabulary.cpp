//--------------------------------------------------------------------------------------------------
//
//  Pure BNF grammar vocabulary                                                                  
//
//  Copyright (C) 1999, ..., 2024 Pierre Molinaro.
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

#include "MF_MemoryControl.h"

//--------------------------------------------------------------------------------------------------

#include "GrammarVocabulary.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

GrammarVocabulary::GrammarVocabulary (void) :
mStringsArray (),
mGenerateChoiceArray (),
mTerminalSymbolsCount (0),
mOriginalGrammarSymbolsCount (0),
mStartSymbol (0) {
}

//--------------------------------------------------------------------------------------------------

GrammarVocabulary::~GrammarVocabulary (void) {
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::
buildVocabulary (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                 const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                 const uint32_t inOriginalGrammarStartSymbol) {
  mOriginalGrammarSymbolsCount = 0 ;
//--- Append terminal symbols
  mTerminalSymbolsCount = (int32_t) inTerminalSymbolMap.count () ;
  cEnumerator_terminalSymbolsMapForGrammarAnalysis t (inTerminalSymbolMap, kENUMERATION_UP) ;
  while (t.hasCurrentObject ()) {
    mStringsArray.appendObject ("") ;  
    t.gotoNextObject () ;
  }
  t.rewind () ;
  while (t.hasCurrentObject ()) {
    const int32_t idx = (int32_t) t.current_mTerminalIndex (HERE).uintValue () ;
    mStringsArray (idx COMMA_HERE) = t.current_lkey (HERE).mProperty_string.stringValue () ;  
    t.gotoNextObject () ;
  }
//--- One more entry for the empty string symbol (displayed '$$')
  mStringsArray.appendObject ("") ; // Empty string symbol
  mTerminalSymbolsCount ++ ;
//--- Append non terminal symbols from original grammar
  cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis, kENUMERATION_UP) ;
  while (nonTerminal.hasCurrentObject ()) {
    mStringsArray.appendObject (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ()) ;  
    nonTerminal.gotoNextObject () ;
  }
  mOriginalGrammarSymbolsCount = mStringsArray.count () ;
//--- For all symbols of original grammar, don't generate choice
  mGenerateChoiceArray.removeAllKeepingCapacity () ;
  mGenerateChoiceArray.appendObjects (mOriginalGrammarSymbolsCount, false) ;
//--- Define pure BNF grammar start symbol index
  mStartSymbol = mTerminalSymbolsCount + (int32_t) inOriginalGrammarStartSymbol ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getEmptyStringTerminalSymbolIndex (void) const {
  return mTerminalSymbolsCount - 1 ;
}

//--------------------------------------------------------------------------------------------------

String GrammarVocabulary::getSymbol (const int32_t inSymbolIndex
                                     COMMA_LOCATION_ARGS) const {
  return mStringsArray (inSymbolIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getStartSymbol (void) const {
  return mStartSymbol ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getTerminalSymbolsCount (void) const {
  return mTerminalSymbolsCount ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getAllSymbolsCount (void) const {
  return mStringsArray.count () ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getNonTerminalSymbolsCount (void) const {
  return mStringsArray.count () - mTerminalSymbolsCount ;
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::addNonTerminalSymbol (const char * inPrefix,
                                              const String & inClassName,
                                              const int32_t inOrderInSourceFile,
                                              const bool inGenerateChoice) {
  String nt  ;
  nt.appendString (inPrefix) ;
  nt.appendString (inClassName.identifierRepresentation ()) ;
  nt.appendCString ("_") ;
  nt.appendSigned (inOrderInSourceFile) ;
  mStringsArray.appendObject (nt) ;
  mGenerateChoiceArray.appendObject (inGenerateChoice) ;
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::addAugmentedSymbol (void) {
  mStringsArray.appendObject ("") ;
  mGenerateChoiceArray.appendObject (false) ;
}

//--------------------------------------------------------------------------------------------------

bool GrammarVocabulary::needToGenerateChoice (const int32_t inSymbolIndex
                                              COMMA_LOCATION_ARGS) const {
  return mGenerateChoiceArray (inSymbolIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::printInFile (AbstractOutputStream & inHTMLfile,
                                     const int32_t inSymbolIndex
                                     COMMA_LOCATION_ARGS) const {
  if (inSymbolIndex < mTerminalSymbolsCount) {
    inHTMLfile.appendCString ("$") ;
    inHTMLfile.appendString (mStringsArray (inSymbolIndex COMMA_THERE)) ;
    inHTMLfile.appendCString ("$") ;
  }else{
    inHTMLfile.appendCString ("<") ;
    inHTMLfile.appendString (mStringsArray (inSymbolIndex COMMA_THERE)) ;
    inHTMLfile.appendCString (">") ;
  }
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType GrammarVocabulary::getVocabularyBDDType (void) const {
  TC_UniqueArray <String> constantNameArray ;
  for (int32_t i=0 ; i<mTerminalSymbolsCount ; i++) {
    constantNameArray.appendObject (String ("$") + mStringsArray (i COMMA_HERE) + "$") ;
  }
  for (int32_t i=mTerminalSymbolsCount ; i<mStringsArray.count () ; i++) {
    constantNameArray.appendObject (String ("<") + mStringsArray (i COMMA_HERE) + ">") ;
  }
  return BinaryDecisionDiagramRelationSingleType (".vocabulary.", constantNameArray COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
