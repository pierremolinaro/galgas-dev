#pragma once

//--------------------------------------------------------------------------------------------------

#include <cstdint>

//--------------------------------------------------------------------------------------------------

#include "U64_UniqueArray.h"
#include "strings/C_String.h"

//--------------------------------------------------------------------------------------------------

class BigUnsigned final {

//--- Constructors
  public: static BigUnsigned randomNumber (void) ;
  public: static BigUnsigned powerOfTwo (const int32_t inPowerOfTwo) ;
  public: BigUnsigned (void) ;
  public: BigUnsigned (const uint64_t inValue) ;

//--- Handle copy
//  public: void copyTo (BigUnsigned & outTarget) const ;
  public: BigUnsigned (const BigUnsigned & inSource) ;
  public: BigUnsigned & operator = (const BigUnsigned & inSource) ;

//--- Testing value
  public: bool isZero (void) const ;
  public: bool isOne (void) const ;

//--- Shift operators
  public: BigUnsigned operator << (const uint32_t inShiftCount) const ;
  public: void operator <<= (const uint32_t inShiftCount) ;

//--- Operations with U64
  public: void operator += (const uint64_t inOperand) ;
  public: void operator -= (const uint64_t inOperand) ;
  public: void operator *= (const uint64_t inOperand) ;

//  public: BigUnsigned addingU64 (const uint64_t inOperand) const ;
//  public: BigUnsigned subtractingU64 (const uint64_t inOperand) const ;
//  public: BigUnsigned multiplyingByU64 (const uint64_t inOperand) const ;

  public: void divideByU64 (const uint64_t inDivisor,
                            BigUnsigned & outQuotient,
                            uint64_t & outRemainder) const ;
  public: void divideInPlaceByU64 (const uint64_t inDivisor,
                                   uint64_t & outRemainder) ;

//--- Logical operations
  public: BigUnsigned operator | (const BigUnsigned & inOperand) const ;
  public: BigUnsigned operator ^ (const BigUnsigned & inOperand) const ;
  public: BigUnsigned operator & (const BigUnsigned & inOperand) const ;
  public: BigUnsigned operator ~ (void) const ;

//--- Arithmetic operations
  public: void operator += (const BigUnsigned & inOperand) ;
  public: void operator -= (const BigUnsigned & inOperand) ;
  public: BigUnsigned operator + (const BigUnsigned & inOperand) const ;
  public: BigUnsigned operator - (const BigUnsigned & inOperand) const ;
  public: BigUnsigned operator * (const BigUnsigned & inOperand) const ;

  public: void divideByBigUnsignedOld (const BigUnsigned & inDivisor,
                                       BigUnsigned & outQuotient,
                                       BigUnsigned & outRemainder) const ;
  public: static void internalDivideOld (const BigUnsigned & inDividend,
                                         const BigUnsigned & inDivisor,
                                         BigUnsigned & outQuotient,
                                         BigUnsigned & outRemainder) ;

  public: void divideByBigUnsigned (const BigUnsigned & inDivisor,
                                    BigUnsigned & outQuotient,
                                    BigUnsigned & outRemainder) const ;
  public: static void internalDivide (const BigUnsigned & inDividend,
                                      const BigUnsigned & inDivisor,
                                      BigUnsigned & outQuotient,
                                      BigUnsigned & outRemainder) ;

//--- Compare
  public: int compare (const BigUnsigned & inOperand) const ;
  public: bool operator == (const BigUnsigned & inOperand) const { return compare (inOperand) == 0 ; }
  public: bool operator != (const BigUnsigned & inOperand) const { return compare (inOperand) != 0 ; }
  public: bool operator >  (const BigUnsigned & inOperand) const { return compare (inOperand) >  0 ; }
  public: bool operator >= (const BigUnsigned & inOperand) const { return compare (inOperand) >= 0 ; }
  public: bool operator <  (const BigUnsigned & inOperand) const { return compare (inOperand) <  0 ; }
  public: bool operator <= (const BigUnsigned & inOperand) const { return compare (inOperand) <= 0 ; }

//--- Print
  public: C_String decimalString (void) const ;
  public: C_String spacedDecimalString (const uint32_t inSeparation) const ;
  public: C_String hexString (void) const ;
  public: C_String xString (void) const ;
  public: void printHex (const char * inName) const ;

//--- Private property
  private: U64_UniqueArray <uint64_t> mArray ;
} ;

//--------------------------------------------------------------------------------------------------
