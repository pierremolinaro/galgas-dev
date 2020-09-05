//----------------------------------------------------------------------------------------------------------------------
//
//  'C_CRC32' : a class for computing CRC32                                                      
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 1997 Pierre Molinaro.                                                          
//  e-mail : pierre@pcmolinaro.name
//  This library is free software; you can redistribute it and/or modify it                      
//  under the terms of the GNU Lesser General Public License as published                        
//  by the Free Software Foundation; either version 2 of the License, or                         
//  (at your option) any later version.                                                          
//
//  This program is distributed in the hope it will be useful, but WITHOUT                       
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or                        
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for                     
//  more details.
//
//----------------------------------------------------------------------------------------------------------------------

#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "utilities/M_machine.h"

//----------------------------------------------------------------------------------------------------------------------

class C_CRC32 {
//--- Valeur initiale de la somme
  public : static uint32_t getInitialValue (void) {
     return 0xCAFECAFEUL ;
  }

  public : static void addCharToChecksum (const char car, uint32_t & somme) ;
  public : static void addLongToChecksum (const int32_t v, uint32_t & somme) ;
  public : static void addUnsignedLongToChecksum (const uint32_t v, uint32_t & somme) ;
  public : static void addShortToChecksum (const int16_t v, uint32_t & somme) ;
  public : static void addStringToChecksum (const char * chaine, uint32_t & somme) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
