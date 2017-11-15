//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Routines for computing FOLLOWS                                                                                      *
//                                                                                                                     *
//  Copyright (C) 1999, ..., 2016 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@ec-nantes.fr                                                                              *
//                                                                                                                     *
//  LS2N, Laboratoire des Sciences du Numérique de Nantes, ECN, École Centrale de Nantes (France)                      *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.                                                              *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef FOLLOW_COMPUTATIONS_ROUTINES_DEFINED
#define FOLLOW_COMPUTATIONS_ROUTINES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "collections/TC_UniqueArray.h"

//---------------------------------------------------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class cVocabulary ;
class C_HTMLString ;
class C_Lexique ;
class C_Relation ;

//---------------------------------------------------------------------------------------------------------------------*

void
FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                     C_HTMLString & ioHTMLFileContents,
                     const bool inPopulateHTMLHelperString,
                     const cVocabulary & inVocabulary,
                     const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                     const C_Relation & inUsefulSymbols,
                     const C_Relation & inFIRSTsets,
                     const C_Relation & inNonterminalSymbolsFollowedByEmpty,
                     C_Relation & outFOLLOWsets,
                     TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFOLLOWarray,
                     bool & outOk,
                     const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
