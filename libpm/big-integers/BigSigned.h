//
//  BigSigned.hpp
//  BigSigned
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"

class BigSignedQuotientRemainder ;

//--------------------------------------------------------------------------------------------------

class BigSigned final {

//--- Constructors
  public: explicit BigSigned (void) ; // Zero

  public: explicit BigSigned (const bool inPositive,
                              const uint64_t inValue) ;

  public: explicit BigSigned (const int64_t inValue) ;

  public: explicit BigSigned (const bool inPositive,
                              const BigUnsigned inValue) ;

  public: explicit BigSigned (const bool inPositive,
                              const size_t inByteCount,
                              const uint8_t inSourceByteArray []) ;

  public: explicit BigSigned (const std::string & inString, const uint8_t inSeparator) ;

  public: static BigSigned powerOfTwo (const bool inPositive,
                                       const uint32_t inPowerOfTwo) ;

  public: static BigSigned randomNumber (void) ;

//--- Testing value
  public: bool isZero (void) const { return mUnsigned.isZero () ; }
  public: bool isOne (void) const { return mIsPositive && mUnsigned.isOne () ; }
  public: bool isPositive (void) const { return mIsPositive ; }
  public: int32_t sign (void) const ;
  public: BigSigned abs (void) const { return mIsPositive ? *this : - *this ; }

//--- Shift operators
  public: BigSigned operator << (const size_t inShiftCount) const ;
  public: void operator <<= (const size_t inShiftCount) ;

  public: void operator >>= (const size_t inShiftCount) ;
  public: BigSigned operator >> (const size_t inShiftCount) const ;

//--- Operations with ChunkUInt
  public: void operator += (const ChunkUInt inOperand) ;
  public: void operator -= (const ChunkUInt inOperand) ;
  public: void operator *= (const ChunkUInt inOperand) ;

  public: BigSigned operator + (const ChunkUInt inOperand) const ;
  public: BigSigned operator - (const ChunkUInt inOperand) const ;
  public: BigSigned operator * (const ChunkUInt inOperand) const ;

//--- Division, returns quotient and remainder
  public: BigSignedQuotientRemainder dividingByChunkUInt (const ChunkUInt inDivisor) const ;

//--- Division, returns quotient, remainder is lost
  public: void operator /= (const ChunkUInt inDivisor) ;
  public: BigSigned operator / (const ChunkUInt inDivisor) const ;

//--- Division, returns remainder, quotient is lost
  public: void operator %= (const ChunkUInt inDivisor) ;
  public: BigSigned operator % (const ChunkUInt inDivisor) const ;

//--- Logical operations
  public: BigSigned operator | (const BigSigned inOperand) const ;
  public: BigSigned operator ^ (const BigSigned inOperand) const ;
  public: BigSigned operator & (const BigSigned inOperand) const ;
  public: BigSigned operator ~ (void) const ;

//--- Add
  public: void operator += (const BigSigned inOperand) ;
  public: BigSigned operator + (const BigSigned inOperand) const ;

//--- Substract
  public: void operator -= (const BigSigned inOperand) ;
  public: BigSigned operator - (const BigSigned inOperand) const ;

//--- Negate
  public: BigSigned operator - (void) const ;

//--- Multiply
  public: void operator *= (const BigSigned inOperand) ;
  public: BigSigned operator * (const BigSigned inOperand) const ;

//--- Divide, returns quotient and remainder
  public: BigSignedQuotientRemainder divideByBigSigned (const BigSigned & inDivisor) const ;

//--- Division, returns quotient, remainder is lost
  public: void operator /= (const BigSigned inDivisor) ;
  public: BigSigned operator / (const BigSigned inDivisor) const ;

//--- Division, returns remainder, quotient is lost
  public: void operator %= (const BigSigned inDivisor) ;
  public: BigSigned operator % (const BigSigned inDivisor) const ;

//--- Compare
  public: int compare (const BigSigned & inOperand) const ;
  public: bool operator == (const BigSigned & inOperand) const { return compare (inOperand) == 0 ; }
  public: bool operator != (const BigSigned & inOperand) const { return compare (inOperand) != 0 ; }
  public: bool operator >  (const BigSigned & inOperand) const { return compare (inOperand) >  0 ; }
  public: bool operator >= (const BigSigned & inOperand) const { return compare (inOperand) >= 0 ; }
  public: bool operator <  (const BigSigned & inOperand) const { return compare (inOperand) <  0 ; }
  public: bool operator <= (const BigSigned & inOperand) const { return compare (inOperand) <= 0 ; }

//--- Bit manipulation
  public: bool bitAtIndex (const uint32_t inBitIndex) const ;
  public: void setBitAtIndex (const bool inBit, const uint32_t inBitIndex) ;
  public: void complementBitAtIndex (const uint32_t inBitIndex) ;

//--- Print
  public: std::string decimalString (void) const ;
  public: std::string spacedDecimalString (const uint32_t inSeparation) const ;
  public: std::string spacedDecimalStringWithDigitCount (const uint32_t inSeparation) const ;
  public: std::string hexString (void) const ;
  public: std::string xString (void) const ;
  public: void printHex (const char * inName) const ;

//--- Value access
  public: uint32_t uint32 (void) const ;
  public: uint64_t uint64 (void) const ;
  public:  int32_t int32  (void) const ;
  public:  int64_t int64  (void) const ;
  public: void extractBytesForUnsignedRepresentation (std::vector <uint8_t> & outValue) const ;
  public: void extractBytesForSignedRepresentation (std::vector <uint8_t> & outValue) const ;

//--- Testing value
  public: bool fitsInUInt32 (void) const ;
  public: bool fitsInUInt64 (void) const ;
  public: bool fitsInSInt32 (void) const ;
  public: bool fitsInSInt64 (void) const ;
  public: uint32_t requiredBitCountForSignedRepresentation (void) const ;
  public: uint32_t requiredBitCountForUnsignedRepresentation (void) const ;

//--- Private properties
  private: bool mIsPositive ;
  private: BigUnsigned mUnsigned ;
} ;

//--------------------------------------------------------------------------------------------------

class BigSignedQuotientRemainder final {
  private: BigSigned mQuotient ;
  public: BigSigned quotient (void) const { return mQuotient ; }
  private: BigSigned mRemainder ;
  public: BigSigned remainder (void) const { return mRemainder ; }

  public: explicit BigSignedQuotientRemainder () :
  mQuotient (),
  mRemainder () {
  }
  
  public: explicit BigSignedQuotientRemainder (const BigSigned & inQuotient,
                                               const BigSigned & inRemainder) :
  mQuotient (inQuotient),
  mRemainder (inRemainder) {
  }
  
} ;

//--------------------------------------------------------------------------------------------------
