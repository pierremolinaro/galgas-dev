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
#include "M_machine.h"
#include "M_SourceLocation.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

#include <cinttypes>

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shifts
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::operator << (const size_t inShiftCount) const {
  if ((mSharedArray.chunkCount () > 0) && (inShiftCount > 0)) {
    const size_t n = mSharedArray.chunkCount () ;
    const size_t insertedWordCount = inShiftCount / ChunkUIntBitCount ;
    BigUnsigned result ;
    result.mSharedArray.insulateWithChunkCapacity (n + insertedWordCount + 1) ;
    result.mSharedArray.appendChunks (insertedWordCount, 0 COMMA_HERE) ;
    const size_t bitShiftCount = inShiftCount % ChunkUIntBitCount ;
    if (bitShiftCount == 0) {
      for (size_t i = 1 ; i <= n ; i++) {
        const ChunkUInt v = mSharedArray.chunkAtIndex (i COMMA_HERE) ;
        result.mSharedArray.appendChunk (v COMMA_HERE) ;
      }
    }else{
      ChunkUInt carry = 0 ;
      for (size_t i = 1 ; i <= n ; i++) {
        const ChunkUInt v = mSharedArray.chunkAtIndex (i COMMA_HERE) ;
        result.mSharedArray.appendChunk (ChunkUInt ((v << bitShiftCount) | carry) COMMA_HERE) ;
        carry = v >> (ChunkUIntBitCount - bitShiftCount) ;
      }
      if (carry != 0) {
        result.mSharedArray.appendChunk (carry COMMA_HERE) ;
      }
    }
    return result ;
  }else{
    return *this ;
  }
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::operator >> (const size_t inShiftCount) const {
  if ((mSharedArray.chunkCount () > 0) && (inShiftCount > 0)) {
    const size_t n = mSharedArray.chunkCount () ;
    const size_t wordShiftCount = inShiftCount / ChunkUIntBitCount ;
    if (wordShiftCount >= n) {
      return BigUnsigned () ;
    }else{
      BigUnsigned result ;
      result.mSharedArray.insulateWithChunkCapacity (n - wordShiftCount) ;
      result.mSharedArray.appendRandomChunks (n - wordShiftCount COMMA_HERE) ;
      const uint32_t bitShiftCount = inShiftCount % ChunkUIntBitCount ;
      if (bitShiftCount > 0) {
        ChunkUInt carry = 0 ;
        for (size_t i = n ; i > wordShiftCount ; i--) {
          const ChunkUInt v = mSharedArray.chunkAtIndex (i COMMA_HERE) ;
          result.mSharedArray.setChunkAtIndex ((v >> bitShiftCount) | carry, i - wordShiftCount COMMA_HERE) ;
          carry = ChunkUInt (v << (ChunkUIntBitCount - bitShiftCount)) ;
        }
      }else{ // wordShiftCount > 0
        for (size_t i = 1 + wordShiftCount ; i <= n ; i++) {
          result.mSharedArray.setChunkAtIndex (mSharedArray.chunkAtIndex (i COMMA_HERE), i - wordShiftCount COMMA_HERE) ;
        }
      }
      result.mSharedArray.removeLeadingZeroChunks (HERE) ;
      return result ;
    }
  }else{
    return *this ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::operator <<= (const size_t inShiftCount) {
  if (inShiftCount > 0) {
    *this = *this << inShiftCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::operator >>= (const size_t inShiftCount) {
  if (inShiftCount > 0) {
    *this = * this >> inShiftCount ;
  }
}

//--------------------------------------------------------------------------------------------------
