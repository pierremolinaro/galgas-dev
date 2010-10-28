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

#ifndef ORIGINAL_GRAMMAR_PRINT_ROUTINE_EX_DEFINED
#define ORIGINAL_GRAMMAR_PRINT_ROUTINE_EX_DEFINED

//---------------------------------------------------------------------------*

class C_HTML_FileWrite ;
class GGS_syntaxComponentListForGrammarAnalysis ;

//---------------------------------------------------------------------------*

void printOriginalGrammar (C_HTML_FileWrite & inHTMLfile,
                           const GGS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList) ;

//---------------------------------------------------------------------------*

#endif
