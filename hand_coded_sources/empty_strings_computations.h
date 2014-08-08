//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Routines for computing empty string derivations                             *
//                                                                                                                     *
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.                             *
//                                                                                                                     *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                                                              *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes                                          *
//  ECN, École Centrale de Nantes (France)                                                                             *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it                                            *
//  under the terms of the GNU General Public License as published by the                                              *
//  Free Software Foundation.                                                                                          *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT                                             *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or                                              *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for                                           *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef EMPTY_STRINGS_COMPUTATIONS_ROUTINE_DEFINED
#define EMPTY_STRINGS_COMPUTATIONS_ROUTINE_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "collections/TC_UniqueArray.h"

//---------------------------------------------------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_HTMLString ;
class C_Lexique ;
class C_Relation ;
class C_RelationConfiguration ;

//---------------------------------------------------------------------------------------------------------------------*

C_Relation
empty_strings_computations (const cPureBNFproductionsList & inPureBNFproductions,
                            C_HTMLString & ioHTMLFileContents,
                            TC_UniqueArray <bool> & outVocabularyDerivingToEmpty_Array,
                            const C_RelationConfiguration & inVocabularyConfiguration,
                            const bool inVerboseOptionOn) ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
