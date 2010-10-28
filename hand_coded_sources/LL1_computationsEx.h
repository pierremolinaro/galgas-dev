//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for checking LL(1) condition                                    *
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

#ifndef LL1_COMPUTATIONS_ROUTINE_EX_DEFINED
#define LL1_COMPUTATIONS_ROUTINE_EX_DEFINED

//---------------------------------------------------------------------------*

#include "collections/TC_UniqueArray.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsListEx ;
class C_HTML_FileWrite ;
class cVocabularyEx ;
class C_BDD_Set2 ;
class C_String ;
class C_LexiqueEx ;

//---------------------------------------------------------------------------*

void
LL1_computations (C_CompilerEx & inLexique,
                  const cPureBNFproductionsListEx & inPureBNFproductions,
                  C_HTML_FileWrite * inHTMLfile,
                  const cVocabularyEx & inVocabulary,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                  const C_BDD_Set2 & inFIRSTsets,
                  const C_BDD_Set2 & inFOLLOWsets,
                  const GGS_nonTerminalSymbolMapForGrammarAnalysis & inNonterminalSymbolsMapForOriginalGrammar,
                  const PMUInt32 inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  const C_String & inOutputDirectoryForCppFiles,
                  const C_String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------*

#endif
