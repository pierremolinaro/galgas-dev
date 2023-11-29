#pragma once

//--------------------------------------------------------------------------------------------------

#include "strings/C_String.h"

//----------------------------------------------------------------------------------------------------------------------

class U64UniqueArray final {
//--- Private attributes
  private: uint64_t * mArray ; // Element 0 is reference count, data is 1-Based Indexing
  private: uint64_t mCount ;
  private: uint64_t mCapacity ;

//--- Default Constructor
  public: U64UniqueArray (void) :
  mArray (nullptr),
  mCount (0),
  mCapacity (0) {
  }

//--- Destructor
  public: ~U64UniqueArray (void)  {
    macroMyDeleteArray (mArray) ;
  }

//--- No copy
  private: U64UniqueArray (const U64UniqueArray &) = delete ;
  private: U64UniqueArray & operator = (const U64UniqueArray &) = delete ;

//--- Copy
  public: void copyTo (U64UniqueArray & outArray) const {
    outArray.removeAllKeepingCapacity () ;
    outArray.setCapacity (mCount) ;
    for (uint64_t i = 1 ; i <= mCount ; i++) {
      outArray.appendObject (mArray [i]) ; // 1-Based Indexing
    }
  }

//--- Get Count
  public: uint64_t count (void) const { return mCount ; }

//--- Remove all, keeping capacity
  public: void removeAllKeepingCapacity (void) {
    mCount = 0 ;
  }

//--- Remove all objects and deallocate
  public: void removeAll (void)  {
    mCount = 0 ;
    macroMyDeleteArray (mArray) ;
    mCapacity = 0 ;
  }

//--- Set capacity
  public: void setCapacity (const uint64_t inNewCapacity)  {
    if (mCapacity < inNewCapacity) {
      const uint64_t newCapacity = std::max (inNewCapacity, uint64_t (31)) ;
      uint64_t * newArray = nullptr ;
      macroMyNewArray (newArray, uint64_t, uint32_t (newCapacity + 1)) ;
      for (uint64_t i = 1 ; i <= mCount ; i++) {
        newArray [i] = mArray [i] ;  // 1-Based Indexing
      }
      macroMyDeleteArray (mArray) ; mArray = newArray ;
      mCapacity = newCapacity ;
    }
  }

//--- Append objects at the end of the array
  public: void appendObject (const uint64_t inValue) {
    if (mCount >= mCapacity) {
      setCapacity (mCount + 1 + mCount / 2) ;
    }
    mCount += 1 ;
    mArray [mCount] = inValue ; // 1-Based Indexing
  }

  public: void appendObjects (const uint64_t inCount, const uint64_t inValue) {
    if (inCount > 0) {
      const uint64_t newCount = mCount + inCount ;
      setCapacity (newCount) ;
      for (uint64_t i = mCount + 1 ; i <= newCount ; i++) {
        mArray [i] = inValue ; // 1-Based Indexing
      }
      mCount = newCount ;
    }
  }

  public: void appendRandomObjects (const uint64_t inCount) {
    if (inCount > 0) {
      const uint64_t newCount = mCount + inCount ;
      setCapacity (mCount + inCount) ;
      mCount = newCount ;
    }
  }

//--- Remove leading zeros
  public: void removeLeadingZeros (void) {
    while ((mCount > 0) && (mArray [mCount] == 0)) { // 1-Based Indexing
      mCount -= 1 ;
    }
  }

//--- Element access (with index checking)
  public: uint64_t lastObject (LOCATION_ARGS) const {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (mCount COMMA_THERE) ;
    #endif
    return mArray [mCount] ; // 1-Based Indexing
  }

  public: uint64_t operator () (const uint64_t inIndex COMMA_LOCATION_ARGS) const {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (inIndex COMMA_THERE) ;
    #endif
    return mArray [inIndex] ; // 1-Based Indexing
  }

  public: uint64_t & operator () (const uint64_t inIndex COMMA_LOCATION_ARGS) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (inIndex COMMA_THERE) ;
    #endif
    return mArray [inIndex] ; // 1-Based Indexing
  }

//--- Index checking
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: void checkIndex (const uint64_t inIndex COMMA_LOCATION_ARGS) const {
      MF_AssertThere (inIndex > 0, "inIndex (%llu) < 0", int64_t (inIndex), 0) ;
      MF_AssertThere (inIndex <= mCount, "inIndex (%llu) >= mCount (%llu)", int64_t (inIndex), int64_t (mCount)) ;
    }
  #endif
} ;

//--------------------------------------------------------------------------------------------------

class BigUnsigned final {

//--- Constructors
  public: static BigUnsigned randomNumber (void) ;
  public: static BigUnsigned powerOfTwo (const uint32_t inPowerOfTwo) ;
  public: explicit BigUnsigned (void) ; // Zero
  public: explicit BigUnsigned (const uint64_t inValue) ;
  public: explicit BigUnsigned (const uint64_t inHigh, const uint64_t inLow) ;
  public: explicit BigUnsigned (const C_String & inString, const uint8_t inSeparator) ;

//--- Handle copy
  public: BigUnsigned (const BigUnsigned & inSource) ;
  public: BigUnsigned & operator = (const BigUnsigned & inSource) ;

//--- Testing value
  public: bool isZero (void) const ;
  public: bool isOne (void) const ;
  public: uint64_t componentCount (void) const  { return mArray.count () ; }

//--- Shift operators
  public: BigUnsigned leftShiftedBy (const uint32_t inShiftCount) const ;
  public: void leftShiftInPlace (const uint32_t inShiftCount) ;

//--- Operations with U64
  public: void addU64InPlace (const uint64_t inOperand) ;
  public: void subU64InPlace (const uint64_t inOperand) ;
  public: void mulU64InPlace (const uint64_t inOperand) ;

  public: BigUnsigned addingU64 (const uint64_t inOperand) const ;
  public: BigUnsigned subtractingU64 (const uint64_t inOperand) const ;
  public: BigUnsigned multiplyingByU64 (const uint64_t inOperand) const ;

  public: void dividingByU64 (const uint64_t inDivisor,
                              BigUnsigned & outQuotient,
                              uint64_t & outRemainder) const ;
  public: void divideByU64InPlace (const uint64_t inDivisor,
                                   uint64_t & outRemainder) ;

//--- Logical operations
  public: BigUnsigned oringWith (const BigUnsigned & inOperand) const ;
  public: BigUnsigned xoringWith (const BigUnsigned & inOperand) const ;
  public: BigUnsigned andingWith (const BigUnsigned & inOperand) const ;
  public: BigUnsigned complementing (void) const ;

//--- Arithmetic operations
  public: void addBigUnsignedInPlace (const BigUnsigned & inOperand) ;
  public: void subBigUnsignedInPlace (const BigUnsigned & inOperand) ;
  public: void mulBigUnsignedInPlace (const BigUnsigned & inOperand) ;
  public: BigUnsigned addingBigUnsigned (const BigUnsigned & inOperand) const ;
  public: BigUnsigned subtractingBigUnsigned (const BigUnsigned & inOperand) const ;
  public: BigUnsigned multiplingByBigUnsigned (const BigUnsigned & inOperand) const ;

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
  private: U64UniqueArray mArray ;
} ;

//--------------------------------------------------------------------------------------------------
