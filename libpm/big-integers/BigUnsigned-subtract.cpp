//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
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
