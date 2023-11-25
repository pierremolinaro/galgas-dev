//----------------------------------------------------------------------------------------------------------------------
//
//  Routines for checking LL(1) condition                                                        
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
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

#include "generic-arraies/TC_UniqueArray.h"

//----------------------------------------------------------------------------------------------------------------------

class cPureBNFproductionsList ;
class C_HTMLString ;
class cVocabulary ;
class C_String ;
class C_Compiler ;
class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;
class C_Relation ;

//----------------------------------------------------------------------------------------------------------------------

void
LL1_computations (const cPureBNFproductionsList & inPureBNFproductions,
                  C_HTMLString & ioHTMLFileContents,
                  const bool inPopulateHTMLHelperString,
                  const cVocabulary & inVocabulary,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                  const C_Relation & inFIRSTsets,
                  const C_Relation & inFOLLOWsets,
                  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                  const uint32_t inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  C_String & ioCppFileContents,
                  const C_String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn,
                  const C_String & inSyntaxDirectedTranslationVarName) ;

//----------------------------------------------------------------------------------------------------------------------
