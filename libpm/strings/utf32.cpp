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

#include "utf32.h"
#include "unicode-data.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------

bool utf32::isAssigned (void)  const{
  bool result = mCodePoint <= UNICODE_MAX_LEGAL_UTF32_CHARACTER.u32 () ;
  if (result) {
    const uint32_t pageIndex = mCodePoint / gNamePageSize ;
    if (pageIndex <= gLastNamePage) {
      const uint32_t * page = gNamePages [pageIndex] ;
      if (page != nullptr) {
        const uint32_t entry = page [mCodePoint % gNamePageSize] ;
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
//--------------------------------------------------------------------------------------------------

String utf32::unicodeName (void) const {
  String result ;
  if (!isAssigned ()) {
    result.appendCString ("invalid unicode character \\U") ;
    result.appendUnsignedHex8 (mCodePoint) ;
  }else{
    const uint32_t pageIndex = mCodePoint / gNamePageSize ;
    if (pageIndex <= gLastNamePage) {
      const uint32_t * page = gNamePages [pageIndex] ;
      if (page != nullptr) {
        uint32_t entry = page [mCodePoint % gNamePageSize] & kNameMask ;
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
      if (mCodePoint < 0x10000) {
        result.appendCString ("\\u") ;
        result.appendUnsignedHex4 (mCodePoint) ;
      }else{
        result.appendCString ("\\U") ;
        result.appendUnsignedHex8 (mCodePoint) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

utf32 utf32::toLower (void) const {
  utf32 result = mCodePoint ;
  const uint32_t pageIndex = mCodePoint / gToLowerPageSize ;
  if (pageIndex <= gLastToLowerPage) {
    const uint32_t * page = gToLowerPages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gToLowerPageSize] ;
      if (entry != 0) {
        result = utf32 (entry) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

utf32 utf32::toUpper (void) const {
  utf32 result = mCodePoint ;
  const uint32_t pageIndex = mCodePoint / gToUpperPageSize ;
  if (pageIndex <= gLastToUpperPage) {
    const uint32_t * page = gToUpperPages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gToUpperPageSize] ;
      if (entry != 0) {
        result = utf32 (entry) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isLetter (void) const {
  bool ok = (0x61 <= mCodePoint) && (mCodePoint <= 0x7A) ;
  if (!ok) {
    ok = (0x41 <= mCodePoint) && (mCodePoint <= 0x5A) ;
  }
  if (!ok) {
    ok = 0xB5 == mCodePoint ;
  }
  if (!ok) {
    ok = (0xC0 <= mCodePoint) && (mCodePoint <= 0xD6) ;
  }
  if (!ok) {
    ok = (0xD8 <= mCodePoint) && (mCodePoint <= 0xF6) ;
  }
  if (!ok) {
    ok = (0xF8 <= mCodePoint) && (mCodePoint <= 0x2B4) ;
  }
  if (!ok) {
    ok = (0x38E <= mCodePoint) && (mCodePoint <= 0x3A1) ;
  }
  if (!ok) {
    ok = (0x3A3 <= mCodePoint) && (mCodePoint <= 0x3F5) ;
  }
  if (!ok) {
    ok = (0x3F7 <= mCodePoint) && (mCodePoint <= 0x481) ;
  }
  if (!ok) {
    ok = (0x48A <= mCodePoint) && (mCodePoint <= 0x523) ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isMark (void) const {
  bool result = false ;
  const uint32_t pageIndex = mCodePoint / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Mn) && (category <= kUnicodeCategory_Me) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isNumber (void) const {
  bool result = false ;
  const uint32_t pageIndex = mCodePoint / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Nd) && (category <= kUnicodeCategory_No) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isDecimalDigit (void) const {
  bool result = false ;
  const uint32_t pageIndex = mCodePoint / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = category == kUnicodeCategory_Nd ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isASCIIHexDigit (void) const {
  return
    ((mCodePoint >= '0') && (mCodePoint <= '9')) ||
    ((mCodePoint >= 'A') && (mCodePoint <= 'F')) ||
    ((mCodePoint >= 'a') && (mCodePoint <= 'f'))
  ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isSeparator (void) const {
  bool result = false ;
  const uint32_t pageIndex = mCodePoint / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Zs) && (category <= kUnicodeCategory_Zp) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isCommand (void) const {
  bool result = true ; // Undefined character has 'Cn' category
  const uint32_t pageIndex = mCodePoint / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Cc) && (category <= kUnicodeCategory_Co) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isPunctuation (void) const {
  bool result = false ;
  const uint32_t pageIndex = mCodePoint / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Pc) && (category <= kUnicodeCategory_Po) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool utf32::isSymbol (void) const {
  bool result = false ;
  const uint32_t pageIndex = mCodePoint / gNamePageSize ;
  if (pageIndex <= gLastNamePage) {
    const uint32_t * page = gNamePages [pageIndex] ;
    if (page != nullptr) {
      const uint32_t entry = page [mCodePoint % gNamePageSize] ;
      if (entry != 0) {
        const uint32_t category = entry >> 27 ;
        result = (category >= kUnicodeCategory_Sm) && (category <= kUnicodeCategory_So) ;
      }
    }
  } 
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t utf32::utf8Length (void) const {
  uint32_t r = 1 ;
  if (mCodePoint >= 0x10000) {
    r = 4 ;
  }else if (mCodePoint >= 0x800) {
    r = 3 ;
  }else if (mCodePoint >= 0x80) {
    r = 2 ;
  }
  return r ;
}

//--------------------------------------------------------------------------------------------------

utf32 unicodeCharacterFromHTMLSequence (const String & inString) {
  utf32 result = utf32 (0) ; // Means not found
  int32_t lowIndex = 0 ;
  int32_t highIndex = kHTMLtoUnicodeConversionTableSize - 1 ;
  while ((highIndex >= lowIndex) && (result.u32 () == 0)) {
    const int32_t newIndex = (highIndex + lowIndex) / 2 ;
    const int32_t c = inString.compare (kHTMLtoUnicodeConversionArray [newIndex].mDefinition) ;
    if (c > 0) {
      lowIndex = newIndex + 1 ;
    }else if (c < 0) {
      highIndex = newIndex - 1 ;
    }else{
      result = utf32 (kHTMLtoUnicodeConversionArray [newIndex].mUnicodeCharacter) ;
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
//--------------------------------------------------------------------------------------------------

int32_t UTF8StringFromUTF32Character (const utf32 inUnicodeChar, char outSequence [5]) {
  uint32_t codePoint = inUnicodeChar.u32 () ;
  if (codePoint > UNICODE_MAX_LEGAL_UTF32_CHARACTER.u32 ()) {
    codePoint = UNICODE_REPLACEMENT_CHARACTER.u32 () ;
  }
  int32_t resultByteCount = 0 ;
  if (codePoint < 0x80) {
    outSequence [0] = char (codePoint & 255) ;
    outSequence [1] = 0 ;
    resultByteCount = 1 ;
  }else if (codePoint < 0x0800) {
    outSequence [0] = char (((codePoint >> 6) | 0xC0) & 255) ;
    outSequence [1] = char ((codePoint & 0x3F) | 0x80) ;
    outSequence [2] = 0 ;
    resultByteCount = 2 ;
  }else if (codePoint < 0x10000) {
    outSequence [0] = char (((codePoint >> 12) | 0xE0) & 255) ;
    outSequence [1] = char (((codePoint >> 6) & 0x3F) | 0x80) ;
    outSequence [2] = char ((codePoint & 0x3F) | 0x80) ;
    outSequence [3] = 0 ;
    resultByteCount = 3 ;
  }else{
    outSequence [0] = char (((codePoint >> 18) | 0xF0) & 255) ;
    outSequence [1] = char (((codePoint >> 12) & 0x3F) | 0x80) ;
    outSequence [2] = char (((codePoint >> 6) & 0x3F) | 0x80) ;
    outSequence [3] = char ((codePoint & 0x3F) | 0x80) ;
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
    result = UNICODE_REPLACEMENT_CHARACTER.u32 () ;
  }
  return utf32 (result) ;
}

//--------------------------------------------------------------------------------------------------
