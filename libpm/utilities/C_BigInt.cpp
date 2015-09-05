//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Handing signed integer of arbitrary size                                                                           *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2015, ..., 2015 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*
// http://stackoverflow.com/questions/565150/bigint-in-c

#include "utilities/C_BigInt.h"
#include "utilities/C_SharedObject.h"
#include "utilities/MF_MemoryControl.h"
#include "utilities/MF_Assert.h"

//---------------------------------------------------------------------------------------------------------------------*

class acPtr_bigUInt : public C_SharedObject {
  public : acPtr_bigUInt (const uint64_t inValue COMMA_LOCATION_ARGS) ;
  public : acPtr_bigUInt (const acPtr_bigUInt & inValue COMMA_LOCATION_ARGS) ;

  private : TC_UniqueArray <uint32_t> mValueArray ;
  
  public : void increment (void) ;
  public : void decrement (void) ;
  
  public : bool isZero (void) const {
    macroUniqueSharedObject (this) ;
    bool result = true ;
    for (int32_t i=0 ; result && (i<mValueArray.count ()) ; i++) {
      result = mValueArray (i COMMA_HERE) == 0 ;
    }
    return result ;
  }
  
  public : C_String hexString (void) const {
    macroUniqueSharedObject (this) ;
    C_String s ;
    for (int32_t i=mValueArray.count () - 1 ; i>=0 ; i--) {
      s.appendUnsignedHex8 (mValueArray (i COMMA_HERE)) ;
    }
    while ((s.length() > 0) && (UNICODE_VALUE (s (0 COMMA_HERE)) == '0')) {
      s.suppress (0, 1 COMMA_HERE) ;
    }
    return s ;
  }

  public : void normalize (void) {
    macroUniqueSharedObject (this) ;
    while ((mValueArray.count () > 1) && (mValueArray.lastObject(HERE) == 0)) {
      mValueArray.removeLastObject (HERE) ;
    }
  }

  public : void shiftLeft (const uint32_t inValue) ;

  public : bool isEqualTo (const acPtr_bigUInt & inOperand) const {
    macroUniqueSharedObject (this) ;
    bool equal = mValueArray.count () == inOperand.mValueArray.count () ;
    for (int32_t i=0 ; equal && (i < mValueArray.count ()) ; i++) {
      equal = mValueArray (i COMMA_HERE) == inOperand.mValueArray (i COMMA_HERE) ;
    }
    return equal ;
  }
  
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Default constructor, destructor, copy
#endif

//---------------------------------------------------------------------------------------------------------------------*
//  Default Constructor: init to zero
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (void) :
mObjectPtr (NULL),
mSign (zero) {
}

//---------------------------------------------------------------------------------------------------------------------*
//  Destructor
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::~C_BigInt (void) {
  macroDetachSharedObject (mObjectPtr) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Handle copy
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const C_BigInt & inOperand) :
mObjectPtr (NULL) {
  macroAssignSharedObject (mObjectPtr, inOperand.mObjectPtr) ;
  mSign = inOperand.mSign ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt & C_BigInt::operator = (const C_BigInt & inOperand) {
  macroAssignSharedObject (mObjectPtr, inOperand.mObjectPtr) ;
  mSign = inOperand.mSign ;
  return *this ;
}

//---------------------------------------------------------------------------------------------------------------------*
// Default Constructor: init from uint64_t
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Default Constructor: init from uint64_t
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const uint64_t inValue) :
mObjectPtr (NULL),
mSign (zero) {
  if (inValue > 0) {
    macroMyNew (mObjectPtr, acPtr_bigUInt (inValue COMMA_HERE)) ;
    mSign = positive ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_bigUInt::acPtr_bigUInt (const uint64_t inValue COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mValueArray () {
  MF_Assert (inValue > 0, "inValue == 0", 0, 0) ;
  mValueArray.addObject ((uint32_t) (inValue & UINT32_MAX)) ;
  const uint64_t hi = inValue >> 32 ;
  if (hi > 0) {
    mValueArray.addObject ((uint32_t) hi) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
// Insulate
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insulate
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::insulate (LOCATION_ARGS) {
  if ((mObjectPtr != NULL) && (mObjectPtr->retainCount () > 1)) {
    acPtr_bigUInt * ptr = NULL ;
    macroMyNew (ptr, acPtr_bigUInt (*mObjectPtr COMMA_THERE)) ;
    macroAssignSharedObject (mObjectPtr, ptr) ;
    macroDetachSharedObject (ptr) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_bigUInt::acPtr_bigUInt (const acPtr_bigUInt & inOperand COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mValueArray () {
  inOperand.mValueArray.copyTo (mValueArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*
// increment
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Increment, decrement
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator ++ (void) {
  switch (mSign) {
  case zero :
    macroMyNew (mObjectPtr, acPtr_bigUInt (1 COMMA_HERE)) ;
    mSign = positive ;
    break;
  case positive:
    insulate (HERE) ;
    mObjectPtr->increment () ;
    break;
  case negative:
    insulate (HERE) ;
    mObjectPtr->decrement () ;
    if (mObjectPtr->isZero ()) {
      macroDetachSharedObject (mObjectPtr) ;
      mSign = zero ;
    }
    break;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator -- (void) {
  switch (mSign) {
  case zero :
    macroMyNew (mObjectPtr, acPtr_bigUInt (1 COMMA_HERE)) ;
    mSign = negative ;
    break;
  case positive:
    insulate (HERE) ;
    mObjectPtr->decrement () ;
    if (mObjectPtr->isZero ()) {
      macroDetachSharedObject (mObjectPtr) ;
      mSign = zero ;
    }
    break;
  case negative:
    insulate (HERE) ;
    mObjectPtr->increment () ;
    break;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::increment (void) {
  macroUniqueSharedObject (this) ;
  bool add = true ;
  int32_t idx = 0 ;
  while (add && (idx < mValueArray.count ())) {
    mValueArray (idx COMMA_HERE) ++ ;
    add = mValueArray (idx COMMA_HERE) == 0 ;
    idx ++ ;
  }
  if (add) {
    mValueArray.addObject (1) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::decrement (void) {
  macroUniqueSharedObject (this) ;
  bool subtract = true ;
  int32_t idx = 0 ;
  while (subtract && (idx < mValueArray.count ())) {
    subtract = mValueArray (idx COMMA_HERE) == 0 ;
    mValueArray (idx COMMA_HERE) -- ;
    idx ++ ;
  }
  MF_Assert (!subtract, "subtract is true", 0, 0) ;
  normalize () ;
}

//---------------------------------------------------------------------------------------------------------------------*
// String
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Convert to string
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_String C_BigInt::hexString (void) const {
  C_String result ;
  switch (mSign) {
  case zero :
    result << "0" ;
    break;
  case positive:
    result = mObjectPtr->hexString () ;
    break;
  case negative:
    result << "-" << mObjectPtr->hexString () ;
    break;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

/*uint32_t C_BigInt::uint32AtIndex (const int32_t inIndex) const {
  uint32_t result = 0 ;
  if (inIndex < mUnsignedValue.count ()) {
    result = mUnsignedValue (inIndex COMMA_HERE) ;
  }
  return result ;
} */

//---------------------------------------------------------------------------------------------------------------------*

/*bool C_BigInt::valueAtBitIndex (const uint32_t inIndex) const {
  bool result = false ;
  if (inIndex < 64) {
    result = ((mLow >> inIndex) & 1) != 0 ;
  }else if (inIndex < 128) {
    result = ((mHigh >> (inIndex - 64)) & 1) != 0 ;
  }
  return result ;
}*/

//---------------------------------------------------------------------------------------------------------------------*

/*void C_BigInt::setValueAtBitIndex (const bool inValue, const uint32_t inIndex) {
  if (inIndex < 64) {
    const uint64_t mask = ((uint64_t) 1) << inIndex ;
    if (inValue) {
      mLow |= mask ;
    }else{
      mLow &= ~mask ;
    }
  }else if (inIndex < 128) {
    const uint64_t mask = ((uint64_t) 1) << (inIndex - 64) ;
    if (inValue) {
      mHigh |= mask ;
    }else{
      mHigh &= ~mask ;
    }
  }
}*/

//---------------------------------------------------------------------------------------------------------------------*

/*C_BigInt & C_BigInt::operator -- (void) {
  if (0 == mLow) {
    mHigh -- ;
  }
  mLow -- ;
  return *this ;
}*/

//---------------------------------------------------------------------------------------------------------------------*

/*void C_BigInt::operator += (const C_BigInt & inValue) {
  const uint64_t previousLow = mLow ;
  mLow += inValue.mLow ;
  const uint64_t carry = mLow < previousLow ;
  mHigh += inValue.mHigh + carry ;
} */

//---------------------------------------------------------------------------------------------------------------------*

/*C_BigInt C_BigInt::operator + (const C_BigInt & inValue) const {
  C_BigInt result ;
  const int32_t leftCount = uint32WordCount () ;
  const int32_t rightCount = inValue.uint32WordCount () ;
  const int32_t count = (leftCount > rightCount) ? leftCount : rightCount ;
  uint32_t carry = 0 ;
  for (int32_t i=0 ; i<count ; i++) {
    const uint64_t left = uint32AtIndex (i) ;
    const uint64_t right = inValue.uint32AtIndex (i) ;
    const uint64_t r = left + right + carry ;
    result.mUnsignedValue.addObject((uint32_t) (r & UINT32_MAX)) ;
    carry = (uint32_t) (r >> 32) ;
  }
  if (carry > 0) {
    result.mUnsignedValue.addObject (carry) ;
  }
  return result ;
} */

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shift left
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator << (const uint32_t inValue) const {
  C_BigInt result = *this ;
  if ((inValue > 0) && (mSign != zero)) {
    result.insulate (HERE) ;
    mObjectPtr->shiftLeft (inValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::shiftLeft (const uint32_t inValue) {
  macroUniqueSharedObject (this) ;
  const int32_t wordsToInsert = (int32_t) (inValue / 32) ;
  const uint32_t bitsToShift = inValue % 32 ;
  uint64_t carry = 0 ;
  for (int32_t i=0 ; i<mValueArray.count () ; i++) {
    uint64_t v = mValueArray (i COMMA_HERE) ;
    carry |= v << bitsToShift ;
    mValueArray (i COMMA_HERE) = (uint32_t) (carry & UINT32_MAX) ;
    carry >>= 32 ;
  }
  if (carry > 0) {
    mValueArray.addObject ((uint32_t) carry) ;
  }
  mValueArray.insertObjectsAtIndex (wordsToInsert, 0, 0 COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Equality
#endif

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator == (const C_BigInt & inOperand) const {
  bool equal = mSign == inOperand.mSign ;
  if (equal && (mSign != zero)) {
    equal = mObjectPtr->isEqualTo (* inOperand.mObjectPtr) ;
  }
  return equal ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator != (const C_BigInt & inValue) const {
  return ! (*this == inValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Example
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::example (void) {
  co << "***** C_BigInt example ******\n" ;
  C_BigInt bigint ;
  co << "Zero : " << bigint.hexString() << "\n" ;
  ++ bigint ;
  co << "increment : " << bigint.hexString() << "\n" ;
  -- bigint ;
  co << "Decrement : " << bigint.hexString() << "\n" ;
  -- bigint ;
  co << "Decrement : " << bigint.hexString() << "\n" ;
  C_BigInt bigint2 (0xFFFFFFFF) ;
  co << "0xFFFFFFFF : " << bigint2.hexString() << "\n" ;
  ++ bigint2 ;
  co << "increment : " << bigint2.hexString() << "\n" ;
  -- bigint2 ;
  co << "Decrement : " << bigint2.hexString() << "\n" ;
  -- bigint2 ;
  co << "Decrement : " << bigint2.hexString() << "\n" ;
  bigint2 = bigint2 << 40 ;
  co << "<< 40 : " << bigint2.hexString() << "\n" ;
  -- bigint2 ;
  co << "Decrement : " << bigint2.hexString() << "\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*
