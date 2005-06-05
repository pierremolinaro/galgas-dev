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

class C_TextFileWrite ;

//---------------------------------------------------------------------------*

#define macro_AC_galgasType \
public : virtual void generateAttributeDeclaration (const GGS_lstring & nom, \
                                                    AC_OutputStream & inHfile) = 0 ; \
public : virtual void generateAttributeInitialization (const GGS_lstring & nom, \
                                                       AC_OutputStream & inCppFile) = 0 ; \
public : virtual void generatePublicDeclaration (AC_OutputStream & inHfile, \
                                                 const GGS_lstring & nomAttribut) ; \
public : virtual void generateFormalParameter (AC_OutputStream & fichier, const bool reference) ; \
public : virtual void generateCppClassName (AC_OutputStream & fichier) const = 0 ;

//---------------------------------------------------------------------------*

#define macroInheritFrom_AC_galgasType \
public : virtual void generateAttributeDeclaration (const GGS_lstring & nom, \
                                                    AC_OutputStream & inHfile) ; \
public : virtual void generateAttributeInitialization (const GGS_lstring & nom, \
                                                       AC_OutputStream & inCppFile) ; \
public : virtual void generateCppClassName (AC_OutputStream & fichier) const ;

//---------------------------------------------------------------------------*
