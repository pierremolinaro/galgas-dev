//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2017, ..., 2018 Pierre Molinaro.
//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
//--------------------------------------------------------------------------------------------------

#include "all-declarations.h"
#include "utf32.h"

//--------------------------------------------------------------------------------------------------


static void displayUnicodeCharacterRange (bool (*inFunction) (const utf32 inUnicodeCharacter),
                                          const char * inFunctionName) {
  uint32_t characterCount = 0 ;
  for (uint32_t codePoint = 0 ; codePoint < (17 * 0x10000) ; codePoint++) {
    if (isUnicodeCharacterAssigned (TO_UNICODE (codePoint)) && inFunction (TO_UNICODE (codePoint))) {
      characterCount += 1 ;
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

void routine_displayUnicodeLexicalTestFunctions (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
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
