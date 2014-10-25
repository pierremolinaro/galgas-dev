//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Routines for checking LL(1) condition                                      *
//                                                                                                                     *
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.                             *
//                                                                                                                     *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                                                              *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it                                            *
//  under the terms of the GNU General Public License as published by the                                              *
//  Free Software Foundation.                                                                                          *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef LL1_COMPUTATIONS_ROUTINE_DEFINED
#define LL1_COMPUTATIONS_ROUTINE_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "collections/TC_UniqueArray.h"

//---------------------------------------------------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_HTMLString ;
class cVocabulary ;
class C_String ;
class C_Compiler ;
class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;
class C_Relation ;

//---------------------------------------------------------------------------------------------------------------------*

void
LL1_computations (const TC_UniqueArray <C_String> & inImplementationFileHeaderList,
                  const cPureBNFproductionsList & inPureBNFproductions,
                  C_HTMLString & ioHTMLFileContents,
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
                  const bool inHasIndexing,
                  const C_String & inSyntaxDirectedTranslationVarName) ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
