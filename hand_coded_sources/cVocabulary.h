//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Pure BNF grammar vocabulary                                                *
//                                                                                                                     *
//  Copyright (C) 1999-2014 Pierre Molinaro.                                   *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef CLASS_VOCABULARY_DEFINED
#define CLASS_VOCABULARY_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "strings/C_String.h"
#include "bdd/C_RelationSingleType.h"

//---------------------------------------------------------------------------------------------------------------------*

class C_TextFileWrite ;
class GALGAS_terminalSymbolsMapForGrammarAnalysis ;
class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  This class handles vocabulary of a pure BNF grammar                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cVocabulary {
//--- Constructor and destructor
  public : cVocabulary (void) ;
  public : virtual ~cVocabulary (void) ;

//--- Build vocabulary from original grammar
  public : void buildVocabulary (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                                 const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                                 const uint32_t inOriginalGrammarStartSymbol) ;

//--- Add a new non terminal symbol
  public : void addNonTerminalSymbol (const char * inPrefix,
                                      const C_String & inClassName,
                                      const int32_t inOrderInSourceFile,
                                      const bool inGenerateChoice) ;

//--- Add augmented symbol (for LR analyzers)
  public : void addAugmentedSymbol (void) ;

//--- Print symbol in file
  public : void printInFile (AC_OutputStream & inHTMLfile,
                             const int32_t inSymbolIndex
                             COMMA_LOCATION_ARGS) const ;

//--- Get 'empty string' terminal symbol index
  public : int32_t getEmptyStringTerminalSymbolIndex (void) const ;

//--- Get terminal symbols count
  public : int32_t getTerminalSymbolsCount (void) const ;

//--- Get non terminal symbols count
  public : int32_t getNonTerminalSymbolsCount (void) const ;

//--- Get all symbols count
  public : int32_t getAllSymbolsCount (void) const ;

//--- Get all original grammar symbols count
  public : inline int32_t originalGrammarSymbolsCount (void) const { return mOriginalGrammarSymbolsCount ; }

//--- Get symbol
  public : C_String getSymbol (const int32_t symbolIndex
                               COMMA_LOCATION_ARGS) const ;

//--- Get start symbol
  public : int32_t getStartSymbol (void) const ;

//--- Is choice must be generated for a non terminal ?
  public : bool needToGenerateChoice (const int32_t inSymbolIndex
                                      COMMA_LOCATION_ARGS) const ;

//--- Get BDD type
  public : C_RelationSingleType getVocabularyBDDType (void) const ;

//--- No copy
  private : cVocabulary (cVocabulary &) ;
  private : cVocabulary & operator = (cVocabulary &) ;

//--- Private data
  private : TC_UniqueArray <C_String> mStringsArray ;
  private : TC_UniqueArray <bool> mGenerateChoiceArray ;
  private : int32_t mTerminalSymbolsCount ;
  private : int32_t mOriginalGrammarSymbolsCount ;
  private : int32_t mStartSymbol ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
