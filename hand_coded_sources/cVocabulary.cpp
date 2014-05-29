//-----------------------------------------------------------------------------*
//                                                                             *
//  Pure BNF grammar vocabulary                                              *
//                                                                             *
//  Copyright (C) 1999, ..., 2010 Pierre Molinaro.                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
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
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"

//-----------------------------------------------------------------------------*

#include "cVocabulary.h"
#include "grammarCompilation.h"

//-----------------------------------------------------------------------------*

cVocabulary::cVocabulary (void) :
mStringsArray (),
mGenerateChoiceArray (),
mTerminalSymbolsCount (0),
mOriginalGrammarSymbolsCount (0),
mStartSymbol (0) {
}

//-----------------------------------------------------------------------------*

cVocabulary::~cVocabulary (void) {
}

//-----------------------------------------------------------------------------*

void cVocabulary::
buildVocabulary (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                 const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                 const uint32_t inOriginalGrammarStartSymbol) {
  mOriginalGrammarSymbolsCount = 0 ;
//--- Append terminal symbols
  mTerminalSymbolsCount = (int32_t) inTerminalSymbolMap.count () ;
  cEnumerator_terminalSymbolsMapForGrammarAnalysis t (inTerminalSymbolMap, kEnumeration_up) ;
  while (t.hasCurrentObject ()) {
    mStringsArray.addObject ("") ;  
    t.gotoNextObject () ;
  }
  t.rewind () ;
  while (t.hasCurrentObject ()) {
   // printf ("ENTER TERMINAL: %u '%s'\n", t.current_mTerminalIndex ().uintValue (), t.current_lkey (HERE).mAttribute_string.stringValue ().cString (HERE)) ;
    const int32_t idx = (int32_t) t.current_mTerminalIndex (HERE).uintValue () ;
    mStringsArray (idx COMMA_HERE) = t.current_lkey (HERE).mAttribute_string.stringValue () ;  
    t.gotoNextObject () ;
  }
//--- One more entry for the empty string symbol (displayed '$$')
  mStringsArray.addObject ("") ; // Empty string symbol
  mTerminalSymbolsCount ++ ;
//--- Append non terminal symbols from original grammar
  cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis, kEnumeration_up) ;
  while (nonTerminal.hasCurrentObject ()) {
    mStringsArray.addObject (nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ()) ;  
    nonTerminal.gotoNextObject () ;
  }
/* for (int32_t i=0 ; i<mStringsArray.count () ; i++) {
    printf ("VOCABULARY '%s'\n", mStringsArray (i COMMA_HERE).cString (HERE));
  }
  printf ("----------------\n") ;
*/
  mOriginalGrammarSymbolsCount = mStringsArray.count () ;
//--- For all symbols of original grammar, don't generate choice
  mGenerateChoiceArray.setCountToZero () ;
  mGenerateChoiceArray.addObjects (mOriginalGrammarSymbolsCount, false) ;
//--- Define pure BNF grammar start symbol index
  mStartSymbol = mTerminalSymbolsCount + (int32_t) inOriginalGrammarStartSymbol ;
}

//-----------------------------------------------------------------------------*

int32_t cVocabulary::getEmptyStringTerminalSymbolIndex (void) const {
  return mTerminalSymbolsCount - 1 ;
}

//-----------------------------------------------------------------------------*

C_String cVocabulary::getSymbol (const int32_t inSymbolIndex
                                 COMMA_LOCATION_ARGS) const {
  return mStringsArray (inSymbolIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

int32_t cVocabulary::getStartSymbol (void) const {
  return mStartSymbol ;
}

//-----------------------------------------------------------------------------*

int32_t cVocabulary::getTerminalSymbolsCount (void) const {
  return mTerminalSymbolsCount ;
}

//-----------------------------------------------------------------------------*

int32_t cVocabulary::getAllSymbolsCount (void) const {
  return mStringsArray.count () ;
}

//-----------------------------------------------------------------------------*

int32_t cVocabulary::getNonTerminalSymbolsCount (void) const {
  return mStringsArray.count () - mTerminalSymbolsCount ;
}

//-----------------------------------------------------------------------------*

void cVocabulary::addNonTerminalSymbol (const char * inPrefix,
                                        const C_String & inClassName,
                                        const int32_t inOrderInSourceFile,
                                        const bool inGenerateChoice) {
  C_String nt  ;
  nt << inPrefix
     << inClassName.identifierRepresentation ()
     << "_" ;
  nt.appendSigned (inOrderInSourceFile) ;
  mStringsArray.addObject (nt) ;
  mGenerateChoiceArray.addObject (inGenerateChoice) ;
}

//-----------------------------------------------------------------------------*

void cVocabulary::addAugmentedSymbol (void) {
  mStringsArray.addObject ("") ;
  mGenerateChoiceArray.addObject (false) ;
}

//-----------------------------------------------------------------------------*

bool cVocabulary::needToGenerateChoice (const int32_t inSymbolIndex
                                        COMMA_LOCATION_ARGS) const {
  return mGenerateChoiceArray (inSymbolIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

void cVocabulary::printInFile (AC_OutputStream & inHTMLfile,
                               const int32_t inSymbolIndex
                               COMMA_LOCATION_ARGS) const {
  if (inSymbolIndex < mTerminalSymbolsCount) {
    inHTMLfile << "$" << mStringsArray (inSymbolIndex COMMA_THERE) << "$" ;
  }else{
    inHTMLfile << "<" << mStringsArray (inSymbolIndex COMMA_THERE) << ">" ;
  }
}

//-----------------------------------------------------------------------------*

C_RelationSingleType cVocabulary::getVocabularyBDDType (void) const {
  TC_UniqueArray <C_String> constantNameArray ;
  for (int32_t i=0 ; i<mTerminalSymbolsCount ; i++) {
    constantNameArray.addObject (C_String ("$") + mStringsArray (i COMMA_HERE) + "$") ;
  }
  for (int32_t i=mTerminalSymbolsCount ; i<mStringsArray.count () ; i++) {
    constantNameArray.addObject (C_String ("<") + mStringsArray (i COMMA_HERE) + ">") ;
  }
  return C_RelationSingleType (".vocabulary.", constantNameArray COMMA_HERE) ;
}

//-----------------------------------------------------------------------------*
