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

typedef enum {k_me_constant, k_super_constant, k_other_variable} enumVariableKind ;

//---------------------------------------------------------------------------*

#define macro_typeCplusPlusName \
public : virtual enumVariableKind getVariableKind (void) const = 0 ; \
public : virtual void generateVariableAddress (AC_OutputStream & fichier) const = 0 ; \
public : virtual void generateCplusPlusName (AC_OutputStream & fichier) const = 0 ;

//---------------------------------------------------------------------------*

#define macroInheritFrom_typeCplusPlusName \
public : virtual enumVariableKind getVariableKind (void) const ; \
public : virtual void generateVariableAddress (AC_OutputStream & fichier) const ;\
public : virtual void generateCplusPlusName (AC_OutputStream & fichier) const ;

//---------------------------------------------------------------------------*
