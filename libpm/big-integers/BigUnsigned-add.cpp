//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::operator + (const BigUnsigned inOperand) const {
  if (inOperand.isZero ()) {
    return *this ;
  }else if (isZero ()) {
    return inOperand ;
  }else{
    const size_t n = mSharedArray.chunkCount () ;
    const size_t maxChunkCount = std::max (n, inOperand.mSharedArray.chunkCount ()) ;
    BigUnsigned result ;
    result.mSharedArray.insulateWithChunkCapacity (maxChunkCount + 1) ;
    const size_t minChunkCount = std::min (n, inOperand.mSharedArray.chunkCount ()) ;
    ChunkUInt carry = 0 ; // 0 or 1
    for (size_t i = 1 ; i <= minChunkCount ; i++) {
      const ChunkUInt v1 = mSharedArray.chunkAtIndex (i COMMA_HERE) ;
      const ChunkUInt v2 = inOperand.mSharedArray.chunkAtIndex (i COMMA_HERE) ;
      const ChunkUInt sum1 = v1 + v2 ; // Can overflow
      ChunkUInt newCarry = sum1 < v2 ;
      const ChunkUInt sum2 = sum1 + carry ; // Can overflow
      newCarry += sum2 < sum1 ; // No overflow
      carry = newCarry ;
      result.mSharedArray.appendChunk (sum2 COMMA_HERE) ;
    }
    if (n < inOperand.mSharedArray.chunkCount ()) {
      for (size_t i = n + 1 ; i <= inOperand.mSharedArray.chunkCount () ; i++) {
        const ChunkUInt v2 = inOperand.mSharedArray.chunkAtIndex (i COMMA_HERE) ;
        const ChunkUInt sum = v2 + carry ;
        carry = sum < v2 ;
        result.mSharedArray.appendChunk (sum COMMA_HERE) ;
      }
    }else if (n > inOperand.mSharedArray.chunkCount ()) {
      for (size_t i = inOperand.mSharedArray.chunkCount () + 1 ; i <= n ; i++) {
        const ChunkUInt v2 = mSharedArray.chunkAtIndex (i COMMA_HERE) ;
        const ChunkUInt sum = v2 + carry ;
        carry = sum < v2 ;
        result.mSharedArray.appendChunk (sum COMMA_HERE) ;
      }
    }
    if (carry != 0) {
      result.mSharedArray.appendChunk (carry COMMA_HERE) ;
    }
    return result ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::operator += (const BigUnsigned inOperand) {
  if (!inOperand.isZero ()) {
    *this = *this + inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------
