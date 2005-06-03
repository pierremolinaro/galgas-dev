//---------------------------------------------------------------------------*
//                                                                           *
// Routines for FOLLOWS sets                                                 *
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

#ifndef FOLLOW_COMPUTATIONS_ROUTINES_DEFINED
#define FOLLOW_COMPUTATIONS_ROUTINES_DEFINED

//---------------------------------------------------------------------------*

#include "generic_arraies/TCUniqueArray.h"
#include "generic_arraies/TCUniqueArray.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class cVocabulary ;
class C_html_file_write ;
class C_bdd_set1 ;
class C_bdd_set2 ;
class C_lexique ;

//---------------------------------------------------------------------------*

void
FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                     C_html_file_write & inHTMLfile,
                     const cVocabulary & inVocabulary,
                     const TCUniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                     const C_bdd_set1 & inUsefulSymbols,
                     const C_bdd_set2 & inFIRSTsets,
                     const C_bdd_set1 & nonTerminauxPouvantEtreSuivisDuVide,
                     C_bdd_set2 & outFOLLOWsets,
                     TCUniqueArray <TCUniqueArray <sint32> > & outFOLLOWarray,
                     bool & outOk) ;

//---------------------------------------------------------------------------*

#endif
