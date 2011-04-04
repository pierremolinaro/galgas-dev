//---------------------------------------------------------------------------*
//                                                                           *
//  Pure BNF grammar vocabulary                                              *
//                                                                           *
//  Copyright (C) 1999, ..., 2010 Pierre Molinaro.                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
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
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"

//---------------------------------------------------------------------------*

#include "cVocabulary.h"
#include "grammarCompilation.h"

//---------------------------------------------------------------------------*

cVocabulary::cVocabulary (void) :
mStringsArray (),
mGenerateChoiceArray (),
mTerminalSymbolsCount (0),
mOriginalGrammarSymbolsCount (0),
mStartSymbol (0) {
}

//---------------------------------------------------------------------------*

cVocabulary::~cVocabulary (void) {
}

//---------------------------------------------------------------------------*

void cVocabulary::
buildVocabulary (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                 const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                 const PMUInt32 inOriginalGrammarStartSymbol) {
  mOriginalGrammarSymbolsCount = 0 ;
//--- Append terminal symbols
  mTerminalSymbolsCount = (PMSInt32) inTerminalSymbolMap.count () ;
  cEnumerator_terminalSymbolsMapForGrammarAnalysis t (inTerminalSymbolMap, kEnumeration_up) ;
  while (t.hasCurrentObject ()) {
    mStringsArray.addObject ("") ;  
    t.gotoNextObject () ;
  }
  t.rewind () ;
  while (t.hasCurrentObject ()) {
   // printf ("ENTER TERMINAL: %u '%s'\n", t.current_mTerminalIndex ().uintValue (), t.current_lkey (HERE).mAttribute_string.stringValue ().cString (HERE)) ;
    const PMSInt32 idx = (PMSInt32) t.current_mTerminalIndex (HERE).uintValue () ;
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
/* for (PMSInt32 i=0 ; i<mStringsArray.count () ; i++) {
    printf ("VOCABULARY '%s'\n", mStringsArray (i COMMA_HERE).cString (HERE));
  }
  printf ("----------------\n") ;
*/
  mOriginalGrammarSymbolsCount = mStringsArray.count () ;
//--- For all symbols of original grammar, don't generate choice
  mGenerateChoiceArray.clear () ;
  mGenerateChoiceArray.addObjects (mOriginalGrammarSymbolsCount, false) ;
//--- Define pure BNF grammar start symbol index
  mStartSymbol = mTerminalSymbolsCount + (PMSInt32) inOriginalGrammarStartSymbol ;
}

//---------------------------------------------------------------------------*

PMSInt32 cVocabulary::getEmptyStringTerminalSymbolIndex (void) const {
  return mTerminalSymbolsCount - 1 ;
}

//---------------------------------------------------------------------------*

C_String cVocabulary::getSymbol (const PMSInt32 inSymbolIndex
                                 COMMA_LOCATION_ARGS) const {
  return mStringsArray (inSymbolIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

PMSInt32 cVocabulary::getStartSymbol (void) const {
  return mStartSymbol ;
}

//---------------------------------------------------------------------------*

PMSInt32 cVocabulary::getTerminalSymbolsCount (void) const {
  return mTerminalSymbolsCount ;
}

//---------------------------------------------------------------------------*

PMSInt32 cVocabulary::getAllSymbolsCount (void) const {
  return mStringsArray.count () ;
}

//---------------------------------------------------------------------------*

PMSInt32 cVocabulary::getNonTerminalSymbolsCount (void) const {
  return mStringsArray.count () - mTerminalSymbolsCount ;
}

//---------------------------------------------------------------------------*

void cVocabulary::addNonTerminalSymbol (const char * inPrefix,
                                        const C_String & inClassName,
                                        const PMSInt32 inOrderInSourceFile,
                                        const bool inGenerateChoice) {
  C_String nt  ;
  nt << inPrefix
     << inClassName.identifierRepresentation ()
     << "_" ;
  nt.appendSigned (inOrderInSourceFile) ;
  mStringsArray.addObject (nt) ;
  mGenerateChoiceArray.addObject (inGenerateChoice) ;
}

//---------------------------------------------------------------------------*

void cVocabulary::addAugmentedSymbol (void) {
  mStringsArray.addObject ("") ;
  mGenerateChoiceArray.addObject (false) ;
}

//---------------------------------------------------------------------------*

bool cVocabulary::needToGenerateChoice (const PMSInt32 inSymbolIndex
                                        COMMA_LOCATION_ARGS) const {
  return mGenerateChoiceArray (inSymbolIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

void cVocabulary::printInFile (AC_OutputStream & inHTMLfile,
                               const PMSInt32 inSymbolIndex
                               COMMA_LOCATION_ARGS) const {
  if (inSymbolIndex < mTerminalSymbolsCount) {
    inHTMLfile << "$" << mStringsArray (inSymbolIndex COMMA_THERE) << "$" ;
  }else{
    inHTMLfile << "<" << mStringsArray (inSymbolIndex COMMA_THERE) << ">" ;
  }
}

//---------------------------------------------------------------------------*
