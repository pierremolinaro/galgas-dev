//---------------------------------------------------------------------------*
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

#ifndef PARSER_GENERATION_DEFINED
#define PARSER_GENERATION_DEFINED

//---------------------------------------------------------------------------*

class GGS_lstring ;
class GGS_typeEntitiesToGenerateList ;
class AC_OutputStream ;

//---------------------------------------------------------------------------*

void
engendrerDeclarationPrototypesReglesDeProduction (GGS_lstring & nomComposant,
                                                  const C_String & inLexiqueName,
                                                  GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                                                  AC_OutputStream & inHfile) ;

//---------------------------------------------------------------------------*

#endif
