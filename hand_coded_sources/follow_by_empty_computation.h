//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Routines for computing followed by empty strings symbols                   *
//                                                                                                                     *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                   *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef FOLLOW_BY_EMPTY_COMPUTATIONS_ROUTINES_DEFINED
#define FOLLOW_BY_EMPTY_COMPUTATIONS_ROUTINES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "collections/TC_UniqueArray.h"

//---------------------------------------------------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_HTMLString ;
class cVocabulary ;
class C_Lexique ;
class C_Relation ;

//---------------------------------------------------------------------------------------------------------------------*

void
follow_by_empty_computations (const cPureBNFproductionsList & inPureBNFproductions,
                              C_HTMLString & ioHTMLFileContents,
                              const cVocabulary & inVocabulary,
                              const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                              C_Relation & outVocabularyFollowedByEmpty,
                              const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
