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

#ifndef CLASS_VOCABULARY_DEFINED
#define CLASS_VOCABULARY_DEFINED

//---------------------------------------------------------------------------*

#include "strings/C_String.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

class C_TextFileWrite ;
class GGS_L_productionRules_ForGrammarComponent ;
class GGS_M_terminalSymbolsMapForGrammarAnalysis ;

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
  public : void buildVocabulary (const GGS_M_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                                 const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                                 const PMUInt32 inOriginalGrammarStartSymbol) ;

//--- Add a new non terminal symbol
  public : void addNonTerminalSymbol (const char * inPrefix,
                                      const C_String & inClassName,
                                      const PMSInt32 inOrderInSourceFile,
                                      const bool inGenerateChoice) ;

//--- Add augmented symbol (for LR analyzers)
  public : void addAugmentedSymbol (void) ;

//--- Print symbol in file
  public : void printInFile (AC_OutputStream & inHTMLfile,
                             const PMSInt32 inSymbolIndex
                             COMMA_LOCATION_ARGS) const ;

//--- Get 'empty string' terminal symbol index
  public : PMSInt32 getEmptyStringTerminalSymbolIndex (void) const ;

//--- Get terminal symbols count
  public : PMSInt32 getTerminalSymbolsCount (void) const ;

//--- Get non terminal symbols count
  public : PMSInt32 getNonTerminalSymbolsCount (void) const ;

//--- Get all symbols count
  public : PMSInt32 getAllSymbolsCount (void) const ;

//--- Get all original grammar symbols count
  public : inline PMSInt32 originalGrammarSymbolsCount (void) const { return mOriginalGrammarSymbolsCount ; }

//--- Get symbol
  public : C_String getSymbol (const PMSInt32 symbolIndex
                               COMMA_LOCATION_ARGS) const ;

//--- Get start symbol
  public : PMSInt32 getStartSymbol (void) const ;

//--- Is choice must be generated for a non terminal ?
  public : bool needToGenerateChoice (const PMSInt32 inSymbolIndex
                                      COMMA_LOCATION_ARGS) const ;

//--- No copy
  private : cVocabulary (cVocabulary &) ;
  private : cVocabulary & operator = (cVocabulary &) ;

//--- Private data
  private : TC_UniqueArray <C_String> mStringsArray ;
  private : TC_UniqueArray <bool> mGenerateChoiceArray ;
  private : PMSInt32 mTerminalSymbolsCount ;
  private : PMSInt32 mOriginalGrammarSymbolsCount ;
  private : PMSInt32 mStartSymbol ;
} ;

//---------------------------------------------------------------------------*

#endif
