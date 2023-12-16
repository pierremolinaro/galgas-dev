//
//  BigSigned.cpp
//  BigUnsigned
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors
#endif

//--------------------------------------------------------------------------------------------------

BigSigned::BigSigned (void) : // Zero
mIsPositive (true),
mUnsigned () {
}

//--------------------------------------------------------------------------------------------------

BigSigned::BigSigned (const bool inPositive,
                      const BigUnsigned inValue) :
mIsPositive (inPositive),
mUnsigned (inValue) {
  if (mUnsigned.isZero ()) {
    mIsPositive = true ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned::BigSigned (const bool inPositive,
                      const uint64_t inValue) :
mIsPositive (inPositive),
mUnsigned (inValue) {
  if (mUnsigned.isZero ()) {
    mIsPositive = true ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned::BigSigned (const int64_t inValue) :
mIsPositive (inValue >= 0),
mUnsigned (BigUnsigned ((inValue >= 0) ? uint64_t (inValue) : uint64_t (-inValue))) {
  if (mUnsigned.isZero ()) {
    mIsPositive = true ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned::BigSigned (const bool inPositive,
                      const size_t inByteCount,
                      const uint8_t inSourceByteArray []) :
mIsPositive (inPositive),
mUnsigned (inByteCount, inSourceByteArray) {
  if (mUnsigned.isZero ()) {
    mIsPositive = true ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned::BigSigned (const std::string & inString, const uint8_t inSeparator) :
mIsPositive (true),
mUnsigned (inString, inSeparator) {
  if (mUnsigned.isZero ()) {
    mIsPositive = true ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::powerOfTwo (const bool inPositive,
                                 const uint32_t inPowerOfTwo) {
  return BigSigned (inPositive, BigUnsigned::powerOfTwo (inPowerOfTwo)) ;
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::randomNumber (void) {
  return BigSigned ((galgas_random () & 1) != 0, BigUnsigned::randomNumber ()) ;
}

//--------------------------------------------------------------------------------------------------
