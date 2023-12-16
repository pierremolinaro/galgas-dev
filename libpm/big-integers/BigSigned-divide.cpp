//
//  BigSigned.cpp
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

BigSignedQuotientRemainder BigSigned::divideByBigSigned (const BigSigned & inDivisor) const {
  const BigUnsignedQuotientRemainder r = mUnsigned.divideByBigUnsigned (inDivisor.mUnsigned) ;
  const bool quotientIsPositive = mIsPositive == inDivisor.mIsPositive ;
  const bool remainderIsPositive = mIsPositive ;
  return BigSignedQuotientRemainder (
    BigSigned (quotientIsPositive, r.quotient ()),
    BigSigned (remainderIsPositive, r.remainder ())
  ) ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator /= (const BigSigned inDivisor) {
  const BigSignedQuotientRemainder r = divideByBigSigned (inDivisor) ;
  *this = r.quotient () ;
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator / (const BigSigned inDivisor) const {
  const BigSignedQuotientRemainder r = divideByBigSigned (inDivisor) ;
  return r.quotient () ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator %= (const BigSigned inDivisor) {
  const BigSignedQuotientRemainder r = divideByBigSigned (inDivisor) ;
  *this = r.remainder () ;
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator % (const BigSigned inDivisor) const {
  const BigSignedQuotientRemainder r = divideByBigSigned (inDivisor) ;
  return r.remainder () ;
}

//--------------------------------------------------------------------------------------------------
