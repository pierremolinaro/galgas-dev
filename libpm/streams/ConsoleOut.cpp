//--------------------------------------------------------------------------------------------------
//
//  'ConsoleOut' : a class for console output                                                  
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2002, ..., 2026 Pierre Molinaro.
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

#include "ConsoleOut.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

ConsoleOut::ConsoleOut (void) {
}

//--------------------------------------------------------------------------------------------------
//
//                  Flush output                                                                 
//
//--------------------------------------------------------------------------------------------------

void ConsoleOut::flush (void) {
  ::fflush (stdout) ;
}

//--------------------------------------------------------------------------------------------------
//
//                  Write a character string on the console                                      
//
//--------------------------------------------------------------------------------------------------

void ConsoleOut::handleAppendUTF8Array (const char * inCharArray,
                                        const int32_t inArrayCount) {
  if (inArrayCount > 0) {
    printf ("%.*s", (int) inArrayCount, inCharArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void ConsoleOut::handleAppendCharacter (const utf32 inCharacter) {
  char buffer [8] ;
  UTF8StringFromUTF32Character (inCharacter, buffer) ;
  printf ("%s", buffer) ;
}

//--------------------------------------------------------------------------------------------------
//
//  C O N S O L E    O U T    G L O B A L   V A R I A B L E                                      
//
//--------------------------------------------------------------------------------------------------

ConsoleOut gCout ;

//--------------------------------------------------------------------------------------------------
