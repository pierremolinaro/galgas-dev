//--------------------------------------------------------------------------------------------------
//
//     Routines for SLR (1) grammar computations                                                 
//
//  Copyright (C) 2002, ..., 2023 Pierre Molinaro.
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

#include "TC_UniqueArray.h"

//--------------------------------------------------------------------------------------------------

class cPureBNFproductionsList ;
class GrammarVocabulary ;
class HTMLString ;
class String ;
class GGS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

void
SLR_computations (const cPureBNFproductionsList & inProductionRules,
                  const GrammarVocabulary & inVocabulary,
                  HTMLString & ioHTMLFileContents,
                  const bool inPopulateHTMLHelperString,
                  const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFOLLOWarray,
                  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                  const uint32_t inOriginalGrammarStartSymbol,
                  const String & inTargetFileName,
                  String & ioCppFileContents,
                  const String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn,
                  const String & inSyntaxDirectedTranslationVarName) ;

//--------------------------------------------------------------------------------------------------
