//---------------------------------------------------------------------------*
//                                                                           *
//  Perform FIRST computations for pure BNF grammar.                         *                                                               *
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

#ifndef FIRST_COMPUTATION_ROUTINES_DEFINED
#define FIRST_COMPUTATION_ROUTINES_DEFINED

//---------------------------------------------------------------------------*

#include "generic_arraies/TCUniqueArray.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_html_file_write ;
class cVocabulary ;
class C_bdd_set1 ;
class C_bdd_set2 ;
class C_lexique ;

//---------------------------------------------------------------------------*

void
FIRST_computations (const cPureBNFproductionsList & inPureBNFproductions,
                    C_html_file_write & inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const TCUniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const C_bdd_set1 & inVocabularyDerivingToEmpty_BDD,
                    const C_bdd_set1 & inUsefulSymbols,
                    C_bdd_set2 & outFIRSTsets,
                    TCUniqueArray <TCUniqueArray <sint32> > & outFIRSTarray,
                    const C_bdd_descriptor & inDescriptor,
                    bool & outOk) ;

//---------------------------------------------------------------------------*

#endif
