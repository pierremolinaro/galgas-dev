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

#include "generic_arraies/TC_UniqueArray.h"

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class C_HTML_FileWrite ;
class cVocabulary ;
class C_BDD_Set1 ;
class C_BDD_Set2 ;
class C_Lexique ;

//---------------------------------------------------------------------------*

void
FIRST_computations (const cPureBNFproductionsList & inPureBNFproductions,
                    C_HTML_FileWrite & inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const C_BDD_Set1 & inVocabularyDerivingToEmpty_BDD,
                    const C_BDD_Set1 & inUsefulSymbols,
                    C_BDD_Set2 & outFIRSTsets,
                    TC_UniqueArray <TC_UniqueArray <sint32> > & outFIRSTarray,
                    const C_BDD_Descriptor & inDescriptor,
                    bool & outOk) ;

//---------------------------------------------------------------------------*

#endif
