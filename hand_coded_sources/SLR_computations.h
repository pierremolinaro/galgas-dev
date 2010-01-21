//---------------------------------------------------------------------------*
//                                                                           *
//     Routines for SLR (1) grammar computations                             *
//                                                                           *
//  Copyright (C) 2002, ..., 2007 Pierre Molinaro.                           *
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
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef SLR_COMPUTATION_ROUTINES_DEFINED
#define SLR_COMPUTATION_ROUTINES_DEFINED

//---------------------------------------------------------------------------*

#include "collections/TC_UniqueArray.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class cVocabulary ;
class C_HTML_FileWrite ;
class C_String ;
class C_Lexique ;

//---------------------------------------------------------------------------*

void
SLR_computations (C_CompilerEx & inLexique,
                  const cPureBNFproductionsList & inProductionRules,
                  const cVocabulary & inVocabulary,
                  C_HTML_FileWrite * inHTMLfile,
                  const TC_UniqueArray <TC_UniqueArray <PMSInt32> > & inFOLLOWarray,
                  const GGS_nonTerminalSymbolMapForGrammarAnalysis & inNonterminalSymbolsMapForGrammar,
                  const PMUInt32 inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  const C_String & inOutputDirectoryForCppFiles,
                  const C_String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------*

#endif
