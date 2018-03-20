//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//  Perform FIRST computations for pure BNF grammar.                                                                   *
//                                                                                                                     *
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.                                                                     *
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
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "collections/TC_UniqueArray.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPureBNFproductionsList ;
class C_HTMLString ;
class cVocabulary ;
class C_Lexique ;
class C_Relation ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void
FIRST_computations (const cPureBNFproductionsList & inPureBNFproductions,
                    C_HTMLString & ioHTMLFileContents,
                    const bool inPopulateHTMLHelperString,
                    const cVocabulary & inVocabulary,
                    const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const C_Relation & inVocabularyDerivingToEmpty,
                    const C_Relation & inUsefulSymbols,
                    TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFIRSTarray,
                    C_Relation & outFIRSTsets,
                    bool & outOk,
                    const bool inVerboseOptionOn) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
