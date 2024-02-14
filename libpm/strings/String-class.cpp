//--------------------------------------------------------------------------------------------------
//
//  String : an implementation of fully dynamic character string
//
//  This file is part of libpm library
//
//  Copyright (C) 1997, ..., 2024 Pierre Molinaro.
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

#include "MF_MemoryControl.h"
#include "md5.h"
#include "SharedObject.h"
#include "unicode_string_routines.h"
#include "unicode_character_cpp.h"
#include "TC_UniqueArray2.h"

//--------------------------------------------------------------------------------------------------

#include <math.h>
#include <string.h>
#include <ctype.h>

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark PrivateEmbeddedString
#endif

//--------------------------------------------------------------------------------------------------

static const utf32 kEmptyUTF32String [1] = {TO_UNICODE (0)} ;

//--------------------------------------------------------------------------------------------------

class PrivateEmbeddedString final : public SharedObject {
  public: uint32_t mCapacity ; // Maximun allowed length of the following C string
  public: uint32_t mLength ; // Current length of the following C string
  public: char * mUTF8CString ;
  public: utf32 * mUTF32String ; // Zero terminated string

  public: PrivateEmbeddedString (const uint32_t inCapacity COMMA_LOCATION_ARGS) ;

  public: PrivateEmbeddedString (const PrivateEmbeddedString * inEmbeddedString,
                                 const uint32_t inCapacity
                                 COMMA_LOCATION_ARGS) ;

  public: virtual ~ PrivateEmbeddedString (void) ;

//--- Accessor
  public: utf32 operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

//--- No copy
  private: PrivateEmbeddedString (const PrivateEmbeddedString &) = delete ;
  private: PrivateEmbeddedString & operator = (const PrivateEmbeddedString &) = delete ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: void checkEmbeddedString (LOCATION_ARGS) const ;
  #endif

  public: void reallocEmbeddedString (const uint32_t inCapacity) ;
} ;

//--------------------------------------------------------------------------------------------------

static uint32_t stringGoodSize (const uint32_t inCurrentCapacity,
                                const uint32_t inCapacity) {
  uint32_t newCapacity = (inCurrentCapacity < 128) ? 128 : inCurrentCapacity ;
  while (newCapacity < inCapacity) {
    newCapacity <<= 1 ;
  }
  return newCapacity ;
}

//--------------------------------------------------------------------------------------------------

PrivateEmbeddedString::PrivateEmbeddedString (const uint32_t inCapacity COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mCapacity (0),
mLength (0),
mUTF8CString (nullptr),
mUTF32String (nullptr) {
  const uint32_t newCapacity = stringGoodSize (0, inCapacity) ;
  macroMyNewPODArray (mUTF32String, utf32, newCapacity) ;
  mUTF32String [0] = TO_UNICODE ('\0') ;
  mCapacity = newCapacity ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkEmbeddedString (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

PrivateEmbeddedString::PrivateEmbeddedString (const PrivateEmbeddedString * inEmbeddedString,
                                              const uint32_t inCapacity
                                              COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mCapacity (0),
mLength (0),
mUTF8CString (nullptr),
mUTF32String (nullptr) {
  macroValidPointer (inEmbeddedString) ;
  macroValidPointer (inEmbeddedString->mUTF32String) ;
  macroAssert (inCapacity > inEmbeddedString->mLength, "inCapacity (%lld) < inEmbeddedString->mLength (%lld)", inCapacity, inEmbeddedString->mLength) ;
  const uint32_t newCapacity = stringGoodSize (inEmbeddedString->mCapacity, inCapacity) ;
  macroMyNewPODArray (mUTF32String, utf32, newCapacity) ;
  mUTF32String [0] = TO_UNICODE ('\0') ;
  mCapacity = newCapacity ;
  macroAssert (inEmbeddedString->mLength < mCapacity, "inEmbeddedString->mLength (%lld) >= mCapacity (%lld)", inEmbeddedString->mLength, mCapacity) ;
  for (uint32_t i=0 ; i<=inEmbeddedString->mLength ; i++) {
    mUTF32String [i] = inEmbeddedString->mUTF32String [i] ;
  }
  mLength = inEmbeddedString->mLength ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkEmbeddedString (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

PrivateEmbeddedString::~PrivateEmbeddedString (void) {
  macroMyDeletePODArray (mUTF8CString) ;
  macroMyDeletePODArray (mUTF32String) ;
}

//--------------------------------------------------------------------------------------------------

utf32 PrivateEmbeddedString::operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  macroAssertThere (inIndex >= 0, "String index (%lld) is < 0", inIndex, 0) ;
  macroAssertThere (uint32_t (inIndex) < mLength, "String index (%lld) is > length (%lld)", inIndex, mLength) ;
  return mUTF32String [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void PrivateEmbeddedString::checkEmbeddedString (LOCATION_ARGS) const {
    macroAssertThere (mCapacity > 0, "mCapacity == 0", 0, 0) ;
    macroAssertThere (mLength < mCapacity, "mLength (%ld) >= mCapacity (%ld)", mLength, mCapacity) ;
    macroAssertThere (UNICODE_VALUE (mUTF32String [mLength]) == 0,
                      "mUTF32String [mLength (%ld)] == %ld != 0",
                      mLength, int32_t (UNICODE_VALUE (mUTF32String [mLength]))) ;
    if (mUTF8CString != nullptr) {
      macroValidPointerThere (mUTF8CString) ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

void PrivateEmbeddedString::reallocEmbeddedString (const uint32_t inCapacity) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkEmbeddedString (HERE) ;
  #endif
  macroUniqueSharedObject (this) ;
  if (inCapacity > mCapacity) {
    const uint32_t newCapacity = stringGoodSize (mCapacity, inCapacity) ;
    macroMyReallocPODArray (mUTF32String, utf32, newCapacity) ;
    mCapacity = newCapacity ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkEmbeddedString (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors & destructor
#endif

//--------------------------------------------------------------------------------------------------
//   C O N S T R U C T O R S
//--------------------------------------------------------------------------------------------------

String::String (void) :
mEmbeddedString (nullptr) {
}

//--------------------------------------------------------------------------------------------------

String::String (const char * inCstring) :
mEmbeddedString (nullptr) {
  if (inCstring != nullptr) {
    performAppendCString (inCstring, int32_t (strlen (inCstring))) ;
  }
}

//--------------------------------------------------------------------------------------------------

String::String (const String & inSource) : // Copy constructor
AbstractOutputStream (inSource),
mEmbeddedString (nullptr) {
  macroAssignSharedObject (mEmbeddedString, inSource.mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------

String String::newWithStdIn (void) {
  const size_t BUFFER_SIZE = 1000 ;
  char buffer [BUFFER_SIZE] ;
  const char * s = fgets (buffer, BUFFER_SIZE, stdin) ;
  return String ((s == nullptr) ? "" : s) ;
}

//--------------------------------------------------------------------------------------------------
//   D E S T R U C T O R
//--------------------------------------------------------------------------------------------------

String::~String (void) {
  macroDetachSharedObject (mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------

String String::spaces (const int32_t inSpaceCount) {
  String result ;
  for (int32_t i=0 ; i<inSpaceCount ; i++) {
    result.appendCString (" ") ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t String::capacity (void) const {
  return (mEmbeddedString == nullptr) ? 0 : mEmbeddedString->mCapacity ;
}

//--------------------------------------------------------------------------------------------------
//   A S S I G N M E N T    O P E R A T O R
//--------------------------------------------------------------------------------------------------

String & String::operator = (const String & inSource) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
    inSource.checkString (HERE) ;
  #endif
  macroAssignSharedObject (mEmbeddedString, inSource.mEmbeddedString) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void String::removeAll (void) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  macroDetachSharedObject (mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void String::checkString (LOCATION_ARGS) const {
    if (mEmbeddedString != nullptr) {
      macroValidSharedObject (mEmbeddedString, PrivateEmbeddedString) ;
      mEmbeddedString->checkEmbeddedString (THERE) ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
//   G E T    M E T H O D S
//--------------------------------------------------------------------------------------------------

utf32 String::charAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (THERE) ;
  #endif
  macroValidSharedObjectThere (mEmbeddedString, PrivateEmbeddedString) ;
  return mEmbeddedString->operator () (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

utf32 String::readCharOrNul (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  return ((mEmbeddedString == nullptr) || ((uint32_t) inIndex >= mEmbeddedString->mLength))
    ? TO_UNICODE ('\0')
    : mEmbeddedString->mUTF32String [inIndex] ;
}

//--------------------------------------------------------------------------------------------------
//   lastChar
//--------------------------------------------------------------------------------------------------

utf32 String::lastChar (LOCATION_ARGS) const {
  const uint32_t stringLength = mEmbeddedString->mLength ;
  macroAssertThere (stringLength > 0, "length == 0", 0, 0) ;
  return (stringLength == 0) ? TO_UNICODE ('\0') : mEmbeddedString->mUTF32String [stringLength - 1] ;
}

//--------------------------------------------------------------------------------------------------

bool String::containsChar (const utf32 inCharacter) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  bool found = false ;
  if (nullptr != mEmbeddedString) {
    for (int32_t i=0 ; (i < length ()) && !found ; i++) {
      found = UNICODE_VALUE (charAtIndex (i COMMA_HERE)) == UNICODE_VALUE (inCharacter) ;
    }
  }
  return found ;
}

//--------------------------------------------------------------------------------------------------

bool String::containsCharInRange (const utf32 inFirstCharacter,
                                  const utf32 inLastCharacter) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  bool found = false ;
  if (nullptr != mEmbeddedString) {
    for (int32_t i=0 ; (i < int32_t (mEmbeddedString->mLength)) && !found ; i++) {
      found =
        (UNICODE_VALUE (charAtIndex (i COMMA_HERE)) >= UNICODE_VALUE (inFirstCharacter))
      &&
        (UNICODE_VALUE (charAtIndex (i COMMA_HERE)) <= UNICODE_VALUE (inLastCharacter))
      ;
    }
  }
  return found ;
}

//--------------------------------------------------------------------------------------------------

int32_t String::length (void) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  return (mEmbeddedString == nullptr) ? 0 : (int32_t) mEmbeddedString->mLength ;
}

//--------------------------------------------------------------------------------------------------

const char * String::cString (void) const {
  const char * result = "" ;
  if (nullptr != mEmbeddedString) {
    macroValidSharedObject (mEmbeddedString, PrivateEmbeddedString) ;
    if (nullptr == mEmbeddedString->mUTF8CString) {
      uint32_t allocatedSize = mEmbeddedString->mLength + 1 + mEmbeddedString->mLength / 2 ;
      macroMyNewPODArray (mEmbeddedString->mUTF8CString, char, allocatedSize) ;
      uint32_t idx = 0 ;
      for (int32_t i=0 ; i<int32_t (mEmbeddedString->mLength) ; i++) {
        char buffer [5] ;
        const int32_t n = UTF8StringFromUTF32Character (UNICODE_VALUE (charAtIndex (i COMMA_HERE)), buffer) ;
        for (int32_t j=0 ; j<n ; j++) {
          if (allocatedSize == idx) {
            allocatedSize += allocatedSize / 2 ;
            macroMyReallocPODArray (mEmbeddedString->mUTF8CString, char, allocatedSize) ;
          }
          mEmbeddedString->mUTF8CString [idx] = buffer [j] ;
          idx += 1 ;
        }
      }
    //--- Append zero terminator
      if (allocatedSize == idx) {
        allocatedSize += 1 ;
        macroMyReallocPODArray (mEmbeddedString->mUTF8CString, char, allocatedSize) ;
      }
      mEmbeddedString->mUTF8CString [idx] = '\0' ;
    }
    result = mEmbeddedString->mUTF8CString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const utf32 * String::utf32String (UNUSED_LOCATION_ARGS) const {
  const utf32 * result = kEmptyUTF32String ;
  if (nullptr != mEmbeddedString) {
    result = mEmbeddedString->mUTF32String ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Methods that change string
#endif

//--------------------------------------------------------------------------------------------------

void String::insulateEmbeddedString (const uint32_t inNewCapacity) const {
  if (mEmbeddedString == nullptr) {
    macroMyNew (mEmbeddedString, PrivateEmbeddedString (inNewCapacity COMMA_HERE)) ;
  }else{
    macroValidSharedObject (mEmbeddedString, PrivateEmbeddedString) ;
    if (mEmbeddedString->isUniquelyReferenced ()) {
      macroMyDeletePODArray (mEmbeddedString->mUTF8CString) ;
      mEmbeddedString->reallocEmbeddedString (inNewCapacity) ;
    }else{
      PrivateEmbeddedString * p = nullptr ;
      macroMyNew (p, PrivateEmbeddedString (mEmbeddedString, inNewCapacity COMMA_HERE)) ;
      macroAssignSharedObject (mEmbeddedString, p) ;
      macroDetachSharedObject (p) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
  }
  macroAssert (capacity () >= inNewCapacity, "capacity (%lld) < inNewCapacity (%lld)", capacity (), inNewCapacity) ;
  macroValidSharedObject (mEmbeddedString, PrivateEmbeddedString) ;
  macroUniqueSharedObject (mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------

void String::removeAllKeepingCapacity (void) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (mEmbeddedString != nullptr) {
    if (mEmbeddedString->isUniquelyReferenced ()) {
      macroMyDeletePODArray (mEmbeddedString->mUTF8CString) ;
      mEmbeddedString->mLength = 0 ;
      mEmbeddedString->mUTF32String [0] = TO_UNICODE ('\0') ;
    }else{
      macroDetachSharedObject (mEmbeddedString) ;
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------
//   S E T    C A P A C I T Y
//--------------------------------------------------------------------------------------------------

void String::setCapacity (const uint32_t inNewCapacity) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (mEmbeddedString != nullptr) {
    macroMyDeletePODArray (mEmbeddedString->mUTF8CString) ;
    if (mEmbeddedString->mCapacity < inNewCapacity) {
      if (mEmbeddedString->isUniquelyReferenced ()) {
        mEmbeddedString->reallocEmbeddedString (inNewCapacity) ;
      }else{
        PrivateEmbeddedString * p = nullptr ;
        macroMyNew (p, PrivateEmbeddedString (mEmbeddedString, inNewCapacity COMMA_HERE)) ;
        macroAssignSharedObject (mEmbeddedString, p)  ;
        macroDetachSharedObject (p) ;
      }
      #ifndef DO_NOT_GENERATE_CHECKINGS
        checkString (HERE) ;
      #endif
    }
  }else if (inNewCapacity > 0) {
    macroMyNew (mEmbeddedString, PrivateEmbeddedString (inNewCapacity COMMA_HERE)) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
  }
  macroAssert (capacity () >= inNewCapacity, "capacity (%lld) < inNewCapacity (%lld)", capacity (), inNewCapacity) ;
  if (mEmbeddedString != nullptr) {
    macroValidSharedObject (mEmbeddedString, PrivateEmbeddedString) ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//--------------------------------------------------------------------------------------------------

void String::handleAppendCharacter (const utf32 inCharacter) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  insulateEmbeddedString (uint32_t (length () + 2)) ;
  macroAssert (mEmbeddedString->isUniquelyReferenced (), "mEmbeddedString->isUniquelyReferenced () is false", 0, 0) ;
  mEmbeddedString->mUTF32String [mEmbeddedString->mLength] = inCharacter ;
  mEmbeddedString->mLength += 1 ;
  mEmbeddedString->mUTF32String [mEmbeddedString->mLength] = TO_UNICODE ('\0') ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  macroUniqueSharedObject (mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------

void String::handleAppendUTF8Array (const char * inCharArray,
                                           const int32_t inArrayCount) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (inArrayCount != 0) {
    insulateEmbeddedString (uint32_t (length () + inArrayCount + 1)) ;
    int32_t newLength = int32_t (mEmbeddedString->mLength) ;
    int32_t idx = 0 ;
    bool ok = true ;
    while ((idx < inArrayCount) && ok) {
      if ((inCharArray [idx] & 0x80) == 0) { // ASCII
        mEmbeddedString->mUTF32String [newLength] = TO_UNICODE (uint32_t (inCharArray [idx])) ;
        idx += 1 ;
        newLength += 1 ;
      }else{
        const utf32 unicodeChar = utf32CharacterForPointer ((const uint8_t *) inCharArray, idx, inArrayCount, ok) ;
        mEmbeddedString->mUTF32String [newLength] = unicodeChar ;
        newLength += 1 ;
      }
      mEmbeddedString->mLength = uint32_t (newLength) ;
      mEmbeddedString->mUTF32String [newLength] = TO_UNICODE ('\0') ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
    macroAssert (capacity () > uint32_t (newLength), "capacity (%lld) <= kNewLength (%lld)", capacity (), newLength) ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   setCharacterAtIndex
//--------------------------------------------------------------------------------------------------

void String::setCharAtIndex (const utf32 inCharacter,
                              const int32_t inIndex
                              COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  macroValidPointerThere (mEmbeddedString) ;
  macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  macroAssertThere (uint32_t (inIndex) < mEmbeddedString->mLength,
                    "inIndex (%ld) >= string length (%ld)",
                    inIndex, mEmbeddedString->mLength) ;
  if (!mEmbeddedString->isUniquelyReferenced ()) {
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
  }
  macroUniqueSharedObject (mEmbeddedString) ;
  mEmbeddedString->mUTF32String [inIndex] = inCharacter ;
}

//--------------------------------------------------------------------------------------------------
//   S U P P R E S S    C H A R A C T E R S
//--------------------------------------------------------------------------------------------------

void String::removeCountFromIndex (const int32_t inCount,
                                   const int32_t inIndex
                                   COMMA_LOCATION_ARGS) {
  if (inCount > 0) {
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
    macroValidPointerThere (mEmbeddedString) ;
    macroUniqueSharedObject (mEmbeddedString) ;
    macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    macroAssertThere (uint32_t (inIndex) <= mEmbeddedString->mLength,
                      "inIndex (%ld) > mLength (%ld)",
                      inIndex, mEmbeddedString->mLength) ;
    macroAssertThere (uint32_t (inCount) <= mEmbeddedString->mLength,
                      "inCount (%ld) > string length (%ld)",
                      inCount, mEmbeddedString->mLength) ;
    const int32_t bytesToMove = 1 + int32_t (mEmbeddedString->mLength) - inCount - inIndex ;
    if ((inIndex >= 0) && (bytesToMove > 0)) {
      for (int32_t i=0 ; i<bytesToMove ; i++) {
        mEmbeddedString->mUTF32String [inIndex + i] = mEmbeddedString->mUTF32String [inIndex + i + inCount] ;
      }
      macroAssert (mEmbeddedString->mLength >= uint32_t (inCount),
                   "mLength (%lld) < inCount (%lld)",
                   mEmbeddedString->mLength, inCount) ;
      mEmbeddedString->mLength -= uint32_t (inCount) ;
      #ifndef DO_NOT_GENERATE_CHECKINGS
        checkString (HERE) ;
      #endif
    }
  }
}

//--------------------------------------------------------------------------------------------------
//   I N S E R T    C H A R A C T E R
//--------------------------------------------------------------------------------------------------

void String::insertCharacterAtIndex (const utf32 inChar,
                                     const int32_t inIndex
                                     COMMA_LOCATION_ARGS) {
  const uint32_t kNewLength = uint32_t (length ()) + 2 ; // inserted character, zero termination
  insulateEmbeddedString (kNewLength) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (THERE) ;
  #endif
  macroValidPointerThere (mEmbeddedString) ;
  macroUniqueSharedObjectThere (mEmbeddedString) ;
  macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  macroAssertThere (uint32_t (inIndex) <= mEmbeddedString->mLength,
                    "inIndex (%ld) > mLength (%ld)",
                    inIndex, mEmbeddedString->mLength) ;
  const int32_t elementsToMove = 1 + int32_t (mEmbeddedString->mLength) - inIndex ;
  for (int32_t i=elementsToMove ; i>0 ; i--) {
    mEmbeddedString->mUTF32String [inIndex + i] = mEmbeddedString->mUTF32String [inIndex + i - 1] ;
  }
  mEmbeddedString->mUTF32String [inIndex] = inChar ;
  mEmbeddedString->mLength += 1 ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (THERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

//void String::appendChar (const utf32 inChar COMMA_LOCATION_ARGS) {
//  #ifndef DO_NOT_GENERATE_CHECKINGS
//    checkString (THERE) ;
//  #endif
//  const uint32_t kNewLength = uint32_t (length ()) + 2 ; // inserted character, zero termination
//  insulateEmbeddedString (kNewLength) ;
//  macroValidPointerThere (mEmbeddedString) ;
//  macroUniqueSharedObjectThere (mEmbeddedString) ;
//  mEmbeddedString->mUTF32String [mEmbeddedString->mLength] = inChar ;
//  mEmbeddedString->mLength += 1 ;
//  mEmbeddedString->mUTF32String [mEmbeddedString->mLength] = TO_UNICODE (0) ;
//  #ifndef DO_NOT_GENERATE_CHECKINGS
//    checkString (THERE) ;
//  #endif
//}

//--------------------------------------------------------------------------------------------------
//   G E T    L I N E S    A R R A Y
//--------------------------------------------------------------------------------------------------

void String::linesArray (TC_UniqueArray <String> & outStringArray) const {
  const int32_t currentStringLength = length () ;
  if (currentStringLength > 0) {
    int32_t index = outStringArray.count () ;
    outStringArray.appendObject (String ()) ;
    typedef enum {kAppendToCurrentLine, kGotCarriageReturn, kGotLineFeed} enumState ;
    enumState state = kAppendToCurrentLine ;
    for (int32_t i=0 ; i<currentStringLength ; i++) {
      const utf32 c = charAtIndex (i COMMA_HERE) ;
      switch (state) {
      case kAppendToCurrentLine :
        switch (UNICODE_VALUE (c)) {
        case 0x000B : // VT: Vertical Tab
        case 0x000C : // FF: Form Feed
        case 0x0085 : // NEL: Next Line
        case 0x2028 : // LS: Line Separator
        case 0x2029 : // PS: Paragraph Separator
          outStringArray.appendObject (String ()) ;
          index ++ ;
          break ;
        case '\n' : // LF
          state = kGotLineFeed ;
          break ;
        case '\r' : // CR
          state = kGotCarriageReturn ;
          break ;
        default: // Other character
          outStringArray (index COMMA_HERE).appendChar (c) ;
        }
        break ;
      case kGotCarriageReturn :
        switch (UNICODE_VALUE (c)) {
        case '\n' : // LF
          state = kGotLineFeed ;
          break ;
        case '\r' : // CR
          outStringArray.appendObject (String ()) ;
          index ++ ;
          break ;
        default: // Other character
          outStringArray.appendObject (String ()) ;
          index ++ ;
          outStringArray (index COMMA_HERE).appendChar (c) ;
          state = kAppendToCurrentLine ;
        }
        break ;
      case kGotLineFeed :
        switch (UNICODE_VALUE (c)) {
        case '\n' : // LF
          outStringArray.appendObject (String ()) ;
          index ++ ;
          break ;
        case '\r' : // CR
          outStringArray.appendObject (String ()) ;
          index ++ ;
          state = kGotCarriageReturn ;
          break ;
        default: // Other character
          outStringArray.appendObject (String ()) ;
          index ++ ;
          outStringArray (index COMMA_HERE).appendChar (c) ;
          state = kAppendToCurrentLine ;
        }
        break ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void String::reverseStringInPlace (void) {
  if (nullptr != mEmbeddedString) {
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
    macroUniqueSharedObject (mEmbeddedString) ;
    const int32_t receiver_length = length () ;
    for (int32_t i=0 ; i<(receiver_length/2) ; i++) {
      const utf32 temp = charAtIndex (i COMMA_HERE) ;
      setCharAtIndex (charAtIndex (receiver_length - i - 1 COMMA_HERE), i COMMA_HERE) ;
      setCharAtIndex (temp, receiver_length - i - 1 COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//   +    O P E R A T O R
//--------------------------------------------------------------------------------------------------

String String::operator + (const String & inOperand) const {
  String s = *this ;
  s.appendString (inOperand) ;
  return s ;
}

//--------------------------------------------------------------------------------------------------

bool String::parseUTF8 (const U8Data & inDataString,
                        const int32_t inOffset,
                        String & outString) {
  bool ok = true ;
  int32_t idx = inOffset ;
  bool foundCR = false ;
  while ((idx < inDataString.count ()) && ok) {
    const uint8_t c = inDataString (idx COMMA_HERE) ;
    if (c == 0x00) { // NUL
      idx = inDataString.count () ; // For exiting loop
    }else if (c == 0x0A) { // LF
      if (! foundCR) {
        outString.appendChar (TO_UNICODE ('\n')) ;
      }
      foundCR = false ;
      idx ++ ;
    }else if (c == 0x0D) { // CR
      outString.appendChar (TO_UNICODE ('\n')) ;
      foundCR = true ;
      idx ++ ;
    }else if ((c & 0x80) == 0) { // ASCII Character
      outString.appendChar (TO_UNICODE (c)) ;
      foundCR = false ;
      idx ++ ;
    }else{
      const utf32 uc = utf32CharacterForPointer (inDataString.unsafeDataPointer (), idx, inDataString.count (), ok) ;
      switch (UNICODE_VALUE (uc)) {
      case 0x000B : // VT: Vertical Tab
      case 0x000C : // FF: Form Feed
      case 0x0085 : // NEL: Next Line
      case 0x2028 : // LS: Line Separator
      case 0x2029 : // PS: Paragraph Separator
        outString.appendChar ('\n') ;
        break ;
      default :
        outString.appendChar (uc) ;
        foundCR = false ;
        break ;
      }
    }
  }
  if (foundCR) {
    outString.appendChar (TO_UNICODE ('\n')) ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C_TextReadException
#endif

//--------------------------------------------------------------------------------------------------
//  Exception generated by readTextFile method when a read error occurs
//--------------------------------------------------------------------------------------------------

C_TextReadException::C_TextReadException (const char * inFileName) {
  snprintf (mErrorMessage, kTextReadExceptionStringMaxLength, "cannot open file '%s' for reading", inFileName) ;
}

//--------------------------------------------------------------------------------------------------

const char * C_TextReadException::what (void) const throw () {
  return mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------
