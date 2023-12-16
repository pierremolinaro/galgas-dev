//
//  BigSigned.cpp
//  BigUnsigned
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

bool BigSigned::fitsInUInt32 (void) const {
  return mIsPositive && mUnsigned.fitsInUInt32 () ;
}

//--------------------------------------------------------------------------------------------------

bool BigSigned::fitsInUInt64 (void) const {
  return mIsPositive && mUnsigned.fitsInUInt64 () ;
}

//--------------------------------------------------------------------------------------------------

bool BigSigned::fitsInSInt32 (void) const {
  if (isZero ()) {
    return true ;
  }else if (mIsPositive) {
    const uint64_t v = mUnsigned.u64AtIndex (0) ;
    return v <= INT32_MAX ;
  }else{
    const uint64_t v = mUnsigned.u64AtIndex (0) ;
    return v <= (uint64_t (INT32_MAX) + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

bool BigSigned::fitsInSInt64 (void) const {
  if (isZero ()) {
    return true ;
  }else if (mIsPositive) {
    const uint64_t v = mUnsigned.u64AtIndex (0) ;
    return v <= INT64_MAX ;
  }else{
    const uint64_t v = mUnsigned.u64AtIndex (0) ;
    return v <= (uint64_t (INT64_MAX) + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t BigSigned::uint32 (void) const {
  return mUnsigned.uint32 () ;
}

//--------------------------------------------------------------------------------------------------

uint64_t BigSigned::uint64 (void) const {
  return mUnsigned.uint64 () ;
}

//--------------------------------------------------------------------------------------------------

int32_t BigSigned::int32 (void) const {
  if (isZero ()) {
    return 0 ;
  }else if (mIsPositive) {
    const uint64_t v = mUnsigned.u64AtIndex (0) ;
    return int32_t (v) ;
  }else{
    const uint64_t v = mUnsigned.u64AtIndex (0) ;
    return -int32_t (v) ;
  }
}

//--------------------------------------------------------------------------------------------------

int64_t BigSigned::int64 (void) const {
  if (isZero ()) {
    return 0 ;
  }else if (mIsPositive) {
    const uint64_t v = mUnsigned.u64AtIndex (0) ;
    return int64_t (v) ;
  }else{
    const uint64_t v = mUnsigned.u64AtIndex (0) ;
    return -int64_t (v) ;
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t BigSigned::requiredBitCountForSignedRepresentation (void) const {
  return mUnsigned.requiredBitCountForUnsignedRepresentation () ;
}

//--------------------------------------------------------------------------------------------------

uint32_t BigSigned::requiredBitCountForUnsignedRepresentation (void) const {
  return mUnsigned.requiredBitCountForUnsignedRepresentation () ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::extractBytesForUnsignedRepresentation (TC_UniqueArray <uint8_t> & outValue) const {
  mUnsigned.extractBytesForUnsignedRepresentation (outValue) ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::extractBytesForSignedRepresentation (TC_UniqueArray <uint8_t> & outValue) const {
  if (mUnsigned.isZero ()) {
    outValue.appendObject (0) ;
  }else if (mIsPositive) {
    mUnsigned.extractBytesForUnsignedRepresentation (outValue) ;
    const uint8_t msb = mUnsigned.u8AtIndex (mUnsigned.u8Count () - 1) ;
    if ((msb & 0x80) != 0) {
      outValue.appendObject (0) ;
    }
  }else{
    const BigUnsigned v = mUnsigned.subtractedOneAndComplemented (mUnsigned.chunkCount ()) ;
    v.extractBytesForUnsignedRepresentation (outValue) ;
    while ((outValue.count () > 0) && (outValue.lastObject (HERE) == 0xFF)) {
      outValue.removeLastObject (HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
