//--------------------------------------------------------------------------------------------------
//
//  Pure BNF grammar vocabulary                                                                  
//
//  Copyright (C) 1999, ..., 2024 Pierre Molinaro                                                
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

#pragma once

//--------------------------------------------------------------------------------------------------

#include "String-class.h"
#include "BinaryDecisionDiagramRelationSingleType.h"

//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis ;
class GGS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
//  This class handles vocabulary of a pure BNF grammar                                          
//
//--------------------------------------------------------------------------------------------------

class GrammarVocabulary final {
//--- Constructor and destructor
  public: GrammarVocabulary (void) ;
  public: ~ GrammarVocabulary (void) ;

//--- Build vocabulary from original grammar
  public: void buildVocabulary (const GGS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                                const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                                const uint32_t inOriginalGrammarStartSymbol) ;

//--- Add a new non terminal symbol
  public: void addNonTerminalSymbol (const char * inPrefix,
                                     const String & inClassName,
                                     const int32_t inOrderInSourceFile,
                                     const bool inGenerateChoice) ;

//--- Add augmented symbol (for LR analyzers)
  public: void addAugmentedSymbol (void) ;

//--- Print symbol in file
  public: void printInFile (AbstractOutputStream & inHTMLfile,
                            const int32_t inSymbolIndex
                            COMMA_LOCATION_ARGS) const ;

//--- Get 'empty string' terminal symbol index
  public: int32_t getEmptyStringTerminalSymbolIndex (void) const ;

//--- Get terminal symbols count
  public: int32_t getTerminalSymbolsCount (void) const ;

//--- Get non terminal symbols count
  public: int32_t getNonTerminalSymbolsCount (void) const ;

//--- Get all symbols count
  public: int32_t getAllSymbolsCount (void) const ;

//--- Get all original grammar symbols count
  public: inline int32_t originalGrammarSymbolsCount (void) const { return mOriginalGrammarSymbolsCount ; }

//--- Get symbol
  public: String getSymbol (const int32_t symbolIndex
                            COMMA_LOCATION_ARGS) const ;

//--- Get start symbol
  public: int32_t getStartSymbol (void) const ;

//--- Is choice must be generated for a non terminal ?
  public: bool needToGenerateChoice (const int32_t inSymbolIndex
                                     COMMA_LOCATION_ARGS) const ;

//--- Get BDD type
  public: BinaryDecisionDiagramRelationSingleType getVocabularyBDDType (void) const ;

//--- No copy
  private: GrammarVocabulary (GrammarVocabulary &) = delete ;
  private: GrammarVocabulary & operator = (GrammarVocabulary &) = delete ;

//--- Private properties
  private: GenericUniqueArray <String> mStringsArray ;
  private: GenericUniqueArray <bool> mGenerateChoiceArray ;
  private: int32_t mTerminalSymbolsCount ;
  private: int32_t mOriginalGrammarSymbolsCount ;
  private: int32_t mStartSymbol ;
} ;

//--------------------------------------------------------------------------------------------------
