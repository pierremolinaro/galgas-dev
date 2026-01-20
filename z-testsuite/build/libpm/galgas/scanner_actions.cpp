//--------------------------------------------------------------------------------------------------
//
//  scanner_actions: hand-coded routines for building attribute values during scanning.
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2023 Pierre Molinaro.
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

#include "scanner_actions.h"
#include "utf32.h"
#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

#include <errno.h>
#include <ctype.h>

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS , inLexique.sourceText ().sourceFilePath ().cString (), inLexique.lineNumber ()
#else
  #define LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS
#endif

//--------------------------------------------------------------------------------------------------
//
//   P R E D E F I N E D    S C A N N E R    A C T I O N S
//
//--------------------------------------------------------------------------------------------------

void scanner_routine_enterHexDigitIntoASCIIcharacter (Lexique & inLexique,
                                                      utf32 & ioValue,
                                                      const utf32 inChar,
                                                      const char * inErrorCodeGreaterThan255,
                                                      const char * inErrorNotHexDigitCharacter) {
  if (isxdigit (int (inChar.u32 ()))) {
    uint32_t tempo = ioValue.u32 () << 4 ;
    if ((inChar.u32 () >= '0') && (inChar.u32 () <= '9')) {
      tempo += inChar.u32 () - '0' ;
    }else if ((inChar.u32 () >= 'A') && (inChar.u32 () <= 'F')) {
      tempo += inChar.u32 () + 10 - 'A' ;
    }else{
      tempo += inChar.u32 () + 10 - 'a' ;
    }
    if (tempo > 255) {
      inLexique.lexicalError (inErrorCodeGreaterThan255 LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      ioValue = utf32 (tempo) ;
    }
  }else{
    inLexique.lexicalError (inErrorNotHexDigitCharacter LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterDigitIntoASCIIcharacter (Lexique & inLexique,
                                                   utf32 & ioValue,
                                                   const utf32 inChar,
                                                   const char * inErrorCodeGreaterThan255,
                                                   const char * inErrorNotDigitCharacter) {
  if ((inChar.u32 () >= '0') && (inChar.u32 () <= '9')) {
    uint32_t tempo = ioValue.u32 () ;
    tempo *= 10  ;
    tempo += inChar.u32 () - '0' ;
    if (tempo > 255) {
      inLexique.lexicalError (inErrorCodeGreaterThan255 LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      ioValue = utf32 (tempo) ;
    }
  }else{
    inLexique.lexicalError (inErrorNotDigitCharacter LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterCharacterIntoString (Lexique & /* inLexique */,
                                               String & ioString,
                                               const utf32 inChar) {
  ioString.appendChar (inChar) ;
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_prependCharacter (Lexique & /* inLexique */,
                                       String & ioString,
                                       const utf32 inCharacter) {
  ioString.insertCharacterAtIndex (inCharacter, 0 COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertStringToDouble (Lexique & inLexique,
                                            const String & inString,
                                            double & outValue,
                                            const char * inConversionError) {
  const double value = ::strtod (inString.cString (), nullptr) ;
  if (errno == ERANGE) {
    inLexique.lexicalError (inConversionError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    outValue = value ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterCharacterIntoCharacter (Lexique & /* inLexique */,
                                                  utf32 & outCharacter,
                                                  const utf32 inCharacter) {
  outCharacter = inCharacter ;
}

//--------------------------------------------------------------------------------------------------

utf32 scanner_function_toLower (Lexique & /* inLexique */, const utf32 c) {
  return c.toLower () ;
}

//--------------------------------------------------------------------------------------------------

utf32 scanner_function_toUpper (Lexique & /* inLexique */, const utf32 c) {
  return c.toUpper () ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 1.4.0)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_negateSInt (Lexique & inLexique,
                                 int32_t & ioValue,
                                 const char * inNumberTooLargeError) {
  if (ioValue == INT32_MIN) {
    inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    ioValue = - ioValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_negateSInt64 (Lexique & inLexique,
                                   int64_t & ioValue,
                                   const char * inNumberTooLargeError) {
  if (ioValue == INT64_MIN) {
    inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    ioValue = - ioValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertUIntToSInt (Lexique & inLexique,
                                        const uint32_t inValue,
                                        int32_t & outValue,
                                        const char * inNumberTooLargeError) {
  if (inValue > INT32_MAX) {
    inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    outValue = (int32_t) inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertUInt64ToSInt64 (Lexique & inLexique,
                                            const uint64_t inValue,
                                            int64_t & outValue,
                                            const char * inNumberTooLargeError) {
  if (inValue > INT64_MAX) {
    inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    outValue = (int64_t) inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterDigitIntoUInt (Lexique & inLexique,
                                         const utf32 inCharacter,
                                         uint32_t & inValue,
                                         const char * inNumberTooLargeError,
                                         const char * inCharacterIsNotDecimalDigitError) {
  if ((inCharacter.u32 () < '0') || (inCharacter.u32 () > '9')) {
    inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint32_t digit = inCharacter.u32 () - '0' ;
    const uint32_t max = UINT32_MAX / 10 ;
    if (inValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else if ((inValue == max) && (digit > 5)) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      inValue = inValue * 10 + digit ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterDigitIntoUInt64 (Lexique & inLexique,
                                           const utf32 inCharacter,
                                           uint64_t & ioValue,
                                           const char * inNumberTooLargeError,
                                           const char * inCharacterIsNotDecimalDigitError) {
  if ((inCharacter.u32 () < '0') || (inCharacter.u32 () > '9')) {
    inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint64_t digit = inCharacter.u32 () - '0' ;
    const uint64_t max = UINT64_MAX / 10 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else if ((ioValue == max) && (digit > 5)) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      ioValue = ioValue * 10 + digit ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterHexDigitIntoUInt (Lexique & inLexique,
                                            const utf32 inCharacter,
                                            uint32_t & ioValue,
                                            const char * inNumberTooLargeError,
                                            const char * inCharacterIsNotHexDigitError) {
  bool carOk = (inCharacter.u32 () >= '0') && (inCharacter.u32 () <= '9') ;
  uint32_t digit = inCharacter.u32 () - '0' ;
  if (! carOk) {
    carOk = (inCharacter.u32 () >= 'A') && (inCharacter.u32 () <= 'F') ;
    digit = inCharacter.u32 () - 'A' + 10 ;
  }
  if (! carOk) {
    carOk = (inCharacter.u32 () >= 'a') && (inCharacter.u32 () <= 'f') ;
    digit = inCharacter.u32 () - 'a' + 10 ;
  }
  if (! carOk) {
    inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint32_t max = UINT32_MAX >> 4 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      ioValue = (ioValue << 4) + digit ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterHexDigitIntoUInt64 (Lexique & inLexique,
                                              const utf32 inCharacter,
                                              uint64_t & ioValue,
                                              const char * inNumberTooLargeError,
                                              const char * inCharacterIsNotHexDigitError) {
  bool carOk = (inCharacter.u32 () >= '0') && (inCharacter.u32 () <= '9') ;
  uint64_t digit = inCharacter.u32 () - '0' ;
  if (! carOk) {
    carOk = (inCharacter.u32 () >= 'A') && (inCharacter.u32 () <= 'F') ;
    digit = inCharacter.u32 () - 'A' + 10 ;
  }
  if (! carOk) {
    carOk = (inCharacter.u32 () >= 'a') && (inCharacter.u32 () <= 'f') ;
    digit = inCharacter.u32 () - 'a' + 10 ;
  }
  if (! carOk) {
    inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint64_t max = UINT64_MAX >> 4 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      ioValue = (ioValue << 4) + digit ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertDecimalStringIntoUInt (Lexique & inLexique,
                                                   const String & inDecimalString,
                                                   uint32_t & outValue,
                                                   const char * inNumberTooLargeError,
                                                   const char * inCharacterIsNotDecimalDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const uint32_t max = UINT32_MAX / 10 ;
  for (int32_t i=0 ; (i<inDecimalString.length ()) && ok ; i++) {
    const utf32 c = inDecimalString.charAtIndex (i COMMA_HERE) ;
    if ((c.u32 () < '0') || (c.u32 () > '9')) {
      inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }else{
      const uint32_t digit = (uint32_t) (c.u32 () - '0') ;
      if (outValue > max) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
        ok = false ;
      }else if ((outValue == max) && (digit > (UINT32_MAX % 10))) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
        ok = false ;
      }else{
        outValue = outValue * 10 + digit ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertDecimalStringIntoSInt (Lexique & inLexique,
                                                   const String & inDecimalString,
                                                   int32_t & outValue,
                                                   const char * inNumberTooLargeError,
                                                   const char * inCharacterIsNotDecimalDigitError) {
  outValue = 0 ;
  bool ok = true ;
  for (int32_t i=0 ; (i<inDecimalString.length ()) && ok ; i++) {
    const utf32 c = inDecimalString.charAtIndex (i COMMA_HERE) ;
    if ((c.u32 () < '0') || (c.u32 () > '9')) {
      inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      const int32_t digit = (int32_t) (c.u32 () - '0') ;
      const int32_t max = INT32_MAX / 10 ;
      if (outValue > max) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
        ok = false ;
      }else if ((outValue == max) && (digit > (INT32_MAX % 10))) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
        ok = false ;
      }else{
        outValue = outValue * 10 + digit ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertDecimalStringIntoUInt64 (Lexique & inLexique,
                                                     const String & inDecimalString,
                                                     uint64_t & outValue,
                                                     const char * inNumberTooLargeError,
                                                     const char * inCharacterIsNotDecimalDigitError) {
  outValue = 0 ;
  bool ok = true ;
  for (int32_t i=0 ; (i<inDecimalString.length ()) && ok ; i++) {
    const utf32 c = inDecimalString.charAtIndex (i COMMA_HERE) ;
    if ((c.u32 () < '0') || (c.u32 () > '9')) {
      inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      const uint64_t digit = (uint64_t) (c.u32 () - '0') ;
      const uint64_t max = UINT64_MAX / 10 ;
      if (outValue > max) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
        ok = false ;
      }else if ((outValue == max) && (UINT64_MAX % 10)) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
        ok = false ;
      }else{
        outValue = outValue * 10 + digit ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertDecimalStringIntoSInt64 (Lexique & inLexique,
                                                     const String & inDecimalString,
                                                     int64_t & outValue,
                                                     const char * inNumberTooLargeError,
                                                     const char * inCharacterIsNotDecimalDigitError) {
  outValue = 0 ;
  bool ok = true ;
  for (int32_t i=0 ; (i<inDecimalString.length ()) && ok ; i++) {
    const utf32 c = inDecimalString.charAtIndex (i COMMA_HERE) ;
    if ((c.u32 () < '0') || (c.u32 () > '9')) {
      inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      const int64_t digit = (int64_t) (c.u32 () - '0') ;
      const int64_t max = INT64_MAX / 10 ;
      if (outValue > max) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
        ok = false ;
      }else if ((outValue == max) && (digit > (INT64_MAX % 10))) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
        ok = false ;
      }else{
        outValue = outValue * 10 + digit ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 1.4.3)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterBinDigitIntoUInt (Lexique & inLexique,
                                            const utf32 inCharacter,
                                            uint32_t & inValue,
                                            const char * inNumberTooLargeError,
                                            const char * inCharacterIsNotBinDigitError) {
  if ((inCharacter.u32 () < '0') || (inCharacter.u32 () > '1')) {
    inLexique.lexicalError (inCharacterIsNotBinDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint32_t max = UINT32_MAX >> 1 ;
    if (inValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      const uint32_t bit = inCharacter.u32 () - '0' ;
      inValue = (inValue << 1) | bit ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterBinDigitIntoUInt64 (Lexique & inLexique,
                                              const utf32 inCharacter,
                                              uint64_t & ioValue,
                                              const char * inNumberTooLargeError,
                                              const char * inCharacterIsNotBinDigitError) {
  if ((inCharacter.u32 () < '0') || (inCharacter.u32 () > '1')) {
    inLexique.lexicalError (inCharacterIsNotBinDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint64_t max = UINT64_MAX >> 1 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      const uint64_t bit = (uint64_t) (inCharacter.u32 () - '0') ;
      ioValue = (ioValue << 1) | bit ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 1.4.7)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterOctDigitIntoUInt (Lexique & inLexique,
                                            const utf32 inCharacter,
                                            uint32_t & inValue,
                                            const char * inNumberTooLargeError,
                                            const char * inCharacterIsNotOctDigitError) {
  if ((inCharacter.u32 () < '0') || (inCharacter.u32 () > '7')) {
    inLexique.lexicalError (inCharacterIsNotOctDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint32_t max = UINT32_MAX >> 3 ;
    if (inValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      const uint32_t octVal = inCharacter.u32 () - '0' ;
      inValue = (inValue << 3) | octVal ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterOctDigitIntoUInt64 (Lexique & inLexique,
                                              const utf32 inCharacter,
                                              uint64_t & ioValue,
                                              const char * inNumberTooLargeError,
                                              const char * inCharacterIsNotOctDigitError) {
  if ((inCharacter.u32 () < '0') || (inCharacter.u32 () > '7')) {
    inLexique.lexicalError (inCharacterIsNotOctDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint64_t max = UINT64_MAX >> 3 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
    }else{
      const uint64_t octVal = inCharacter.u32 () - '0' ;
      ioValue = (ioValue << 3) | octVal ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 1.6.9)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_multiplyUInt (Lexique & inLexique,
                                   const uint32_t inFactor,
                                   uint32_t & ioValue,
                                   const char * inResultTooLargeError) {
  const uint64_t factor = inFactor ;
  const uint64_t value = ioValue ;
  const uint64_t result = factor * value ;
  if (result > UINT32_MAX) {
    inLexique.lexicalError (inResultTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    ioValue = (uint32_t) (result & UINT32_MAX) ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_multiplyUInt64 (Lexique & inLexique,
                                     const uint64_t inFactor,
                                     uint64_t & ioValue,
                                     const char * inResultTooLargeError) {
  const uint64_t lowWord1 = inFactor & UINT32_MAX ;
  const uint64_t highWord1 = inFactor >> 32 ;
  const uint64_t lowWord2 = ioValue & UINT32_MAX ;
  const uint64_t highWord2 = ioValue >> 32 ;
  const uint64_t lowResult = lowWord1 * lowWord2 ;
  const uint64_t crossResult = (lowWord1 * highWord2) + (lowWord2 * highWord1) + (lowResult >> 32) ;
  const uint64_t highResult = (highWord1 * highWord2) + (crossResult >> 32) ;
  if (highResult > 0) {
    inLexique.lexicalError (inResultTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    ioValue = (crossResult << 32) + (lowResult & UINT32_MAX) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 1.7.7)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertHexStringIntoUInt (Lexique & inLexique,
                                               const String & inHexString,
                                               uint32_t & outValue,
                                               const char * inNumberTooLargeError,
                                               const char * inCharacterIsNotHexDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const uint32_t max = UINT32_MAX >> 4 ;
  for (int32_t i=0 ; (i<inHexString.length ()) && ok ; i++) {
    const utf32 c = inHexString.charAtIndex (i COMMA_HERE) ;
    if (outValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }else if ((c.u32 () >= '0') && (c.u32 () <= '9')) {
      const uint32_t digit = (uint32_t) (c.u32 () - '0') ;
      outValue = (outValue << 4) + digit ;
    }else if ((c.u32 () >= 'A') && (c.u32 () <= 'F')) {
      const uint32_t digit = (uint32_t) (c.u32 () - 'A' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else if ((c.u32 () >= 'a') && (c.u32 () <= 'f')) {
      const uint32_t digit = (uint32_t) (c.u32 () - 'a' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else{
      inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertHexStringIntoUInt64 (Lexique & inLexique,
                                                 const String & inHexString,
                                                 uint64_t & outValue,
                                                 const char * inNumberTooLargeError,
                                                 const char * inCharacterIsNotHexDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const uint64_t max = UINT64_MAX >> 4 ;
  for (int32_t i=0 ; (i<inHexString.length ()) && ok ; i++) {
    const utf32 c = inHexString.charAtIndex (i COMMA_HERE) ;
    if (outValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }else if ((c.u32 () >= '0') && (c.u32 () <= '9')) {
      const uint64_t digit = (uint64_t) (c.u32 () - '0') ;
      outValue = (outValue << 4) + digit ;
    }else if ((c.u32 () >= 'A') && (c.u32 () <= 'F')) {
      const uint64_t digit = (uint64_t) (c.u32 () - 'A' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else if ((c.u32 () >= 'a') && (c.u32 () <= 'f')) {
      const uint64_t digit = (uint64_t) (c.u32 () - 'a' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else{
      inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertHexStringIntoSInt (Lexique & inLexique,
                                               const String & inHexString,
                                               int32_t & outValue,
                                               const char * inNumberTooLargeError,
                                               const char * inCharacterIsNotHexDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const int32_t max = INT32_MAX >> 4 ;
  for (int32_t i=0 ; (i<inHexString.length ()) && ok ; i++) {
    const utf32 c = inHexString.charAtIndex (i COMMA_HERE) ;
    if (outValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }else if ((c.u32 () >= '0') && (c.u32 () <= '9')) {
      const int32_t digit = (int32_t) (c.u32 () - '0') ;
      outValue = (outValue << 4) + digit ;
    }else if ((c.u32 () >= 'A') && (c.u32 () <= 'F')) {
      const int32_t digit = (int32_t) (c.u32 () - 'A' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else if ((c.u32 () >= 'a') && (c.u32 () <= 'f')) {
      const int32_t digit = (int32_t) (c.u32 () - 'a' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else{
      inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertHexStringIntoSInt64 (Lexique & inLexique,
                                                 const String & inHexString,
                                                 int64_t & outValue,
                                                 const char * inNumberTooLargeError,
                                                 const char * inCharacterIsNotHexDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const int64_t max = INT64_MAX >> 4 ;
  for (int32_t i=0 ; (i<inHexString.length ()) && ok ; i++) {
    const utf32 c = inHexString.charAtIndex (i COMMA_HERE) ;
    if (outValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }else if ((c.u32 () >= '0') && (c.u32 () <= '9')) {
      const int64_t digit = (int64_t) (c.u32 () - '0') ;
      outValue = (outValue << 4) + digit ;
    }else if ((c.u32 () >= 'A') && (c.u32 () <= 'F')) {
      const int64_t digit = (int64_t) (c.u32 () - 'A' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else if ((c.u32 () >= 'a') && (c.u32 () <= 'f')) {
      const int64_t digit = (int64_t) (c.u32 () - 'a' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else{
      inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
      ok = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 1.8.3)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertUnsignedNumberToUnicodeChar (Lexique & inLexique,
                                                         uint32_t & ioValue,
                                                         utf32 & outUnicodeCharacter,
                                                         const char * inUnassignedUnicodeValueError) {
  outUnicodeCharacter = utf32 (ioValue) ;
  if (!outUnicodeCharacter.isAssigned ()) {
    inLexique.lexicalError (inUnassignedUnicodeValueError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }
  ioValue = 0 ;
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertHTMLSequenceToUnicodeCharacter (Lexique & inLexique,
                                                            String & ioStringValue,
                                                            utf32 & outUnicodeCharacter,
                                                            const char * inUnassignedHTMLSequenceError) {
  outUnicodeCharacter = unicodeCharacterFromHTMLSequence (ioStringValue) ;
  if (outUnicodeCharacter.u32 () == 0) {
    inLexique.lexicalError (inUnassignedHTMLSequenceError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }
  ioStringValue.removeAllKeepingCapacity () ;
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_codePointToUnicode (Lexique & inLexique,
                                         const String & inElementString,
                                         String & ioTemplateString) {
  if (inElementString.length () == 0) {
    inLexique.lexicalError ("the escape sequence '&#...;' contains no character(s)" COMMA_HERE) ;
  }else if ((inElementString.charAtIndex (0 COMMA_HERE).u32 () == 'x') || (inElementString.charAtIndex (0 COMMA_HERE).u32 () == 'X')) {
    bool ok = true ;
    uint32_t code = 0 ;
    for (int32_t i=1 ; (i<inElementString.length ()) && ok ; i++) {
      code <<= 4 ;
      const utf32 c = inElementString.charAtIndex (i COMMA_HERE) ;
      if ((c.u32 () >= '0') && (c.u32 () <= '9')) {
        code += c.u32 () - '0' ;
      }else if ((c.u32 () >= 'A') && (c.u32 () <= 'F')) {
        code += c.u32 () + 10 - 'A' ;
      }else if ((c.u32 () >= 'a') && (c.u32 () <= 'f')) {
        code += c.u32 () + 10 - 'a' ;
      }else{
        ok = false ;
        inLexique.lexicalError ("the escape sequence '&#...;' contains non hexadecimal character(s)" COMMA_HERE) ;
      }
    }
    if (utf32 (code).isAssigned ()) {
      ioTemplateString.appendChar (utf32 (code)) ;
    }else{
      inLexique.lexicalError ("the escape sequence '&#...;' is not an assigned unicode character" COMMA_HERE) ;
    }
  }else{ // Decimal value
    bool ok = true ;
    uint32_t code = 0 ;
    for (int32_t i=0 ; (i<inElementString.length ()) && ok ; i++) {
      code *= 10 ;
      const utf32 c = inElementString.charAtIndex (i COMMA_HERE) ;
      if ((c.u32 () >= '0') && (c.u32 () <= '9')) {
        code += c.u32 () - '0' ;
      }else{
        ok = false ;
        inLexique.lexicalError ("the escape sequence '&#...;' contains non decimal character(s)" COMMA_HERE) ;
      }
    }
    if (utf32 (code).isAssigned ()) {
      ioTemplateString.appendChar (utf32 (code)) ;
    }else{
      inLexique.lexicalError ("the escape sequence '&#...;' is not an assigned unicode character" COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 3.0.0)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_resetString (Lexique & /* inLexique */,
                                  String & ioString) {
  ioString.removeAllKeepingCapacity () ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 3.1.0)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterDecimalDigitIntoBigInt (Lexique & inLexique,
                                                  const utf32 inCharacter,
                                                  BigSigned & ioBigInt,
                                                  const char * inCharacterIsNotDecimalDigitError) {
  if ((inCharacter.u32 () < '0') || (inCharacter.u32 () > '9')) {
    inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint8_t digit = uint8_t (inCharacter.u32 () - '0') ;
    ioBigInt *= 10 ;
    ioBigInt += digit ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterHexDigitIntoBigInt (Lexique & inLexique,
                                              const utf32 inCharacter,
                                              BigSigned & ioBigInt,
                                              const char * inCharacterIsNotDecimalDigitError) {

  if ((inCharacter.u32 () >= '0') && (inCharacter.u32 () <= '9')) {
    const uint8_t digit = uint8_t (inCharacter.u32 () - '0') ;
    ioBigInt *= 16 ;
    ioBigInt += digit ;
  }else if ((inCharacter.u32 () >= 'A') && (inCharacter.u32 () <= 'F')) {
    const uint8_t digit = uint8_t (inCharacter.u32 () - 'A' + 10) ;
    ioBigInt *= 16 ;
    ioBigInt += digit ;
  }else if ((inCharacter.u32 () >= 'a') && (inCharacter.u32 () <= 'f')) {
    const uint8_t digit = uint8_t (inCharacter.u32 () - 'a' + 10) ;
    ioBigInt *= 16 ;
    ioBigInt += digit ;
  }else{
    inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertDecimalStringIntoBigInt (Lexique & inLexique,
                                                     const String & inDecimalString,
                                                     BigSigned & outValue,
                                                     const char * inCharacterIsNotDecimalDigitError) {
  bool ok = true ;
  outValue = BigSigned (inDecimalString.cString (), BigUnsignedBase::ten, ok) ;
  if (! ok) {
    inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertHexStringIntoBigInt (Lexique & inLexique,
                                                 const String & inHexString,
                                                 BigSigned & outValue,
                                                 const char * inCharacterIsNotHexDigitError) {
  bool ok = true ;
  outValue = BigSigned (inHexString.cString (), BigUnsignedBase::sixteen, ok) ;
  if (! ok) {
    inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Predefined Scanner Actions (from GALGAS 3.1.6)
#endif

//--------------------------------------------------------------------------------------------------

void scanner_routine_enterBinaryDigitIntoBigInt (Lexique & inLexique,
                                                 const utf32 inCharacter,
                                                 BigSigned & ioBigInt,
                                                 const char * inCharacterIsNotBinaryDigitError) {
  if ((inCharacter.u32 () < '0') || (inCharacter.u32 () > '1')) {
    inLexique.lexicalError (inCharacterIsNotBinaryDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }else{
    const uint8_t digit = uint8_t (inCharacter.u32 () - '0') ;
    ioBigInt *= 2 ;
    ioBigInt += digit ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_convertBinaryStringIntoBigInt (Lexique & inLexique,
                                                     const String & inBinaryString,
                                                     BigSigned & outValue,
                                                     const char * inCharacterIsNotBinaryDigitError) {
  bool ok = true ;
  outValue = BigSigned (inBinaryString.cString (), BigUnsignedBase::two, ok) ;
  if (! ok) {
    inLexique.lexicalError (inCharacterIsNotBinaryDigitError LINE_AND_SOURCE_FILE_FOR_SCANNER_ACTIONS) ;
  }
}

//--------------------------------------------------------------------------------------------------

void scanner_routine_negateBigInt (Lexique & /* inLexique */,
                                   BigSigned & ioValue) {
  ioValue.negateInPlace () ;
}

//--------------------------------------------------------------------------------------------------


