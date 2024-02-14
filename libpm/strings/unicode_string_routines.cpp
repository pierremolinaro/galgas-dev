//--------------------------------------------------------------------------------------------------
//
//  unicode_string_routines: this file implements uint32_t * string routines,                    
//  that are in direct correspondance with char * C string routines of C                         
//  library.                                                                                     
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "unicode_string_routines.h"

//--------------------------------------------------------------------------------------------------

int32_t utf32_strlen (const utf32 * inString) {
  int32_t result = 0 ;
  while (UNICODE_VALUE (* inString) != 0) {
    inString ++ ;
    result ++ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
