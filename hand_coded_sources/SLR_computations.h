//---------------------------------------------------------------------------*
//                                                                           *
//     Routines for SLR (1) grammar computations                             *
//                                                                           *
//  Copyright (C) 2002 Pierre Molinaro.                                      *
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

#include "generic_arraies/TC_unique_dyn_array.h"
#include "generic_arraies/TC_unique_grow_array.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class cVocabulary ;
class C_html_file_write ;
class C_string ;
class C_galgas_stringset ;
class C_lexique ;

//---------------------------------------------------------------------------*

void
SLR_computations (C_lexique & inLexique,
                  const cPureBNFproductionsList & inProductionRules,
                  const cVocabulary & inVocabulary,
                  C_html_file_write & inHTMLfile,
                  const TC_unique_dyn_array <TC_unique_grow_array <sint32> > & inFOLLOWarray,
                  const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                  const uint32 inOriginalGrammarStartSymbol,
                  const C_string & inTargetFileName,
                  const C_string & inLexiqueName,
                  const C_galgas_stringset & inClassesNamesSet,
                  bool & outOk) ;

//---------------------------------------------------------------------------*

#endif
