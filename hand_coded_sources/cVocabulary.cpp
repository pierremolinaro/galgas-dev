//---------------------------------------------------------------------------*
//                                                                           *
//  Pure BNF grammar vocabulary                                              *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
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

#include "memory/M_memory_control.h"
#include "galgas/C_galgas_stringset.h"
#include "files/C_text_file_write.h"

//---------------------------------------------------------------------------*

#include "cVocabulary.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

cVocabulary::cVocabulary (void) {
  mOriginalGrammarSymbolsCount = 0 ;
  mStartSymbol = 0 ;
}

//---------------------------------------------------------------------------*

cVocabulary::~cVocabulary (void) {
}

//---------------------------------------------------------------------------*

void cVocabulary::
build (const GGS_M_terminalSymbolsMapForUse & inTerminalSymbolMap,
       const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
       const uint32 inOriginalGrammarStartSymbol) {
  mOriginalGrammarSymbolsCount = 0 ;
//--- Append terminal symbols
  mTerminalSymbolsCount = inTerminalSymbolMap.count () ;
  GGS_M_terminalSymbolsMapForUse::element_type * t = inTerminalSymbolMap.getFirstItem () ;
  while (t != NULL) {
    macroValidPointer (t) ;
    mStringsArray.addObject (t->mKey) ;  
    t = t->getNextItem () ;
  }
//--- One more entry for the empty string symbol (displayed '$$')
  mStringsArray.addObject ("") ; // Empty string symbol
  mTerminalSymbolsCount ++ ;
//--- Append non terminal symbols from original grammar
  GGS_M_nonTerminalSymbolsForGrammar::element_type * nonTerminal = inNonterminalSymbolsMapForGrammar.getFirstItem () ;
  while (nonTerminal != NULL) {
    macroValidPointer (nonTerminal) ;
    mStringsArray.addObject (nonTerminal->mKey) ;  
    nonTerminal = nonTerminal->getNextItem () ;
  }
  mOriginalGrammarSymbolsCount = mStringsArray.count () ;
//--- For all symbols of original grammar, don't generate choice
  mGenerateChoiceArray.clear () ;
  mGenerateChoiceArray.addObjects (mOriginalGrammarSymbolsCount, false) ;
//--- Define pure BNF grammar start symbol index
  mStartSymbol = mTerminalSymbolsCount + (sint32) inOriginalGrammarStartSymbol ;
}

//---------------------------------------------------------------------------*

sint32 cVocabulary::getEmptyStringTerminalSymbolIndex (void) const {
  return mTerminalSymbolsCount - 1 ;
}

//---------------------------------------------------------------------------*

C_string cVocabulary::getSymbol (const sint32 inSymbolIndex
                                 COMMA_LOCATION_ARGS) const {
  return mStringsArray (inSymbolIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

sint32 cVocabulary::getStartSymbol (void) const {
  return mStartSymbol ;
}

//---------------------------------------------------------------------------*

sint32 cVocabulary::getTerminalSymbolsCount (void) const {
  return mTerminalSymbolsCount ;
}

//---------------------------------------------------------------------------*

sint32 cVocabulary::getAllSymbolsCount (void) const {
  return mStringsArray.count () ;
}

//---------------------------------------------------------------------------*

sint32 cVocabulary::getNonTerminalSymbolsCount (void) const {
  return mStringsArray.count () - mTerminalSymbolsCount ;
}

//---------------------------------------------------------------------------*

void cVocabulary::addNonTerminalSymbol (const char * inPrefix,
                                        const C_string & inClassName,
                                        const sint32 inOrderInSourceFile,
                                        const bool inGenerateChoice) {
  C_string nt  ;
  nt << inPrefix
     << inClassName
     << '_'
     << inOrderInSourceFile ;
  mStringsArray.addObject (nt) ;
  mGenerateChoiceArray.addObject (inGenerateChoice) ;
}

//---------------------------------------------------------------------------*

void cVocabulary::addAugmentedSymbol (void) {
  mStringsArray.addObject ("") ;
  mGenerateChoiceArray.addObject (false) ;
}

//---------------------------------------------------------------------------*

bool cVocabulary::needToGenerateChoice (const sint32 inSymbolIndex
                                        COMMA_LOCATION_ARGS) const {
  return mGenerateChoiceArray (inSymbolIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

void cVocabulary::printInFile (AC_output_stream & inHTMLfile,
                               const sint32 inSymbolIndex
                               COMMA_LOCATION_ARGS) const {
  if (inSymbolIndex < mTerminalSymbolsCount) {
    inHTMLfile << '$' << mStringsArray (inSymbolIndex COMMA_THERE) << '$' ;
  }else{
    inHTMLfile << '<' << mStringsArray (inSymbolIndex COMMA_THERE) << '>' ;
  }
}

//---------------------------------------------------------------------------*
