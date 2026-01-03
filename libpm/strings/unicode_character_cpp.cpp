//--------------------------------------------------------------------------------------------------
//
//  unicode_character : an implementation of Unicode character                                   
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2008, ..., 2026 Pierre Molinaro.
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

#include "unicode_character_cpp.h"
#include "cUnicodeData.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------

const utf32 UNICODE_REPLACEMENT_CHARACTER = TO_UNICODE (0x0000FFFD) ;
const utf32 UNICODE_MAX_LEGAL_UTF32_CHARACTER = TO_UNICODE (0x0010FFFF) ;

//--------------------------------------------------------------------------------------------------

bool isUnicodeCharacterAssigned (const utf32 inUnicodeCharacter) {
  bool result = UNICODE_VALUE (inUnicodeCharacter) <= UNICODE_VALUE (UNICODE_MAX_LEGAL_UTF32_CHARACTER) ;
  if (result) {
    const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
    if (pageIndex <= gLastNamePage) {
      const uint32_t * page = gNamePages [pageIndex] ;
      if (page != NULL) {
        const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
        result = entry != 0 ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Each entry is a sequence of uint values. The two significant bits encode
// the meaning of the entry:
//  - 00xx xxx : shift accumulator left 6 bits,
//               then or it with xxxxxx;
//  - 01xx xxx : shift accumulator left 6 bits,
//               then or it with xxxxxx,
//               write name at accumulator index,
//               write one space,
//               set accumultor to zero;
//  - 10xx xxx : shift accumulator left 6 bits,
//               then or it with xxxxxx,
//               write name at accumulator index,
//               write one '-' character,
//               set accumultor to zero;
//  - 11xx xxx : shift accumulator left 6 bits,
//               then or it with xxxxxx,
//               write name at accumulator index,
//               EXIT.

String unicodeName (const utf32 inUnicodeCharacter) {
  String result ;
  if (! isUnicodeCharacterAssigned (inUnicodeCharacter)) {
    result.appendCString ("invalid unicode character \\U") ;
    result.appendUnsignedHex8 (UNICODE_VALUE (inUnicodeCharacter)) ;
  }else{
    const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
    if (pageIndex <= gLastNamePage) {
      const uint32_t * page = gNamePages [pageIndex] ;
      if (page != NULL) {
        uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] & kNameMask ;
        bool completed = entry == 0 ;
        uint32_t idx = 0 ;
        while (! completed) {
          const uint8_t nameCode = gPartNameConstruction [entry] ;
          entry += 1 ;
          idx = (idx << 6) | (nameCode & 0x3F) ;
          switch (nameCode & 0xC0) {
          case 0 : // Prefix
            break ;
          case 0x40 : // Enter name, append space character
            result.appendString (gPartNames [idx]) ;
            result.appendCString (" ") ;
            idx = 0 ;
            break ;
          case 0x80 : // Enter name, append minus character
            result.appendString (gPartNames [idx]) ;
            result.appendCString ("-") ;
            idx = 0 ;
            break ;
          default : // Enter name, exit
            result.appendString (gPartNames [idx]) ;
            completed = true ;
            break ;
          }
        }
      }
    }
    if (result.length () == 0) {
      if (UNICODE_VALUE (inUnicodeCharacter) < 0x10000) {
        result.appendCString ("\\u") ;
        result.appendUnsignedHex4 (UNICODE_VALUE (inUnicodeCharacter)) ;
      }else{
        result.appendCString ("\\U") ;
        result.appendUnsignedHex8 (UNICODE_VALUE (inUnicodeCharacter)) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

utf32 unicodeToLower (const utf32 inUnicodeCharacter) {
  utf32 result = inUnicodeCharacter ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gToLowerPageSize ;
  if (pageIndex <= gLastToLowerPage) {
    const uint32_t * page = gToLowerPages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gToLowerPageSize] ;
      if (entry != 0) {
        result = TO_UNICODE (entry) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

utf32 unicodeToUpper (const utf32 inUnicodeCharacter) {
  utf32 result = inUnicodeCharacter ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gToUpperPageSize ;
  if (pageIndex <= gLastToUpperPage) {
    const uint32_t * page = gToUpperPages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gToUpperPageSize] ;
      if (entry != 0) {
        result = TO_UNICODE (entry) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodeLetter (const utf32 inUnicodeCharacter) {
  bool ok = (0x61 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x7A) ;
  if (!ok) {
    ok = (0x41 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x5A) ;
  }
  if (!ok) {
    ok = 0xB5 == UNICODE_VALUE (inUnicodeCharacter) ;
  }
  if (!ok) {
    ok = (0xC0 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0xD6) ;
  }
  if (!ok) {
    ok = (0xD8 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0xF6) ;
  }
  if (!ok) {
    ok = (0xF8 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x2B4) ;
  }
  if (!ok) {
    ok = (0x38E <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x3A1) ;
  }
  if (!ok) {
    ok = (0x3A3 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x3F5) ;
  }
  if (!ok) {
    ok = (0x3F7 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x481) ;
  }
  if (!ok) {
    ok = (0x48A <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x523) ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodeMark (const utf32 inUnicodeCharacter) {
  bool result = false ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Mn) && (category <= kUnicodeCategory_Me) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodeNumber (const utf32 inUnicodeCharacter) {
  bool result = false ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Nd) && (category <= kUnicodeCategory_No) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodeDecimalDigit (const utf32 inUnicodeCharacter) {
  bool result = false ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = category == kUnicodeCategory_Nd ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t unicodeDecimalValue (const utf32 inUnicodeCharacter) {
  uint32_t result = 0 ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
      if (entry != 0) {
        if ((entry >> 27) == kUnicodeCategory_Nd) {
          result = (entry >> 16) & 0xF ;
        }
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodeASCIIHexDigit (const utf32 inUnicodeCharacter) {
  return
    ((UNICODE_VALUE (inUnicodeCharacter) >= '0') && (UNICODE_VALUE (inUnicodeCharacter) <= '9')) ||
    ((UNICODE_VALUE (inUnicodeCharacter) >= 'A') && (UNICODE_VALUE (inUnicodeCharacter) <= 'F')) ||
    ((UNICODE_VALUE (inUnicodeCharacter) >= 'a') && (UNICODE_VALUE (inUnicodeCharacter) <= 'f'))
  ;
}

//--------------------------------------------------------------------------------------------------

uint32_t ASCIIHexValue (const utf32 inUnicodeCharacter) {
  uint32_t result = 0 ;
  if ((UNICODE_VALUE (inUnicodeCharacter) >= '0') && (UNICODE_VALUE (inUnicodeCharacter) <= '9')) {
    result = UNICODE_VALUE (inUnicodeCharacter) - '0' ;
  }else if ((UNICODE_VALUE (inUnicodeCharacter) >= 'A') && (UNICODE_VALUE (inUnicodeCharacter) <= 'F')) {
    result = UNICODE_VALUE (inUnicodeCharacter) - 'A' + 10 ;
  }else if ((UNICODE_VALUE (inUnicodeCharacter) >= 'a') && (UNICODE_VALUE (inUnicodeCharacter) <= 'f')) {
    result = UNICODE_VALUE (inUnicodeCharacter) - 'a' + 10 ;
  }
  return result  ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodeSeparator (const utf32 inUnicodeCharacter) {
  bool result = false ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Zs) && (category <= kUnicodeCategory_Zp) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodeCommand (const utf32 inUnicodeCharacter) {
  bool result = true ; // Undefined character has 'Cn' category
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Cc) && (category <= kUnicodeCategory_Co) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodePunctuation (const utf32 inUnicodeCharacter) {
  bool result = false ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Pc) && (category <= kUnicodeCategory_Po) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool isUnicodeSymbol (const utf32 inUnicodeCharacter) {
  bool result = false ;
  const uint32_t pageIndex = UNICODE_VALUE (inUnicodeCharacter) / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != NULL) {
      const uint32_t entry = page [UNICODE_VALUE (inUnicodeCharacter) % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Sm) && (category <= kUnicodeCategory_So) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t utf8Length (const utf32 inUnicodeCharacter) {
  uint32_t r = 1 ;
  if (UNICODE_VALUE (inUnicodeCharacter) >= 0x10000) {
    r = 4 ;
  }else if (UNICODE_VALUE (inUnicodeCharacter) >= 0x800) {
    r = 3 ;
  }else if (UNICODE_VALUE (inUnicodeCharacter) >= 0x80) {
    r = 2 ;
  }
  return r ;
}

//--------------------------------------------------------------------------------------------------

utf32 unicodeCharacterFromHTMLSequence (const String & inString) {
  utf32 result = TO_UNICODE (0) ; // Means not found
  int32_t lowIndex = 0 ;
  int32_t highIndex = kHTMLtoUnicodeConversionTableSize - 1 ;
  while ((highIndex >= lowIndex) && (UNICODE_VALUE (result) == 0)) {
    const int32_t newIndex = (highIndex + lowIndex) / 2 ;
    const int32_t c = inString.compare (kHTMLtoUnicodeConversionArray [newIndex].mDefinition) ;
    if (c > 0) {
      lowIndex = newIndex + 1 ;
    }else if (c < 0) {
      highIndex = newIndex - 1 ;
    }else{
      result = TO_UNICODE (kHTMLtoUnicodeConversionArray [newIndex].mUnicodeCharacter) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// From:
//   http://www.unicode.org/Public/PROGRAMS/CVTUTF/ConvertUTF.c
//   http://github.com/lloyd/yajl/blob/d55329340828a736777056f49afd21cb67e2b6b8/src/yajl_encode.c
//--- UTF8 encoding
// 0000 0000  0000 0000  0xxx xxxx -> 0xxx xxxx
// 0000 0000  0000 0yyy  xxxx xxxx -> 110y yyxx  10xx xxxx
// 0000 0000  zzzz yyyy  xxxx xxxx -> 1110 zzzz  10yy yyxx  10xx xxxx
// 000u uuuu  zzzz yyyy  xxxx xxxx -> 1111 0uuu  10uu zzzz  10yy yyxx  10xx xxxx

int32_t UTF8StringFromUTF32Character (const utf32 inUnicodeChar, char outSequence [5]) {
  uint32_t codePoint = UNICODE_VALUE (inUnicodeChar) ;
  if (codePoint > UNICODE_VALUE (UNICODE_MAX_LEGAL_UTF32_CHARACTER)) {
    codePoint = UNICODE_VALUE (UNICODE_REPLACEMENT_CHARACTER) ;
  }
  int32_t resultByteCount = 0 ;
  if (codePoint < 0x80) {
    outSequence [0] = (char) (codePoint & 255) ;
    outSequence [1] = 0 ;
    resultByteCount = 1 ;
  }else if (codePoint < 0x0800) {
    outSequence [0] = (char) (((codePoint >> 6) | 0xC0) & 255) ;
    outSequence [1] = (char) ((codePoint & 0x3F) | 0x80) ;
    outSequence [2] = 0 ;
    resultByteCount = 2 ;
  }else if (codePoint < 0x10000) {
    outSequence [0] = (char) (((codePoint >> 12) | 0xE0) & 255) ;
    outSequence [1] = (char) (((codePoint >> 6) & 0x3F) | 0x80) ;
    outSequence [2] = (char) ((codePoint & 0x3F) | 0x80) ;
    outSequence [3] = 0 ;
    resultByteCount = 3 ;
  }else{
    outSequence [0] = (char) (((codePoint >> 18) | 0xF0) & 255) ;
    outSequence [1] = (char) (((codePoint >> 12) & 0x3F) | 0x80) ;
    outSequence [2] = (char) (((codePoint >> 6) & 0x3F) | 0x80) ;
    outSequence [3] = (char) ((codePoint & 0x3F) | 0x80) ;
    outSequence [4] = 0 ;
    resultByteCount = 4 ;
  }
  return resultByteCount ;
}

//--- UTF8 encoding
// 0000 0000  0000 0000  0xxx xxxx -> 0xxx xxxx
// 0000 0000  0000 0yyy  xxxx xxxx -> 110y yyxx  10xx xxxx
// 0000 0000  zzzz yyyy  xxxx xxxx -> 1110 zzzz  10yy yyxx  10xx xxxx
// 000u uuuu  zzzz yyyy  xxxx xxxx -> 1111 0uuu  10uu zzzz  10yy yyxx  10xx xxxx
//--------------------------------------------------------------------------------------------------

utf32 utf32CharacterForPointer (const uint8_t * inDataString,
                                int32_t & ioIndex,
                                const int32_t inLength,
                                bool & ioOK) {
  uint32_t result = 0 ;
  uint32_t c = inDataString [ioIndex] ;
  ioIndex += 1 ;
  ioOK = true ;
  if ((c & 0x80) == 0) {
    result = c ;
  }else if ((c & 0xE0) == 0xC0) {
    result = c & 0x1F ;
    result <<= 6 ;
    c = inDataString [ioIndex] ;
    ioOK = ((c & 0xC0) == 0x80) && (ioIndex < inLength) ;
    if (ioOK) {
      ioIndex += 1 ;
      result |= c & 0x3F ;
    }
  }else if ((c & 0xF0) == 0xE0) {
    result = c & 0x0F ;
    result <<= 12 ;
    c = inDataString [ioIndex] ;
    ioOK = ((c & 0xC0) == 0x80) && (ioIndex < inLength) ;
    if (ioOK) {
      ioIndex += 1 ;
      result |= (c & 0x3F) << 6 ;
      c = inDataString [ioIndex] ;
      if (ioOK) {
        ioOK &= ((c & 0xC0) == 0x80) && (ioIndex < inLength) ;
        ioIndex += 1 ;
        result |= c & 0x3F ;
      }
    }
  }else if ((c & 0xF8) == 0xF0) {
    result = (c & 0x07) << 18 ;
    c = inDataString [ioIndex] ;
    ioOK = ((c & 0xC0) == 0x80) && (ioIndex < inLength) ;
    if (ioOK) {
      ioIndex += 1 ;
      result |= (c & 0x3F) << 12 ;
      c = inDataString [ioIndex] ;
      ioOK = ((c & 0xC0) == 0x80) && (ioIndex < inLength) ;
      if (ioOK) {
        ioIndex += 1 ;
        result |= (c & 0x3F) << 6 ;
        c = inDataString [ioIndex] ;
        ioOK = ((c & 0xC0) == 0x80) && (ioIndex < inLength) ;
        if (ioOK) {
          ioIndex += 1 ;
          result |= c & 0x3F ;
        }
      }
    }
  }else{
    ioOK = false ;
  }
  if (! ioOK) {
    result = UNICODE_VALUE (UNICODE_REPLACEMENT_CHARACTER) ;
  }
  return TO_UNICODE (result) ;
}

//--------------------------------------------------------------------------------------------------
//  https://msdn.microsoft.com/en-us/library/565w213d.aspx (??)

bool isRestrictedUnicodeLetter (const utf32 inUnicodeCharacter) {
  const uint32_t codePoint = UNICODE_VALUE (inUnicodeCharacter) ;
  bool ok = (0x41 <= codePoint) && (codePoint <= 0x5A) ;
  if (!ok) {
    ok = (0x61 <= codePoint) && (codePoint <= 0x7A) ;
  }
  if (!ok) {
    ok = (0xC0 <= codePoint) && (codePoint <= 0xD6) ;
  }
  if (!ok) {
    ok = (0xD8 <= codePoint) && (codePoint <= 0xF6) ;
  }
  if (!ok) {
    ok = (0xF6 <= codePoint) && (codePoint <= 0x2B4) ;
  }
  if (!ok) {
    ok = (0x38E <= codePoint) && (codePoint <= 0x3A1) ;
  }
  if (!ok) {
    ok = (0x3A3 <= codePoint) && (codePoint <= 0x3F5) ;
  }
  if (!ok) {
    ok = (0x3F7 <= codePoint) && (codePoint <= 0x481) ;
  }
  if (!ok) {
    ok = (0x48A <= codePoint) && (codePoint <= 0x523) ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------
