//--------------------------------------------------------------------------------------------------
//
//  Pure BNF grammar vocabulary                                                                  
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
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

#include "utilities/MF_MemoryControl.h"

//--------------------------------------------------------------------------------------------------

#include "cVocabulary.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

cVocabulary::cVocabulary (void) :
mStringsArray (),
mGenerateChoiceArray (),
mTerminalSymbolsCount (0),
mOriginalGrammarSymbolsCount (0),
mStartSymbol (0) {
}

//--------------------------------------------------------------------------------------------------

cVocabulary::~cVocabulary (void) {
}

//--------------------------------------------------------------------------------------------------

void cVocabulary::
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

int32_t cVocabulary::getEmptyStringTerminalSymbolIndex (void) const {
  return mTerminalSymbolsCount - 1 ;
}

//--------------------------------------------------------------------------------------------------

String cVocabulary::getSymbol (const int32_t inSymbolIndex
                                 COMMA_LOCATION_ARGS) const {
  return mStringsArray (inSymbolIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

int32_t cVocabulary::getStartSymbol (void) const {
  return mStartSymbol ;
}

//--------------------------------------------------------------------------------------------------

int32_t cVocabulary::getTerminalSymbolsCount (void) const {
  return mTerminalSymbolsCount ;
}

//--------------------------------------------------------------------------------------------------

int32_t cVocabulary::getAllSymbolsCount (void) const {
  return mStringsArray.count () ;
}

//--------------------------------------------------------------------------------------------------

int32_t cVocabulary::getNonTerminalSymbolsCount (void) const {
  return mStringsArray.count () - mTerminalSymbolsCount ;
}

//--------------------------------------------------------------------------------------------------

void cVocabulary::addNonTerminalSymbol (const char * inPrefix,
                                        const String & inClassName,
                                        const int32_t inOrderInSourceFile,
                                        const bool inGenerateChoice) {
  String nt  ;
  nt.addString (inPrefix) ;
  nt.addString (inClassName.identifierRepresentation ()) ;
  nt.addString ("_") ;
  nt.addSigned (inOrderInSourceFile) ;
  mStringsArray.appendObject (nt) ;
  mGenerateChoiceArray.appendObject (inGenerateChoice) ;
}

//--------------------------------------------------------------------------------------------------

void cVocabulary::addAugmentedSymbol (void) {
  mStringsArray.appendObject ("") ;
  mGenerateChoiceArray.appendObject (false) ;
}

//--------------------------------------------------------------------------------------------------

bool cVocabulary::needToGenerateChoice (const int32_t inSymbolIndex
                                        COMMA_LOCATION_ARGS) const {
  return mGenerateChoiceArray (inSymbolIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void cVocabulary::printInFile (AbstractOutputStream & inHTMLfile,
                               const int32_t inSymbolIndex
                               COMMA_LOCATION_ARGS) const {
  if (inSymbolIndex < mTerminalSymbolsCount) {
    inHTMLfile.addString ("$") ;
    inHTMLfile.addString (mStringsArray (inSymbolIndex COMMA_THERE)) ;
    inHTMLfile.addString ("$") ;
  }else{
    inHTMLfile.addString ("<") ;
    inHTMLfile.addString (mStringsArray (inSymbolIndex COMMA_THERE)) ;
    inHTMLfile.addString (">") ;
  }
}

//--------------------------------------------------------------------------------------------------

C_RelationSingleType cVocabulary::getVocabularyBDDType (void) const {
  TC_UniqueArray <String> constantNameArray ;
  for (int32_t i=0 ; i<mTerminalSymbolsCount ; i++) {
    constantNameArray.appendObject (String ("$") + mStringsArray (i COMMA_HERE) + "$") ;
  }
  for (int32_t i=mTerminalSymbolsCount ; i<mStringsArray.count () ; i++) {
    constantNameArray.appendObject (String ("<") + mStringsArray (i COMMA_HERE) + ">") ;
  }
  return C_RelationSingleType (".vocabulary.", constantNameArray COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
