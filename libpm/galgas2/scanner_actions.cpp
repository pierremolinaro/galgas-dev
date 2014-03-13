//-----------------------------------------------------------------------------*
//                                                                             *
//  scanner_actions:                                                         *
//  hand-coded routines for building attribute values during scanning.       *
//                                                                             *
//  This file is part of libpm library                                         *
//                                                                             *
//  Copyright (C) 2009, ..., 2010 Pierre Molinaro.                             *
//                                                                             *
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
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "galgas2/scanner_actions.h"
#include "strings/unicode_character_cpp.h"

//-----------------------------------------------------------------------------*

#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>

//-----------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define LINE_AND_SOURCE_FILE , inLexique.sourceText ()->sourceFilePath ().cString (HERE), inLexique.lineNumber ()
#else
  #define LINE_AND_SOURCE_FILE 
#endif

//-----------------------------------------------------------------------------*
//                                                                             *
//   P R E D E F I N E D    S C A N N E R    A C T I O N S                   *
//                                                                             *
//-----------------------------------------------------------------------------*

void
scanner_routine_enterHexDigitIntoASCIIcharacter (C_Lexique & inLexique, 
                                                utf32 & ioValue,
                                                const utf32 inChar,
                                                const utf32 * inErrorCodeGreaterThan255,
                                                const utf32 * inErrorNotHexDigitCharacter) {
  if (isxdigit ((int) UNICODE_VALUE (inChar))) {
    PMUInt32 tempo = UNICODE_VALUE (ioValue) << 4 ;
    if ((UNICODE_VALUE (inChar) >= '0') && (UNICODE_VALUE (inChar) <= '9')) {
      tempo += UNICODE_VALUE (inChar) - '0' ;
    }else if ((UNICODE_VALUE (inChar) >= 'A') && (UNICODE_VALUE (inChar) <= 'F')) {
      tempo += UNICODE_VALUE (inChar) + 10 - 'A' ;
    }else{ // ((inChar >= 'a') && (inChar <= 'f')) {
      tempo += UNICODE_VALUE (inChar) + 10 - 'a' ;
    }
    if (tempo > 255) {
      inLexique.lexicalError (inErrorCodeGreaterThan255 LINE_AND_SOURCE_FILE) ;
    }else{
      ioValue = TO_UNICODE (tempo) ;
    }
  }else{
    inLexique.lexicalError (inErrorNotHexDigitCharacter LINE_AND_SOURCE_FILE) ;
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterDigitIntoASCIIcharacter (C_Lexique & inLexique, 
                                             utf32 & ioValue,
                                             const utf32 inChar,
                                             const utf32 * inErrorCodeGreaterThan255,
                                             const utf32 * inErrorNotDigitCharacter) {
  if ((UNICODE_VALUE (inChar) >= '0') && (UNICODE_VALUE (inChar) <= '9')) {
    PMUInt32 tempo = UNICODE_VALUE (ioValue) ;
    tempo *= 10  ;
    tempo += UNICODE_VALUE (inChar) - '0' ;
    if (tempo > 255) {
      inLexique.lexicalError (inErrorCodeGreaterThan255 LINE_AND_SOURCE_FILE) ;
    }else{
      ioValue = TO_UNICODE (tempo) ;
    }
  }else{
    inLexique.lexicalError (inErrorNotDigitCharacter LINE_AND_SOURCE_FILE) ;
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterCharacterIntoString (C_Lexique & /* inLexique */, 
                                         C_String & ioString,
                                         const utf32 inChar) {
  ioString.appendUnicodeCharacter (inChar COMMA_HERE) ;
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertStringToDouble (C_Lexique & inLexique, 
                                      const C_String & inString,
                                      double & outValue,
                                      const utf32 * inConversionError) {
  const double value = ::atof (inString.cString (HERE)) ;
  if (errno == ERANGE) {
    inLexique.lexicalError (inConversionError LINE_AND_SOURCE_FILE) ;
  }else{
    outValue = value ;
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterCharacterIntoCharacter (C_Lexique & /* inLexique */, 
                                            utf32 & outCharacter,
                                            const utf32 inCharacter) {
  outCharacter = inCharacter ;
}

//-----------------------------------------------------------------------------*

utf32
scanner_function_toLower (C_Lexique & /* inLexique */, const utf32 c) {
  return unicodeToLower (c) ;
}

//-----------------------------------------------------------------------------*

utf32
scanner_function_toUpper (C_Lexique & /* inLexique */, const utf32 c) {
  return unicodeToUpper (c) ;
}

//-----------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= Predefined Scanner Actions (from GALGAS 1.4.0)
#endif

//-----------------------------------------------------------------------------*

void
scanner_routine_negateSInt (C_Lexique & inLexique, 
                           PMSInt32 & ioValue,
                           const utf32 * inNumberTooLargeError) {
  if (ioValue == PMSINT32_MIN) {
    inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
  }else{
    ioValue = - ioValue ;
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_negateSInt64 (C_Lexique & inLexique, 
                             PMSInt64 & ioValue,
                             const utf32 * inNumberTooLargeError) {
  if (ioValue == PMSINT64_MIN) {
    inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
  }else{
    ioValue = - ioValue ;
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertUIntToSInt (C_Lexique & inLexique, 
                                  const PMUInt32 inValue,
                                  PMSInt32 & outValue,
                                  const utf32 * inNumberTooLargeError) {
  if (inValue > PMSINT32_MAX) {
    inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
  }else{
    outValue = (PMSInt32) inValue ;
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertUInt64ToSInt64 (C_Lexique & inLexique, 
                                      const PMUInt64 inValue,
                                      PMSInt64 & outValue,
                                      const utf32 * inNumberTooLargeError) {
  if (inValue > PMSINT64_MAX) {
    inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
  }else{
    outValue = (PMSInt64) inValue ;
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterDigitIntoUInt (C_Lexique & inLexique, 
                                   const utf32 inCharacter,
                                   PMUInt32 & inValue,
                                   const utf32 * inNumberTooLargeError,
                                   const utf32 * inCharacterIsNotDecimalDigitError) {
  if ((UNICODE_VALUE (inCharacter) < '0') || (UNICODE_VALUE (inCharacter) > '9')) {
    inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE) ;
  }else{
    const PMUInt32 digit = UNICODE_VALUE (inCharacter) - '0' ;
    const PMUInt32 max = PMUINT32_MAX / 10 ;
    if (inValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else if ((inValue == max) && (digit > 5)) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else{
      inValue = inValue * 10 + digit ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterDigitIntoUInt64 (C_Lexique & inLexique, 
                                     const utf32 inCharacter,
                                     PMUInt64 & ioValue,
                                     const utf32 * inNumberTooLargeError,
                                     const utf32 * inCharacterIsNotDecimalDigitError) {
  if ((UNICODE_VALUE (inCharacter) < '0') || (UNICODE_VALUE (inCharacter) > '9')) {
    inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE) ;
  }else{
    const PMUInt64 digit = UNICODE_VALUE (inCharacter) - '0' ;
    const PMUInt64 max = PMUINT64_MAX / 10 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else if ((ioValue == max) && (digit > 5)) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else{
      ioValue = ioValue * 10 + digit ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterHexDigitIntoUInt (C_Lexique & inLexique, 
                                      const utf32 inCharacter,
                                      PMUInt32 & ioValue,
                                      const utf32 * inNumberTooLargeError,
                                      const utf32 * inCharacterIsNotHexDigitError) {
  bool carOk = (UNICODE_VALUE (inCharacter) >= '0') && (UNICODE_VALUE (inCharacter) <= '9') ;
  PMUInt32 digit = UNICODE_VALUE (inCharacter) - '0' ;
  if (! carOk) {
    carOk = (UNICODE_VALUE (inCharacter) >= 'A') && (UNICODE_VALUE (inCharacter) <= 'F') ;
    digit = UNICODE_VALUE (inCharacter) - 'A' + 10 ;
  }
  if (! carOk) {
    carOk = (UNICODE_VALUE (inCharacter) >= 'a') && (UNICODE_VALUE (inCharacter) <= 'f') ;
    digit = UNICODE_VALUE (inCharacter) - 'a' + 10 ;
  }
  if (! carOk) {
    inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE) ;
  }else{
    const PMUInt32 max = PMUINT32_MAX >> 4 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else{
      ioValue = (ioValue << 4) + digit ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterHexDigitIntoUInt64 (C_Lexique & inLexique, 
                                        const utf32 inCharacter,
                                        PMUInt64 & ioValue,
                                        const utf32 * inNumberTooLargeError,
                                        const utf32 * inCharacterIsNotHexDigitError) {
  bool carOk = (UNICODE_VALUE (inCharacter) >= '0') && (UNICODE_VALUE (inCharacter) <= '9') ;
  PMUInt64 digit = UNICODE_VALUE (inCharacter) - '0' ;
  if (! carOk) {
    carOk = (UNICODE_VALUE (inCharacter) >= 'A') && (UNICODE_VALUE (inCharacter) <= 'F') ;
    digit = UNICODE_VALUE (inCharacter) - 'A' + 10 ;
  }
  if (! carOk) {
    carOk = (UNICODE_VALUE (inCharacter) >= 'a') && (UNICODE_VALUE (inCharacter) <= 'f') ;
    digit = UNICODE_VALUE (inCharacter) - 'a' + 10 ;
  }
  if (! carOk) {
    inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE) ;
  }else{
    const PMUInt64 max = PMUINT64_MAX >> 4 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else{
      ioValue = (ioValue << 4) + digit ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertDecimalStringIntoUInt (C_Lexique & inLexique, 
                                             const C_String & inDecimalString,
                                             PMUInt32 & outValue,
                                             const utf32 * inNumberTooLargeError,
                                             const utf32 * inCharacterIsNotDecimalDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const PMUInt32 max = PMUINT32_MAX / 10 ;
  for (PMSInt32 i=0 ; (i<inDecimalString.length ()) && ok ; i++) {
    const utf32 c = inDecimalString (i COMMA_HERE) ;
    if ((UNICODE_VALUE (c) < '0') || (UNICODE_VALUE (c) > '9')) {
      inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }else{
      const PMUInt32 digit = (PMUInt32) (UNICODE_VALUE (c) - '0') ;
      if (outValue > max) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
        ok = false ;
      }else if ((outValue == max) && (digit > (PMUINT32_MAX % 10))) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
        ok = false ;
      }else{
        outValue = outValue * 10 + digit ;
      }
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertDecimalStringIntoSInt (C_Lexique & inLexique, 
                                             const C_String & inDecimalString,
                                             PMSInt32 & outValue,
                                             const utf32 * inNumberTooLargeError,
                                             const utf32 * inCharacterIsNotDecimalDigitError) {
  outValue = 0 ;
  bool ok = true ;
  for (PMSInt32 i=0 ; (i<inDecimalString.length ()) && ok ; i++) {
    const utf32 c = inDecimalString (i COMMA_HERE) ;
    if ((UNICODE_VALUE (c) < '0') || (UNICODE_VALUE (c) > '9')) {
      inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE) ;
    }else{
      const PMSInt32 digit = (PMSInt32) (UNICODE_VALUE (c) - '0') ;
      const PMSInt32 max = PMSINT32_MAX / 10 ;
      if (outValue > max) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
        ok = false ;
      }else if ((outValue == max) && (digit > (PMSINT32_MAX % 10))) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
        ok = false ;
      }else{
        outValue = outValue * 10 + digit ;
      }
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertDecimalStringIntoUInt64 (C_Lexique & inLexique, 
                                               const C_String & inDecimalString,
                                               PMUInt64 & outValue,
                                               const utf32 * inNumberTooLargeError,
                                               const utf32 * inCharacterIsNotDecimalDigitError) {
  outValue = 0 ;
  bool ok = true ;
  for (PMSInt32 i=0 ; (i<inDecimalString.length ()) && ok ; i++) {
    const utf32 c = inDecimalString (i COMMA_HERE) ;
    if ((UNICODE_VALUE (c) < '0') || (UNICODE_VALUE (c) > '9')) {
      inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE) ;
    }else{
      const PMUInt64 digit = (PMUInt64) (UNICODE_VALUE (c) - '0') ;
      const PMUInt64 max = PMUINT64_MAX / 10 ;
      if (outValue > max) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
        ok = false ;
      }else if ((outValue == max) && (PMUINT64_MAX % 10)) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
        ok = false ;
      }else{
        outValue = outValue * 10 + digit ;
      }
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertDecimalStringIntoSInt64 (C_Lexique & inLexique, 
                                               const C_String & inDecimalString,
                                               PMSInt64 & outValue,
                                               const utf32 * inNumberTooLargeError,
                                               const utf32 * inCharacterIsNotDecimalDigitError) {
  outValue = 0 ;
  bool ok = true ;
  for (PMSInt32 i=0 ; (i<inDecimalString.length ()) && ok ; i++) {
    const utf32 c = inDecimalString (i COMMA_HERE) ;
    if ((UNICODE_VALUE (c) < '0') || (UNICODE_VALUE (c) > '9')) {
      inLexique.lexicalError (inCharacterIsNotDecimalDigitError LINE_AND_SOURCE_FILE) ;
    }else{
      const PMSInt64 digit = (PMSInt64) (UNICODE_VALUE (c) - '0') ;
      const PMSInt64 max = PMSINT64_MAX / 10 ;
      if (outValue > max) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
        ok = false ;
      }else if ((outValue == max) && (digit > (PMSINT64_MAX % 10))) {
        inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
        ok = false ;
      }else{
        outValue = outValue * 10 + digit ;
      }
    }
  }
}

//-----------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= Predefined Scanner Actions (from GALGAS 1.4.3)
#endif

//-----------------------------------------------------------------------------*

void
scanner_routine_enterBinDigitIntoUInt (C_Lexique & inLexique, 
                                      const utf32 inCharacter,
                                      PMUInt32 & inValue,
                                      const utf32 * inNumberTooLargeError,
                                      const utf32 * inCharacterIsNotBinDigitError) {
  if ((UNICODE_VALUE (inCharacter) < '0') || (UNICODE_VALUE (inCharacter) > '1')) {
    inLexique.lexicalError (inCharacterIsNotBinDigitError LINE_AND_SOURCE_FILE) ;
  }else{
    const PMUInt32 max = PMUINT32_MAX >> 1 ;
    if (inValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else{
      const PMUInt32 bit = UNICODE_VALUE (inCharacter) - '0' ;
      inValue = (inValue << 1) | bit ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterBinDigitIntoUInt64 (C_Lexique & inLexique, 
                                         const utf32 inCharacter,
                                         PMUInt64 & ioValue,
                                         const utf32 * inNumberTooLargeError,
                                         const utf32 * inCharacterIsNotBinDigitError) {
  if ((UNICODE_VALUE (inCharacter) < '0') || (UNICODE_VALUE (inCharacter) > '1')) {
    inLexique.lexicalError (inCharacterIsNotBinDigitError LINE_AND_SOURCE_FILE) ;
  }else{
    const PMUInt64 max = PMUINT64_MAX >> 1 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else{
      const PMUInt64 bit = (PMUInt64) (UNICODE_VALUE (inCharacter) - '0') ;
      ioValue = (ioValue << 1) | bit ;
    }
  }
}

//-----------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= Predefined Scanner Actions (from GALGAS 1.4.7)
#endif

//-----------------------------------------------------------------------------*

void
scanner_routine_enterOctDigitIntoUInt (C_Lexique & inLexique, 
                                      const utf32 inCharacter,
                                      PMUInt32 & inValue,
                                      const utf32 * inNumberTooLargeError,
                                      const utf32 * inCharacterIsNotOctDigitError) {
  if ((UNICODE_VALUE (inCharacter) < '0') || (UNICODE_VALUE (inCharacter) > '7')) {
    inLexique.lexicalError (inCharacterIsNotOctDigitError LINE_AND_SOURCE_FILE) ;
  }else{
    const PMUInt32 max = PMUINT32_MAX >> 3 ;
    if (inValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else{
      const PMUInt32 octVal = UNICODE_VALUE (inCharacter) - '0' ;
      inValue = (inValue << 3) | octVal ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_enterOctDigitIntoUInt64 (C_Lexique & inLexique, 
                                        const utf32 inCharacter,
                                        PMUInt64 & ioValue,
                                        const utf32 * inNumberTooLargeError,
                                        const utf32 * inCharacterIsNotOctDigitError) {
  if ((UNICODE_VALUE (inCharacter) < '0') || (UNICODE_VALUE (inCharacter) > '7')) {
    inLexique.lexicalError (inCharacterIsNotOctDigitError LINE_AND_SOURCE_FILE) ;
  }else{
    const PMUInt64 max = PMUINT64_MAX >> 3 ;
    if (ioValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
    }else{
      const PMUInt64 octVal = UNICODE_VALUE (inCharacter) - '0' ;
      ioValue = (ioValue << 3) | octVal ;
    }
  }
}

//-----------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= Predefined Scanner Actions (from GALGAS 1.6.9)
#endif

//-----------------------------------------------------------------------------*

void
scanner_routine_multiplyUInt (C_Lexique & inLexique, 
                             const PMUInt32 inFactor,
                             PMUInt32 & ioValue,
                             const utf32 * inResultTooLargeError) {
  const PMUInt64 factor = inFactor ;
  const PMUInt64 value = ioValue ;
  const PMUInt64 result = factor * value ;
  if (result > PMUINT32_MAX) {
    inLexique.lexicalError (inResultTooLargeError LINE_AND_SOURCE_FILE) ;
  }else{
    ioValue = (PMUInt32) (result & PMUINT32_MAX) ;
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_multiplyUInt64 (C_Lexique & inLexique, 
                               const PMUInt64 inFactor,
                               PMUInt64 & ioValue,
                               const utf32 * inResultTooLargeError) {
  const PMUInt64 lowWord1 = inFactor & PMUINT32_MAX ;
  const PMUInt64 highWord1 = inFactor >> 32 ;
  const PMUInt64 lowWord2 = ioValue & PMUINT32_MAX ;
  const PMUInt64 highWord2 = ioValue >> 32 ;
  const PMUInt64 lowResult = lowWord1 * lowWord2 ;
  const PMUInt64 crossResult = (lowWord1 * highWord2) + (lowWord2 * highWord1) + (lowResult >> 32) ;
  const PMUInt64 highResult = (highWord1 * highWord2) + (crossResult >> 32) ;
  if (highResult > 0) {
    inLexique.lexicalError (inResultTooLargeError LINE_AND_SOURCE_FILE) ;
  }else{
    ioValue = (crossResult << 32) + (lowResult & PMUINT32_MAX) ;
  }
}

//-----------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= Predefined Scanner Actions (from GALGAS 1.7.7)
#endif

//-----------------------------------------------------------------------------*

void
scanner_routine_convertHexStringIntoUInt (C_Lexique & inLexique, 
                                         const C_String & inHexString,
                                         PMUInt32 & outValue,
                                         const utf32 * inNumberTooLargeError,
                                         const utf32 * inCharacterIsNotHexDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const PMUInt32 max = PMUINT32_MAX >> 4 ;
  for (PMSInt32 i=0 ; (i<inHexString.length ()) && ok ; i++) {
    const utf32 c = inHexString (i COMMA_HERE) ;
    if (outValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }else if ((UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9')) {
      const PMUInt32 digit = (PMUInt32) (UNICODE_VALUE (c) - '0') ;
      outValue = (outValue << 4) + digit ;
    }else if ((UNICODE_VALUE (c) >= 'A') && (UNICODE_VALUE (c) <= 'F')) {
      const PMUInt32 digit = (PMUInt32) (UNICODE_VALUE (c) - 'A' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else if ((UNICODE_VALUE (c) >= 'a') && (UNICODE_VALUE (c) <= 'f')) {
      const PMUInt32 digit = (PMUInt32) (UNICODE_VALUE (c) - 'a' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else{
      inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertHexStringIntoUInt64 (C_Lexique & inLexique, 
                                           const C_String & inHexString,
                                           PMUInt64 & outValue,
                                           const utf32 * inNumberTooLargeError,
                                           const utf32 * inCharacterIsNotHexDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const PMUInt64 max = PMUINT64_MAX >> 4 ;
  for (PMSInt32 i=0 ; (i<inHexString.length ()) && ok ; i++) {
    const utf32 c = inHexString (i COMMA_HERE) ;
    if (outValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }else if ((UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9')) {
      const PMUInt64 digit = (PMUInt64) (UNICODE_VALUE (c) - '0') ;
      outValue = (outValue << 4) + digit ;
    }else if ((UNICODE_VALUE (c) >= 'A') && (UNICODE_VALUE (c) <= 'F')) {
      const PMUInt64 digit = (PMUInt64) (UNICODE_VALUE (c) - 'A' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else if ((UNICODE_VALUE (c) >= 'a') && (UNICODE_VALUE (c) <= 'f')) {
      const PMUInt64 digit = (PMUInt64) (UNICODE_VALUE (c) - 'a' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else{
      inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertHexStringIntoSInt (C_Lexique & inLexique, 
                                         const C_String & inHexString,
                                         PMSInt32 & outValue,
                                         const utf32 * inNumberTooLargeError,
                                         const utf32 * inCharacterIsNotHexDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const PMSInt32 max = PMSINT32_MAX >> 4 ;
  for (PMSInt32 i=0 ; (i<inHexString.length ()) && ok ; i++) {
    const utf32 c = inHexString (i COMMA_HERE) ;
    if (outValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }else if ((UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9')) {
      const PMSInt32 digit = (PMSInt32) (UNICODE_VALUE (c) - '0') ;
      outValue = (outValue << 4) + digit ;
    }else if ((UNICODE_VALUE (c) >= 'A') && (UNICODE_VALUE (c) <= 'F')) {
      const PMSInt32 digit = (PMSInt32) (UNICODE_VALUE (c) - 'A' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else if ((UNICODE_VALUE (c) >= 'a') && (UNICODE_VALUE (c) <= 'f')) {
      const PMSInt32 digit = (PMSInt32) (UNICODE_VALUE (c) - 'a' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else{
      inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }
  }
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertHexStringIntoSInt64 (C_Lexique & inLexique, 
                                           const C_String & inHexString,
                                           PMSInt64 & outValue,
                                           const utf32 * inNumberTooLargeError,
                                           const utf32 * inCharacterIsNotHexDigitError) {
  outValue = 0 ;
  bool ok = true ;
  const PMSInt64 max = PMSINT64_MAX >> 4 ;
  for (PMSInt32 i=0 ; (i<inHexString.length ()) && ok ; i++) {
    const utf32 c = inHexString (i COMMA_HERE) ;
    if (outValue > max) {
      inLexique.lexicalError (inNumberTooLargeError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }else if ((UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9')) {
      const PMSInt64 digit = (PMSInt64) (UNICODE_VALUE (c) - '0') ;
      outValue = (outValue << 4) + digit ;
    }else if ((UNICODE_VALUE (c) >= 'A') && (UNICODE_VALUE (c) <= 'F')) {
      const PMSInt64 digit = (PMSInt64) (UNICODE_VALUE (c) - 'A' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else if ((UNICODE_VALUE (c) >= 'a') && (UNICODE_VALUE (c) <= 'f')) {
      const PMSInt64 digit = (PMSInt64) (UNICODE_VALUE (c) - 'a' + 10) ;
      outValue = (outValue << 4) + digit ;
    }else{
      inLexique.lexicalError (inCharacterIsNotHexDigitError LINE_AND_SOURCE_FILE) ;
      ok = false ;
    }
  }
}

//-----------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= Predefined Scanner Actions (from GALGAS 1.8.3)
#endif

//-----------------------------------------------------------------------------*

void
scanner_routine_convertUnsignedNumberToUnicodeChar (C_Lexique & inLexique, 
                                                   PMUInt32 & ioValue,
                                                   utf32 & outUnicodeCharacter,
                                                   const utf32 * inUnassignedUnicodeValueError) {
  outUnicodeCharacter = TO_UNICODE (ioValue) ;
  if (! isUnicodeCharacterAssigned (outUnicodeCharacter)) {
    inLexique.lexicalError (inUnassignedUnicodeValueError LINE_AND_SOURCE_FILE) ;
  }
  ioValue = 0 ;
}

//-----------------------------------------------------------------------------*

void
scanner_routine_convertHTMLSequenceToUnicodeCharacter (C_Lexique & inLexique, 
                                                     C_String & ioStringValue,
                                                     utf32 & outUnicodeCharacter,
                                                     const utf32 * inUnassignedHTMLSequenceError) {
  outUnicodeCharacter = unicodeCharacterFromHTMLSequence (ioStringValue) ;
  if (UNICODE_VALUE (outUnicodeCharacter) == 0) {
    inLexique.lexicalError (inUnassignedHTMLSequenceError LINE_AND_SOURCE_FILE) ;
  }
  ioStringValue.setLengthToZero () ;
}

//-----------------------------------------------------------------------------*

void
scanner_routine_codePointToUnicode (C_Lexique & inLexique, 
                                   const C_String & inElementString,
                                   C_String & ioTemplateString) {
  if (inElementString.length () == 0) {
    inLexique.lexicalError ("the escape sequence '&#...;' contains no character(s)" COMMA_HERE) ;
  }else if ((UNICODE_VALUE (inElementString (0 COMMA_HERE)) == 'x') || (UNICODE_VALUE (inElementString (0 COMMA_HERE)) == 'X')) {
    bool ok = true ;
    PMUInt32 code = 0 ;
    for (PMSInt32 i=1 ; (i<inElementString.length ()) && ok ; i++) {
      code <<= 4 ;
      const utf32 c = inElementString (i COMMA_HERE) ;
      if ((UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9')) {
        code += UNICODE_VALUE (c) - '0' ;
      }else if ((UNICODE_VALUE (c) >= 'A') && (UNICODE_VALUE (c) <= 'F')) {
        code += UNICODE_VALUE (c) + 10 - 'A' ;
      }else if ((UNICODE_VALUE (c) >= 'a') && (UNICODE_VALUE (c) <= 'f')) {
        code += UNICODE_VALUE (c) + 10 - 'a' ;
      }else{
        ok = false ;
        inLexique.lexicalError ("the escape sequence '&#...;' contains non hexadecimal character(s)" COMMA_HERE) ;
      }
    }
    if (isUnicodeCharacterAssigned (TO_UNICODE (code))) {
      ioTemplateString.appendUnicodeCharacter (TO_UNICODE (code) COMMA_HERE) ;
    }else{
      inLexique.lexicalError ("the escape sequence '&#...;' is not an assigned unicode character" COMMA_HERE) ;
    }
  }else{ // Decimal value
    bool ok = true ;
    PMUInt32 code = 0 ;
    for (PMSInt32 i=0 ; (i<inElementString.length ()) && ok ; i++) {
      code *= 10 ;
      const utf32 c = inElementString (i COMMA_HERE) ;
      if ((UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9')) {
        code += UNICODE_VALUE (c) - '0' ;
      }else{
        ok = false ;
        inLexique.lexicalError ("the escape sequence '&#...;' contains non decimal character(s)" COMMA_HERE) ;
      }
    }
    if (isUnicodeCharacterAssigned (TO_UNICODE (code))) {
      ioTemplateString.appendUnicodeCharacter (TO_UNICODE (code) COMMA_HERE) ;
    }else{
      inLexique.lexicalError ("the escape sequence '&#...;' is not an assigned unicode character" COMMA_HERE) ;
    }
  }
}

//-----------------------------------------------------------------------------*
