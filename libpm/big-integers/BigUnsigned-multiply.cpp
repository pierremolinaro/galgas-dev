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

BigUnsigned BigUnsigned::multiply (const BigUnsigned inLeft, const BigUnsigned inRight) {
  if ((inLeft.mSharedArray.chunkCount () == 0) || (inRight.mSharedArray.chunkCount () == 0)) {
    return BigUnsigned () ;
  }else{ // Operands are not zero
    BigUnsigned leftOperand ;
    BigUnsigned rightOperand ;
    if (inLeft.mSharedArray.chunkCount () < inRight.mSharedArray.chunkCount ()) {
      leftOperand = inLeft ;
      rightOperand = inRight ;
    }else{
      leftOperand = inRight ;
      rightOperand = inLeft ;
    }
    BigUnsigned result ;
    result.mSharedArray.insulateWithChunkCapacity (rightOperand.mSharedArray.chunkCount () + leftOperand.mSharedArray.chunkCount ()) ;
    result.mSharedArray.appendChunks (rightOperand.mSharedArray.chunkCount () + leftOperand.mSharedArray.chunkCount (), 0 COMMA_HERE) ;
    for (size_t i = 1 ; i <= leftOperand.mSharedArray.chunkCount () ; i++) {
      const ChunkUInt leftValue = leftOperand.mSharedArray.chunkAtIndex (i COMMA_HERE) ;
      ChunkUInt carry = 0 ;
      for (size_t j = 1 ; j <= rightOperand.mSharedArray.chunkCount () ; j++) {
      //--- multiplication 64 x 64 -> 128
        ChunkUInt high ;
        ChunkUInt low ;
        baseMultiplication (leftValue, rightOperand.mSharedArray.chunkAtIndex (j COMMA_HERE), high, low) ;
      //--- Add carry
        low += carry ;
        high += low < carry ;
      //--- Store result
        ChunkUInt v = result.mSharedArray.chunkAtIndex (i + j - 1 COMMA_HERE) ;
        v += low ;
        high += v < low ;
        result.mSharedArray.setChunkAtIndex (v, i + j - 1 COMMA_HERE) ;
        carry = high ;
      }
      size_t idx = rightOperand.mSharedArray.chunkCount () + i ;
      while (carry > 0) {
        ChunkUInt v = result.mSharedArray.chunkAtIndex (idx COMMA_HERE) ;
        v += carry ;
        carry = v < carry ;
        result.mSharedArray.setChunkAtIndex (v, idx COMMA_HERE) ;
        idx += 1 ;
      }
    }
  //--- Remove leading zeros
    result.mSharedArray.removeLeadingZeroChunks (HERE) ;
    return result ;
  }
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::operator * (const BigUnsigned inOperand) const {
  return multiply (*this, inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::operator *= (const BigUnsigned inOperand) {
  *this = multiply (*this, inOperand) ;
}

//--------------------------------------------------------------------------------------------------
