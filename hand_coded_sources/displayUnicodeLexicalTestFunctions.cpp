//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2017, ..., 2018 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.                                        
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "all-declarations.h"
#include "strings/unicode_character_base.h"

//--------------------------------------------------------------------------------------------------


static void displayUnicodeCharacterRange (bool (*inFunction) (const utf32 inUnicodeCharacter),
                                          const char * inFunctionName) {
  uint32_t characterCount = 0 ;
  for (uint32_t codePoint = 0 ; codePoint < (17 * 0x10000) ; codePoint++) {
    if (isUnicodeCharacterAssigned (TO_UNICODE (codePoint)) && inFunction (TO_UNICODE (codePoint))) {
      characterCount ++ ;
    }
  }
  printf ("Function '%s' (%u characters):\n", inFunctionName, characterCount) ;
  uint32_t intervalStart = 0 ;
  bool intervalIsOpened = false ;
  for (uint32_t codePoint = 0 ; codePoint < (17 * 0x10000) ; codePoint++) {
    if (isUnicodeCharacterAssigned (TO_UNICODE (codePoint)) && inFunction (TO_UNICODE (codePoint))) {
      if (! intervalIsOpened) {
        intervalStart = codePoint ;
        intervalIsOpened = true ;
      }
    }else if (intervalIsOpened) {
      intervalIsOpened = false ;
      const uint32_t intervalEnd = codePoint - 1 ;
      if (intervalStart == intervalEnd) {
        char startChar [5] ;
        UTF8StringFromUTF32Character (intervalStart, startChar) ;
        printf ("  \\U%08X (%s): 1 character\n", intervalStart, startChar) ;
      }else{
        char startChar [5] ;
        UTF8StringFromUTF32Character (intervalStart, startChar) ;
        char lastChar [5] ;
        UTF8StringFromUTF32Character (intervalEnd, lastChar) ;
        printf ("  [\\U%08X, \\U%08X], [%s, %s]: %u characters\n",
                intervalStart, intervalEnd,
                startChar, lastChar,
                codePoint - intervalStart) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void routine_displayUnicodeLexicalTestFunctions (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  displayUnicodeCharacterRange (isUnicodeLetter, "isUnicodeLetter") ;
  displayUnicodeCharacterRange (isUnicodeMark, "isUnicodeMark") ;
  displayUnicodeCharacterRange (isUnicodeNumber, "isUnicodeNumber") ;
  displayUnicodeCharacterRange (isUnicodeDecimalDigit, "isUnicodeDecimalDigit") ;
  displayUnicodeCharacterRange (isUnicodeASCIIHexDigit, "isUnicodeASCIIHexDigit") ;
  displayUnicodeCharacterRange (isUnicodeASCIIHexDigit, "isUnicodeASCIIHexDigit") ;
  displayUnicodeCharacterRange (isUnicodeSeparator, "isUnicodeSeparator") ;
  displayUnicodeCharacterRange (isUnicodeCommand, "isUnicodeCommand") ;
  displayUnicodeCharacterRange (isUnicodePunctuation, "isUnicodePunctuation") ;
  displayUnicodeCharacterRange (isUnicodeCommand, "isUnicodeCommand") ;
  displayUnicodeCharacterRange (isUnicodeSymbol, "isUnicodeSymbol") ;
  displayUnicodeCharacterRange (isUnicodeCommand, "isUnicodeCommand") ;
  displayUnicodeCharacterRange (isUnicodeCommand, "isUnicodeCommand") ;
}

//--------------------------------------------------------------------------------------------------
