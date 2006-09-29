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

#include "generic_arraies/TC_UniqueArray.h"
#include "generic_arraies/TC_UniqueArray.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class cVocabulary ;
class C_HTML_FileWrite ;
class C_BDD_Set1 ;
class C_BDD_Set2 ;
class C_Lexique ;

//---------------------------------------------------------------------------*

void
FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                     C_HTML_FileWrite & inHTMLfile,
                     const cVocabulary & inVocabulary,
                     const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                     const C_BDD_Set1 & inUsefulSymbols,
                     const C_BDD_Set2 & inFIRSTsets,
                     const C_BDD_Set1 & nonTerminauxPouvantEtreSuivisDuVide,
                     C_BDD_Set2 & outFOLLOWsets,
                     TC_UniqueArray <TC_UniqueArray <sint32> > & outFOLLOWarray,
                     bool & outOk,
                     const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------*

#endif
