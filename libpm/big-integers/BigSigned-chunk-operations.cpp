//
//  BigSigned.cpp
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Add ChunkUInt
#endif

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator + (const ChunkUInt inOperand) const {
  if (inOperand == 0) {
    return *this ;
  }else if (isZero ()) { // Receiver is zero
    return BigSigned (true, inOperand) ;
  }else if (mIsPositive) { // Receiver is positive
    return BigSigned (true, mUnsigned + inOperand) ;
  }else if (mUnsigned.chunkCount () > 1) { // Receiver is negative, result is negative
    return BigSigned (false, mUnsigned - inOperand) ;
  }else if (mUnsigned.chunkAtIndex (0 COMMA_HERE) >= inOperand) { // Receiver is negative, result is negative or nul
    return BigSigned (false, mUnsigned.chunkAtIndex (0 COMMA_HERE) - inOperand) ;
  }else{  // Receiver is negative, result is positive
    return BigSigned (true, inOperand - mUnsigned.chunkAtIndex (0 COMMA_HERE)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator += (const ChunkUInt inOperand) {
  if (inOperand > 0) {
    *this = *this + inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator - (const ChunkUInt inOperand) const {
  if (inOperand == 0) {
    return *this ;
  }else if (isZero ()) { // Receiver is zero
    return BigSigned (false, inOperand) ;
  }else if (!mIsPositive) { // Receiver is negative
    return BigSigned (false, mUnsigned + inOperand) ;
  }else if (mUnsigned.chunkCount () > 1) { // Receiver is positive, result is positive
    return BigSigned (true, mUnsigned - inOperand) ;
  }else if (mUnsigned.chunkAtIndex (0 COMMA_HERE) >= inOperand) { // Receiver is positive, result is positive or nul
    return BigSigned (true, mUnsigned.chunkAtIndex (0 COMMA_HERE) - inOperand) ;
  }else{  // Receiver is positive, result is negative
    return BigSigned (false, inOperand - mUnsigned.chunkAtIndex (0 COMMA_HERE)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator -= (const ChunkUInt inOperand) {
  if (inOperand > 0) {
    *this = *this - inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator * (const ChunkUInt inOperand) const {
  return BigSigned (mIsPositive, mUnsigned * inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator *= (const ChunkUInt inOperand) {
  *this = *this * inOperand ;
}

//--------------------------------------------------------------------------------------------------

BigSignedQuotientRemainder BigSigned::dividingByChunkUInt (const ChunkUInt inDivisor) const {
  const BigUnsignedQuotientU64Remainder r = mUnsigned.dividingByChunkUInt (inDivisor) ;
  return BigSignedQuotientRemainder (
    BigSigned (mIsPositive, r.quotient ()),
    BigSigned (mIsPositive, r.remainder ())
  ) ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator %= (const ChunkUInt inDivisor) {
  const BigUnsignedQuotientU64Remainder result = mUnsigned.dividingByChunkUInt (inDivisor) ;
  *this = BigSigned (mIsPositive, result.remainder ()) ;
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator % (const ChunkUInt inDivisor) const {
  const BigUnsignedQuotientU64Remainder result = mUnsigned.dividingByChunkUInt (inDivisor) ;
  return BigSigned (mIsPositive, BigUnsigned (result.remainder ())) ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator /= (const ChunkUInt inDivisor) {
  const BigUnsignedQuotientU64Remainder result = mUnsigned.dividingByChunkUInt (inDivisor) ;
  *this = BigSigned (mIsPositive, result.quotient ()) ;
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator / (const ChunkUInt inDivisor) const {
  const BigUnsignedQuotientU64Remainder result = mUnsigned.dividingByChunkUInt (inDivisor) ;
  return BigSigned (mIsPositive, result.quotient ()) ;
}

//--------------------------------------------------------------------------------------------------
