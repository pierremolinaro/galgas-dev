//--------------------------------------------------------------------------------------------------
//
//  Perform FIRST computations for pure BNF grammar.                                             
//
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.
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

class PureBNFproductionsList ;
class HTMLString ;
class GrammarVocabulary ;
class Lexique ;
class BinaryDecisionDiagramRelation ;

//--------------------------------------------------------------------------------------------------

void
FIRST_computations (const PureBNFproductionsList & inPureBNFproductions,
                    HTMLString & ioHTMLFileContents,
                    const bool inPopulateHTMLHelperString,
                    const GrammarVocabulary & inVocabulary,
                    const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const BinaryDecisionDiagramRelation & inVocabularyDerivingToEmpty,
                    const BinaryDecisionDiagramRelation & inUsefulSymbols,
                    TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFIRSTarray,
                    BinaryDecisionDiagramRelation & outFIRSTsets,
                    bool & outOk,
                    const bool inVerboseOptionOn) ;

//--------------------------------------------------------------------------------------------------
