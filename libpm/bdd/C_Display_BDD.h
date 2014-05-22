//-----------------------------------------------------------------------------*
//                                                                             *
//     C++ class for displaying BDDs (use with the BDD package 'C_BDD.cpp')    *
//                                                                             *
//  This file is part of libpm Libary                                          *
//                                                                             *
//  Copyright (C) 2000, ..., 2005 Pierre Molinaro.                             *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                               *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This library is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU Lesser General Public License as published      *
//  by the Free Software Foundation; either version 2 of the License, or       *
//  (at your option) any later version.                                        *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public        *
//  License for more details.                                                  *
//                                                                             *
//-----------------------------------------------------------------------------*

#ifndef CLASS_DISPLAY_BDD_DEFINED
#define CLASS_DISPLAY_BDD_DEFINED

//-----------------------------------------------------------------------------*

#include "utilities/M_machine.h"
#include "collections/TC_UniqueArray.h"
#include "strings/C_String.h"

//-----------------------------------------------------------------------------*

class AC_OutputStream ;

//-----------------------------------------------------------------------------*

class C_Display_BDD {
//--- Attributs
  protected : uint32_t aNombreChaines ;
  protected : TC_UniqueArray <C_String> aTab ;
  protected : uint32_t * aDimensions ;
  
//--- Constructeur et destructeur
  public : C_Display_BDD (const uint32_t nombreChaines) ;
  public : virtual ~C_Display_BDD (void) ;

//--- Allocation (efface les chaines existantes)
  public : void vider (void) ;

//--- Est vide ?
  public : inline bool isFalse (void) const { return aNombreChaines == 0 ; }

//--- Nombre de chaines entrees ?
  public : uint32_t nombreEntrees (void) const { return aNombreChaines ; }

//--- Allocation (efface les chaines existantes)
  public : void allouer (const uint32_t nombreChaines) ;

//--- Definir une chaine
  public : void defineVariableName (const uint32_t indice,
                                    const C_String & chaine,
                                    const uint32_t dimensions) ;

//--- Obtenir la longueur d'une chaine
  public : int32_t longueur (const uint32_t indice) const ;

//--- Obtenir la dimension d'une variable
  public : uint32_t obtenirDimension (const uint32_t indice) const ;

//--- Ecrire une chaine
  public : void ecrire (const uint32_t indice,
                        AC_OutputStream & inStream) const ;

//--- Interdire la duplication
  private : C_Display_BDD (C_Display_BDD &) ;
  private : C_Display_BDD & operator = (C_Display_BDD &) ;
} ;

//-----------------------------------------------------------------------------*

#endif
