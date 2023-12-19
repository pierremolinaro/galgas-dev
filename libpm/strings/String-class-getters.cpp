//--------------------------------------------------------------------------------------------------
//
//  String : an implementation of fully dynamic character string
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

#include "utilities/MF_MemoryControl.h"
#include "utilities/md5.h"
#include "utilities/SharedObject.h"
#include "strings/unicode_string_routines.h"
#include "strings/unicode_character_cpp.h"
#include "generic-arraies/TC_UniqueArray2.h"

//--------------------------------------------------------------------------------------------------

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <algorithm>

//--------------------------------------------------------------------------------------------------

#ifndef COMPILE_FOR_WINDOWS
  #error COMPILE_FOR_WINDOWS is undefined
#endif

//--------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 1
  #include <sys/stat.h>
#endif

#if COMPILE_FOR_WINDOWS == 0
  #include <unistd.h>
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Getters
#endif

//--------------------------------------------------------------------------------------------------

LineColumnContents String::lineAndColumnFromIndex (const int32_t inIndex) const {
  LineColumnContents result ;
  const int32_t receiverLength = length () ;
  if (inIndex < receiverLength) {
    const utf32 * ptr = utf32String (HERE) ;
    int32_t lineNumber = 0 ;
    int32_t startOfLineIndex = 0 ;
    int32_t idx = 0 ;
    bool parseLine = true ;
    while ((idx < receiverLength) && parseLine) {
      while ((idx < receiverLength) && parseLine) {
        parseLine = UNICODE_VALUE (ptr [idx]) != '\n' ;
        idx += parseLine ;
      }
      if (idx < inIndex) {
        parseLine = true ;
        idx ++ ; // Pass '\n'
        startOfLineIndex = idx ;
        lineNumber ++ ;
      }
    }
  //---
    const int32_t columnNumber = inIndex - startOfLineIndex ;
    const String lineContents = subString (startOfLineIndex, idx - startOfLineIndex) ;
    result = LineColumnContents (lineNumber, columnNumber, lineContents) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

int32_t String::indexFromLineAndColumn (const int32_t inLineNumber,
                                          const int32_t inColumnNumber) const {
  int32_t idx = 0 ;
  int32_t line = 1 ;
  while (line < inLineNumber) {
    while ((idx < length ()) && (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) != '\n')) {
      idx += 1 ;
    }
    line += 1 ;
  }
  return idx + inColumnNumber ;
}

//--------------------------------------------------------------------------------------------------
//
//   C O N T A I N S   S T R I N G
//
//--------------------------------------------------------------------------------------------------

bool String::containsString (const String & inSearchedString) const {
  const utf32 * source = utf32String (HERE) ;
  bool contains = source != nullptr ;
  if (contains) {
    const utf32 * searchedString = inSearchedString.utf32String (HERE) ;
    contains = searchedString == nullptr ;
    if (! contains) {
      contains = ::utf32_strstr (source, searchedString) != nullptr ;
    }
  }
  return contains ;
}

//--------------------------------------------------------------------------------------------------
//
//   componentsSeparatedByString
//
//--------------------------------------------------------------------------------------------------

void String::componentsSeparatedByString (const String & inSeparatorString,
                                            TC_UniqueArray <String> & outResult) const {
  outResult.removeAllKeepingCapacity () ;
  const utf32 * sourcePtr = utf32String (HERE) ;
  if (sourcePtr == nullptr) {
    outResult.appendObject (String ()) ;
  }else{
    const int32_t splitStringLength = inSeparatorString.length () ;
    const utf32 * separator = inSeparatorString.utf32String (HERE) ;
    if (splitStringLength > 0) {
      const utf32 * p = ::utf32_strstr (sourcePtr, separator) ;
      while (p != nullptr) {
        String s ;
        s.genericUnicodeArrayOutput (sourcePtr, (int32_t) ((p - sourcePtr) & INT32_MAX)) ;
        outResult.appendObject (s) ;
        sourcePtr = p + splitStringLength ;
        p = ::utf32_strstr (sourcePtr, separator) ;
      }
    }
    outResult.appendObject (String (sourcePtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//   componentsJoinedByString
//
//--------------------------------------------------------------------------------------------------

String String::componentsJoinedByString (const TC_UniqueArray <String> & inComponentArray,
                                             const String & inSeparator) {
  String result ;
  if (inComponentArray.count () > 0) {
    result.addString (inComponentArray (0 COMMA_HERE)) ;
    for (int32_t i=1 ; i<inComponentArray.count () ; i++) {
      result.addString (inSeparator) ;
      result.addString (inComponentArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   stringByDeletingTailFromString
//
//--------------------------------------------------------------------------------------------------

String String::stringByDeletingTailFromString (const String & inSearchedString) const {
  String result = * this ;
  const int32_t searchedStringLength = inSearchedString.length () ;
  if (searchedStringLength > 0) {
    const utf32 * sourcePtr = utf32String (HERE) ;
    const utf32 * p = ::utf32_strstr (sourcePtr,
                                      inSearchedString.utf32String (HERE)) ;
    if (p != nullptr) {
      result.setLengthToZero () ;
      result.genericUnicodeArrayOutput (sourcePtr, (int32_t) ((p - sourcePtr) & INT32_MAX)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   endsWithString
//
//--------------------------------------------------------------------------------------------------

bool String::endsWithString (const String & inString) const {
  const int32_t offset = length () - inString.length () ;
  bool result = offset >= 0 ;
  for (int32_t i=0 ; (i<inString.length ()) && result ; i++) {
    result = this->operator () (i + offset COMMA_HERE) == inString (i COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   S U B S T I T U T E    C H A R A C T E R    B Y    S T R I N G
//
//--------------------------------------------------------------------------------------------------

//--- Substitute 'inCharacter' by 'inString' ; if the character occurs twice, suppress one

String String::stringByReplacingCharacterByString (const utf32 inCharacter,
                                                       const String & inString) const {
  const int32_t stringLength = length () ;
  String resultingString ;
  bool previousCharIsSubstituteChar = false ;
  for (int32_t i=0 ; i<stringLength ; i++) {
    const utf32 c = ((*this).operator () (i COMMA_HERE)) ;
    if (previousCharIsSubstituteChar) {
      if (UNICODE_VALUE (c) == UNICODE_VALUE (inCharacter)) {
        resultingString.addUnicodeChar (inCharacter COMMA_HERE) ;
      }else{
        resultingString.addString (inString) ;
        resultingString.addUnicodeChar (c COMMA_HERE) ;
      }
      previousCharIsSubstituteChar = false ;
    }else if (UNICODE_VALUE (c) == UNICODE_VALUE (inCharacter)) {
      previousCharIsSubstituteChar = true ;
    }else{
      resultingString.addUnicodeChar (c COMMA_HERE) ;
    }
  }
  if (previousCharIsSubstituteChar) {
    resultingString.addString (inString) ;
  }
//--- Return
  return resultingString ;
}

//--------------------------------------------------------------------------------------------------
//
//   S U B S T I T U T E    S T R I N G    B Y    S T R I N G
//
//--------------------------------------------------------------------------------------------------

String String::stringByReplacingStringByString (const String inSearchedString,
                                                    const String inReplacementString,
                                                    uint32_t & outReplacementCount,
                                                    bool & outOk) const {
  String result ;
  outReplacementCount = 0 ;
  outOk = inSearchedString.length () != 0 ;
  if (outOk) {
    const utf32 * sourceString = utf32String (HERE) ;
    const int32_t sourceLength = length () ;
    const utf32 * searchedString = inSearchedString.utf32String (HERE) ;
    const int32_t searchedStringLength = inSearchedString.length () ;
    int32_t index = 0 ;
    while (index <= (sourceLength - searchedStringLength)) {
      const bool found = utf32_strncmp (& sourceString [index], searchedString, searchedStringLength) == 0 ;
      if (found) {
        result.addString (inReplacementString) ;
        index += searchedStringLength ;
        outReplacementCount ++ ;
      }else{
        result.addUnicodeChar (sourceString [index] COMMA_HERE) ;
        index ++ ;
      }
    }
    result.appendUTF32String (& sourceString [index]) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String String::stringByReplacingStringByString (const String inSearchedString,
                                                    const String inReplacementString) const {
  uint32_t unusedReplacementCount = 0 ;
  bool unusedOk = true ;
  return stringByReplacingStringByString (inSearchedString, inReplacementString, unusedReplacementCount, unusedOk) ;
}

//--------------------------------------------------------------------------------------------------
//
//   G E T    L A S T   O C C U R R E N C E   O F   A   C H A R
//
//--------------------------------------------------------------------------------------------------

int32_t String::lastOccurrenceIndexOfChar (const utf32 inChar) const {
  int32_t result = length () ;
  const utf32 * ptr = utf32String (HERE) ;
  bool notFound = true ;
  while ((result > 0) && notFound) {
    result -- ;
    notFound = UNICODE_VALUE (ptr [result]) != UNICODE_VALUE (inChar) ;
  }
  if (notFound) {
    result = -1 ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String String::subString (const int32_t inStartIndex,
                              const int32_t inLength) const {
  String s ;
  if (inLength > 0) {
    int32_t last = inStartIndex + inLength ;
    const int32_t receiver_length = length () ;
    if (last > receiver_length) {
      last = receiver_length ;
    }
    const utf32 * ptr = utf32String (HERE) ;
    for (int32_t i=inStartIndex ; i<last ; i++) {
      s.addUnicodeChar (ptr [i] COMMA_HERE) ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::stringByCapitalizingFirstCharacter (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  if (receiver_length > 0) {
    s.addUnicodeChar (unicodeToUpper (ptr [0]) COMMA_HERE) ;
    for (int32_t i=1 ; i<receiver_length ; i++) {
      s.addUnicodeChar (ptr [i] COMMA_HERE) ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::lowercaseString (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    s.addUnicodeChar (unicodeToLower (ptr [i]) COMMA_HERE) ;
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::stringByTrimmingSeparators (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
//--- Trim left
  int32_t idx = 0 ;
  while ((idx < receiver_length) && ((UNICODE_VALUE (ptr [idx]) == ' ') || (UNICODE_VALUE (ptr [idx]) == '\n'))) {
    idx ++ ;
  }
//--- Trim and replace
  bool isCurrentlyTrimming = false ;
  while (idx < receiver_length) {
    const utf32 c = ptr [idx] ;
    if ((UNICODE_VALUE (c) == ' ') || (UNICODE_VALUE (c) == '\n')) {
      isCurrentlyTrimming = true ;
    }else{
      if (isCurrentlyTrimming) {
        s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
        isCurrentlyTrimming = false ;
      }
      s.addUnicodeChar (c COMMA_HERE) ;
    }
    idx ++ ;
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::uppercaseString (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    s.addUnicodeChar (unicodeToUpper (ptr [i]) COMMA_HERE) ;
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::reversedString (void) const {
  String s = *this ;
  s.reverseStringInPlace () ;
  return s ;
}

//--------------------------------------------------------------------------------------------------

bool String::isUnsignedInteger (void) const {
  bool ok = length () > 0 ;
  for (int32_t i=0 ; (i < length ()) && ok ; i++) {
    const uint32_t c = UNICODE_VALUE (this->operator () (i COMMA_HERE)) ;
    ok = (c >= '0') && (c <= '9') ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

uint32_t String::unsignedIntegerValue (void) const {
  uint32_t result = 0 ;
  bool ok = true ;
  for (int32_t i=0 ; (i < length ()) && ok ; i++) {
    const uint32_t c = UNICODE_VALUE (this->operator () (i COMMA_HERE)) ;
    ok = (c >= '0') && (c <= '9') ;
    if (ok) {
      result *= 10 ;
      result += c - '0' ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t String::currentColumn (void) const {
  uint32_t result = 0 ;
  bool found = false ;
  const int32_t receiver_length = length () ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=receiver_length-1 ; (i>=0) && ! found ; i--) {
    found = UNICODE_VALUE (ptr [i]) == '\n' ;
    if (! found) {
      result ++ ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void String::appendSpacesUntilColumn (const uint32_t inColumn) {
  for (uint32_t i=currentColumn () ; i<inColumn ; i++) {
    addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

String String::stringWithRepeatedCharacter (const utf32 inRepeatedCharacter,
                                                const uint32_t inCount) {
  String result ;
  for (uint32_t i=0 ; i<inCount ; i++) {
    result.addUnicodeChar (inRepeatedCharacter COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void String::convertToUInt32 (uint32_t & outResult,
                                bool & outOk) const {
  outResult = 0 ;
  outOk = length () > 0 ;
  int32_t idx = 0 ;
  while ((idx < length ()) && outOk) {
    const utf32 c = (*this) (idx COMMA_HERE) ;
    idx ++ ;
    const uint32_t r = outResult ;
    outResult = outResult * 10 + (UNICODE_VALUE (c) - '0') ;
    outOk = (UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9') && (r <= outResult) ;
  }
  if (outOk) {
    outOk = idx == length () ;
  }
}

//--------------------------------------------------------------------------------------------------

void String::convertToUInt64 (uint64_t & outResult,
                                bool & outOk) const {
  outResult = 0 ;
  outOk = length () > 0 ;
  int32_t idx = 0 ;
  while ((idx < length ()) && outOk) {
    const utf32 c = (*this) (idx COMMA_HERE) ;
    idx ++ ;
    const uint64_t r = outResult ;
    outResult = outResult * 10 + (UNICODE_VALUE (c) - '0') ;
    outOk = (UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9') && (r <= outResult) ;
  }
  if (outOk) {
    outOk = idx == length () ;
  }
}

//--------------------------------------------------------------------------------------------------

void String::convertToSInt32 (int32_t & outResult,
                                bool & outOk) const {
  bool isPositive = true ;
  int32_t idx = 0 ;
  if (length () > 0) {
    const utf32 c = (*this) (0 COMMA_HERE) ;
    if (UNICODE_VALUE (c) == '-') {
      isPositive = false ;
      idx = 1 ;
    }else if (UNICODE_VALUE (c) == '+') {
      idx = 1 ;
    }
  }
  uint32_t decimalUnsignedValue = 0 ;
  outOk = length () > 0 ;
  while ((idx < length ()) && outOk) {
    const utf32 c = (*this) (idx COMMA_HERE) ;
    idx ++ ;
    const uint32_t r = decimalUnsignedValue ;
    decimalUnsignedValue = decimalUnsignedValue * 10 + (UNICODE_VALUE (c) - '0') ;
    outOk = r < decimalUnsignedValue ;
  }
  if (outOk) {
    outOk = idx == length () ;
  }
  if (outOk) {
    if (isPositive) {
      outOk = decimalUnsignedValue <= (uint32_t) INT32_MAX ;
      if (outOk) {
        outResult = (int32_t) decimalUnsignedValue ;
      }
    }else{
      outOk = decimalUnsignedValue <= ((uint32_t) INT32_MAX) + 1 ;
      if (outOk) {
        outResult = - (int32_t) decimalUnsignedValue ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void String::convertToSInt64 (int64_t & outResult,
                                bool & outOk) const {
  bool isPositive = true ;
  int32_t idx = 0 ;
  if (length () > 0) {
    const utf32 c = (*this) (0 COMMA_HERE) ;
    if (UNICODE_VALUE (c) == '-') {
      isPositive = false ;
      idx = 1 ;
    }else if (UNICODE_VALUE (c) == '+') {
      idx = 1 ;
    }
  }
  uint64_t decimalUnsignedValue = 0 ;
  outOk = length () > 0 ;
  while ((idx < length ()) && outOk) {
    const utf32 c = (*this) (idx COMMA_HERE) ;
    idx ++ ;
    const uint64_t r = decimalUnsignedValue ;
    decimalUnsignedValue = decimalUnsignedValue * 10 + (UNICODE_VALUE (c) - '0') ;
    outOk = r < decimalUnsignedValue ;
  }
  if (outOk) {
    outOk = idx == length () ;
  }
  if (outOk) {
    if (isPositive) {
      outOk = decimalUnsignedValue <= (uint64_t) INT64_MAX ;
      if (outOk) {
        outResult = (int64_t) decimalUnsignedValue ;
      }
    }else{
      outOk = decimalUnsignedValue <= ((uint64_t) INT64_MAX) + 1 ;
      if (outOk) {
        outResult = - (int64_t) decimalUnsignedValue ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void String::convertToDouble (double & outDoubleValue,
                                bool & outOk) const {
  outDoubleValue = 0.0 ;
  int32_t idx = 0 ;
//--- Sign
  bool positive = true ;
  if (idx < length ()) {
    const utf32 c = this->operator () (idx COMMA_HERE) ;
    if (UNICODE_VALUE (c) == '-') {
      positive = false ;
      idx ++ ;
    }else if (UNICODE_VALUE (c) == '+') {
      idx ++ ;
    }
  }
//--- Mantissa
  while ((idx < length ()) && isdigit ((int) UNICODE_VALUE (this->operator () (idx COMMA_HERE)))) {
    outDoubleValue *= 10.0 ;
    outDoubleValue += (double) (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) - '0') ;
    idx ++ ;
  }
//--- Fractional part
  double divisor = 1.0 ;
  if ((idx < length ()) && (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) == '.')) { // Dot
    idx ++ ;
    while ((idx < length ()) && isdigit ((int) UNICODE_VALUE (this->operator () (idx COMMA_HERE)))) {
      divisor *= 10.0 ;
      outDoubleValue *= 10.0 ;
      outDoubleValue += (double) (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) - '0') ;
      idx ++ ;
    }
  }
  outDoubleValue /= divisor ;
//--- Exponent ?
  if (idx < length ()) {
    switch (UNICODE_VALUE (this->operator () (idx COMMA_HERE))) {
    case 'E' : case 'e' : case 'd' : case 'D' : {
      idx ++ ;
    //--- Exponent sign
      bool exponentIsPositive = true ;
      if (idx < length ()) {
        const utf32 c = this->operator () (idx COMMA_HERE) ;
        if (UNICODE_VALUE (c) == '-') {
          exponentIsPositive = false ;
          idx ++ ;
        }else if (UNICODE_VALUE (c) == '+') {
          idx ++ ;
        }
      }
      double exponentValue = 0.0 ;
      while ((idx < length ()) && isdigit ((int) UNICODE_VALUE (this->operator () (idx COMMA_HERE)))) {
        exponentValue *= 10.0 ;
        exponentValue += (double) (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) - '0') ;
        idx ++ ;
      }
      outDoubleValue *= ::pow (10.0, exponentIsPositive ? exponentValue : - exponentValue) ;
    }
    break ;
    default :
    break ;
    }
  }
  if (!positive) {
    outDoubleValue = - outDoubleValue ;
  }
//--- Reached end of string ?
  outOk = idx == length () ;
}

//--------------------------------------------------------------------------------------------------

String String::identifierRepresentation (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (isalpha ((int) UNICODE_VALUE (c))) {
      s.addUnicodeChar (c COMMA_HERE) ;
    }else{
      s.addUnicodeChar (TO_UNICODE ('_') COMMA_HERE) ;
      s.addUnsignedHex (UNICODE_VALUE (c)) ;
      s.addUnicodeChar (TO_UNICODE ('_') COMMA_HERE) ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::nameRepresentation (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (isalnum ((int) UNICODE_VALUE (c))) {
      s.addUnicodeChar (c COMMA_HERE) ;
    }else{
      s.addUnicodeChar (TO_UNICODE ('_') COMMA_HERE) ;
      s.addUnsignedHex (UNICODE_VALUE (c)) ;
      s.addUnicodeChar (TO_UNICODE ('_') COMMA_HERE) ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::fileNameRepresentation (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    const int nc = (int) UNICODE_VALUE (c) ;
    if (isdigit (nc) || islower (nc)) {
      s.addUnicodeChar (c COMMA_HERE) ;
    }else{
      s.addUnicodeChar (TO_UNICODE ('-') COMMA_HERE) ;
      s.addUnsignedHex (UNICODE_VALUE (c)) ;
      s.addUnicodeChar (TO_UNICODE ('-') COMMA_HERE) ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::assemblerRepresentation (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (isalnum ((int) UNICODE_VALUE (c)) || (UNICODE_VALUE (c) == '.')  || (UNICODE_VALUE (c) == '-') || (UNICODE_VALUE (c) == '$')) {
      s.addUnicodeChar (c COMMA_HERE) ;
    }else{
      s.addUnicodeChar (TO_UNICODE ('_') COMMA_HERE) ;
      s.addUnsignedHex (UNICODE_VALUE (c)) ;
      s.addUnicodeChar (TO_UNICODE ('_') COMMA_HERE) ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::utf8RepresentationEnclosedWithin (const utf32 inCharacter, const bool inEscapeQuestionMark) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  s.addUnicodeChar  (inCharacter COMMA_HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (UNICODE_VALUE (c) == '\\') {
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('\\' COMMA_HERE) ;
    }else if (UNICODE_VALUE (c) == '\n') {
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('n' COMMA_HERE) ;
    }else if (UNICODE_VALUE (c) == '\r') {
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('r' COMMA_HERE) ;
    }else if (inEscapeQuestionMark && (UNICODE_VALUE (c) == '?')) { // Trigraph protection !!!
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('?' COMMA_HERE) ;
    }else if (c == inCharacter) {
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar (inCharacter COMMA_HERE) ;
    }else{
      s.addUnicodeChar (c COMMA_HERE) ;
    }
  }
  s.addUnicodeChar  (inCharacter COMMA_HERE) ;
  return s ;
}

//--------------------------------------------------------------------------------------------------

static String hex4 (const uint32_t inValue) {
  static const uint8_t digit [16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'} ;
  String result = "" ;
  result.addUnicodeChar (TO_UNICODE (digit [(inValue >> 12) & 15]) COMMA_HERE) ;
  result.addUnicodeChar (TO_UNICODE (digit [(inValue >>  8) & 15]) COMMA_HERE) ;
  result.addUnicodeChar (TO_UNICODE (digit [(inValue >>  4) & 15]) COMMA_HERE) ;
  result.addUnicodeChar (TO_UNICODE (digit [(inValue >>  0) & 15]) COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static String hex8 (const uint32_t inValue) {
  String result = "" ;
  result.addString (hex4 (inValue >> 16)) ;
  result.addString (hex4 (inValue >>  0)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String String::utf8RepresentationWithUnicodeEscaping (void) const {
  String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  s.addUnicodeChar  ('\"' COMMA_HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (UNICODE_VALUE (c) == '\\') {
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('\\' COMMA_HERE) ;
    }else if (c == '\"') {
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('\"' COMMA_HERE) ;
    }else if (UNICODE_VALUE (c) < ' ') {
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('u' COMMA_HERE) ;
      s.addString (hex4 (UNICODE_VALUE (c))) ;
    }else if (UNICODE_VALUE (c) < '~') {
      s.addUnicodeChar (c COMMA_HERE) ;
    }else if (UNICODE_VALUE (c) < 0x800) {
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('u' COMMA_HERE) ;
      s.addString (hex4 (UNICODE_VALUE (c))) ;
    }else{
      s.addUnicodeChar ('\\' COMMA_HERE) ;
      s.addUnicodeChar ('U' COMMA_HERE) ;
      s.addString (hex8 (UNICODE_VALUE (c))) ;
    }
  }
  s.addUnicodeChar  ('\"' COMMA_HERE) ;
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::decodedStringFromRepresentation (bool & outOk) const {
  TC_UniqueArray <String> components ;
  componentsSeparatedByString ("_", components) ;
  String result ;
  outOk = true ;
  for (int32_t i=0 ; i<components.count () ; i++) {
    if ((i & 1) == 0) {
      result.addString (components (i COMMA_HERE)) ;
    }else{
      uint32_t codePoint = 0 ;
      for (int32_t j=0 ; j<components (i COMMA_HERE).length () ; j++) {
        codePoint *= 16 ;
        const uint32_t c = UNICODE_VALUE (components (i COMMA_HERE) (j COMMA_HERE)) ;
        if ((c >= '0') && (c <= '9')) {
          codePoint += c - '0' ;
        }else if ((c >= 'a') && (c <= 'f')) {
          codePoint += c + 10 - 'a' ;
        }else if ((c >= 'A') && (c <= 'F')) {
          codePoint += c + 10 - 'A' ;
        }else{
          outOk = false ;
        }
      }
      result.addUnicodeChar (codePoint COMMA_HERE) ;
    }
  }
  return outOk ? result : "" ;
}

//--------------------------------------------------------------------------------------------------

String String::HTMLRepresentation (void) const {
  String result ;
  for (int32_t i=0 ; i<length () ; i++) {
    const utf32 c = this->operator () (i COMMA_HERE) ;
    if (UNICODE_VALUE (c) == '&') {
      result.addString ("&amp;") ;
    }else if (UNICODE_VALUE (c) == '"') {
      result.addString ("&quot;") ;
    }else if (UNICODE_VALUE (c) == '<') {
      result.addString ("&lt;") ;
    }else if (UNICODE_VALUE (c) == '>') {
      result.addString ("&gt;") ;
    }else{
      result.addUnicodeChar (c COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   S T R I N G    C O M P A R E
//
//--------------------------------------------------------------------------------------------------

int32_t String::compare (const char * const inCstring) const {
  int32_t result = 0 ;
  const utf32 * myStringPtr = utf32String (HERE) ;
  if (inCstring == nullptr) {
    result = 1 ;
  }else if (myStringPtr == nullptr) {
    result = -1 ;
  }else{
    result = ::utf32_char_strcmp (myStringPtr, inCstring) ; // Never call strcmp with nullptr pointer(s) !
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

int32_t String::compare (const String & inString) const {
  int32_t result = 0 ;
  const utf32 * myStringPtr = utf32String (HERE) ;
  const utf32 * otherStringPtr = inString.utf32String (HERE) ;
  if (myStringPtr == nullptr) {
    result = 1 ;
  }else if (otherStringPtr == nullptr) {
    result = -1 ;
  }else{
    result = ::utf32_strcmp (myStringPtr, otherStringPtr) ; // Never call strcmp with nullptr pointer(s) !
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

int32_t String::compareStringByLength (const String & inString) const {
  int32_t result ;
  const utf32 * myStringPtr = utf32String (HERE) ;
  const utf32 * otherStringPtr = inString.utf32String (HERE) ;
  if (otherStringPtr == myStringPtr) {
    result = 0 ;
  }else if (otherStringPtr == nullptr) {
    result = 1 ;
  }else if (otherStringPtr == nullptr) {
    result = -1 ;
  }else{
    result = length () - inString.length () ;
    if (result == 0) {
      result = ::utf32_strcmp (myStringPtr, otherStringPtr) ; // Never call strcmp with nullptr pointer(s) !
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

//bool String::operator == (const String & inString) const {
//  return compareStringByLength (inString) == 0 ;
//}

//--------------------------------------------------------------------------------------------------

//bool String::operator != (const String & inString) const {
//  return compareStringByLength (inString) != 0 ;
//}

//--------------------------------------------------------------------------------------------------
//
//   pathExtension
//
//--------------------------------------------------------------------------------------------------

String String::pathExtension (void) const {
  const utf32 * source = utf32String (HERE) ;
  String result ;
  int32_t receiver_length = length ();
//--- Suppress training '/'
  while ((receiver_length > 1) && (UNICODE_VALUE (source [receiver_length - 1]) == '/')) {
    receiver_length -- ;
  }
//--- Search last '.'
  bool found = false ;
  int32_t lastOccurrenceIndex = receiver_length ;
  while ((lastOccurrenceIndex > 0) && ! found) {
    lastOccurrenceIndex -- ;
    found = UNICODE_VALUE (source [lastOccurrenceIndex]) == '.' ;
  }
  if (found) {
    if (lastOccurrenceIndex < (receiver_length - 1)) {
      result.genericUnicodeArrayOutput (& source [lastOccurrenceIndex + 1], receiver_length - 1 - lastOccurrenceIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   stringByDeletingPathExtension
//
//--------------------------------------------------------------------------------------------------

String String::
stringByDeletingPathExtension (void) const {
  const utf32 * source = utf32String (HERE) ;
  String result ;
  int32_t receiver_length = length ();
//--- Suppress training '/'
  while ((receiver_length > 1) && (UNICODE_VALUE (source [receiver_length - 1]) == '/')) {
    receiver_length -- ;
  }
//--- Search last '.'
  bool found = false ;
  int32_t lastOccurrenceIndex = receiver_length ;
  while ((lastOccurrenceIndex > 0) && ! found) {
    lastOccurrenceIndex -- ;
    found = UNICODE_VALUE (source [lastOccurrenceIndex]) == '.' ;
  }
  if (found) {
    result.genericUnicodeArrayOutput (source, lastOccurrenceIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   stringByDeletingLastPathComponent
//
//--------------------------------------------------------------------------------------------------

String String::
stringByDeletingLastPathComponent (void) const {
  const utf32 * source = utf32String (HERE) ;
  String result ;
  int32_t receiver_length = length ();
//--- Suppress training '/'
  while ((receiver_length > 1) && (UNICODE_VALUE (source [receiver_length - 1]) == '/')) {
    receiver_length -- ;
  }
//--- Search last '/'
  bool found = false ;
  int32_t lastOccurrenceIndex = receiver_length ;
  while ((lastOccurrenceIndex > 0) && ! found) {
    lastOccurrenceIndex -- ;
    found = UNICODE_VALUE (source [lastOccurrenceIndex]) == '/' ;
  }
  if (found) {
    result.genericUnicodeArrayOutput (source, lastOccurrenceIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   stringByAppendingPathComponent
//
//--------------------------------------------------------------------------------------------------

String String::
stringByAppendingPathComponent (const String & inPathComponent) const {
  String result = *this ;
  if (result.length () == 0) {
    result = inPathComponent ;
  }else if (UNICODE_VALUE (result.lastCharacter (HERE)) != '/') {
    result.addUnicodeChar (TO_UNICODE ('/') COMMA_HERE) ;
    result.addString (inPathComponent) ;
  }else{
    result.addString (inPathComponent) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   lastPathComponent
//
//--------------------------------------------------------------------------------------------------

String String::
lastPathComponent (void) const {
  const utf32 * source = utf32String (HERE) ;
  String result ;
  int32_t receiver_length = length ();
//--- Suppress training '/'
  while ((receiver_length > 1) && (UNICODE_VALUE (source [receiver_length - 1]) == '/')) {
    receiver_length -- ;
  }
//--- Search last '/'
  bool found = false ;
  int32_t lastOccurrenceIndex = receiver_length ;
  while ((lastOccurrenceIndex > 0) && ! found) {
    lastOccurrenceIndex -- ;
    found = UNICODE_VALUE (source [lastOccurrenceIndex]) == '/' ;
  }
  if (found) {
    result.genericUnicodeArrayOutput (& source [lastOccurrenceIndex + 1], receiver_length - lastOccurrenceIndex - 1) ;
  }else{
    result.genericUnicodeArrayOutput (source, receiver_length) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String String::lastPathComponentWithoutExtension (void) const {
  const String fileNameWithExtension = lastPathComponent () ;
  return fileNameWithExtension.stringByDeletingPathExtension () ;
}

//--------------------------------------------------------------------------------------------------
//
//   M D 5
//
//--------------------------------------------------------------------------------------------------

String String::md5 (void) const {
  String result ;
  uint8_t digest [16] ;
  MD5_CTX context ;
  MD5_Init (&context) ;
  MD5_Update(&context, (uint8_t *) cString (HERE), (uint32_t) length ()) ;
  MD5_Final (digest, &context);
  char s [40] ;
  for (uint32_t i=0 ; i<16 ; i++) {
    snprintf (s, 40, "%02X", digest [i]) ;
    result.addString (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   S U B    S T R I N G    F R O M    I N D E X
//
//--------------------------------------------------------------------------------------------------

String String::subStringFromIndex (const int32_t inStartIndex) const  {
  String result ;
  if (inStartIndex < length ()) {
    result = subString (inStartIndex, length () - inStartIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   R I G H T    S U B    S T R I N G
//
//--------------------------------------------------------------------------------------------------

String String::rightSubString (const int32_t inLength) const  {
  String result ;
  if (length () <= inLength) {
    result = *this ;
  }else{
    result = subString (length () - inLength, inLength) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   L E F T    S U B    S T R I N G
//
//--------------------------------------------------------------------------------------------------

String String::leftSubString (const int32_t inLength) const  {
  String result ;
  if (length () <= inLength) {
    result = *this ;
  }else{
    result = subString (0, inLength) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   X M L    E S C A P E D    S T R I N G
//
//--------------------------------------------------------------------------------------------------

//--- Returns a string where ", ', <, > and & have been replaced by &quot;, &apos;, &lt;, &gt; and &amp;
String String::XMLEscapedString (void) const {
  String result ;
  for (int32_t i=0 ; i<length () ; i++) {
    const utf32 c = this->operator () (i COMMA_HERE) ;
    switch (UNICODE_VALUE (c)) {
    case '"'  : result.addString ("&quot;") ; break ;
    case '\'' : result.addString ("&apos;") ; break ;
    case '<'  : result.addString ("&lt;")   ; break ;
    case '>'  : result.addString ("&gt;")   ; break ;
    case '&'  : result.addString ("&amp;")  ; break ;
    case '\n' : result.addString ("&#10;") ; break ;
    default   : result.addUnicodeChar (c COMMA_HERE) ; break;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String String::stringByStandardizingPath (void) const {
  #ifdef COMPILE_FOR_WINDOWS
    String path = stringByReplacingCharacterByString (TO_UNICODE ('\\'), "/") ;
  #else
    String path = * this ;
  #endif
  if (path.length () == 0) {
    path.addString (".") ;
  }else{
  //#define TRACE_stringByStandardizingPath
  //--- Decompose path
    TC_UniqueArray <String> componentArray ;
    path.componentsSeparatedByString ("/", componentArray) ;
    #ifdef TRACE_stringByStandardizingPath
      printf ("----- Decomposition of '%s':\n", path.cString (HERE)) ;
      for (int32_t i=0 ; i<componentArray.count () ; i++) {
        printf ("  '%s'\n", componentArray (i COMMA_HERE).cString (HERE)) ;
      }
    #endif
  //--- Remove empty components (but the first one)
    int32_t componentIndex = 1 ;
    while (componentIndex < componentArray.count ()) {
      if (componentArray (componentIndex COMMA_HERE).length () == 0) {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
      }else{
        componentIndex ++ ;
      }
    }
    #ifdef TRACE_stringByStandardizingPath
      printf ("-- After removing empty components:\n") ;
      for (int32_t i=0 ; i<componentArray.count () ; i++) {
        printf ("  '%s'\n", componentArray (i COMMA_HERE).cString (HERE)) ;
      }
    #endif
  //--- Remove '.' components
    componentIndex = 0 ;
    while (componentIndex < componentArray.count ()) {
      if (componentArray (componentIndex COMMA_HERE) == ".") {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
      }else{
        componentIndex ++ ;
      }
    }
    #ifdef TRACE_stringByStandardizingPath
      printf ("-- After removing '.' components:\n") ;
      for (int32_t i=0 ; i<componentArray.count () ; i++) {
        printf ("  '%s'\n", componentArray (i COMMA_HERE).cString (HERE)) ;
      }
    #endif
  //--- Remove '..' components
    componentIndex = 1 ;
    while (componentIndex < componentArray.count ()) {
      if ((componentArray (componentIndex COMMA_HERE) == "..") && (componentArray (componentIndex-1 COMMA_HERE) != "..")) {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
        componentIndex -- ;
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
        if (componentIndex == 0) {
          componentIndex = 1 ;
        }
      }else{
        componentIndex ++ ;
      }
    }
    #ifdef TRACE_stringByStandardizingPath
      printf ("-- After removing '..' components:\n") ;
      for (int32_t i=0 ; i<componentArray.count () ; i++) {
        printf ("  '%s'\n", componentArray (i COMMA_HERE).cString (HERE)) ;
      }
    #endif
  //--- Recompose path
    path = componentsJoinedByString (componentArray, "/") ;
    #ifdef TRACE_stringByStandardizingPath
      printf ("-- Recomposed path: '%s'\n", path.cString (HERE)) ;
    #endif
  }
//---
  return path ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark LevenshteinDistanceFromString
#endif

//--------------------------------------------------------------------------------------------------

uint32_t String::LevenshteinDistanceFromString (const String & inOperand) const {
  const int32_t myLength = length () ;
  const int32_t operandLength = inOperand.length () ;
  // for all i and j, d[i,j] will hold the Levenshtein distance between
  // the first i characters of s and the first j characters of t;
  // note that d has (m+1)x(n+1) values
  TC_UniqueArray2 <uint32_t> distance (myLength + 1, operandLength + 1) ;

  for (int32_t i=0 ; i<=myLength ; i++) {
    distance.setObjectAtIndexes ((uint32_t) i, i, 0 COMMA_HERE) ;
  }

  for (int32_t j=0 ; j<=operandLength ; j++) {
    distance.setObjectAtIndexes ((uint32_t) j, 0, j COMMA_HERE) ;
  }

  for (int32_t j=1 ; j<=operandLength ; j++) {
    for (int32_t i=1 ; i<=myLength ; i++) {
      if (UNICODE_VALUE (this->operator () (i-1 COMMA_HERE)) == UNICODE_VALUE (inOperand (j-1 COMMA_HERE))) {
        distance (i, j COMMA_HERE) = distance (i-1, j-1 COMMA_HERE) ;       // no operation required
      }else{
        distance (i, j COMMA_HERE) = std::min (std::min (
          distance (i-1, j COMMA_HERE) + 1,  // a deletion
          distance (i, j-1 COMMA_HERE) + 1),  // an insertion
          distance (i-1, j-1 COMMA_HERE) + 1 // a substitution
        ) ;
      }
    }
  }
  return distance (myLength, operandLength COMMA_HERE) ;
}

/* int LevenshteinDistance(char s[1..m], char t[1..n])
{
  // for all i and j, d[i,j] will hold the Levenshtein distance between
  // the first i characters of s and the first j characters of t;
  // note that d has (m+1)x(n+1) values
  declare int d[0..m, 0..n]

  for i from 0 to m
    d[i, 0] := i // the distance of any first string to an empty second string
  for j from 0 to n
    d[0, j] := j // the distance of any second string to an empty first string

  for j from 1 to n
  {
    for i from 1 to m
    {
      if s[i] = t[j] then
        d[i, j] := d[i-1, j-1]       // no operation required
      else
        d[i, j] := minimum
                   (
                     d[i-1, j] + 1,  // a deletion
                     d[i, j-1] + 1,  // an insertion
                     d[i-1, j-1] + 1 // a substitution
                   )
    }
  }

  return d[m,n]
} */

//--------------------------------------------------------------------------------------------------
