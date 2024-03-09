//
//  BigSigned.cpp
//
//  Created by Pierre Molinaro on 08/12/2023.
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

#include "BigSigned.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

BigSignedQuotientRemainder BigSigned::divideByBigSigned (const BigSigned & inDivisor) const {
  const BigUnsignedQuotientRemainder r = mUnsigned.divideByBigUnsigned (inDivisor.mUnsigned) ;
  const bool quotientIsPositive = mIsPositive == inDivisor.mIsPositive ;
  const bool remainderIsPositive = mIsPositive ;
  return BigSignedQuotientRemainder (
    BigSigned (quotientIsPositive, r.quotient ()),
    BigSigned (remainderIsPositive, r.remainder ())
  ) ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator /= (const BigSigned inDivisor) {
  const BigSignedQuotientRemainder r = divideByBigSigned (inDivisor) ;
  *this = r.quotient () ;
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator / (const BigSigned inDivisor) const {
  const BigSignedQuotientRemainder r = divideByBigSigned (inDivisor) ;
  return r.quotient () ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator %= (const BigSigned inDivisor) {
  const BigSignedQuotientRemainder r = divideByBigSigned (inDivisor) ;
  *this = r.remainder () ;
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator % (const BigSigned inDivisor) const {
  const BigSignedQuotientRemainder r = divideByBigSigned (inDivisor) ;
  return r.remainder () ;
}

//--------------------------------------------------------------------------------------------------
