//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for computing followed by empty strings symbols                 *
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

#ifndef FOLLOW_BY_EMPTY_COMPUTATIONS_ROUTINES_DEFINED
#define FOLLOW_BY_EMPTY_COMPUTATIONS_ROUTINES_DEFINED

//---------------------------------------------------------------------------*

#include "generic_arraies/TC_unique_dyn_array.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_html_file_write ;
class cVocabulary ;
class C_bdd_set1 ;
class C_lexique ;

//---------------------------------------------------------------------------*

void
follow_by_empty_computations (const cPureBNFproductionsList & inPureBNFproductions,
                              C_html_file_write & inHTMLfile,
                              const cVocabulary & inVocabulary,
                              const TC_unique_dyn_array <bool> & inVocabularyDerivingToEmpty_Array,
                              C_bdd_set1 & outVocabularyFollowedByEmpty_BDD) ;

//---------------------------------------------------------------------------*

#endif
