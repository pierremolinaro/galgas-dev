//---------------------------------------------------------------------------*
//                                                                           *
//  Pure BNF grammar vocabulary                                              *                                                               *
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

#ifndef CLASS_VOCABULARY_DEFINED
#define CLASS_VOCABULARY_DEFINED

//---------------------------------------------------------------------------*

#include "utilities/C_string.h"
#include "generic_arraies/TC_unique_grow_array.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

class C_galgas_stringset ;
class C_text_file_write ;
class GGS_L_productionRules_ForGrammarComponent ;

//---------------------------------------------------------------------------*
//                                                                           *
//  This class handles vocabulary of a pure BNF grammar                      *
//                                                                           *
//---------------------------------------------------------------------------*

class cVocabulary {
//--- Constructor and destructor
  public : cVocabulary (void) ;
  public : virtual ~cVocabulary (void) ;

//--- Build vocabulary from original grammar
  public : void build (
    const GGS_M_terminalSymbolsMapForUse & inTerminalSymbolMap,
    const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
    const uint32 inOriginalGrammarStartSymbol) ;

//--- Add a new non terminal symbol
  public : void addNonTerminalSymbol (const char * inPrefix,
                                      const C_string & inClassName,
                                      const sint32 inOrderInSourceFile,
                                      const bool inGenerateChoice) ;

//--- Add augmented symbol (for LR analyzers)
  public : void addAugmentedSymbol (void) ;

//--- Print symbol in file
  public : void printInFile (AC_output_stream & inHTMLfile,
                             const sint32 inSymbolIndex
                             COMMA_LOCATION_ARGS) const ;

//--- Get 'empty string' terminal symbol index
  public : sint32 getEmptyStringTerminalSymbolIndex (void) const ;

//--- Get terminal symbols count
  public : sint32 getTerminalSymbolsCount (void) const ;

//--- Get non terminal symbols count
  public : sint32 getNonTerminalSymbolsCount (void) const ;

//--- Get all symbols count
  public : sint32 getAllSymbolsCount (void) const ;

//--- Get symbol
  public : C_string getSymbol (const sint32 symbolIndex
                                   COMMA_LOCATION_ARGS) const ;

//--- Get start symbol
  public : sint32 getStartSymbol (void) const ;

//--- Is choice must be generated for a non terminal ?
  public : bool needToGenerateChoice (const sint32 inSymbolIndex
                                      COMMA_LOCATION_ARGS) const ;

//--- No copy
  private : cVocabulary (cVocabulary &) ;
  private : void operator = (cVocabulary &) ;

//--- Private data
  private : TC_unique_grow_array <C_string> mStringsArray ;
  private : TC_unique_grow_array <bool> mGenerateChoiceArray ;
  private : sint32 mTerminalSymbolsCount ;
  private : sint32 mOriginalGrammarSymbolsCount ;
  private : sint32 mStartSymbol ;
} ;

//---------------------------------------------------------------------------*

#endif
