//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for computing useful symbols of the pure BNF grammar            *
//                                                                           *
//  Copyright (C) 1999, ..., 2008 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
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

#ifndef USEFUL_SYMBOLS_COMPUTATION_ROUTINE_EX_DEFINED
#define USEFUL_SYMBOLS_COMPUTATION_ROUTINE_EX_DEFINED

//---------------------------------------------------------------------------*

class cPureBNFproductionsListEx ;
class cVocabularyEx ;
class C_HTML_FileWrite ;
class C_BDD_Set1 ;
class C_CompilerEx ;
class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//---------------------------------------------------------------------------*

void
useful_symbols_computations (C_CompilerEx & inLexique,
                             const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                             const cPureBNFproductionsListEx & inPureBNFproductions,
                             const PMUInt16 inBDDBitCount,
                             const cVocabularyEx & inVocabulary,
                             C_HTML_FileWrite * inHTMLfile,
                             C_BDD_Set1 & outUsefulSymbols,
                             bool & outWarningFlag,
                             const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------*

#endif
