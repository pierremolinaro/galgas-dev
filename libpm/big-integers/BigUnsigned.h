#pragma once

//--------------------------------------------------------------------------------------------------

#include <cstdint>

//--------------------------------------------------------------------------------------------------

#include "collections/TC_UniqueArray.h"

//--------------------------------------------------------------------------------------------------

class BigUnsigned {

//--- Constructors
  public: static BigUnsigned randomNumber (void) ;
  public: static BigUnsigned powerOfTwo (const int32_t inPowerOfTwo) ;
  public: BigUnsigned (void) ;
  public: BigUnsigned (const uint64_t inValue) ;

//--- Handle copy
  public: void copyTo (BigUnsigned & outTarget) const ;
  public: BigUnsigned (const BigUnsigned & inSource) ;
  public: BigUnsigned & operator = (const BigUnsigned & inSource) ;

//--- Testing value
  public: bool isZero (void) const ;
  public: bool isOne (void) const ;

//--- Operators
  public: BigUnsigned leftShiftedBy (const uint32_t inShiftCount) const ;
  public: void leftShiftInPlaceBy (const uint32_t inShiftCount) ;
  public: BigUnsigned addingU64 (const uint64_t inOperand) const ;
  public: BigUnsigned addingBigUnsigned (const BigUnsigned & inOperand) const ;
  public: BigUnsigned subtractingBigUnsigned (const BigUnsigned & inOperand) const ;
  public: BigUnsigned multiplyingByU64 (const uint64_t inOperand) const ;
  public: void divideByU64 (const uint64_t inDivisor,
                            BigUnsigned & outQuotient,
                            uint64_t & outRemainder) const ;
  public: BigUnsigned multiplyingByBigUnsigned (const BigUnsigned & inOperand) const ;

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

  public: int compare (const BigUnsigned & inOperand) const ;

  public: BigUnsigned oringWithBigUnsigned (const BigUnsigned & inOperand) const ;
  public: BigUnsigned xoringWithBigUnsigned (const BigUnsigned & inOperand) const ;
  public: BigUnsigned andingWithBigUnsigned (const BigUnsigned & inOperand) const ;
  public: BigUnsigned complemented (void) const ;

  public: void printHex (const char * inName) const ;
  private: static void printHex (const TC_UniqueArray <uint64_t> & inArray, const char * inName) ;

//--- Private properties
  private: TC_UniqueArray <uint64_t> mArray ;
} ;

//--------------------------------------------------------------------------------------------------
