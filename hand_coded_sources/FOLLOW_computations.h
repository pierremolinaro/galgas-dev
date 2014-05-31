//-----------------------------------------------------------------------------*
//                                                                             *
// Routines for computing FOLLOWS                                              *
//                                                                             *
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.                             *
//                                                                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//                                                                             *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#ifndef FOLLOW_COMPUTATIONS_ROUTINES_DEFINED
#define FOLLOW_COMPUTATIONS_ROUTINES_DEFINED

//-----------------------------------------------------------------------------*

#include "collections/TC_UniqueArray.h"

//-----------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class cVocabulary ;
class C_HTML_FileWrite ;
class C_Lexique ;
class C_Relation ;

//class C_BDD_Set1 ;
//class C_BDD_Set2 ;

//-----------------------------------------------------------------------------*

void
FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                     C_HTML_FileWrite * inHTMLfile,
                     const uint16_t inBDDBitCount,
                     const cVocabulary & inVocabulary,
                     const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                 //    const C_BDD_Set1 & inUsefulSymbolsEX,
                     const C_Relation & inUsefulSymbols,
                 //    const C_BDD_Set2 & inFIRSTsetsEX,
                     const C_Relation & inFIRSTsets,
                //     const C_BDD_Set1 & inNonterminalSymbolsFollowedByEmptyEX,
                     const C_Relation & inNonterminalSymbolsFollowedByEmpty,
              //       C_BDD_Set2 & outFOLLOWsetsEX,
                     C_Relation & outFOLLOWsets,
                     TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFOLLOWarray,
                     bool & outOk,
                     const bool inVerboseOptionOn) ;

//-----------------------------------------------------------------------------*

#endif
