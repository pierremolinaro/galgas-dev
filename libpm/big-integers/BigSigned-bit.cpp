//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

bool BigSigned::bitAtIndex (const uint32_t inBitIndex) const {
  if (mIsPositive) {
    return mUnsigned.bitAtIndex (inBitIndex) ;
  }else if (inBitIndex < (mUnsigned.chunkCount () * ChunkUIntBitCount)) {
    const BigUnsigned negated = mUnsigned.subtractedOneAndComplemented (mUnsigned.chunkCount ()) ;
    return negated.bitAtIndex (inBitIndex) ;
  }else{
    return true ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigSigned::setBitAtIndex (const bool inBit, const uint32_t inBitIndex) {
  if (mIsPositive) {
    mUnsigned.setBitAtIndex (inBit, inBitIndex) ;
  }else{
    BigUnsigned negated = mUnsigned.subtractedOneAndComplemented (1 + inBitIndex / ChunkUIntBitCount) ;
    negated.setBitAtIndex (inBit, inBitIndex) ;
    mUnsigned = negated.complemented (negated.chunkCount ()) ;
    mUnsigned += 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigSigned::complementBitAtIndex (const uint32_t inBitIndex) {
  if (mIsPositive) {
    mUnsigned.complementBitAtIndex (inBitIndex) ;
  }else{
    const bool bit = bitAtIndex (inBitIndex) ;
    setBitAtIndex (!bit, inBitIndex) ;
  }
}

//--------------------------------------------------------------------------------------------------
