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

#ifndef LL1_COMPUTATIONS_ROUTINE_DEFINED
#define LL1_COMPUTATIONS_ROUTINE_DEFINED

//---------------------------------------------------------------------------*

#include "generic_arraies/TC_UniqueArray.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_HTML_FileWrite ;
class cVocabulary ;
class C_BDD_Set2 ;
class C_String ;
class C_Lexique ;

//---------------------------------------------------------------------------*

void
LL1_computations (C_Lexique & inLexique,
                  const cPureBNFproductionsList & inPureBNFproductions,
                  C_HTML_FileWrite & inHTMLfile,
                  const cVocabulary & inVocabulary,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                  const C_BDD_Set2 & inFIRSTsets,
                  const C_BDD_Set2 & inFOLLOWsets,
                  const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForOriginalGrammar,
                  const uint32 inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  const C_String & inLexiqueName,
                  const GGS_stringset & inClassesNamesSet,
                  bool & outOk,
                  const GGS_M_startSymbolEntityAndMetamodel & inStartSymbolEntityAndMetamodelMap,
                  const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------*

#endif
