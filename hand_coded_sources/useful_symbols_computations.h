//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for computing useful symbols of the pure BNF grammar            *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef USEFUL_SYMBOLS_COMPUTATION_ROUTINE_DEFINED
#define USEFUL_SYMBOLS_COMPUTATION_ROUTINE_DEFINED

//---------------------------------------------------------------------------*

class cPureBNFproductionsList ;
class cVocabulary ;
class C_HTML_FileWrite ;
class C_BDD_Set1 ;
class C_Lexique ;

//---------------------------------------------------------------------------*

void
useful_symbols_computations (const cPureBNFproductionsList & inPureBNFproductions,
                             const cVocabulary & inVocabulary,
                             C_HTML_FileWrite & inHTMLfile,
                             C_BDD_Set1 & outUsefulSymbols,
                              bool & outWarningFlag) ;

//---------------------------------------------------------------------------*

#endif
