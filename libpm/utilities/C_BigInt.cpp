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

#include "C_BigInt.h"

//---------------------------------------------------------------------------------------------------------------------*

#include <iostream>
#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Default constructor, destructor, copy
#endif

//---------------------------------------------------------------------------------------------------------------------*
//  Default Constructor: init to zero
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (void) :
mValue () {
  mpz_init (mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Destructor
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::~C_BigInt (void) {
  mpz_clear (mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Handle copy
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const C_BigInt & inOperand) :
mValue () {
  mpz_init (mValue) ;
  mpz_set (mValue, inOperand.mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt & C_BigInt::operator = (const C_BigInt & inOperand) {
  mpz_set (mValue, inOperand.mValue) ;
  return *this ;
}

//---------------------------------------------------------------------------------------------------------------------*
// Normalize and tests
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Tests
#endif

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isZero (void) const {
  return mpz_cmp_ui (mValue, 0) == 0 ;
}
  
//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isOne (void) const {
  return mpz_cmp_ui (mValue, 1) == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isMinusOne (void) const {
  return mpz_cmp_si (mValue, -1) == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
// Constructors
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const uint32_t inValue, const bool inNegate) :
mValue () {
  mpz_init (mValue) ;
  mpz_set_ui (mValue, inValue) ;
  if (inNegate) {
    mpz_neg (mValue, mValue) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const uint32_t inHighValue, const uint32_t inLowValue, const bool inNegate) :
mValue () {
  mpz_init (mValue) ;
  mpz_set_ui (mValue, inHighValue) ;
  mpz_mul_2exp (mValue, mValue, 32) ;
  mpz_add_ui (mValue, mValue, inLowValue) ;
  if (inNegate) {
    mpz_neg (mValue, mValue) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt::C_BigInt (const int32_t inValue) :
mValue () {
  mpz_init (mValue) ;
  mpz_set_si (mValue, inValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::setToZero (void) {
  mpz_set_ui (mValue, 0) ;
}

//---------------------------------------------------------------------------------------------------------------------*
// increment
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Increment, decrement
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt & C_BigInt::operator ++ (void) {
  mpz_add_ui (mValue, mValue, 1) ;
  return *this ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt & C_BigInt::operator -- (void) {
  mpz_sub_ui (mValue, mValue, 1) ;
  return *this ;
}

//---------------------------------------------------------------------------------------------------------------------*
// String
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Convert to string
#endif

//---------------------------------------------------------------------------------------------------------------------*

C_String C_BigInt::hexString (void) const {
  const size_t neededSize = 1 + (size_t) gmp_snprintf (NULL, 0, "%ZX", mValue) ;
  char * s = NULL ;
  macroMyNewPODArray (s, char, neededSize) ;
  gmp_snprintf (s, neededSize, "%ZX", mValue) ;
  C_String result ;
  result << s ;
  macroMyDeletePODArray (s) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_BigInt::decimalString (void) const {
  const size_t neededSize = 1 + (size_t) gmp_snprintf (NULL, 0, "%ZX", mValue) ;
  char * s = NULL ;
  macroMyNewPODArray (s, char, neededSize) ;
  gmp_snprintf (s, neededSize, "%Zs", mValue) ;
  C_String result ;
  result << s ;
  macroMyDeletePODArray (s) ;
  return s ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Add, subtract uint64_t
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator += (const uint32_t inOperand) {
  mpz_add_ui (mValue, mValue, inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator + (const uint32_t inOperand) const {
  C_BigInt resultat = *this ;
  resultat += inOperand ;
  return resultat ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator -= (const uint32_t inOperand) {
  mpz_sub_ui (mValue, mValue, inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator - (const uint32_t inOperand) const {
  C_BigInt resultat = *this ;
  resultat -= inOperand ;
  return resultat ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Add, subtract C_BigInt
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator += (const C_BigInt inOperand) {
  mpz_add (mValue, mValue, inOperand.mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator -= (const C_BigInt inOperand) {
  mpz_sub (mValue, mValue, inOperand.mValue) ;
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
  mpz_neg (mValue, mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Multiplication with uint32_t
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator *= (const uint32_t inMultiplicand) {
  mpz_mul_ui (mValue, mValue, inMultiplicand) ;
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
  mpz_mul (mValue, mValue, inMultiplicand.mValue) ;
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
                         uint32_t & outRemainder) const {
  outRemainder = (uint32_t) mpz_fdiv_q_ui (outQuotient.mValue, mValue, inDivisor) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::divideInPlace (const uint32_t inDivisor, uint32_t & outRemainder) {
  mpz_t quotient ;
  mpz_init (quotient) ;
  outRemainder = (uint32_t) mpz_fdiv_q_ui (quotient, mValue, inDivisor) ;
  mpz_swap (quotient, mValue) ;
  mpz_clear (quotient) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::divideBy (const C_BigInt inDivisor,
                         C_BigInt & outQuotient,
                         C_BigInt & outRemainder) const {
  outQuotient = *this ;
  outQuotient.divideInPlace (inDivisor, outRemainder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::divideInPlace (const C_BigInt inDivisor, C_BigInt & outRemainder) {
  mpz_t quotient ;
  mpz_init (quotient) ;
  mpz_fdiv_qr (quotient, outRemainder.mValue, mValue, inDivisor.mValue) ;
  mpz_swap (quotient, mValue) ;
  mpz_clear (quotient) ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shift left
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator <<= (const uint32_t inValue) {
  mpz_mul_2exp (mValue, mValue, inValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator << (const uint32_t inValue) const {
  C_BigInt result = *this ;
  result <<= inValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shift right
#endif

//---------------------------------------------------------------------------------------------------------------------*

void C_BigInt::operator >>= (const uint32_t inValue) {
  mpz_t quotient ;
  mpz_init (quotient) ;
  mpz_fdiv_q_2exp (quotient, mValue, inValue) ;
  mpz_swap (quotient, mValue) ;
  mpz_clear (quotient) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_BigInt::operator >> (const uint32_t inValue) const {
  C_BigInt result = *this ;
  result >>= inValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Compare
#endif

//---------------------------------------------------------------------------------------------------------------------*

int32_t C_BigInt::compare (const C_BigInt & inValue) const {
  return mpz_cmp (mValue, inValue.mValue) ;
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

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Utilities
#endif

//---------------------------------------------------------------------------------------------------------------------*

/*uint32_t C_BigInt::requiredBitCountForSignedRepresentation (void) const {
  uint32_t result = 1 ;
  if (mSign != zero) {
    result = mObjectPtr->requiredBitCountForSignedRepresentation () ;
    if (mSign == positive) {
      result ++ ;
    }
  }
  return result ;
}*/

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Testing Value
#endif

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isUInt32 (void) const {
  return mpz_fits_uint_p (mValue) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isUInt64 (void) const {
  return mpz_fits_ulong_p (mValue) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isSInt32 (void) const {
  return mpz_fits_sint_p (mValue) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool C_BigInt::isSInt64 (void) const {
  return mpz_fits_slong_p (mValue) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Value access
#endif

//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_BigInt::uint32AtIndex (void) const {
  return (uint32_t) mpz_get_ui (mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint64_t C_BigInt::uint64AtIndex (void) const {
  return mpz_get_ui (mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t C_BigInt::int32AtIndex (void) const {
  return (int32_t) mpz_get_si (mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

int64_t C_BigInt::int64AtIndex (void) const {
  return mpz_get_si (mValue) ;
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
  C_BigInt bigint2 (UINT32_MAX, false) ;
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
    const int32_t a = (int32_t) rand () ;
    const int32_t b = (int32_t) rand () ;
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
    const uint32_t lowA = (uint32_t) rand () ;
    const uint32_t highA = (uint32_t) rand () ;
    const C_BigInt bigA (highA, lowA, ((uint32_t) rand () & 1) == 0) ;
    const uint32_t lowB = (uint32_t) rand () ;
    const uint32_t highB = (uint32_t) rand () ;
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
    const uint32_t a = (uint32_t) rand () ;
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
    const uint32_t v = (uint32_t) rand () ;
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
    const uint32_t low = (uint32_t) rand () ;
    const uint32_t high = (uint32_t) rand () ;
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
    const uint32_t low = (uint32_t) rand () ;
    const uint32_t high = (uint32_t) rand () ;
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
    const uint32_t low = (uint32_t) rand () ;
    const uint32_t high = (uint32_t) rand () ;
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
    const uint32_t low = (uint32_t) rand () ;
    const uint32_t high = (uint32_t) rand () ;
    const C_BigInt bigA = C_BigInt (high, low, false) * (uint32_t) rand () ;
    const uint32_t divisor = (uint32_t) rand () | 1 ;
    C_BigInt quotient ;
    uint32_t remainder ;
    bigA.divideBy (divisor, quotient, remainder) ;
    const C_BigInt bigAM = quotient * divisor + remainder ;
    if (bigA != bigAM) {
      co << "Error : " << bigA.decimalString() << " != " << bigAM.decimalString() << "\n" ;
    }
  }
  co << "Division by C_BigInt\n" ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    co << "." ; co.flush () ;
    const uint32_t low = (uint32_t) rand () ;
    const uint32_t high = (uint32_t) rand () ;
    const C_BigInt dividende = C_BigInt (high, low, false) * C_BigInt (low, high, false) ;
    const uint32_t low2 = (uint32_t) rand () ;
    const uint32_t high2 = (uint32_t) rand () ;
    const C_BigInt divisor = C_BigInt (high2, low2, false) + 2 ;
    C_BigInt quotient ;
    C_BigInt remainder ;
    dividende.divideBy (divisor, quotient, remainder) ;
    const C_BigInt result = quotient * divisor + remainder ;
    if (dividende != result) {
      co << "Error : " << dividende.decimalString() << " != " << result.decimalString() << "\n" ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
