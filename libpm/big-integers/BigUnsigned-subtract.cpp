//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::operator - (const BigUnsigned inOperand) const {
  if (inOperand.isZero ()) {
    return *this ;
  }else{
    const int compareResult = compare (inOperand) ;
    if (compareResult < 0) { // Error
      std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
      exit (1) ;
    }else if (compareResult > 0) {
//      printHex           ("§left  ") ;
//      inOperand.printHex ("- right") ;
      BigUnsigned result ;
      result.mSharedArray.insulateWithChunkCapacity (mSharedArray.chunkCount ()) ;
      ChunkUInt borrow = 0 ; // 0 or 1
      for (size_t i = 1 ; i <= inOperand.mSharedArray.chunkCount () ; i++) {
        const ChunkUInt left  = mSharedArray.chunkAtIndex (i COMMA_HERE) ;
        const ChunkUInt right = inOperand.mSharedArray.chunkAtIndex (i COMMA_HERE) ;
        const ChunkUInt r1 = left - right ; // Can underflow
        ChunkUInt newBorrow = left < right ;
        const ChunkUInt r2 = r1 - borrow ; // Can underflow
        newBorrow += r1 < borrow ;
        macroAssert (newBorrow <= 1, "borrow error", 0, 0) ;
        result.mSharedArray.appendChunk (r2 COMMA_HERE) ;
        borrow = newBorrow ;
      }
      for (size_t i = inOperand.mSharedArray.chunkCount () + 1 ; i <= mSharedArray.chunkCount () ; i++) {
        const ChunkUInt left = mSharedArray.chunkAtIndex (i COMMA_HERE) ;
        const ChunkUInt r = left - borrow ; // Can underflow
        borrow = left < borrow ;
        result.mSharedArray.appendChunk (r COMMA_HERE) ;
      }
      if (borrow) {
        std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
        exit (1) ;
      }
      result.mSharedArray.removeLeadingZeroChunks (HERE) ;
      return result ;
    }else{ // compareResult == 0
      return BigUnsigned () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::operator -= (const BigUnsigned inOperand) {
  if (!inOperand.isZero ()) {
    *this = *this - inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------
