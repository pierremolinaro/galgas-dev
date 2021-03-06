//----------------------------------------------------------------------------------------------------------------------
//
//     Routines for LR(1) grammar computations                                                   
//
//  Copyright (C) 2002, ..., 2016 Pierre Molinaro.
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
//----------------------------------------------------------------------------------------------------------------------

#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "collections/TC_UniqueArray.h"

//----------------------------------------------------------------------------------------------------------------------

class cPureBNFproductionsList ;
class cVocabulary ;
class C_HTMLString ;
class C_String ;
class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

void LR1_computations (const TC_UniqueArray <C_String> & inImplementationFileHeaderList,
                       const cPureBNFproductionsList & inProductionRules,
                       const cVocabulary & inVocabulary,
                       C_HTMLString & ioHTMLFileContents,
                       const bool inPopulateHTMLHelperString,
                       const TC_UniqueArray <TC_UniqueArray <uint64_t> > & FIRSTarray,
                       const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                       const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                       const uint32_t inOriginalGrammarStartSymbol,
                       const C_String & inTargetFileName,
                       C_String & ioCppFileContents,
                       const C_String & inLexiqueName,
                       bool & outOk,
                       const bool inVerboseOptionOn,
                       const bool inHasIndexing,
                       const C_String & inSyntaxDirectedTranslationVarName) ;

//----------------------------------------------------------------------------------------------------------------------
