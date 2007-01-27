//---------------------------------------------------------------------------*
//                                                                           *
// Routines for computing empty string derivations                           *
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

#ifndef EMPTY_STRINGS_COMPUTATIONS_ROUTINE_DEFINED
#define EMPTY_STRINGS_COMPUTATIONS_ROUTINE_DEFINED

//---------------------------------------------------------------------------*

#include "generic_arraies/TC_UniqueArray.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_HTML_FileWrite ;
class cVocabulary ;
class C_BDD_Set1 ;
class C_Lexique ;

//---------------------------------------------------------------------------*

void
empty_strings_computations (const cPureBNFproductionsList & inPureBNFproductions,
                            C_HTML_FileWrite * inHTMLfile,
                            const cVocabulary & inVocabulary,
                            TC_UniqueArray <bool> & outVocabularyDerivingToEmpty_Array,
                            C_BDD_Set1 & outVocabularyDerivingToEmpty_BDD,
                            const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------*

#endif
