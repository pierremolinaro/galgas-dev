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

class GGS_typeExpressionList ;

//---------------------------------------------------------------------------*

#define macro_typeExpression \
public : virtual void generateExpression (AC_output_stream & inCppFile) = 0 ; \
public : virtual bool isLexiqueFormalArgumentUsedForTest (void) const  = 0 ; \
public : virtual bool formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const = 0 ;

//---------------------------------------------------------------------------*

#define macroInheritFrom_typeExpression \
public : virtual void generateExpression (AC_output_stream & inCppFile) ; \
public : virtual bool isLexiqueFormalArgumentUsedForTest (void) const  ; \
public : virtual bool formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const ;

//---------------------------------------------------------------------------*
