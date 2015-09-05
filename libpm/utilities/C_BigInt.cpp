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

  public : C_String hexString (void) const ;
  public : C_String decimalString (void) const ;
  
  public : bool isZero (void) const ;

  public : void normalize (void) ;
  public : void shiftLeft (const uint32_t inValue) ;

  public : bool operator == (const acPtr_bigUInt & inOperand) const ;
  public : bool operator != (const acPtr_bigUInt & inOperand) const ;
  public : bool operator >= (const acPtr_bigUInt & inOperand) const ;
  public : bool operator >  (const acPtr_bigUInt & inOperand) const ;
  public : bool operator <= (const acPtr_bigUInt & inOperand) const ;
  public : bool operator <  (const acPtr_bigUInt & inOperand) const ;
  public : int32_t compare (const acPtr_bigUInt & inOperand) const ;
  
  public : void addInPlace (const acPtr_bigUInt & inOperand) ;
  public : void subtractInPlace (const acPtr_bigUInt & inOperand) ; // Requires *this >= inOperand
  public : void multiplyInPlace (const uint32_t inOperand) ;
  public : void divideInPlace (const uint32_t inDivisor, uint32_t & outRemainder) ;

  public : uint32_t requiredBitCountForSignedRepresentation (void) const ;

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
// Constructor: init from uint64_t
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Default Constructor: init from uint64_t
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
  #pragma mark Add, subtract
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
        mObjectPtr->subtractInPlace (* inOperand.mObjectPtr) ;
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
        mObjectPtr->subtractInPlace (* inOperand.mObjectPtr) ;
        normalize () ;
      }else{  // Result is > 0 ; compute - (- Operand - *this)
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
        mObjectPtr->subtractInPlace (* inOperand.mObjectPtr) ;
        normalize () ;
      }else{  // Result is < 0 ; compute - (Operand - *this)
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
        mObjectPtr->subtractInPlace (* inOperand.mObjectPtr) ;
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

void acPtr_bigUInt::subtractInPlace (const acPtr_bigUInt & inOperand) {
  macroUniqueSharedObject (this) ;
  uint64_t carry = 0 ;
  for (int32_t i=0 ; i<mValueArray.count () ; i++) {
    const uint64_t a = mValueArray (i COMMA_HERE) ;
    if (i < inOperand.mValueArray.count ()) {
      const uint64_t b = inOperand.mValueArray (i COMMA_HERE) ;
      carry += a - b ;
    }else{
      carry += a ;
    }
    mValueArray (i COMMA_HERE) = ((uint32_t) (carry & UINT32_MAX)) ;
    carry >>= 32 ;
  }
  MF_Assert (carry == 0, "carry (0x%x) should be 0", (int64_t) carry, 0) ;
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
  #pragma mark Multiplication
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
  #pragma mark Division
#endif

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

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shift left
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::shiftLeftInPlace (const uint32_t inValue) {
  if ((inValue > 0) && (mSign != zero)) {
    insulate (HERE) ;
    mObjectPtr->shiftLeft (inValue) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkBigInt (HERE) ;
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator << (const uint32_t inValue) const {
  C_BigInt result = *this ;
  result.shiftLeftInPlace (inValue) ;
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
  #pragma mark Compare
#endif

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator == (const C_BigInt & inOperand) const {
  bool equal = mSign == inOperand.mSign ;
  if (equal && (mSign != zero)) {
    equal = (*mObjectPtr) == (* inOperand.mObjectPtr) ;
  }
  return equal ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::operator != (const C_BigInt & inValue) const {
  return ! (*this == inValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator == (const acPtr_bigUInt & inOperand) const {
  return compare (inOperand) == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator != (const acPtr_bigUInt & inOperand) const {
  return compare (inOperand) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator >= (const acPtr_bigUInt & inOperand) const {
  return compare (inOperand) >= 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator > (const acPtr_bigUInt & inOperand) const {
  return compare (inOperand) > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator < (const acPtr_bigUInt & inOperand) const {
  return compare (inOperand) < 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool acPtr_bigUInt::operator <= (const acPtr_bigUInt & inOperand) const {
  return compare (inOperand) <= 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t acPtr_bigUInt::compare (const acPtr_bigUInt & inOperand) const {
  int32_t result = mValueArray.count () - inOperand.mValueArray.count () ;
  for (int32_t i=0 ; (result == 0) && (i < mValueArray.count ()) ; i++) {
    if (mValueArray (i COMMA_HERE) > inOperand.mValueArray (i COMMA_HERE)) {
      result = 1 ;
    }else if (mValueArray (i COMMA_HERE) < inOperand.mValueArray (i COMMA_HERE)) {
      result = -1 ;
    }
  }
  return result ;
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
  co << "Add and subtract random test\n" ;
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
  co << "Calcul de 100!\n" ;
  C_BigInt f (1, false) ;
  for (uint32_t i=2 ; i<=100 ; i++) {
    f *= i ;
  }
  co << "100! = " << f.decimalString() << "\n" ;
  co << "Calcul de 1000!\n" ;
  f = C_BigInt (1, false) ;
  for (uint32_t i=2 ; i<=1000 ; i++) {
    f *= i ;
  }
  co << "1000! = " << f.decimalString() << "\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*
