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

#include "generic_arraies/TC_unique_dyn_array.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_html_file_write ;
class cVocabulary ;
class C_bdd_set2 ;
class C_string ;
class C_galgas_stringset ;
class C_lexique ;

//---------------------------------------------------------------------------*

void
LL1_computations (C_lexique & inLexique,
                  const cPureBNFproductionsList & inPureBNFproductions,
                  C_html_file_write & inHTMLfile,
                  const cVocabulary & inVocabulary,
                  const TC_unique_dyn_array <bool> & inVocabularyDerivingToEmpty_Array,
                  const C_bdd_set2 & inFIRSTsets,
                  const C_bdd_set2 & inFOLLOWsets,
                  const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForOriginalGrammar,
                  const uint32 inOriginalGrammarStartSymbol,
                  const C_string & inTargetFileName,
                  const C_string & inLexiqueName,
                  const C_galgas_stringset & inClassesNamesSet,
                  bool & outOk) ;

//---------------------------------------------------------------------------*

#endif
