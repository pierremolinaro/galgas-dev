//--------------------------------------------------------------------------------------------------
//
//  AbstractOutputStream : an abstract output stream class
//
//  This file is part of libpm library
//
//  Copyright (C) 1997, ..., 2023 Pierre Molinaro.
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

#include "AbstractOutputStream.h"
#include "String-class.h"
#include "DateTime.h"
#include "unicode_character_cpp.h"
#include "unicode_string_routines.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>
#include <ctype.h>

#define __STDC_FORMAT_MACROS // This is required for GCC for windows
#include <inttypes.h>

//--------------------------------------------------------------------------------------------------

AbstractOutputStream::AbstractOutputStream (void) :
mIndentation (0),
mStartingLine (true) {
}

//--------------------------------------------------------------------------------------------------

AbstractOutputStream::~AbstractOutputStream (void) {
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendString (const char * inCstring) {
  if (inCstring != nullptr) {
    genericCharArrayOutput (inCstring, (int32_t) (strlen (inCstring) & UINT32_MAX)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::genericCharArrayOutput (const char * inCharArray, const int32_t inArrayCount) {
  if (mIndentation == 0) {
    performActualCharArrayOutput (inCharArray, inArrayCount) ;
  }else if (inArrayCount > 0) {
    for (int32_t i=0 ; i<inArrayCount ; i++) {
      if (mStartingLine) {
        for (int32_t j=0 ; j<mIndentation ; j++) {
          performActualCharArrayOutput (" ", 1) ;
        }
      }
      performActualCharArrayOutput (& (inCharArray [i]) , 1) ;
      mStartingLine = inCharArray [i] == '\n' ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::genericUnicodeArrayOutput (const utf32 * inCharArray, const int32_t inArrayCount) {
  if (mIndentation == 0) {
    performActualUnicodeArrayOutput (inCharArray, inArrayCount) ;
  }else if (inArrayCount > 0) {
    for (int32_t i=0 ; i<inArrayCount ; i++) {
      if (mStartingLine) {
        for (int32_t j=0 ; j<mIndentation ; j++) {
          const utf32 space [1] = {TO_UNICODE (' ')} ;
          performActualUnicodeArrayOutput (space, 1) ;
        }
      }
      performActualUnicodeArrayOutput (& (inCharArray [i]) , 1) ;
      mStartingLine = UNICODE_VALUE (inCharArray [i]) == '\n' ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << String
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendNewLine (void) {
  appendString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendString (const String inString) {
  genericUnicodeArrayOutput (inString.utf32String (HERE), inString.length ()) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << char *
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendString (const char * inCstring, const int32_t inCount) {
  genericCharArrayOutput (inCstring, inCount) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUTF32String (const utf32 * inUTF32String) {
  genericUnicodeArrayOutput (inUTF32String, utf32_strlen (inUTF32String)) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUTF32LiteralStringConstant (const String & inString) {
  const utf32 * str = inString.utf32String (HERE) ;
  appendUnicodeChar (TO_UNICODE ('{') COMMA_HERE) ;
  while (UNICODE_VALUE (* str) != 0) {
    const utf32 c = * str ;
    appendString ("\n  TO_UNICODE (") ;
    if (isprint ((int) UNICODE_VALUE (c))) {
      appendStringAsCLiteralCharConstant (c) ;
    }else{
      appendUnsigned (UNICODE_VALUE (c)) ;
    }
    appendString ("),") ;
    str ++ ;
  }
  appendString ("\n  TO_UNICODE (0)\n}") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << char
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendASCIIChar (const char inValue) {
  appendUnicodeChar (TO_UNICODE (uint32_t (inValue)) COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnicodeChar (const utf32 inUnicodeCharacter COMMA_UNUSED_LOCATION_ARGS) {
  genericUnicodeArrayOutput (& inUnicodeCharacter, 1) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << double
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendDouble (const double inValue) {
  char s [40] ;
  snprintf (s, 40, "%g", inValue) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark uint64_t
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnsigned (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%" PRIu64, inValue) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnsignedHex16 (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%016" PRIX64, inValue) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << int64_t
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendSigned (const int64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%" PRId64, inValue) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Bool
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendBool (const bool inValue) {
  appendString (inValue ? "true" : "false") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << uint32_t
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnsignedWithZeroFill (const uint64_t inValue, const uint32_t inWidth) {
  char s [32] ;
  snprintf (s, 31, "%" PRIu64, inValue) ;
  for (uint32_t i = uint32_t (strlen (s)) ; i < inWidth ; i++) {
    appendString (" ") ;
  }
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnsignedHex (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%" PRIX64, inValue) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnsigned0xHex (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "0x%" PRIX64, inValue) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnsignedHex2 (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%02" PRIX64, inValue & 0xFF) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnsignedHex4 (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%04" PRIX64, inValue & 0xFFFF) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUnsignedHex8 (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%08" PRIX64, inValue) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << void *
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendPointer (const void * inValue) {
  char s [30] ;
  snprintf (s, 29, "%p", inValue) ;
  appendString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendSpaces (const int32_t inSpaceCount) {
  for (int32_t i=0 ; i<inSpaceCount ; i++) {
    appendUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendStringMultiple (const String & inString,
                                                 const int32_t inRepeatCount) {
  for (int32_t i=0 ; i<inRepeatCount ; i++) {
    appendString (inString) ;
  }
}

//--------------------------------------------------------------------------------------------------
//                          Comments
//--------------------------------------------------------------------------------------------------

static const int32_t kCommentMaxLength = 99 ;

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendHyphenLineCommentWithoutExtraBlankLine (const String & inLineCommentPrefix) {
  appendString (inLineCommentPrefix) ;
  for (int32_t i=1 ; i<kCommentMaxLength ; i++) {
    appendString ("-") ;
  }
  appendString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendTitleComment (const String & inLineCommentPrefix,
                                          const String & inCommentString) {
  appendHyphenLineCommentWithoutExtraBlankLine (inLineCommentPrefix) ;
  appendSpaceLineComment (inLineCommentPrefix) ;
  appendCenterJustifiedComment (inLineCommentPrefix, inCommentString) ;
  appendSpaceLineComment (inLineCommentPrefix) ;
  appendHyphenLineComment (inLineCommentPrefix) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendComment (const String & inLineCommentPrefix,
                                          const String & inCommentString) {
  appendString (inLineCommentPrefix) ;
  appendString (" ") ;
  appendString (inCommentString) ;
  appendString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendCenterJustifiedComment (const String & inLineCommentPrefix,
                                                         const String & inCommentString) {
  const int32_t commentLength = inCommentString.length () ;
  const int32_t n = (kCommentMaxLength - 3 - commentLength) / 2 ;

  appendString (inLineCommentPrefix) ;
  for (int32_t i=0 ; i<n ; i++) {
   appendString (" ") ;
  }
  appendString (inCommentString) ;
  const int32_t fin = kCommentMaxLength - n - commentLength - 2 ;
  for (int32_t j=0 ; j<=fin ; j++) {
    appendString (" ") ;
  }
  appendString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendSpaceLineComment (const String & inLineCommentPrefix) {
  appendString (inLineCommentPrefix) ;
  appendString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendHyphenLineComment (const String & inLineCommentPrefix) {
  appendHyphenLineCommentWithoutExtraBlankLine (inLineCommentPrefix) ;
  appendString ("\n") ;
}

//--------------------------------------------------------------------------------------------------
//                          C Comments
//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::append_C_HyphenLineComment (void) {
  appendString ("/*") ;
  for (int32_t i=0 ; i<(kCommentMaxLength-4) ; i++) {
    appendString ("-") ;
  }
  appendString ("*/\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::append_C_SpaceLineComment (void) {
  appendString ("/*") ;
  for (int32_t i=0 ; i<(kCommentMaxLength-4) ; i++) {
    appendString (" ") ;
  }
  appendString ("*/\n") ;
}

//--------------------------------------------------------------------------------------------------
//                        C++ Comments
//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendCppHyphenLineCommentWithoutExtraBlankLine (void) {
  appendHyphenLineCommentWithoutExtraBlankLine ("//") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendCppTitleComment (const String & inCommentString) {
  appendTitleComment ("//", inCommentString) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendCppTitleComment (const char * inCommentString) {
  appendTitleComment ("//", inCommentString) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendCppComment (const String & inCommentString) {
  appendComment ("//", inCommentString) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendCppCenterJustifiedComment (const String & inCommentString) {
  appendCenterJustifiedComment ("//", inCommentString) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendCppSpaceLineComment (void) {
  appendSpaceLineComment ("//") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendCppHyphenLineComment (void) {
  appendHyphenLineComment ("//") ;
}

//--------------------------------------------------------------------------------------------------

static void internalWriteCstringConstantWithoutDelimiters (AbstractOutputStream & ioStream,
                                                           const String & inString,
                                                           const int32_t inStringLength,
                                                           const int32_t inLineMaxLength) {
  int32_t currentColumn = 0 ;
  for (int32_t i=0 ; i<inStringLength ; i++) {
    if (currentColumn > inLineMaxLength) {
      ioStream.appendString ("\"\n  \"") ;
      currentColumn = 0 ;
    }
    currentColumn ++ ;
    const utf32 c = inString (i COMMA_HERE) ;
    switch (UNICODE_VALUE (c)) {
    case '\0' :
      break ;
    case '\a' :
      ioStream.appendString ("\\a") ;
      break ;
    case '\b' :
      ioStream.appendString ("\\b") ;
      break ;
    case '\f' :
      ioStream.appendString ("\\f") ;
      break ;
    case '\n' :
      ioStream.appendString ("\\n") ;
      if (i < (inStringLength - 1)) {
        ioStream.appendString ("\"\n  \"") ;
        currentColumn = 1 ;
      }
      break ;
    case '\r' :
      ioStream.appendString ("\\r") ;
      break ;
    case '\t' :
      ioStream.appendString ("\\t") ;
      break ;
    case '\v' :
      ioStream.appendString ("\\v") ;
      break ;
    case '\\' :
      ioStream.appendString ("\\\\") ;
      break ;
    case '\"' :
      ioStream.appendString ("\\\"") ;
      break ;
    default :
      if ((UNICODE_VALUE (c) >= ' ') && (UNICODE_VALUE (c) < 127)) {
        ioStream.appendUnicodeChar (c COMMA_HERE) ;
      }else{
        char buffer [5] ;
        const int32_t n = UTF8StringFromUTF32Character (c, buffer) ;
        for (int32_t j=0 ; j<n ; j++) {
          ioStream.appendString ("\\x") ;
          ioStream.appendUnsignedHex2 ((uint32_t) buffer [j]) ;
          ioStream.appendString ("\"\"")  ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

static void internalWriteCstringConstant (AbstractOutputStream & ioStream,
                                          const String & inString,
                                          const int32_t inStringLength,
                                          const int32_t inLineMaxLength) {
  ioStream.appendString ("\"") ;
  internalWriteCstringConstantWithoutDelimiters (ioStream, inString, inStringLength, inLineMaxLength) ;
  ioStream.appendString ("\"") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendStringAsCLiteralStringConstant (const String & inString) {
  internalWriteCstringConstant (*this, inString, inString.length (), 150) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendStringAsCLiteralStringConstantWithoutDelimiters (const String & inString) {
  internalWriteCstringConstantWithoutDelimiters (*this, inString, inString.length (), 150) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendStringAsCLiteralCharConstant (const utf32 c) {
  switch (UNICODE_VALUE (c)) {
  case '\0' :
    appendString ("'\\0'") ;
    break ;
  case '\a' :
    appendString ("'\\a'") ;
    break ;
  case '\b' :
    appendString ("'\\b'") ;
    break ;
  case '\f' :
    appendString ("'\\f'") ;
    break ;
  case '\n' :
    appendString ("'\\n'") ;
    break ;
  case '\r' :
    appendString ("'\\r'") ;
    break ;
  case '\t' :
    appendString ("'\\t'") ;
    break ;
  case '\v' :
    appendString ("'\\v'") ;
    break ;
  case '\\' :
    appendString ("'\\\\'") ;
    break ;
  case '\'' :
    appendString ("'\\''") ;
    break ;
  case '\"' :
    appendString ("'\\\"'") ;
    break ;
  case '\?' :
    appendString ("'\\\?'") ;
    break ;
  default :
    if ((UNICODE_VALUE (c) >= ' ') && (UNICODE_VALUE (c) <= '~')) {
      appendString ("'") ;
      appendUnicodeChar (c COMMA_HERE) ;
      appendString ("'") ;
    }else{
      appendUnsigned (UNICODE_VALUE (c)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark stringWith...
#endif

//--------------------------------------------------------------------------------------------------

String stringWithUnsigned (const uint64_t inValue) {
  String result ;
  result.appendUnsigned (inValue) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithUnsigned0xHex (const uint64_t inValue) {
  String s ;
  s.appendUnsigned0xHex (inValue) ;
  return s ;
}

//--------------------------------------------------------------------------------------------------

String stringWithSigned (const int64_t inValue) {
  String result ;
  result.appendSigned (inValue) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithCharacter (const char inValue) {
  String result ;
  result.appendUnicodeChar (TO_UNICODE (uint32_t (inValue)) COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithUnicodeCharacter (const utf32 inValue) {
  String result ;
  result.appendUnicodeChar (inValue COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithPointer (const void * inValue) {
  String result ;
  result.appendPointer (inValue) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithDouble (const double inValue) {
  String result ;
  result.appendDouble (inValue) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
