//---------------------------------------------------------------------------*
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

#define macro_typeEntityToGenerate \
public : virtual void generateHdeclarations (AC_output_stream & inHfile, \
                                             const C_string & inLexiqueClassName, \
                                             C_lexique & inLexique) = 0 ; \
public : virtual void generateHdeclarations_2 (AC_output_stream & inHfile, \
                                               const C_string & inLexiqueClassName, \
                                               C_lexique & inLexique) = 0 ; \
public : virtual bool isCppClassNeeded (void) const = 0 ; \
public : virtual void generateCppClassDeclaration (AC_output_stream & inHfile, \
                                                   const C_string & inLexiqueClassName, \
                                                   const C_string & inTargetFileName, \
                                                   sint32 & ioPrototypeIndex) = 0 ; \
public : virtual void generateCppClassImplementation (AC_output_stream & inCppFile, \
                                                  const C_string & inLexiqueClassName, \
                                                  const C_string & inTargetFileName, \
                                                  sint32 & ioPrototypeIndex, \
                                                  const bool inGenerateDebug) = 0 ;

//---------------------------------------------------------------------------*

#define macroInheritFrom_typeEntityToGenerate \
public : virtual void generateHdeclarations (AC_output_stream & inHfile, \
                                             const C_string & inLexiqueClassName, \
                                             C_lexique & inLexique) ; \
public : virtual void generateHdeclarations_2 (AC_output_stream & inHfile, \
                                               const C_string & inLexiqueClassName, \
                                               C_lexique & inLexique) ; \
public : virtual bool isCppClassNeeded (void) const ; \
public : virtual void generateCppClassDeclaration (AC_output_stream & inHfile, \
                                                   const C_string & inLexiqueClassName, \
                                                   const C_string & inTargetFileName, \
                                                   sint32 & /* ioPrototypeIndex */) ; \
public : virtual void generateCppClassImplementation (AC_output_stream & inCppFile, \
                                                  const C_string & inLexiqueClassName, \
                                                  const C_string & inTargetFileName, \
                                                  sint32 & ioPrototypeIndex, \
                                                  const bool inGenerateDebug) ;

//---------------------------------------------------------------------------*
