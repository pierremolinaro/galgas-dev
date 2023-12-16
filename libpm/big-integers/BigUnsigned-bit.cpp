//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"

//--------------------------------------------------------------------------------------------------

bool BigUnsigned::bitAtIndex (const uint32_t inBitIndex) const {
  if (isZero ()) {
    return false ;
  }else if (inBitIndex < (chunkCount () * ChunkUIntBitCount)) {
    const size_t u64Index = inBitIndex / ChunkUIntBitCount + 1 ;
    const size_t bitIndex = inBitIndex % ChunkUIntBitCount ;
    return (mSharedArray.chunkAtIndex (u64Index COMMA_HERE) & (ChunkUInt (ChunkUInt (1) << bitIndex))) != 0 ;
  }else{
    return false ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::setBitAtIndex (const bool inBit, const uint32_t inBitIndex) {
  if (inBitIndex < (chunkCount () * ChunkUIntBitCount)) {
    mSharedArray.insulateWithChunkCapacity (chunkCount ()) ;
    const size_t u64Index = inBitIndex / ChunkUIntBitCount + 1 ;
    const ChunkUInt mask = ChunkUInt (ChunkUInt (1) << (inBitIndex % ChunkUIntBitCount)) ;
    const ChunkUInt v = mSharedArray.chunkAtIndex (u64Index COMMA_HERE) ;
    if (inBit) {
      mSharedArray.setChunkAtIndex (v | mask, u64Index COMMA_HERE) ;
    }else{
      mSharedArray.setChunkAtIndex (v & ~ mask, u64Index COMMA_HERE) ;
    }
  }else if (inBit) {
    const size_t u64Index = inBitIndex / ChunkUIntBitCount + 1 ;
    const ChunkUInt mask = ChunkUInt (ChunkUInt (1) << (inBitIndex % ChunkUIntBitCount)) ;
    mSharedArray.insulateWithChunkCapacity (u64Index) ;
    for (size_t i = chunkCount () + 1 ; i < u64Index ; i++) {
      mSharedArray.appendChunk (0 COMMA_HERE) ;
    }
    mSharedArray.appendChunk (mask COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::complementBitAtIndex (const uint32_t inBitIndex) {
  if (inBitIndex < (chunkCount () * ChunkUIntBitCount)) {
    mSharedArray.insulateWithChunkCapacity (chunkCount ()) ;
    const size_t u64Index = inBitIndex / ChunkUIntBitCount + 1 ;
    const ChunkUInt mask = ChunkUInt (ChunkUInt (1) << (inBitIndex % ChunkUIntBitCount)) ;
    const ChunkUInt v = mSharedArray.chunkAtIndex (u64Index COMMA_HERE) ;
    if ((v & mask) == 0) {
      mSharedArray.setChunkAtIndex (v | mask, u64Index COMMA_HERE) ;
    }else{
      mSharedArray.setChunkAtIndex (v & ~ mask, u64Index COMMA_HERE) ;
      mSharedArray.removeLeadingZeroChunks (HERE) ;
    }
  }else{
    const size_t u64Index = inBitIndex / ChunkUIntBitCount + 1 ;
    const ChunkUInt mask = ChunkUInt (ChunkUInt (1) << (inBitIndex % ChunkUIntBitCount)) ;
    mSharedArray.insulateWithChunkCapacity (u64Index) ;
    for (size_t i = chunkCount () + 1 ; i < u64Index ; i++) {
      mSharedArray.appendChunk (0 COMMA_HERE) ;
    }
    mSharedArray.appendChunk (mask COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
