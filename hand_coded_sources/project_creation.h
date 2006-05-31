//---------------------------------------------------------------------------*
//                                                                           *
//  GALGAS Project Creation                                                  *
//                                                                           *
//  Copyright (C) 2006 Pierre Molinaro.                                      *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef PROJECT_CREATION_ROUTINE_DEFINED
#define PROJECT_CREATION_ROUTINE_DEFINED

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

//---------------------------------------------------------------------------*

typedef enum {kClassicProject, kMDAproject} enumProjectStyle ;

//---------------------------------------------------------------------------*

void
createProject (const C_String & inStringForProjectCreation,
               const enumProjectStyle inProjectStyle) ;

//---------------------------------------------------------------------------*

#endif
