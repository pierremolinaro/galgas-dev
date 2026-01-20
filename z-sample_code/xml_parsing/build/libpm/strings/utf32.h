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

#pragma once

//--------------------------------------------------------------------------------------------------

#include <stdint.h>

//--------------------------------------------------------------------------------------------------

class String ;

//--------------------------------------------------------------------------------------------------
//                      U T F 3 2    T Y P E
//--------------------------------------------------------------------------------------------------

class utf32 final {
  private: uint32_t mCodePoint ;
  public: inline uint32_t u32 (void) const { return mCodePoint ; }
  public: inline utf32 (void) :
  mCodePoint (0) {
  }
  public: inline utf32 (const uint32_t & inCode) :
  mCodePoint (inCode) {
  }
  public: inline utf32 (const utf32 & inOperand) :
  mCodePoint (inOperand.mCodePoint) {
  }
  public: inline utf32 & operator = (const utf32 & inOperand) {
    mCodePoint = inOperand.mCodePoint ;
    return *this ;
  }
  public: inline bool operator == (const utf32 inOperand) const {
    return mCodePoint == inOperand.mCodePoint ;
  }
  public: inline bool operator != (const utf32 inOperand) const {
    return mCodePoint != inOperand.mCodePoint ;
  }

//--- Character assigned ?
  public: bool isAssigned (void) const ;

//--- Returns to lower letter, or returns argument
  public: utf32 toLower (void) const ;

//--- Returns to upper letter, or returns argument
  public: utf32 toUpper (void) const ;

//--- Returns character name, or empty string if not assigned
  public: String unicodeName (void) const ;

//--- Returns the number of bytes needed for encoding this character in UTF8
  public: uint32_t utf8Length (void) const ;

//--- Returns true if unicode letter
  public: bool isLetter (void) const ;

//--- Returns true if unicode mark
  public: bool isMark (void) const ;

//--- Returns true if unicode number
  public: bool isNumber (void) const ;

//--- Returns true if unicode decimal digit
  public: bool isDecimalDigit (void) const ;

//--- Returns true if ascii hex digit
  public: bool isASCIIHexDigit (void) const ;

//--- Returns true if unicode separator
  public: bool isSeparator (void) const ;

//--- Returns true if unicode command
  public: bool isCommand (void) const ;

//--- Returns true if unicode punctuation
  public: bool isPunctuation (void) const ;

//--- Returns true if unicode symbol
  public: bool isSymbol (void) const ;
} ;

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodeLetter (const utf32 inUnicodeCharacter) {
//  return inUnicodeCharacter.isLetter () ;
//}

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodeMark (const utf32 inUnicodeCharacter) {
//  return inUnicodeCharacter.isMark () ;
//}

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodeNumber (const utf32 inUnicodeCharacter)  {
//  return inUnicodeCharacter.isNumber () ;
//}

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodeDecimalDigit (const utf32 inUnicodeCharacter)  {
//  return inUnicodeCharacter.isDecimalDigit () ;
//}

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodeASCIIHexDigit (const utf32 inUnicodeCharacter)  {
//  return inUnicodeCharacter.isASCIIHexDigit () ;
//}

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodeSeparator (const utf32 inUnicodeCharacter) {
//  return inUnicodeCharacter.isSeparator () ;
//}

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodeCommand (const utf32 inUnicodeCharacter)  {
//  return inUnicodeCharacter.isCommand () ;
//}

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodePunctuation (const utf32 inUnicodeCharacter) {
//  return inUnicodeCharacter.isPunctuation () ;
//}

//--------------------------------------------------------------------------------------------------

//inline bool isUnicodeSymbol (const utf32 inUnicodeCharacter)  {
//  return inUnicodeCharacter.isSymbol () ;
//}

//--------------------------------------------------------------------------------------------------

static const utf32 UNICODE_REPLACEMENT_CHARACTER = utf32 (0x0000FFFD) ;
static const utf32 UNICODE_MAX_LEGAL_UTF32_CHARACTER = utf32 (0x0010FFFF) ;

//--------------------------------------------------------------------------------------------------

//--- Decode HTML in string, return Unicode (or NULL if not found)
utf32 unicodeCharacterFromHTMLSequence (const String & inString) ;

//--------------------------------------------------------------------------------------------------

int32_t UTF8StringFromUTF32Character (const utf32 inUnicodeChar, char outSequence [5]) ;

//--- inEndOfStringPtr points just beyond the last available byte
utf32 utf32CharacterForPointer (const uint8_t * inDataString,
                                int32_t & ioIndex,
                                const int32_t inLength,
                                bool & ioOK) ;

//--------------------------------------------------------------------------------------------------
