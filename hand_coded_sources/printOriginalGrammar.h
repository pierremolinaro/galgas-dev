//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for printing original grammar (with 'select' and 'repeat')      *
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

#ifndef ORIGINAL_GRAMMAR_PRINT_ROUTINE_DEFINED
#define ORIGINAL_GRAMMAR_PRINT_ROUTINE_DEFINED

//---------------------------------------------------------------------------*

#include "common_semantics.h"

//---------------------------------------------------------------------------*

void printOriginalGrammar (C_HTML_FileWrite & inHTMLfile,
                           const GGS_L_syntaxComponents_ForGrammar & inSyntaxComponentsList) ;

//---------------------------------------------------------------------------*

#endif
