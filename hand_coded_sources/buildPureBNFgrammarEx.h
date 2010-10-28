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

#ifndef BUILD_PURE_BNF_GRAMMAR_ROUTINE_EX_DEFINED
#define BUILD_PURE_BNF_GRAMMAR_ROUTINE_EX_DEFINED

//---------------------------------------------------------------------------*

class GGS_syntaxComponentListForGrammarAnalysis ;
class cPureBNFproductionsListEx ;
class cVocabularyEx ;
class C_HTML_FileWrite ;

//---------------------------------------------------------------------------*

void
buildPureBNFgrammar (const GGS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList,
                     cVocabularyEx & ioVocabulary,
                     cPureBNFproductionsListEx & ioProductions) ;

void
printPureBNFgrammarInBNFfile (C_HTML_FileWrite & inHTMLfile,
                              const cVocabularyEx & inVocabulary,
                              const cPureBNFproductionsListEx & inProductions) ;

//---------------------------------------------------------------------------*

#endif
