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

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cEmbeddedString
#endif

//--------------------------------------------------------------------------------------------------

static const utf32 kEmptyUTF32String [1] = {TO_UNICODE (0)} ;

//--------------------------------------------------------------------------------------------------

class cEmbeddedString : public SharedObject {
  public: uint32_t mCapacity ; // Maximun allowed length of the following C string
  public: uint32_t mLength ; // Current length of the following C string
  public: char * mEncodedCString ;
  public: utf32 * mUTF32String ; // Zero terminated string

  public: cEmbeddedString (const uint32_t inCapacity COMMA_LOCATION_ARGS) ;

  public: cEmbeddedString (const cEmbeddedString * inEmbeddedString,
                           const uint32_t inCapacity
                           COMMA_LOCATION_ARGS) ;

  public: virtual ~cEmbeddedString (void) ;

//--- No copy
  private: cEmbeddedString (const cEmbeddedString &) = delete ;
  private: cEmbeddedString & operator = (const cEmbeddedString &) = delete ;

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

cEmbeddedString::cEmbeddedString (const uint32_t inCapacity COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mCapacity (0),
mLength (0),
mEncodedCString (nullptr),
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

cEmbeddedString::cEmbeddedString (const cEmbeddedString * inEmbeddedString,
                                  const uint32_t inCapacity
                                  COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mCapacity (0),
mLength (0),
mEncodedCString (nullptr),
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

cEmbeddedString::~cEmbeddedString (void) {
  macroMyDeletePODArray (mEncodedCString) ;
  macroMyDeletePODArray (mUTF32String) ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cEmbeddedString::checkEmbeddedString (LOCATION_ARGS) const {
    if (mCapacity == 0) {
      macroAssertThere (UNICODE_VALUE (mUTF32String [0]) == '\0', "mUTF32String [0] (%lld) != '\\0'",
                        int32_t (UNICODE_VALUE (mUTF32String [0])), 0) ;
      macroAssertThere (mLength == 0, "mLength (%ld) != 0", mLength, 0) ;
    }else{
      macroAssertThere (mLength <= mCapacity, "mLength (%ld) > mCapacity (%ld)", mLength, mCapacity) ;
      macroAssertThere (UNICODE_VALUE (mUTF32String [mLength]) == '\0',
                        "mUTF32String [mLength (%ld)] == %ld != '\\0'",
                        mLength, int32_t (UNICODE_VALUE (mUTF32String [mLength]))) ;
      if (mEncodedCString != nullptr) {
        macroValidPointer (mEncodedCString) ;
        for (uint32_t i=0 ; i<=mLength ; i++) {
          macroAssertThere (UNICODE_VALUE (mUTF32String [i]) == (uint32_t) mEncodedCString [i],
                            "mUTF32String [i] (%ld) != mEncodedCString [i] (%ld)",
                            UNICODE_VALUE (mUTF32String [i]), (uint32_t) mEncodedCString [i]) ;
        }
      }
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

void cEmbeddedString::reallocEmbeddedString (const uint32_t inCapacity) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkEmbeddedString (HERE) ;
  #endif
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
//
//   C O N S T R U C T O R S
//
//--------------------------------------------------------------------------------------------------

String::String (void) :
mEmbeddedString (nullptr) {
}

//--------------------------------------------------------------------------------------------------

String::String (const char * inCstring) :
mEmbeddedString (nullptr) {
  if (inCstring != nullptr) {
    genericCharArrayOutput (inCstring, (int32_t) (strlen (inCstring) & UINT32_MAX)) ;
  }
}

//--------------------------------------------------------------------------------------------------

String::String (const utf32 * inUTF32String) :
mEmbeddedString (nullptr) {
  if (inUTF32String != nullptr) {
    genericUnicodeArrayOutput (inUTF32String, utf32_strlen (inUTF32String)) ;
  }
}

//--------------------------------------------------------------------------------------------------

String::String (const String & inSource) : // Copy constructor
AC_OutputStream (inSource),
mEmbeddedString (nullptr) {
  macroAssignSharedObject (mEmbeddedString, inSource.mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------

String String::newWithStdIn (void) {
  const size_t BUFFER_SIZE = 1000 ;
  char buffer [BUFFER_SIZE] ;
  const char * s = fgets (buffer, BUFFER_SIZE, stdin) ;
  return (s == nullptr) ? "" : s ;
}

//--------------------------------------------------------------------------------------------------
//
//   D E S T R U C T O R
//
//--------------------------------------------------------------------------------------------------

String::~String (void) {
  macroDetachSharedObject (mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------

String String::spaces (const int32_t inSpaceCount) {
  String result ;
  for (int32_t i=0 ; i<inSpaceCount ; i++) {
    result.addString (" ") ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t String::capacity (void) const {
  return (mEmbeddedString == nullptr) ? 0 : mEmbeddedString->mCapacity ;
}

//--------------------------------------------------------------------------------------------------
//
//   A S S I G N M E N T    O P E R A T O R S
//
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
  mEmbeddedString = nullptr ;
}

//--------------------------------------------------------------------------------------------------

uint32_t String::hash (void) const {
  uint32_t h = 0 ;
  if (mEmbeddedString != nullptr) {
    for (uint32_t i=0 ; i<mEmbeddedString->mLength ; i++) {
      h <<= 3 ;
      h ^= UNICODE_VALUE (mEmbeddedString->mUTF32String [i]) ;
    }
  }
  return h ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void String::checkString (LOCATION_ARGS) const {
    if (mEmbeddedString != nullptr) {
      macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
      mEmbeddedString->checkEmbeddedString (THERE) ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//   G E T    M E T H O D S
//
//--------------------------------------------------------------------------------------------------

utf32 String::operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (THERE) ;
  #endif
  macroValidSharedObjectThere (mEmbeddedString, cEmbeddedString) ;
  macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  macroAssertThere (uint32_t (inIndex) < mEmbeddedString->mLength,
                    "inIndex (%ld) >= string length (%ld)",
                    inIndex, mEmbeddedString->mLength) ;
  return mEmbeddedString->mUTF32String [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

utf32 String::readCharOrNul (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  return ((mEmbeddedString == nullptr) || ((uint32_t) inIndex >= mEmbeddedString->mLength))
    ? TO_UNICODE ('\0')
    : mEmbeddedString->mUTF32String [inIndex] ;
}

//--------------------------------------------------------------------------------------------------
//
//   lastCharacter
//
//--------------------------------------------------------------------------------------------------

utf32 String::lastCharacter (LOCATION_ARGS) const {
  const uint32_t stringLength = mEmbeddedString->mLength ;
  macroAssertThere (stringLength > 0, "length == 0", 0, 0) ;
  return (stringLength == 0) ? TO_UNICODE ('\0') : mEmbeddedString->mUTF32String [stringLength - 1] ;
}

//--------------------------------------------------------------------------------------------------

bool String::containsCharacter (const utf32 inCharacter) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  bool found = false ;
  if (nullptr != mEmbeddedString) {
    for (uint32_t i=0 ; (i<mEmbeddedString->mLength) && ! found ; i++) {
      found = UNICODE_VALUE (mEmbeddedString->mUTF32String [i]) == UNICODE_VALUE (inCharacter) ;
    }
  }
  return found ;
}

//--------------------------------------------------------------------------------------------------

bool String::containsCharacterInRange (const utf32 inFirstCharacter,
                                       const utf32 inLastCharacter) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  bool found = false ;
  if (nullptr != mEmbeddedString) {
    for (uint32_t i=0 ; (i<mEmbeddedString->mLength) && ! found ; i++) {
      found =
        (UNICODE_VALUE (mEmbeddedString->mUTF32String [i]) >= UNICODE_VALUE (inFirstCharacter))
      &&
        (UNICODE_VALUE (mEmbeddedString->mUTF32String [i]) <= UNICODE_VALUE (inLastCharacter))
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

const char * String::cString (UNUSED_LOCATION_ARGS) const {
  const char * result = "" ;
  if (nullptr != mEmbeddedString) {
    macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
    if (nullptr == mEmbeddedString->mEncodedCString) {
      uint32_t allocatedSize = mEmbeddedString->mLength + 1 ;
      macroMyNewPODArray (mEmbeddedString->mEncodedCString, char, allocatedSize) ;
      uint32_t idx = 0 ;
      for (uint32_t i=0 ; i<mEmbeddedString->mLength ; i++) {
        char buffer [5] ;
        const int32_t n = UTF8StringFromUTF32Character (mEmbeddedString->mUTF32String [i], buffer) ;
        for (int32_t j=0 ; j<n ; j++) {
          if (allocatedSize == idx) {
            allocatedSize *= 2 ;
            macroMyReallocPODArray (mEmbeddedString->mEncodedCString, char, allocatedSize) ;
          }
          mEmbeddedString->mEncodedCString [idx] = buffer [j] ;
          idx ++ ;
        }
      }
    //---
      if (allocatedSize == idx) {
        allocatedSize *= 2 ;
        macroMyReallocPODArray (mEmbeddedString->mEncodedCString, char, allocatedSize) ;
      }
      mEmbeddedString->mEncodedCString [idx] = '\0' ;
    }
    result = mEmbeddedString->mEncodedCString ;
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
    macroMyNew (mEmbeddedString, cEmbeddedString (inNewCapacity COMMA_HERE)) ;
  }else{
    macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
    if (mEmbeddedString->isUniquelyReferenced ()) {
      macroMyDeletePODArray (mEmbeddedString->mEncodedCString) ;
      mEmbeddedString->reallocEmbeddedString (inNewCapacity) ;
    }else{
      cEmbeddedString * p = nullptr ;
      macroMyNew (p, cEmbeddedString (mEmbeddedString, inNewCapacity COMMA_HERE)) ;
      macroAssignSharedObject (mEmbeddedString, p) ;
      macroDetachSharedObject (p) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
  }
  macroAssert (capacity () >= inNewCapacity, "capacity (%lld) < inNewCapacity (%lld)", capacity (), inNewCapacity) ;
  macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
  macroUniqueSharedObject (mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------

void String::removeAllKeepingCapacity (void) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (mEmbeddedString != nullptr) {
    if (mEmbeddedString->isUniquelyReferenced ()) {
      macroMyDeletePODArray (mEmbeddedString->mEncodedCString) ;
      mEmbeddedString->mLength = 0 ;
      mEmbeddedString->mUTF32String [0] = TO_UNICODE ('\0') ;
    }else{
      macroDetachSharedObject (mEmbeddedString) ;
      mEmbeddedString = nullptr ;
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void String::insulate (void) const {
  insulateEmbeddedString (uint32_t (length ())) ;
}

//--------------------------------------------------------------------------------------------------
//
//   S E T   F R O M    S T R I N G
//
//--------------------------------------------------------------------------------------------------

void String::setFromString (const String & inString) {
  if (this != & inString) {
    macroAssignSharedObject (mEmbeddedString, inString.mEmbeddedString) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//   S E T    C A P A C I T Y
//
//--------------------------------------------------------------------------------------------------

void String::setCapacity (const uint32_t inNewCapacity) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (mEmbeddedString != nullptr) {
    macroMyDeletePODArray (mEmbeddedString->mEncodedCString) ;
    if ((mEmbeddedString->mLength < inNewCapacity) && (mEmbeddedString->mCapacity < inNewCapacity)) {
      if (mEmbeddedString->isUniquelyReferenced ()) {
        macroMyDeletePODArray (mEmbeddedString->mEncodedCString) ;
        mEmbeddedString->reallocEmbeddedString (inNewCapacity) ;
      }else{
        cEmbeddedString * p = nullptr ;
        macroMyNew (p, cEmbeddedString (mEmbeddedString, inNewCapacity COMMA_HERE)) ;
        macroAssignSharedObject (mEmbeddedString, p)  ;
        macroDetachSharedObject (p) ;
      }
      #ifndef DO_NOT_GENERATE_CHECKINGS
        checkString (HERE) ;
      #endif
    }
  }else if (inNewCapacity > 0) {
    macroMyNew (mEmbeddedString, cEmbeddedString (inNewCapacity COMMA_HERE)) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
  }
  macroAssert (capacity () >= inNewCapacity, "capacity (%lld) < inNewCapacity (%lld)", capacity (), inNewCapacity) ;
  if (mEmbeddedString != nullptr) {
    macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//--------------------------------------------------------------------------------------------------

void String::performActualUnicodeArrayOutput (const utf32 * inUTF32CharArray,
                                                const int32_t inArrayCount) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (inArrayCount > 0) {
    const int32_t kNewLength = length () + inArrayCount ;
    insulateEmbeddedString ((uint32_t) (kNewLength + 1)) ;
    macroAssert (mEmbeddedString->isUniquelyReferenced (), "mEmbeddedString->isUniquelyReferenced () is false", 0, 0) ;
    for (int32_t i=0 ; i<inArrayCount ; i++) {
      mEmbeddedString->mUTF32String [mEmbeddedString->mLength + (uint32_t) i] = inUTF32CharArray [i] ;
    }
    mEmbeddedString->mLength = uint32_t (kNewLength) ;
    mEmbeddedString->mUTF32String [kNewLength] = TO_UNICODE ('\0') ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
    macroAssert (capacity () > uint32_t (kNewLength), "capacity (%lld) <= kNewLength (%lld)", capacity (), kNewLength) ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//--------------------------------------------------------------------------------------------------

void String::performActualCharArrayOutput (const char * inCharArray,
                                             const int32_t inArrayCount) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (inArrayCount != 0) {
    insulateEmbeddedString ((uint32_t) (length () + inArrayCount + 1)) ;
    int32_t newLength = (int32_t) mEmbeddedString->mLength ;
    int32_t idx = 0 ;
    bool ok = true ;
    while ((idx < inArrayCount) && ok) {
      if ((inCharArray [idx] & 0x80) == 0) { // ASCII
        mEmbeddedString->mUTF32String [newLength] = TO_UNICODE ((uint32_t) inCharArray [idx]) ;
        idx ++ ;
        newLength ++ ;
      }else{
        const utf32 unicodeChar = utf32CharacterForPointer ((const uint8_t *) inCharArray, idx, inArrayCount, ok) ;
        mEmbeddedString->mUTF32String [newLength] = unicodeChar ;
        newLength ++ ;
      }
      mEmbeddedString->mLength = uint32_t (newLength) ;
      mEmbeddedString->mUTF32String [newLength] = TO_UNICODE ('\0') ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
    macroAssert (capacity () > (uint32_t) newLength, "capacity (%lld) <= kNewLength (%lld)", capacity (), newLength) ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//   setCharacterAtIndex
//
//--------------------------------------------------------------------------------------------------


void String::setUnicodeCharacterAtIndex (const utf32 inCharacter,
                                           const int32_t inIndex
                                           COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  macroValidPointerThere (mEmbeddedString) ;
  macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  if (nullptr != mEmbeddedString) {
    macroAssertThere (uint32_t (inIndex) < mEmbeddedString->mLength,
                    "inIndex (%ld) >= string length (%ld)",
                    inIndex, mEmbeddedString->mLength) ;
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
    mEmbeddedString->mUTF32String [inIndex] = inCharacter ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//   S U P P R E S S    C H A R A C T E R S
//
//--------------------------------------------------------------------------------------------------

void String::suppress (const int32_t inLocation,
                       const int32_t inLength
                       COMMA_LOCATION_ARGS) {
  if (inLength > 0) {
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
    macroValidPointerThere (mEmbeddedString) ;
    macroAssertThere (inLocation >= 0, "inLocation (%ld) < 0", inLocation, 0) ;
    macroAssertThere (uint32_t (inLocation) <= mEmbeddedString->mLength,
                      "inLocation (%ld) > mLength (%ld)",
                      inLocation, mEmbeddedString->mLength) ;
    macroAssertThere (uint32_t (inLength) <= mEmbeddedString->mLength,
                      "inLength (%ld) > string length (%ld)",
                      inLength, mEmbeddedString->mLength) ;
    const int32_t bytesToMove = 1 + int32_t (mEmbeddedString->mLength) - inLength - inLocation ;
    if ((inLocation >= 0) && (bytesToMove > 0)) {
      for (int32_t i=0 ; i<bytesToMove ; i++) {
        mEmbeddedString->mUTF32String [inLocation + i] = mEmbeddedString->mUTF32String [inLocation + i + inLength] ;
      }
      macroAssert (mEmbeddedString->mLength >= uint32_t (inLength),
                   "mLength (%lld) < inLength (%lld)",
                   mEmbeddedString->mLength, inLength) ;
      mEmbeddedString->mLength -= uint32_t (inLength) ;
      #ifndef DO_NOT_GENERATE_CHECKINGS
        checkString (HERE) ;
      #endif
      macroUniqueSharedObject (mEmbeddedString) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//   I N S E R T    C H A R A C T E R
//
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
  macroUniqueSharedObjectThere (mEmbeddedString) ;
}

//--------------------------------------------------------------------------------------------------
//
//   G E T    L I N E S    A R R A Y
//
//--------------------------------------------------------------------------------------------------

void String::linesArray (TC_UniqueArray <String> & outStringArray) const {
  const int32_t currentStringLength = length () ;
  if (currentStringLength > 0) {
    int32_t index = outStringArray.count () ;
    outStringArray.appendObject (String ()) ;
    typedef enum {kAppendToCurrentLine, kGotCarriageReturn, kGotLineFeed} enumState ;
    enumState state = kAppendToCurrentLine ;
    for (int32_t i=0 ; i<currentStringLength ; i++) {
      const utf32 c = mEmbeddedString->mUTF32String [i] ;
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
          outStringArray (index COMMA_HERE).addUnicodeChar (c COMMA_HERE) ;
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
          outStringArray (index COMMA_HERE).addUnicodeChar (c COMMA_HERE) ;
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
          outStringArray (index COMMA_HERE).addUnicodeChar (c COMMA_HERE) ;
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
    const int32_t receiver_length = length () ;
    macroUniqueSharedObject (mEmbeddedString) ;
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
    for (int32_t i=0 ; i<(receiver_length/2) ; i++) {
      const utf32 temp = mEmbeddedString->mUTF32String [i] ;
      mEmbeddedString->mUTF32String [i] = mEmbeddedString->mUTF32String [receiver_length - i - 1] ;
      mEmbeddedString->mUTF32String [receiver_length - i - 1] = temp ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//   +    O P E R A T O R
//
//--------------------------------------------------------------------------------------------------

String String::operator + (const String & inOperand) const {
  String s = *this ;
  s.addString (inOperand) ;
  return s ;
}

//--------------------------------------------------------------------------------------------------

String String::operator + (const char * inOperand) const {
  String s = *this ;
  s.addString (inOperand) ;
  return s ;
}

//--------------------------------------------------------------------------------------------------
//
//   A S S I G N M E N T    O P E R A T O R S
//
//--------------------------------------------------------------------------------------------------

String & String::operator = (const char * inSource) {
  removeAllKeepingCapacity () ;
  if (inSource != nullptr) {
    genericCharArrayOutput (inSource, int32_t (strlen (inSource) & UINT32_MAX)) ;
  }
  return * this ;
}

//--------------------------------------------------------------------------------------------------
//
//   S E T   F R O M    S T R I N G
//
//--------------------------------------------------------------------------------------------------

void String::setFromCstring (const char * inCstring) {
  removeAllKeepingCapacity () ;
  addString (inCstring) ;
}

//--------------------------------------------------------------------------------------------------

bool String::parseUTF8 (const C_Data & inDataString,
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
        outString.addUnicodeChar (TO_UNICODE ('\n') COMMA_HERE) ;
      }
      foundCR = false ;
      idx ++ ;
    }else if (c == 0x0D) { // CR
      outString.addUnicodeChar (TO_UNICODE ('\n') COMMA_HERE) ;
      foundCR = true ;
      idx ++ ;
    }else if ((c & 0x80) == 0) { // ASCII Character
      outString.addUnicodeChar (TO_UNICODE (c) COMMA_HERE) ;
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
        outString.addUnicodeChar ('\n' COMMA_HERE) ;
        break ;
      default :
        outString.addUnicodeChar (uc COMMA_HERE) ;
        foundCR = false ;
        break ;
      }
    }
  }
  if (foundCR) {
    outString.addUnicodeChar (TO_UNICODE ('\n') COMMA_HERE) ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C_TextReadException
#endif

//--------------------------------------------------------------------------------------------------
//
//  Exception generated by readTextFile method when a read error occurs
//
//--------------------------------------------------------------------------------------------------

C_TextReadException::C_TextReadException (const char * inFileName) {
  snprintf (mErrorMessage, kTextReadExceptionStringMaxLength, "cannot open file '%s' for reading", inFileName) ;
}

//--------------------------------------------------------------------------------------------------

const char * C_TextReadException::what (void) const throw () {
  return mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------
