//--------------------------------------------------------------------------------------------------
//
//  Routines for computing useful symbols of the pure BNF grammar                                
//
//  Copyright (C) 1999, ..., 2016 Pierre Molinaro.
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

class cPureBNFproductionsList ;
class cVocabulary ;
class C_HTMLString ;
class C_Compiler ;
class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;
class C_RelationSingleType ;
class C_Relation ;

//--------------------------------------------------------------------------------------------------

void useful_symbols_computations (C_Compiler * inCompiler,
                                  const GALGAS_location & inErrorLocation,
                                  const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                                  const cPureBNFproductionsList & inPureBNFproductions,
                                  const C_RelationSingleType & inVocabularyBDDType,
                                  const cVocabulary & inVocabulary,
                                  C_HTMLString & ioHTMLFileContents,
                                  const bool inPopulateHTMLHelperString,
                                  C_Relation & outUsefulSymbolsRelation,
                                  bool & outWarningFlag,
                                  const bool inVerboseOptionOn) ;

//--------------------------------------------------------------------------------------------------
