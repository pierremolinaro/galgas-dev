//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for building pure BNF grammar (without 'select' and 'repeat')   *
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

#ifndef BUILD_PURE_BNF_GRAMMAR_ROUTINE_DEFINED
#define BUILD_PURE_BNF_GRAMMAR_ROUTINE_DEFINED

//---------------------------------------------------------------------------*

class GGS_L_syntaxComponents_ForGrammar ;
class cPureBNFproductionsList ;
class cVocabulary ;
class C_html_file_write ;

//---------------------------------------------------------------------------*

void
buildPureBNFgrammar (const GGS_L_syntaxComponents_ForGrammar & inSyntaxComponentsList,
                     cVocabulary & ioVocabulary,
                     cPureBNFproductionsList & ioProductions) ;

void
printPureBNFgrammarInBNFfile (C_html_file_write & inHTMLfile,
                              const cVocabulary & inVocabulary,
                              const cPureBNFproductionsList & inProductions) ;

//---------------------------------------------------------------------------*

#endif
