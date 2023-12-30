//--------------------------------------------------------------------------------------------------
//
//     Routines for SLR (1) grammar computations                                                 
//
//  Copyright (C) 2002, ..., 2023 Pierre Molinaro.
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
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "TC_UniqueArray.h"

//--------------------------------------------------------------------------------------------------

class cPureBNFproductionsList ;
class cVocabulary ;
class HTMLString ;
class String ;
class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

void
SLR_computations (const cPureBNFproductionsList & inProductionRules,
                  const cVocabulary & inVocabulary,
                  HTMLString & ioHTMLFileContents,
                  const bool inPopulateHTMLHelperString,
                  const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFOLLOWarray,
                  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                  const uint32_t inOriginalGrammarStartSymbol,
                  const String & inTargetFileName,
                  String & ioCppFileContents,
                  const String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn,
                  const String & inSyntaxDirectedTranslationVarName) ;

//--------------------------------------------------------------------------------------------------
