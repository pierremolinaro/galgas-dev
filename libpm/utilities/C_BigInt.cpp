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
// http://developer.classpath.org/doc/java/math/BigInteger-source.html
// http://stackoverflow.com/questions/17319643/what-is-the-fastest-algorithm-for-division-of-crazy-large-integers
// http://www.loria.fr/~zimmerma/talks/shortdiv.pdf
//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/C_BigInt.h"
#include "utilities/C_SharedObject.h"
#include "utilities/MF_MemoryControl.h"
#include "utilities/MF_Assert.h"

//---------------------------------------------------------------------------------------------------------------------*

class acPtr_bigUInt : public C_SharedObject {
  public : acPtr_bigUInt (LOCATION_ARGS) ;
  public : acPtr_bigUInt (const uint64_t inValue COMMA_LOCATION_ARGS) ;
  public : acPtr_bigUInt (const uint64_t inHighValue, const uint64_t inLowValue COMMA_LOCATION_ARGS) ;
  public : acPtr_bigUInt (const acPtr_bigUInt & inValue COMMA_LOCATION_ARGS) ;

  private : TC_UniqueArray <uint32_t> mValueArray ;
  
  public : void increment (void) ;
  public : void decrement (void) ;

  public : C_String hexString (void) const ;
  public : C_String decimalString (void) const ;
  
  public : bool isZero (void) const ;
  public : bool isOne (void) const ;

  public : void normalize (void) ;

  public : void shiftLeftInPlace (const uint32_t inValue) ;
  public : void logicalShiftRightInPlace (const uint32_t inValue) ;
  public : void arithmeticShiftRightInPlace (const uint32_t inValue) ;

  public : bool operator == (const acPtr_bigUInt & inOperand) const ;
  public : bool operator != (const acPtr_bigUInt & inOperand) const ;
  public : bool operator >= (const acPtr_bigUInt & inOperand) const ;
  public : bool operator >  (const acPtr_bigUInt & inOperand) const ;
  public : bool operator <= (const acPtr_bigUInt & inOperand) const ;
  public : bool operator <  (const acPtr_bigUInt & inOperand) const ;
  public : int32_t unsignedCompare (const acPtr_bigUInt & inOperand) const ;
  
  public : void addInPlace (const uint32_t inOperand) ;

  public : void addInPlace (const acPtr_bigUInt & inOperand) ;

  public : void subtractInPlace (const acPtr_bigUInt & inOperand COMMA_LOCATION_ARGS) ; // Requires *this >= inOperand

  public : void multiplyInPlace (const uint32_t inOperand) ;
  public : void multiplyInPlace (const acPtr_bigUInt & inOperand) ;

  public : void divideInPlace (const uint32_t inDivisor, uint32_t & outRemainder) ;
  public : void divideInPlace (const acPtr_bigUInt & inDivisor, acPtr_bigUInt & outRemainder) ;

  public : uint32_t requiredBitCountForSignedRepresentation (void) const ;

  public : uint32_t absValue32AtIndex (const uint32_t inIndex) const ;

  public : C_String debugString (void) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : void check (LOCATION_ARGS) const ;
  #endif
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Default constructor, destructor, copy
#endif

//---------------------------------------------------------------------------------------------------------------------*
//  Default Constructor: init to zero
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (void) :
mSign (zero),
mObjectPtr (NULL) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
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
mSign (inOperand.mSign),
mObjectPtr (NULL) {
  macroAssignSharedObject (mObjectPtr, inOperand.mObjectPtr) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt & C_BigInt::operator = (const C_BigInt & inOperand) {
  macroAssignSharedObject (mObjectPtr, inOperand.mObjectPtr) ;
  mSign = inOperand.mSign ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
  return *this ;
}

//---------------------------------------------------------------------------------------------------------------------*
// Normalize and tests
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Normalize and tests
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::normalize (void) {
  macroValidPointer (mObjectPtr) ;
  mObjectPtr->normalize () ;
  if (mObjectPtr->isZero ()) {
    macroDetachSharedObject (mObjectPtr) ;
    mSign = zero ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::isZero (void) const {
  macroUniqueSharedObject (this) ;
  bool result = true ;
  for (int32_t i=0 ; result && (i<mValueArray.count ()) ; i++) {
    result = mValueArray (i COMMA_HERE) == 0 ;
  }
  return result ;
}
  
//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::normalize (void) {
  macroUniqueSharedObject (this) ;
  while ((mValueArray.count () > 1) && (mValueArray.lastObject(HERE) == 0)) {
    mValueArray.removeLastObject (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isOne (void) const {
  bool result = mSign == positive ;
  if (result) {
    result = mObjectPtr->isOne () ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isMinusOne (void) const {
  bool result = mSign == negative ;
  if (result) {
    result = mObjectPtr->isOne () ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::isOne (void) const {
  bool result = mValueArray.count () == 1 ;
  if (result) {
    result = mValueArray (0 COMMA_HERE) == 1 ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
// Constructors
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const uint64_t inValue, const bool inNegate) :
mSign (zero),
mObjectPtr (NULL) {
  if (inValue > 0) {
    macroMyNew (mObjectPtr, acPtr_bigUInt (inValue COMMA_HERE)) ;
    mSign = inNegate ? negative : positive ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const uint64_t inHighValue, const uint64_t inLowValue, const bool inNegate) :
mSign (zero),
mObjectPtr (NULL) {
  if ((inHighValue > 0) && (inLowValue > 0)) {
    macroMyNew (mObjectPtr, acPtr_bigUInt (inHighValue, inLowValue COMMA_HERE)) ;
    normalize () ;
    mSign = inNegate ? negative : positive ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_bigUInt::acPtr_bigUInt (const uint64_t inHighValue, const uint64_t inLowValue COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mValueArray () {
  MF_Assert ((inLowValue | inHighValue) > 0, "inValue == 0", 0, 0) ;
  mValueArray.addObject ((uint32_t) (inLowValue & UINT32_MAX)) ;
  mValueArray.addObject ((uint32_t) (inLowValue >> 32)) ;
  mValueArray.addObject ((uint32_t) (inHighValue & UINT32_MAX)) ;
  mValueArray.addObject ((uint32_t) (inHighValue >> 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const int64_t inValue) :
mSign (zero),
mObjectPtr (NULL) {
  if (inValue > 0) {
    macroMyNew (mObjectPtr, acPtr_bigUInt ((uint64_t) inValue COMMA_HERE)) ;
    mSign = positive ;
  }else if (inValue < 0) {
    macroMyNew (mObjectPtr, acPtr_bigUInt ((uint64_t) (- inValue) COMMA_HERE)) ;
    mSign = negative ;
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

acPtr_bigUInt::acPtr_bigUInt (LOCATION_ARGS) :
C_SharedObject (THERE),
mValueArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::setToZero (void) {
  macroDetachSharedObject (mObjectPtr) ;
  mSign = zero ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*
// Ckeck
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Check
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void C_BigInt::checkBigInt (LOCATION_ARGS) const {
    switch (mSign) {
    case zero :
      macroVoidPointerThere (mObjectPtr) ;
      break ;
    case positive :
    case negative :
      macroValidPointerThere (mObjectPtr) ;
      mObjectPtr->check (THERE) ;
    break ;
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void acPtr_bigUInt::check (LOCATION_ARGS) const {
    MF_AssertThere (mValueArray.count () > 0, "mValueArray.count () == 0", 0, 0) ;
    MF_AssertThere (mValueArray.lastObject (THERE) != 0, "mValueArray.lastObject (THERE) == 0", 0, 0) ;
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_String acPtr_bigUInt::debugString (void) const {
  C_String s ;
  s << "[" << cStringWithSigned (mValueArray.count ()) << "]" ;
  for (int32_t i=mValueArray.count () - 1 ; i>=0 ; i--) {
    s << " " << cStringWithUnsigned (mValueArray (i COMMA_HERE)) ;
  }
  return s ;
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

C_BigInt & C_BigInt::operator ++ (void) {
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
    normalize () ;
    break;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
  return *this ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt & C_BigInt::operator -- (void) {
  switch (mSign) {
  case zero :
    macroMyNew (mObjectPtr, acPtr_bigUInt (1 COMMA_HERE)) ;
    mSign = negative ;
    break;
  case positive:
    insulate (HERE) ;
    mObjectPtr->decrement () ;
    normalize () ;
    break;
  case negative:
    insulate (HERE) ;
    mObjectPtr->increment () ;
    break;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
  return *this ;
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

C_String acPtr_bigUInt::hexString (void) const {
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

//---------------------------------------------------------------------------------------------------------------------*

C_String C_BigInt::decimalString (void) const {
  C_String result ;
  switch (mSign) {
  case zero :
    result << "0" ;
    break;
  case positive:
  case negative:
    C_BigInt temporary = *this ;
    C_String tempString ;
    while (!temporary.isZero ()) {
      uint32_t remainder ;
      temporary.divideInPlace (10, remainder COMMA_HERE) ;
      tempString.appendUnicodeCharacter (TO_UNICODE (remainder + '0') COMMA_HERE) ;
    }
    tempString.reverseStringInPlace () ;
    if (mSign == negative) {
      result << "-" << tempString ;
    }else{
      result = tempString ;
    }
    break;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Add, subtract uint32_t
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator += (const uint32_t inOperand) {
  switch (mSign) {
  case zero :  // 0 + inOperand --> inOperand
    *this = C_BigInt (inOperand) ;
    break ;
  case positive :
    insulate (HERE) ;
    mObjectPtr->addInPlace (inOperand) ;
    break ;
  case negative :
    *this += C_BigInt (inOperand) ;
    break ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator + (const uint32_t inOperand) const {
  C_BigInt resultat = *this ;
  resultat += inOperand ;
  return resultat ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator -= (const uint32_t inOperand) {
  switch (mSign) {
  case zero :  // 0 - inOperand --> - inOperand
    *this = - C_BigInt (inOperand) ;
    break ;
  case positive :
    *this -= C_BigInt (inOperand) ;
    break ;
  case negative :
    insulate (HERE) ;
    mObjectPtr->addInPlace (inOperand) ;
    break ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator - (const uint32_t inOperand) const {
  C_BigInt resultat = *this ;
  resultat -= inOperand ;
  return resultat ;
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::addInPlace (const uint32_t inOperand) {
  macroUniqueSharedObject (this) ;
  uint64_t carry = inOperand ;
  for (int32_t i=0 ; i<mValueArray.count () ; i++) {
    const uint64_t a = mValueArray (i COMMA_HERE) ;
    carry += a ;
    mValueArray (i COMMA_HERE) = ((uint32_t) (carry & UINT32_MAX)) ;
    carry >>= 32 ;
  }
  if (carry > 0) {
    mValueArray.addObject ((uint32_t) carry) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

/* void acPtr_bigUInt::subtractInPlace (const uint32_t inOperand) {
  macroUniqueSharedObject (this) ;
  const uint64_t operand = inOperand ;
  uint64_t carry = (uint64_t) - ((int64_t) operand) ;
  for (int32_t i=0 ; i<mValueArray.count () ; i++) {
    const uint64_t a = mValueArray (i COMMA_HERE) ;
    carry += a ;
    mValueArray (i COMMA_HERE) = ((uint32_t) (carry & UINT32_MAX)) ;
    carry >>= 32 ;
  }
  MF_Assert (carry == 0, "carry (0x%x) should be 0", (int64_t) carry, 0) ;
} */

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Add, subtract C_BigInt
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator += (const C_BigInt inOperand) {
  switch (mSign) {
  case zero :  // 0 + inOperand --> inOperand
    *this = inOperand ;
    break ;
  case positive :
    switch (inOperand.mSign) {
    case zero : // Add zero
      break ;
    case positive : // Add positive, positive
      insulate (HERE) ;
      mObjectPtr->addInPlace (* inOperand.mObjectPtr) ;
      break ;
    case negative :  // Add positive, negative
      if ((*mObjectPtr) >= (* inOperand.mObjectPtr)) { // Result is >= 0
        insulate (HERE) ;
        mObjectPtr->subtractInPlace (* inOperand.mObjectPtr COMMA_HERE) ;
        normalize () ;
      }else{  // Result is < 0 ; compute - (- Operand - *this)
        C_BigInt result = inOperand ;
        result.negateInPlace () ;
        result -= *this ;
        *this = result ;
        negateInPlace () ;
      }
      break ;
    }
    break ;
  case negative :
    switch (inOperand.mSign) {
    case zero :  // Add zero
      break ;
    case positive : // Add negative, positive
      if ((*mObjectPtr) >= (* inOperand.mObjectPtr)) { // Result is <= 0
        insulate (HERE) ;
        mObjectPtr->subtractInPlace (* inOperand.mObjectPtr COMMA_HERE) ;
        normalize () ;
      }else{  // Result is > 0 ; compute "- (- Operand - *this)"
        C_BigInt result = inOperand ;
        result.negateInPlace () ;
        result -= *this ;
        *this = result ;
        negateInPlace () ;
      }
      break ;
    case negative : // Add negative, negative
      insulate (HERE) ;
      mObjectPtr->addInPlace (* inOperand.mObjectPtr) ;
      break ;
    }
    break ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator -= (const C_BigInt inOperand) {
  switch (mSign) {
  case zero :  // 0 - inOperand --> - inOperand
    *this = inOperand ;
    negateInPlace () ;
    break ;
  case positive :
    switch (inOperand.mSign) {
    case zero : // substract zero
      break ;
    case positive : // positive - positive
      if ((*mObjectPtr) >= (* inOperand.mObjectPtr)) { // Result is >= 0
        insulate (HERE) ;
        mObjectPtr->subtractInPlace (* inOperand.mObjectPtr COMMA_HERE) ;
        normalize () ;
      }else{  // Result is < 0 ; compute "- (Operand - *this)"
        C_BigInt result = inOperand ;
        result -= *this ;
        *this = result ;
        negateInPlace () ;
      }
      break ;
    case negative :  // substract positive, negative --> result is >0
      insulate (HERE) ;
      mObjectPtr->addInPlace (* inOperand.mObjectPtr) ;
      break ;
    }
    break ;
  case negative :
    switch (inOperand.mSign) {
    case zero :  // subtract zero
      break ;
    case positive :   // substract negative, positive --> result is <0
      insulate (HERE) ;
      mObjectPtr->addInPlace (* inOperand.mObjectPtr) ;
      break ;
    case negative : // negative - negative
      if ((*mObjectPtr) >= (* inOperand.mObjectPtr)) { // Result is <= 0
        insulate (HERE) ;
        mObjectPtr->subtractInPlace (* inOperand.mObjectPtr COMMA_HERE) ;
        normalize () ;
      }else{  // Result is > 0 ; compute - (Operand - *this)
        C_BigInt result = inOperand ;
        result -= *this ;
        *this = result ;
        negateInPlace () ;
      }
      break ;
    }
    break ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::addInPlace (const acPtr_bigUInt & inOperand) {
  macroUniqueSharedObject (this) ;
  if (mValueArray.count () < inOperand.mValueArray.count ()) {
    mValueArray.addObjects (inOperand.mValueArray.count () - mValueArray.count (), 0) ;
  }
  uint64_t carry = 0 ;
  for (int32_t i=0 ; i<mValueArray.count () ; i++) {
    const uint64_t a = mValueArray (i COMMA_HERE) ;
    if (i < inOperand.mValueArray.count ()) {
      const uint64_t b = inOperand.mValueArray (i COMMA_HERE) ;
      carry += a + b ;
    }else{
      carry += a ;
    }
    mValueArray (i COMMA_HERE) = ((uint32_t) (carry & UINT32_MAX)) ;
    carry >>= 32 ;
  }
  if (carry > 0) {
    mValueArray.addObject ((uint32_t) carry) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::subtractInPlace (const acPtr_bigUInt & inOperand COMMA_LOCATION_ARGS) {
  macroUniqueSharedObject (this) ;
/*    co << "Left  [" << cStringWithSigned (mValueArray.count ()) << "]" ;
    for (int32_t i=0 ; i<mValueArray.count () ; i++) {
      co << " " << cStringWithUnsigned (mValueArray (i COMMA_HERE)) ;
    }
    co << "\n" ;
    co << "Right [" << cStringWithSigned (inOperand.mValueArray.count ()) << "]" ;
    for (int32_t i=0 ; i<inOperand.mValueArray.count () ; i++) {
      co << " " << cStringWithUnsigned (inOperand.mValueArray (i COMMA_HERE)) ;
    }
    co << "\n" ; */
  uint32_t carry = 0 ; // 0 or 1
  for (int32_t i=0 ; i<mValueArray.count () ; i++) {
    const uint32_t a = mValueArray (i COMMA_HERE) ;
    uint32_t b = 0 ;
    if (i < inOperand.mValueArray.count ()) {
      b = inOperand.mValueArray (i COMMA_HERE) ;
    }
    const uint32_t result = a - b - carry ;
    carry = (b > a) || ((b == a) && (carry > 0)) ;
    mValueArray (i COMMA_HERE) = (result) ;
  }
  MF_AssertThere (carry == 0, "carry on subtract (0x%x) should be 0", (int64_t) carry, 0) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator + (const C_BigInt & inOperand) const {
  C_BigInt resultat = *this ;
  resultat += inOperand ;
  return resultat ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator - (const C_BigInt & inOperand) const {
  C_BigInt resultat = *this ;
  resultat -= inOperand ;
  return resultat ;
}

//---------------------------------------------------------------------------------------------------------------------*
//    Negate
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Negate
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator - (void) const {
  C_BigInt result = *this ;
  result.negateInPlace () ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::negateInPlace (void) {
  switch (mSign) {
  case zero :
    break ;
  case positive :
    mSign = negative ;
    break ;
  case negative :
    mSign = positive ;
    break ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Multiplication with uint32_t
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator *= (const uint32_t inMultiplicand) {
  if (inMultiplicand == 0) {
    macroDetachSharedObject (mObjectPtr) ;
    mSign = zero ;
  }else if ((inMultiplicand != 1) && (mSign != zero)) {
    insulate (HERE) ;
    mObjectPtr->multiplyInPlace (inMultiplicand) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::multiplyInPlace (const uint32_t inMultiplicand) {
  macroUniqueSharedObject (this) ;
  uint64_t carry = 0 ;
  for (int32_t i=0 ; i<mValueArray.count () ; i++) {
    const uint64_t a = mValueArray (i COMMA_HERE) ;
    carry += a * inMultiplicand ;
    mValueArray (i COMMA_HERE) = ((uint32_t) (carry & UINT32_MAX)) ;
    carry >>= 32 ;
  }
  if (carry > 0) {
    mValueArray.addObject ((uint32_t) carry) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator * (const uint32_t inMultiplicand) const {
  C_BigInt result = *this ;
  result *= inMultiplicand ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Multiplication with C_BigInt
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator *= (const C_BigInt inMultiplicand) {
  if ((mSign == zero) || (inMultiplicand.mSign == zero)) {
    setToZero () ;
  }else{
    insulate (HERE) ;
    mObjectPtr->multiplyInPlace (* inMultiplicand.mObjectPtr) ;
    mSign = (mSign == inMultiplicand.mSign) ? positive : negative ;
    normalize () ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::multiplyInPlace (const acPtr_bigUInt & inMultiplicand) {
  macroUniqueSharedObject (this) ;
  TC_UniqueArray <uint32_t> result ;
  const int32_t resultSize = mValueArray.count () + inMultiplicand.mValueArray.count () ;
  result.addObjects (resultSize, 0) ;
  for (int32_t i=0 ; i<mValueArray.count () ; i++) {
    const uint64_t a = mValueArray (i COMMA_HERE) ;
    for (int32_t j=0 ; j<inMultiplicand.mValueArray.count () ; j++) {
      const uint64_t b = inMultiplicand.mValueArray (j COMMA_HERE) ;
      int32_t idx = i + j ;
      const uint64_t product = a * b + result (idx COMMA_HERE) ; // No carry here
      result (idx COMMA_HERE) = ((uint32_t) (product & UINT32_MAX)) ;
      uint64_t carry = product >> 32 ;
      while (carry > 0) {
        idx ++ ;
        carry += result (idx COMMA_HERE) ; // No carry here
        result (idx COMMA_HERE) = ((uint32_t) (carry & UINT32_MAX)) ;
        carry >>= 32 ;
      }
    }
  }
  swap (mValueArray, result) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator * (const C_BigInt & inMultiplicand) const {
  C_BigInt result = *this ;
  result *= inMultiplicand ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Division
#endif


//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::divideBy (const uint32_t inDivisor,
                         C_BigInt & outQuotient,
                         uint32_t & outRemainder
                         COMMA_LOCATION_ARGS) const {
  outQuotient = *this ;
  outQuotient.divideInPlace (inDivisor, outRemainder COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::divideInPlace (const uint32_t inDivisor, uint32_t & outRemainder COMMA_LOCATION_ARGS) {
  MF_AssertThere (inDivisor > 0, "inDivisor == 0", 0, 0) ;
  outRemainder = 0 ;
  if (mSign != zero) {
    insulate (HERE) ;
    mObjectPtr->divideInPlace (inDivisor, outRemainder) ;
    normalize () ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::divideInPlace (const uint32_t inDivisor, uint32_t & outRemainder) {
  macroUniqueSharedObject (this) ;
  outRemainder = 0 ;
  uint64_t carry = 0 ;
  for (int32_t i= mValueArray.count () - 1 ; i>= 0 ; i--) {
    carry <<= 32 ;
    carry += mValueArray (i COMMA_HERE) ;
    mValueArray (i COMMA_HERE) = (uint32_t) (carry / inDivisor) ;
    carry %= inDivisor ;
  }
  outRemainder = (uint32_t) (carry) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::divideBy (const C_BigInt inDivisor,
                         C_BigInt & outQuotient,
                         C_BigInt & outRemainder
                         COMMA_LOCATION_ARGS) const {
  outQuotient = *this ;
  outQuotient.divideInPlace (inDivisor, outRemainder COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::divideInPlace (const C_BigInt inDivisor, C_BigInt & outRemainder COMMA_LOCATION_ARGS) {
  MF_AssertThere (!inDivisor.isZero (), "inDivisor == 0", 0, 0) ;
  outRemainder.setToZero () ;
  if (mSign != zero) {
    insulate (HERE) ;
    acPtr_bigUInt * remainderPtr = NULL ;
    macroMyNew (remainderPtr, acPtr_bigUInt (HERE)) ;
    mObjectPtr->divideInPlace (* inDivisor.mObjectPtr, * remainderPtr) ;
    normalize () ;
    outRemainder.mObjectPtr = remainderPtr ;
    outRemainder.mSign = positive ;
    outRemainder.normalize () ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
    outRemainder.checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::divideInPlace (const acPtr_bigUInt & inDivisor, acPtr_bigUInt & outRemainder) {
  macroUniqueSharedObject (this) ;
  swap (outRemainder.mValueArray, mValueArray) ; // current object is the quotient
  const uint64_t divisor = inDivisor.mValueArray.lastObject (HERE) ;
  co << "******************************\n" ;
  co << "Dividende " << outRemainder.debugString () << "\n" ;
  while (outRemainder >= inDivisor) {
  //--- Estimate quotient
    const uint32_t poidsFortReste = outRemainder.mValueArray.lastObject (HERE) ;
    uint64_t dividende = outRemainder.mValueArray.lastObject (HERE) ;
    const bool special = (dividende < divisor) ;
    const int32_t startIndex = outRemainder.mValueArray.count () - inDivisor.mValueArray.count () - special ;
    if (special) {
      dividende <<= 32 ;
      dividende |= outRemainder.mValueArray (outRemainder.mValueArray.count () - 2 COMMA_HERE) ;
    }
    uint64_t quotient = dividende / divisor ; // quotient is estimated; it may be too large
    co << "------ Estimated quotient " << cStringWithUnsigned (quotient) << ", special " << cStringWithUnsigned (special) << "\n" ;
    MF_Assert (quotient <= UINT32_MAX, "quotient > UINT32_MAX", 0, 0) ;
    co << "Divisor   " << inDivisor.debugString () << ", startIndex " << cStringWithSigned (startIndex) << "\n" ;
  //--- Remove divisor * quotient from remainder : this underflows, if quotient is too large
    uint64_t multiplicationCarry = 0 ;
    uint32_t subtractCarry = 0 ; // 0 or 1
    for (int32_t i=0 ; i<inDivisor.mValueArray.count () ; i++) {
      uint64_t d = inDivisor.mValueArray (i COMMA_HERE) ;
      d *= quotient ;
      d += multiplicationCarry ;
      const uint32_t b = (uint32_t) (d & UINT32_MAX) ;
      multiplicationCarry = d >> 32 ;
      const uint32_t a = outRemainder.mValueArray (i + startIndex COMMA_HERE) ;
      const uint32_t result = a - b - subtractCarry ;
      subtractCarry = (b > a) || ((b == a) && (subtractCarry > 0)) ;
      outRemainder.mValueArray (i + startIndex COMMA_HERE) = result ;
    }
    co << "Remainder " << outRemainder.debugString () << "\n" ;
    co << "multiplicationCarry " << cStringWithUnsigned (multiplicationCarry) << "\n" ;
  //  MF_Assert ((multiplicationCarry > 0) == special, "(multiplicationCarry > 0) != special", 0, 0) ;
    co << "subtractCarry " << cStringWithUnsigned (subtractCarry) << "\n" ;
    if ((multiplicationCarry > 0) || (subtractCarry > 0)) {
      const uint32_t b = (uint32_t) (multiplicationCarry) ;
      const uint32_t a = outRemainder.mValueArray.lastObject (HERE) ;
      const uint32_t result = a - b - subtractCarry ;
      subtractCarry = (b > a) || ((b == a) && (subtractCarry > 0)) ;
      outRemainder.mValueArray.lastObject (HERE) = result ;
    }
    co << "Remainder " << outRemainder.debugString () << "\n" ;
    co << "subtractCarry " << cStringWithUnsigned (subtractCarry) << "\n" ;
  //--- subtractCarry > 0 means quotient is too large : adjust by adding divisor, decrement quotient
    if (subtractCarry > 0) {
      quotient -- ;
      uint64_t additionCarry = 0 ;
      for (int32_t i=0 ; i<inDivisor.mValueArray.count () ; i++) {
        const uint64_t d = inDivisor.mValueArray (i COMMA_HERE) ;
        const uint64_t a = outRemainder.mValueArray (i + startIndex COMMA_HERE) ;
        additionCarry += d + a ;
        outRemainder.mValueArray (i + startIndex COMMA_HERE) = (uint32_t) (additionCarry & UINT32_MAX) ;
        additionCarry >>= 32 ;
      }
      co << "additionCarry " << cStringWithUnsigned (additionCarry) << "\n" ;
      outRemainder.mValueArray.lastObject (HERE) += (uint32_t) (additionCarry + 1) ;
      co << "Remainder " << outRemainder.debugString () << "\n" ;
    }
  //---
    MF_Assert (poidsFortReste > outRemainder.mValueArray.lastObject (HERE), "poidsFortReste <= outRemainder.lastObject ()", 0, 0) ;
    if (outRemainder.mValueArray.lastObject (HERE) == 0) {
      outRemainder.mValueArray.removeLastObject (HERE) ;
      co << "Remainder " << outRemainder.debugString () << "\n" ;
    }
    mValueArray.insertObjectAtIndex ((uint32_t) quotient, 0 COMMA_HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shift left
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator <<= (const uint32_t inValue) {
  if ((inValue > 0) && (mSign != zero)) {
    insulate (HERE) ;
    mObjectPtr->shiftLeftInPlace (inValue) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator << (const uint32_t inValue) const {
  C_BigInt result = *this ;
  result <<= inValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::shiftLeftInPlace (const uint32_t inValue) {
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
  #pragma mark Shift right
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator >>= (const uint32_t inValue) {
  if (inValue > 0) {
    switch (mSign) {
    case zero :
      break ;
    case positive :
      insulate (HERE) ;
      mObjectPtr->logicalShiftRightInPlace (inValue) ;
      normalize () ;
      break ;
    case negative:
      insulate (HERE) ;
      mObjectPtr->arithmeticShiftRightInPlace (inValue) ;
      normalize () ;
      break ;
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator >> (const uint32_t inValue) const {
  C_BigInt result = *this ;
  result >>= inValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::arithmeticShiftRightInPlace (const uint32_t inValue) {
  macroUniqueSharedObject (this) ;
  const int32_t wordsToDelete = (int32_t) (inValue / 32) ;
  if (wordsToDelete >= mValueArray.count ()) { // Result is 1
    mValueArray.removeLastObjects (mValueArray.count () - 1 COMMA_HERE) ;
    mValueArray (0 COMMA_HERE) = 1 ;
  }else{
  //--- Add (2 << inValue) - 1 : first, full words
    uint64_t carry = 0 ;
    for (int32_t i=0 ; i<wordsToDelete ; i++) {
      const uint64_t v = mValueArray (i COMMA_HERE) ;
      carry += v + UINT32_MAX ;
      mValueArray (i COMMA_HERE) = (uint32_t) (carry & UINT32_MAX) ;
      carry >>= 32 ;
    }
    for (int32_t i=wordsToDelete ; (carry > 0) && (i < mValueArray.count ()) ; i++) {
      const uint64_t v = mValueArray (i COMMA_HERE) ;
      carry += v ;
      mValueArray (i COMMA_HERE) = (uint32_t) (carry & UINT32_MAX) ;
      carry >>= 32 ;
    }
    if (carry > 0) {
      mValueArray.addObject ((uint32_t) (carry)) ;
    }
  //--- Add (2 << inValue) - 1 : then, remaining bits
    const uint32_t bitsToShift = inValue % 32 ;
    if (bitsToShift > 0) {
      uint64_t carry = (1 << bitsToShift) - 1 ;
      for (int32_t i=wordsToDelete ; (carry > 0) && (i < mValueArray.count ()) ; i++) {
        const uint64_t v = mValueArray (i COMMA_HERE) ;
        carry += v ;
        mValueArray (i COMMA_HERE) = (uint32_t) (carry & UINT32_MAX) ;
        carry >>= 32 ;
      }
      if (carry > 0) {
        mValueArray.addObject ((uint32_t) (carry)) ;
      }
    }
  //--- Perform shift
    logicalShiftRightInPlace (inValue) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void acPtr_bigUInt::logicalShiftRightInPlace (const uint32_t inValue) {
  macroUniqueSharedObject (this) ;
  const int32_t wordsToDelete = (int32_t) (inValue / 32) ;
  if (wordsToDelete >= mValueArray.count ()) { // Result is 0
    mValueArray.removeLastObjects (mValueArray.count () - 1 COMMA_HERE) ;
    mValueArray (0 COMMA_HERE) = 0 ;
  }else{
  //--- Suppress 'wordsToDelete' first entries
    mValueArray.removeObjectsAtIndex (wordsToDelete, 0 COMMA_HERE) ;
  //--- Shift remaing entries
    const uint32_t bitsToShift = inValue % 32 ;
    if (bitsToShift > 0) {
      const uint32_t mask = (1 << bitsToShift) - 1 ;
      uint64_t carry = 0 ;
      for (int32_t i=mValueArray.count () - 1 ; i>= 0 ; i--) {
        uint64_t v = mValueArray (i COMMA_HERE) ;
        carry &= mask ;
        carry <<= 32 ;
        carry |= v ;
        mValueArray (i COMMA_HERE) = (uint32_t) (carry >> bitsToShift) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Compare
#endif

//---------------------------------------------------------------------------------------------------------------------*

int32_t C_BigInt::compare (const C_BigInt & inValue) const {
  int32_t result = 0 ; // Equal
  switch (mSign) {
  case zero :
    switch (inValue.mSign) {
    case zero : // 0, 0 -> equal
      break ;
    case positive : // 0, positive --> lower
      result = -1 ;
      break ;
    case negative : // 0, negative --> greater
      result = 1 ;
      break ;
    }
    break ;
  case positive :
    switch (inValue.mSign) {
    case zero : // positive, 0 --> greater
      result = 1 ;
      break ;
    case positive : // positive, positive
      result = mObjectPtr->unsignedCompare (* inValue.mObjectPtr) ;
      break ;
    case negative : // positive, negative --> greater
      result = 1 ;
      break ;
    }
    break ;
  case negative :
    switch (inValue.mSign) {
    case zero : // negative, 0 --> lower
      result = -1 ;
      break ;
    case positive :  // negative, positive --> lower
      result = -1 ;
      break ;
    case negative :   // negative, negative
      result = - mObjectPtr->unsignedCompare (* inValue.mObjectPtr) ;
      break ;
    }
    break ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator == (const C_BigInt & inOperand) const {
  return compare (inOperand) == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator != (const C_BigInt & inOperand) const {
  return compare (inOperand) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator >= (const C_BigInt & inOperand) const {
  return compare (inOperand) >= 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator > (const C_BigInt & inOperand) const {
  return compare (inOperand) > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator <= (const C_BigInt & inOperand) const {
  return compare (inOperand) <= 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator < (const C_BigInt & inOperand) const {
  return compare (inOperand) < 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t acPtr_bigUInt::unsignedCompare (const acPtr_bigUInt & inOperand) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    check (HERE) ;
    inOperand.check (HERE) ;
  #endif
  int32_t result = mValueArray.count () - inOperand.mValueArray.count () ;
  for (int32_t i=mValueArray.count ()-1 ; (result == 0) && (i >= 0) ; i--) {
    if (mValueArray (i COMMA_HERE) > inOperand.mValueArray (i COMMA_HERE)) {
      result = 1 ;
    }else if (mValueArray (i COMMA_HERE) < inOperand.mValueArray (i COMMA_HERE)) {
      result = -1 ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator == (const acPtr_bigUInt & inOperand) const {
  return unsignedCompare (inOperand) == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator != (const acPtr_bigUInt & inOperand) const {
  return unsignedCompare (inOperand) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator >= (const acPtr_bigUInt & inOperand) const {
  return unsignedCompare (inOperand) >= 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator > (const acPtr_bigUInt & inOperand) const {
  return unsignedCompare (inOperand) > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator < (const acPtr_bigUInt & inOperand) const {
  return unsignedCompare (inOperand) < 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator <= (const acPtr_bigUInt & inOperand) const {
  return unsignedCompare (inOperand) <= 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Utilities
#endif

//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_BigInt::requiredBitCountForSignedRepresentation (void) const {
  uint32_t result = 1 ;
  if (mSign != zero) {
    result = mObjectPtr->requiredBitCountForSignedRepresentation () ;
    if (mSign == positive) {
      result ++ ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t acPtr_bigUInt::requiredBitCountForSignedRepresentation (void) const {
  uint32_t result = 32 * (uint32_t) (mValueArray.count () - 1) ;
  uint32_t v = mValueArray.lastObject (HERE) ;
  while (v > 0) {
    result ++ ;
    v >>= 1 ;
  }
  return result ;
}
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Testing Value
#endif

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isUInt32 (void) const {
  bool result = ! isNegative () ;
  if (result) {
    result = requiredBitCountForSignedRepresentation () <= 33 ; // yes, 32 + 1
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isUInt64 (void) const {
  bool result = ! isNegative () ;
  if (result) {
    result = requiredBitCountForSignedRepresentation () <= 65 ; // yes, 64 + 1
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isSInt32 (void) const {
  return requiredBitCountForSignedRepresentation () <= 32 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isSInt64 (void) const {
  return requiredBitCountForSignedRepresentation () <= 64 ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Value access
#endif

//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_BigInt::absValue32AtIndex (const uint32_t inIndex) const {
  uint32_t result = 0 ;
  if (mObjectPtr != NULL) {
    result = mObjectPtr->absValue32AtIndex (inIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint64_t C_BigInt::absValue64AtIndex (const uint32_t inIndex) const {
  uint64_t result = 0 ;
  if (mObjectPtr != NULL) {
    result = mObjectPtr->absValue32AtIndex (2 * inIndex + 1) ;
    result <<= 32 ;
    result |= mObjectPtr->absValue32AtIndex (2 * inIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t acPtr_bigUInt::absValue32AtIndex (const uint32_t inIndex) const {
  uint32_t result = 0 ;
  if (inIndex < (uint32_t) mValueArray.count ()) {
    result = mValueArray ((int32_t) inIndex COMMA_HERE) ;
  }
  return result ;
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
  C_BigInt bigint2 (UINT32_MAX) ;
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
//--- Random tests
  co << "Add and subtract random test 1\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    const int64_t a = (int32_t) rand () ;
    const int64_t b = (int32_t) rand () ;
    const C_BigInt bigA (a) ;
    const C_BigInt bigB (b) ;
    const C_BigInt bigAdd = bigA + bigB ;
    const C_BigInt bigAddVerif (a + b) ;
    if (bigAdd != bigAddVerif) {
      co << "Error for " << cStringWithSigned (a) << " + " << cStringWithSigned (b) << "\n" ;
    }
    const C_BigInt bigNeg = bigA - bigB ;
    const C_BigInt bigNegVerif (a - b) ;
    if (bigNeg != bigNegVerif) {
      co << "Error for " << cStringWithSigned (a) << " - " << cStringWithSigned (b) << "\n" ;
    }
    const C_BigInt bigNeg2 = (- bigA) + bigB ;
    const C_BigInt bigNeg2Verif (b - a) ;
    if (bigNeg2 != bigNeg2Verif) {
      co << "Error for -" << cStringWithSigned (a) << " + " << cStringWithSigned (b) << "\n" ;
    }
  }
  co << "Add and subtract random test 2\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    uint64_t lowA = (uint32_t) rand () ;
    lowA <<= 32 ;
    lowA |= (uint32_t) rand () ;
    uint64_t highA = (uint32_t) rand () ;
    highA <<= 32 ;
    highA |= (uint32_t) rand () ;
    const C_BigInt bigA (highA, lowA, ((uint32_t) rand () & 1) == 0) ;
    uint64_t lowB = (uint32_t) rand () ;
    lowB <<= 32 ;
    lowB |= (uint32_t) rand () ;
    uint64_t highB = (uint32_t) rand () ;
    highB <<= 32 ;
    highB |= (uint32_t) rand () ;
    const C_BigInt bigB (highB, lowB, ((uint32_t) rand () & 1) == 0) ;
    const C_BigInt bigC = bigB + bigA - bigB ;
    if (bigA != bigC) {
      co << "Error for " << bigA.decimalString () << " != " << bigC.decimalString () << "\n" ;
    }
    const C_BigInt bigD = bigA + bigB - bigC ;
    if (bigB != bigD) {
      co << "Error for " << bigB.decimalString () << " != " << bigD.decimalString () << "\n" ;
    }
  }
  co << "Multiply random test\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    const uint64_t a = (uint32_t) rand () ;
    const uint32_t b = (uint32_t) rand () ;
    const C_BigInt bigA (a, false) ;
    const C_BigInt bigMul = bigA * b ;
    const C_BigInt bigMulVerif (a * b, false) ;
    if (bigMul != bigMulVerif) {
      co << "Error for " << cStringWithUnsigned (a) << " + " << cStringWithUnsigned (b) << "\n" ;
    }
  }
  co << "Other random test\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    const int32_t a = (int32_t) rand () ;
    const uint32_t b = (uint32_t) rand () ;
    C_BigInt bigA (a) ;
    for (int32_t j=0 ; j<10 ; j++) {
      bigA *= b ;
    }
    C_BigInt bigB = bigA ;
    ++ bigB ;
    const C_BigInt bigC = bigA - bigB ;
    const C_BigInt bigCVerif (-1) ;
    if (bigC != bigCVerif) {
      co << "Error for combining " << cStringWithSigned (a) << " and " << cStringWithUnsigned (b) << "\n" ;
    }
  }
  co << "Display in decimal\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    uint64_t v = (uint32_t) rand () ;
    v <<= 32 ;
    v |= (uint32_t) rand () ;
    const C_BigInt bigV (v, false) ;
    const C_String strV = cStringWithUnsigned (v) ;
    const C_String strBigV = bigV.decimalString () ;
    if (strV != strV) {
      co << "Error for decimalString: '" << strV << "' != '" << strBigV << "'\n" ;
    }
  }
  co << "Computing 100!\n" ;
  C_BigInt f (1, false) ;
  for (uint32_t i=2 ; i<=100 ; i++) {
    f *= i ;
  }
  co << "100! = " << f.decimalString() << "\n" ;
  co << "Computing 1000!\n" ;
  f = C_BigInt (1, false) ;
  for (uint32_t i=2 ; i<=1000 ; i++) {
    f *= i ;
  }
  co << "1000! = " << f.decimalString() << "\n" ;
  co << "Shift right positive numbers\n" ;
  for (uint32_t i=2 ; i<=1000 ; i++) {
    uint64_t low = (uint32_t) rand () ;
    low <<= 32 ;
    low |= (uint32_t) rand () ;
    uint64_t high = (uint32_t) rand () ;
    const C_BigInt bigV (high, low, false) ;
    const uint32_t shift = ((uint32_t) rand ()) % 100 ;
    const C_BigInt bigVLeftShifted = bigV << shift ;
    const C_BigInt bigResult = bigVLeftShifted >> shift ;
    if (bigV != bigResult) {
      co << "Error : " << bigV.decimalString() << " != " << bigResult.decimalString() << "\n" ;
    }
  }
  co << "Shift right negative numbers\n" ;
  const C_BigInt minusOne (1, true) ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    uint64_t low = (uint32_t) rand () ;
    low <<= 32 ;
    low |= (uint32_t) rand () ;
    uint64_t high = (uint32_t) rand () ;
    const C_BigInt bigV (high, low, true) ;
    const uint32_t shift = ((uint32_t) rand ()) % 100 ;
    const C_BigInt bigVLeftShifted = bigV << shift ;
    const C_BigInt bigResult = bigVLeftShifted >> shift ;
    if (bigV != bigResult) {
      co << "Error : " << bigV.decimalString() << " != " << bigResult.decimalString() << "\n" ;
    }
    C_BigInt v = bigVLeftShifted ;
    while (v != minusOne) {
      v >>= ((uint32_t) rand ()) % 39 ;
    }
  }
  co << "Multiplication\n" ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    uint64_t low = (uint32_t) rand () ;
    low <<= 32 ;
    low |= (uint32_t) rand () ;
    uint64_t high = (uint32_t) rand () ;
    const C_BigInt bigA = C_BigInt (high, low, ((uint32_t) rand () & 1) == 0) * (uint32_t) rand () ;
    const C_BigInt bigAM = minusOne * bigA * minusOne ;
    if (bigA != bigAM) {
      co << "Error : A" << bigA.decimalString() << " != -1*A*-1" << bigAM.decimalString() << "\n" ;
    }
    const C_BigInt bigB = C_BigInt (low, high, ((uint32_t) rand () & 1) == 0) * (uint32_t) rand () ;
    const C_BigInt bigABAB = (bigA + bigB) * (bigA - bigB) ;
    const C_BigInt bigAABB = bigA * bigA  - bigB * bigB ;
    if (bigA != bigAM) {
      co << "Error : (A+B)*(A-B)" << bigABAB.decimalString() << " != A*A-B*B" << bigAABB.decimalString() << "\n" ;
    }
    const C_BigInt bigF = (bigA + bigB) * (bigB + bigA) ;
    const C_BigInt bigG = bigA * bigA + bigB * bigB + bigA * bigB + bigB * bigA ;
    if (bigF != bigG) {
      co << "Error : (A+B)*(B+A) " << bigF.decimalString() << " != A*A+2*A*B+B*B " << bigG.decimalString() << "\n" ;
    }
  }
  co << "Division by uint32_t\n" ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    uint64_t low = (uint32_t) rand () ;
    low <<= 32 ;
    low |= (uint32_t) rand () ;
    uint64_t high = (uint32_t) rand () ;
    const C_BigInt bigA = C_BigInt (high, low, false) * (uint32_t) rand () ;
    const uint32_t divisor = (uint32_t) rand () | 1 ;
    C_BigInt quotient ;
    uint32_t remainder ;
    bigA.divideBy (divisor, quotient, remainder COMMA_HERE) ;
    const C_BigInt bigAM = quotient * divisor + remainder ;
    if (bigA != bigAM) {
      co << "Error : " << bigA.decimalString() << " != " << bigAM.decimalString() << "\n" ;
    }
  }
  co << "Division by C_BigInt\n" ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    co << "." ; co.flush () ;
    uint64_t low = (uint32_t) rand () ;
    low <<= 32 ;
    low |= (uint32_t) rand () ;
    uint64_t high = (uint32_t) rand () ;
    const C_BigInt dividende = C_BigInt (high, low, false) * C_BigInt (low, high, false) ;
    uint64_t low2 = (uint32_t) rand () ;
    low2 <<= 32 ;
    low2 |= (uint32_t) rand () ;
    uint64_t high2 = (uint32_t) rand () ;
    const C_BigInt divisor = C_BigInt (high2, low2, false) + 2 ;
    C_BigInt quotient ;
    C_BigInt remainder ;
    dividende.divideBy (divisor, quotient, remainder COMMA_HERE) ;
    const C_BigInt result = quotient * divisor + remainder ;
    if (dividende != result) {
      co << "Error : " << dividende.decimalString() << " != " << result.decimalString() << "\n" ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
