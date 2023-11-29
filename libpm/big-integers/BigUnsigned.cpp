#include <iostream>

//--------------------------------------------------------------------------------------------------

#include <cinttypes>

//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"
#include "utilities/M_machine.h"
#include "utilities/galgas-random.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark U128 Operations
#endif

//--------------------------------------------------------------------------------------------------

#ifndef __SIZEOF_INT128__
  static const uint64_t HALF_MASK = 0xFFFF'FFFF ;
#endif

//--------------------------------------------------------------------------------------------------

#ifdef __SIZEOF_INT128__
  static void mul64x64to128 (const uint64_t inLeft,
                             const uint64_t inRight,
                             uint64_t & outHigh,
                             uint64_t & outLow) {
    const __uint128_t left = inLeft ;
    const __uint128_t right = inRight ;
    const __uint128_t product = left * right ;
    outHigh = uint64_t (product >> 64) ;
    outLow = uint64_t (product) ;
  }
#else
  static void mul64x64to128 (const uint64_t inLeft,
                             const uint64_t inRight,
                             uint64_t & outHigh,
                             uint64_t & outLow) {
    const uint64_t leftH = inLeft >> 32 ;
    const uint64_t leftL = (inLeft & HALF_MASK) ;
    const uint64_t rightH = inRight >> 32 ;
    const uint64_t rightL = (inRight & HALF_MASK) ;
  //--- Low word
    outLow = leftL * rightL ;
  //--- High word
    outHigh = leftH * rightH ;
  //--- First intermediate
    const uint64_t leftH_rightL = leftH * rightL ;
    const uint64_t leftH_rightL_forLowWord = leftH_rightL << 32 ;
    outLow += leftH_rightL_forLowWord ;
    outHigh += outLow < leftH_rightL_forLowWord ; // Propagate carry
    const uint64_t leftH_rightL_forHighWord = leftH_rightL >> 32 ;
    outHigh += leftH_rightL_forHighWord ; // No carry
  //--- Second intermediate
    const uint64_t leftL_rightH = leftL * rightH ;
    const uint64_t leftL_rightH_forLowWord = leftL_rightH << 32 ;
    outLow += leftL_rightH_forLowWord ;
    outHigh += outLow < leftL_rightH_forLowWord ; // Propagate carry
    const uint64_t leftL_rightH_forHighWord = leftL_rightH >> 32 ;
    outHigh += leftL_rightH_forHighWord ; // No carry
  }
#endif

//--------------------------------------------------------------------------------------------------
// https://copyprogramming.com/howto/mostly-portable-128-by-64-bit-division
// https://www.codeproject.com/Tips/785014/UInt-Division-Modulus
//--------------------------------------------------------------------------------------------------

#ifdef __SIZEOF_INT128__
  static void divmod128by64 (const uint64_t inDividendH, // inDividendH < inDivisor
                             const uint64_t inDividendL,
                             const uint64_t inDivisor,
                             uint64_t & outQuotient,
                             uint64_t & outRemainder) {
      __uint128_t dividend = inDividendH ;
      dividend <<= 64 ;
      dividend |= inDividendL ;
      outQuotient = uint64_t (dividend / inDivisor) ;
      outRemainder = uint64_t (dividend % inDivisor) ;
  }
#else
  static void divmod128by64 (const uint64_t inDividendH, // inDividendH < inDivisor
                             const uint64_t inDividendL,
                             const uint64_t inDivisor,
                             uint64_t & outQuotient,
                             uint64_t & outRemainder) {
      const uint64_t b = 1ll << 32;
      uint64_t un1, un0, vn1, vn0, q1, q0, un32, un21, un10, rhat, left, right;

      const int s = __builtin_clzll (inDivisor) ;

      const uint64_t v = inDivisor << s ;
      vn1 = v >> 32 ;
      vn0 = v & HALF_MASK;

      if (s > 0)
      {
          un32 = (inDividendH << s) | (inDividendL >> (64 - s));
          un10 = inDividendL << s;
      }
      else
      {
          un32 = inDividendH;
          un10 = inDividendL;
      }

      un1 = un10 >> 32;
      un0 = un10 & HALF_MASK;

      q1 = un32 / vn1;
      rhat = un32 % vn1;

      left = q1 * vn0;
      right = (rhat << 32) + un1;
  again1:
      if ((q1 >= b) || (left > right))
      {
          --q1;
          rhat += vn1;
          if (rhat < b)
          {
              left -= vn0;
              right = (rhat << 32) | un1;
              goto again1;
          }
      }

      un21 = (un32 << 32) + (un1 - (q1 * v));

      q0 = un21 / vn1;
      rhat = un21 % vn1;

      left = q0 * vn0;
      right = (rhat << 32) | un0;
  again2:
      if ((q0 >= b) || (left > right))
      {
          --q0;
          rhat += vn1;
          if (rhat < b)
          {
              left -= vn0;
              right = (rhat << 32) | un0;
              goto again2;
          }
      }

      outRemainder = ((un21 << 32) + (un0 - (q0 * v))) >> s;
      outQuotient = (q1 << 32) | q0;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef __SIZEOF_INT128__
  static void div128By64Special (const uint64_t inDividendH, // inDividendH < inDivisor
                                 const uint64_t inDividendL,
                                 const uint64_t inDivisor, // inDivisor >= 0x'8000'0000'0000'0000
                                 uint64_t & outQuotient) {
    __uint128_t dividend = inDividendH ;
    dividend <<= 64 ;
    dividend |= inDividendL ;
    outQuotient = uint64_t (dividend / inDivisor) ;
  }
#else
  static void div128By64Special (const uint64_t inDividendH, // inDividendH < inDivisor
                                 const uint64_t inDividendL,
                                 const uint64_t inDivisor, // inDivisor >= 0x'8000'0000'0000'0000
                                 uint64_t & outQuotient) {
      const uint64_t vn1 = inDivisor >> 32 ;
      const uint64_t vn0 = inDivisor & HALF_MASK ;
      const uint64_t un32 = inDividendH ;

      const uint64_t un1 = inDividendL >> 32;
      const uint64_t un0 = inDividendL & HALF_MASK;

      uint64_t q1 = inDividendH / vn1 ;
      uint64_t rhat = inDividendH % vn1 ;

      uint64_t left = q1 * vn0;
      uint64_t right = (rhat << 32) + un1 ;
  again1:
      if ((q1 > HALF_MASK) || (left > right)) {
          --q1 ;
          rhat += vn1;
          if (rhat <= HALF_MASK) {
              left -= vn0;
              right = (rhat << 32) | un1;
              goto again1;
          }
      }

      const uint64_t un21 = (un32 << 32) + (un1 - (q1 * inDivisor));

      uint64_t q0 = un21 / vn1;
      rhat = un21 % vn1;

      left = q0 * vn0;
      right = (rhat << 32) | un0;
  again2:
      if ((q0 > HALF_MASK) || (left > right)) {
          --q0;
          rhat += vn1;
          if (rhat <= HALF_MASK)
          {
              left -= vn0;
              right = (rhat << 32) | un0;
              goto again2;
          }
      }

    outQuotient = (q1 << 32) | q0;
  }
#endif

//--------------------------------------------------------------------------------------------------
// https://gcc.gnu.org/onlinedocs/gcc/Integer-Overflow-Builtins.html
// https://fr.wikipedia.org/wiki/Algorithme_de_multiplication_d%27entiers
//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::randomNumber (void) {
  BigUnsigned result ;
  const size_t randomSize = 1 + size_t (galgas_random ()) % 20 ;
  for (size_t i = 0 ; i < randomSize ; i++) {
    uint64_t v = uint64_t (galgas_random ()) ;
    v <<= 32 ;
    v |= uint64_t (galgas_random ()) ;
    result.mArray.appendObject (v) ;
  }
  result.mArray.removeLeadingZeros () ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned::BigUnsigned (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

BigUnsigned::BigUnsigned (const uint64_t inValue) :
mArray () {
  if (inValue != 0) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

BigUnsigned::BigUnsigned (const uint64_t inHigh, const uint64_t inLow) :
mArray () {
  mArray.appendObject (inLow) ;
  mArray.appendObject (inHigh) ;
  mArray.removeLeadingZeros () ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::powerOfTwo (const uint32_t inPowerOfTwo) {
  const uint64_t wordCount = 1 + inPowerOfTwo / 64 ;
  const int32_t bitIndex = inPowerOfTwo % 64 ;
  BigUnsigned result ;
  result.mArray.appendObjects (wordCount - 1, 0) ;
  result.mArray.appendObject (uint64_t (1) << bitIndex) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned::BigUnsigned (const C_String & inString, const uint8_t inSeparator) :
mArray () {
   uint64_t idx = 0 ;
   uint64_t accumulator = 0 ;
   for (int32_t i = 0 ; i < inString.length () ; i++) {
     const utf32 c = inString (i COMMA_HERE) ;
     if ((UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9')) {
       accumulator *= 10 ;
       accumulator += UNICODE_VALUE (c) - '0' ;
       idx += 1 ;
       if (idx == 18) {
         idx = 0 ;
         const uint64_t multiplier = 1'000'000'000'000'000'000 ; // 10**18
         mulU64InPlace (multiplier) ;
         addU64InPlace (accumulator) ;
         accumulator = 0 ;
       }
     }else if (UNICODE_VALUE (c) != inSeparator) {
       std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
       exit (1) ;
     }
   }
   if (idx > 0) {
     uint64_t multiplier = 10 ;
     for (uint64_t i = 1 ; i < idx ; i++) {
       multiplier *= 10 ;
     }
     mulU64InPlace (multiplier) ;
     addU64InPlace (accumulator) ;
   }
}


//--------------------------------------------------------------------------------------------------

BigUnsigned::BigUnsigned (const BigUnsigned & inSource) :
mArray () {
  inSource.mArray.copyTo (mArray) ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned & BigUnsigned::operator = (const BigUnsigned & inSource) {
  inSource.mArray.copyTo (mArray) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Testing value
#endif

//----------------------------------------------------------------------------------------------------------------------

bool BigUnsigned::isZero (void) const {
  return mArray.count () == 0 ;
}

//----------------------------------------------------------------------------------------------------------------------

bool BigUnsigned::isOne (void) const {
  return (mArray.count () == 1) && (mArray (1 COMMA_HERE) == 1) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operations with U64
#endif

//--------------------------------------------------------------------------------------------------

void BigUnsigned::addU64InPlace (const uint64_t inOperand) {
  if (mArray.count () == 0) { // Receiver is zero
    if (inOperand != 0) {
      mArray.appendObject (inOperand) ;
    }
  }else{
    uint64_t carry = inOperand ;
    for (uint64_t i = 1 ; i <= mArray.count () ; i++) {
      const uint64_t sum = mArray (i COMMA_HERE) + carry ;
      mArray (i COMMA_HERE) = sum ;
      carry = sum < carry ;
    }
    if (carry != 0) {
      mArray.appendObject (carry) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::addingU64 (const uint64_t inOperand) const {
  BigUnsigned result = *this ;
  result.addU64InPlace (inOperand) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::subtractingU64 (const uint64_t inOperand) const {
  BigUnsigned result = *this ;
  result.subU64InPlace (inOperand) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::subU64InPlace (const uint64_t inOperand) {
  if (inOperand != 0) {
    if ((mArray.count () == 1) && (mArray.lastObject (HERE) < inOperand)) {
      std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
      exit (1) ;
    }else{
      uint64_t carry = inOperand ;
      for (uint64_t i = 1 ; i <= mArray.count () ; i++) {
        const uint64_t v = mArray (i COMMA_HERE) ;
        mArray (i COMMA_HERE) = v - carry ;
        carry = v < carry ;
      }
      if (carry > 0) {
        std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
        exit (1) ;
      }
      mArray.removeLeadingZeros () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::mulU64InPlace (const uint64_t inOperand) {
  if (inOperand == 0) {
    mArray.removeAllKeepingCapacity () ;
  }else if (mArray.count () != 0) { // Operands are not zero
    uint64_t carry = 0 ;
    for (uint64_t i = 1 ; i <= mArray.count () ; i++) {
    //--- multiplication 64 x 64 -> 128
      uint64_t high ;
      uint64_t low ;
      mul64x64to128 (mArray (i COMMA_HERE), inOperand, high, low) ;
    //--- Add carry
      low += carry ;
      high += (low < carry) ;
    //--- Store result
      mArray (i COMMA_HERE) = low ;
      carry = high ;
    }
    if (carry > 0) {
      mArray.appendObject (carry) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::multiplyingByU64 (const uint64_t inOperand) const {
  BigUnsigned result = *this ;
  result.mulU64InPlace (inOperand) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::dividingByU64 (const uint64_t inDivisor,
                                 BigUnsigned & outQuotient,
                                 uint64_t & outRemainder) const {
  outQuotient = *this ;
  outQuotient.divideByU64InPlace (inDivisor, outRemainder) ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::divideByU64InPlace (const uint64_t inDivisor,
                                      uint64_t & outRemainder) {
  if (inDivisor == 0) {
    std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
    exit (1) ;
  }else if (inDivisor == 1) {
    outRemainder = 0 ;
  }else if (mArray.count () == 1) {
    outRemainder = mArray (1 COMMA_HERE) % inDivisor ;
    mArray (1 COMMA_HERE) /= inDivisor ;
    if (mArray (1 COMMA_HERE) == 0) {
      mArray.removeAllKeepingCapacity () ;
    }
  }else{
    outRemainder = 0 ;
    for (uint64_t i = mArray.count () ; i > 0 ; i--) {
      uint64_t quotient ;
      uint64_t r ;
      divmod128by64 (outRemainder, mArray (i COMMA_HERE), inDivisor, quotient, r) ;
      mArray (i COMMA_HERE) = quotient ;
      outRemainder = r ;
    }
    mArray.removeLeadingZeros () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shifts
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::leftShiftedBy (const uint32_t inShiftCount) const {
  BigUnsigned result ;
  if (mArray.count () > 0) {
    if (inShiftCount == 0) {
      result = *this ;
    }else{
      const uint64_t insertedWordCount = inShiftCount / 64 ;
      const uint32_t shift = inShiftCount % 64 ;
      if (shift == 0) {
        result.mArray.setCapacity (mArray.count () + insertedWordCount) ;
        result.mArray.appendObjects (insertedWordCount, 0) ;
        for (uint64_t i = 1 ; i <= mArray.count () ; i++) {
          result.mArray.appendObject (mArray (i COMMA_HERE)) ;
        }
      }else{
        result.mArray.setCapacity (mArray.count () + insertedWordCount + 1) ;
        result.mArray.appendObjects (insertedWordCount, 0) ;
        uint64_t carry = 0 ;
        for (uint64_t i = 1 ; i <= mArray.count () ; i++) {
          const uint64_t v = mArray (i COMMA_HERE) ;
          result.mArray.appendObject ((v << shift) | carry) ;
          carry = v >> (64 - shift) ;
        }
        if (carry > 0) {
          result.mArray.appendObject (carry) ;
        }
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::leftShiftInPlace (const uint32_t inShiftCount) {
  if ((mArray.count () > 0) && (inShiftCount > 0)) {
    const uint64_t n = mArray.count () ;
    const uint64_t insertedWordCount = inShiftCount / 64 ;
    mArray.setCapacity (n + insertedWordCount + 1) ;
    mArray.appendRandomObjects (insertedWordCount) ;
    const uint32_t shift = inShiftCount % 64 ;
    if (shift > 0) {
      uint64_t carry = 0 ;
      for (uint64_t i = 1 ; i <= n ; i++) {
        const uint64_t v = mArray (i COMMA_HERE) ;
        mArray (i + insertedWordCount COMMA_HERE) = (v << shift) | carry ;
        carry = v >> (64 - shift) ;
      }
      if (carry != 0) {
        mArray.appendObject (carry) ;
      }
      for (uint64_t i = 1 ; i <= insertedWordCount ; i++) {
        mArray (i COMMA_HERE) = 0 ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Add, subtract
#endif

//--------------------------------------------------------------------------------------------------

void BigUnsigned::addBigUnsignedInPlace (const BigUnsigned & inOperand) {
  if (!inOperand.isZero ()) {
    const uint64_t n = mArray.count () ;
    if (n == 0) { // Receiver is zero
      inOperand.mArray.copyTo (mArray) ;
    }else{ // Operand is not zero
      uint64_t carry = 0 ;
      const uint64_t maxSize = std::max (n, inOperand.mArray.count ()) ;
      mArray.setCapacity (maxSize + 1) ;
      const uint64_t minSize = std::min (n, inOperand.mArray.count ()) ;
      for (uint64_t i = 1 ; i <= minSize ; i++) {
        const uint64_t v1 = mArray (i COMMA_HERE) ;
        const uint64_t v2 = inOperand.mArray (i COMMA_HERE) ;
        const uint64_t sum = v1 + v2 + carry ;
        carry = (sum < v1) || (sum < v2) ;
        mArray (i COMMA_HERE) = sum ;
      }
      if (n < inOperand.mArray.count ()) {
        for (uint64_t i = n + 1 ; i <= inOperand.mArray.count () ; i++) {
          const uint64_t v2 = inOperand.mArray (i COMMA_HERE) ;
          const uint64_t sum = v2 + carry ;
          carry = sum < v2 ;
          mArray.appendObject (sum) ;
        }
      }else if (n > inOperand.mArray.count ()) {
        for (uint64_t i = inOperand.mArray.count () + 1 ; i <= n ; i++) {
          const uint64_t v2 = mArray (i COMMA_HERE) ;
          const uint64_t sum = v2 + carry ;
          carry = sum < v2 ;
          mArray (i COMMA_HERE) = sum ;
        }
      }
      if (carry != 0) {
        mArray.appendObject (carry) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::addingBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result = *this ;
  result.addBigUnsignedInPlace (inOperand) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::subBigUnsignedInPlace (const BigUnsigned & inOperand) {
  if (!inOperand.isZero ()) {
    const int compareResult = compare (inOperand) ;
    if (compareResult < 0) { // Error
      std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
      exit (1) ;
    }else if (compareResult > 0) {
      uint64_t borrow = 0 ; // 0 or 1
      for (uint64_t i = 1 ; i <= inOperand.mArray.count () ; i++) {
        uint64_t v = inOperand.mArray (i COMMA_HERE) ;
        if (borrow > 0) {
          v += 1 ;
          if (v == 0) {
            borrow = 1 ;
          }else{
            const uint64_t r = mArray (i COMMA_HERE) - v ;
            borrow = mArray (i COMMA_HERE) < v ;
            mArray (i COMMA_HERE) = r ;
          }
        }else{
          borrow = mArray (i COMMA_HERE) < v ;
          const uint64_t r = mArray (i COMMA_HERE) - v ;
          mArray (i COMMA_HERE) = r ;
        }
      }
      for (uint64_t i = inOperand.mArray.count () + 1 ; (borrow > 0) && (i <= mArray.count ()) ; i++) {
        borrow = mArray (i COMMA_HERE) == 0 ;
        mArray (i COMMA_HERE) -- ;
      }
      if (borrow > 0) {
        std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
        exit (1) ;
      }
      mArray.removeLeadingZeros () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::subtractingBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result = *this ;
  result.subBigUnsignedInPlace (inOperand) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Multiply
#endif

//--------------------------------------------------------------------------------------------------

void BigUnsigned::mulBigUnsignedInPlace (const BigUnsigned & inOperand) {
  BigUnsigned result ;
  if ((mArray.count () != 0) && (inOperand.mArray.count () != 0)) { // Operands are not zero
    result.mArray.appendObjects (mArray.count () + inOperand.mArray.count (), 0) ;
    for (uint64_t i = 1 ; i <= inOperand.mArray.count () ; i++) {
      uint64_t carry = 0 ;
      for (uint64_t j = 1 ; j <= mArray.count () ; j++) {
      //--- multiplication 64 x 64 -> 128
        uint64_t high ;
        uint64_t low ;
        mul64x64to128 (mArray (j COMMA_HERE), inOperand.mArray (i COMMA_HERE), high, low) ;
      //--- Add carry
        low += carry ;
        high += low < carry ;
      //--- Store result
        uint64_t v = result.mArray (i + j - 1 COMMA_HERE) ;
        v += low ;
        high += v < low ;
        result.mArray (i + j - 1 COMMA_HERE) = v ;
        carry = high ;
      }
      uint64_t idx = mArray.count () + i ;
      while (carry > 0) {
        uint64_t v = result.mArray (idx COMMA_HERE) ;
        v += carry ;
        carry = v < carry ;
        result.mArray (idx COMMA_HERE) = v ;
        idx += 1 ;
      }
    }
  //--- Remove leading zeros
    result.mArray.removeLeadingZeros () ;
  }
  *this = result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::multiplingByBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if ((mArray.count () != 0) && (inOperand.mArray.count () != 0)) { // Operands are not zero
    result.mArray.appendObjects (mArray.count () + inOperand.mArray.count (), 0) ;
    for (uint64_t i = 1 ; i <= inOperand.mArray.count () ; i++) {
      uint64_t carry = 0 ;
      for (uint64_t j = 1 ; j <= mArray.count () ; j++) {
      //--- multiplication 64 x 64 -> 128
        uint64_t high ;
        uint64_t low ;
        mul64x64to128 (mArray (j COMMA_HERE), inOperand.mArray (i COMMA_HERE), high, low) ;
      //--- Add carry
        low += carry ;
        high += low < carry ;
      //--- Store result
        uint64_t v = result.mArray (i + j - 1 COMMA_HERE) ;
        v += low ;
        high += v < low ;
        result.mArray (i + j - 1 COMMA_HERE) = v ;
        carry = high ;
      }
      uint64_t idx = mArray.count () + i ;
      while (carry > 0) {
        uint64_t v = result.mArray (idx COMMA_HERE) ;
        v += carry ;
        carry = v < carry ;
        result.mArray (idx COMMA_HERE) = v ;
        idx += 1 ;
      }
    }
  //--- Remove leading zeros
    result.mArray.removeLeadingZeros () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Divide
#endif

//--------------------------------------------------------------------------------------------------

void BigUnsigned::divideByBigUnsigned (const BigUnsigned & inDivisor,
                                       BigUnsigned & outQuotient,
                                       BigUnsigned & outRemainder) const {
  BigUnsigned result ;
  outQuotient.mArray.removeAllKeepingCapacity () ;
  outRemainder.mArray.removeAllKeepingCapacity () ;
  if (inDivisor.isZero ()) { // Divide by 0
    std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
    exit (1) ;
  }else if (inDivisor.isOne ()) { // Divide by 1: quotient <- dividend, remainder <- 0
    outQuotient = *this ;
  }else if (mArray.count () < inDivisor.mArray.count ()) { // dividend < divisor: remainder <- dividend, quotient <- 0
    outRemainder = *this ;
  }else{
    internalDivide (*this, inDivisor, outQuotient, outRemainder) ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::internalDivide (const BigUnsigned & inDividend,
                                  const BigUnsigned & inDivisor,
                                  BigUnsigned & outQuotient,
                                  BigUnsigned & outRemainder) {
  const uint32_t s = uint32_t (__builtin_clzll (inDivisor.mArray.lastObject (HERE))) ;
  MF_Assert (s <= 63, "Error", 0, 0) ;
  outRemainder = inDividend ;
  const BigUnsigned divisor = inDivisor.leftShiftedBy (s) ;
  if (outRemainder.mArray.lastObject (HERE) >= divisor.mArray.lastObject (HERE)) {
    outRemainder.mArray.appendObject (0) ;
  }
  const uint64_t iterationCount = outRemainder.mArray.count () - divisor.mArray.count () ;
  outQuotient.mArray.appendRandomObjects (iterationCount) ;
  for (uint64_t itx = iterationCount ; itx > 0 ; itx--) {
    uint64_t quotient ;
    const uint64_t remainderIndexH = outRemainder.mArray.count () + itx - iterationCount ;
    div128By64Special (outRemainder.mArray (remainderIndexH COMMA_HERE), // inDividendH < divisor
                       outRemainder.mArray (remainderIndexH - 1 COMMA_HERE), // inDividendL
                       divisor.mArray.lastObject (HERE), // divisor >= 0x'8000'0000'0000'0000
                       quotient) ;
    outQuotient.mArray (itx COMMA_HERE) = quotient ;
    if (quotient > 0) {
      uint64_t currentCarry = 0 ;
      for (uint64_t i = 1 ; i <= divisor.mArray.count () ; i++) {
        uint64_t resultH ;
        uint64_t resultL ;
        mul64x64to128 (quotient, divisor.mArray (i COMMA_HERE), resultH, resultL) ;
        resultL += currentCarry ;
        resultH += resultL < currentCarry ; // Propagate Overflow
        currentCarry = resultH ;
        const uint64_t remainderIndex = i + itx - 1 ;
        currentCarry += outRemainder.mArray (remainderIndex COMMA_HERE) < resultL ;
        outRemainder.mArray (remainderIndex COMMA_HERE) -= resultL ;
      }
      const uint64_t remainderLastIndex = itx + divisor.mArray.count () ;
      bool underflow = outRemainder.mArray (remainderLastIndex COMMA_HERE) < currentCarry ;
      outRemainder.mArray (remainderLastIndex COMMA_HERE) -= currentCarry ;
      MF_Assert ((outRemainder.mArray (remainderLastIndex COMMA_HERE) == 0) || (outRemainder.mArray (remainderLastIndex COMMA_HERE) == UINT64_MAX), "last remainder error (%llx)", int64_t (outRemainder.mArray (remainderLastIndex COMMA_HERE)), 0) ;
      MF_Assert (underflow == (outRemainder.mArray (remainderLastIndex COMMA_HERE) == UINT64_MAX), "last remainder error", 0, 0) ;
      while (underflow) {
        MF_Assert (outQuotient.mArray (itx COMMA_HERE) > 0, "Error", 0, 0) ; ; // Quotient is > 0, no underflow
        outQuotient.mArray (itx COMMA_HERE) -= 1 ;
        uint64_t carry = 0 ; // 0 or 1
        for (uint64_t i = 1 ; i <= divisor.mArray.count () ; i++) {
          const uint64_t v1 = outRemainder.mArray (i + itx - 1 COMMA_HERE) ;
          const uint64_t v2 = divisor.mArray (i COMMA_HERE) ;
          uint64_t sum = v1 + v2 ;
          const uint64_t newCarry = sum < v1 ;
          sum += carry ; // No overflow here
          outRemainder.mArray (i + itx - 1 COMMA_HERE) = sum ;
          carry = newCarry ;
          MF_Assert (carry <= 1, "Invalid carry", 0, 0) ;
        }
        outRemainder.mArray (divisor.mArray.count () + itx COMMA_HERE) += carry ;
        underflow = carry == 0 ;
      }
    }
  }
//--- Remove remainder leading zeros
  outRemainder.mArray.removeLeadingZeros () ;
//--- Adjust quotient and remainder
  if (s > 0) {
    outQuotient.leftShiftInPlace (s) ;
    MF_Assert (outRemainder.mArray.count () <= inDivisor.mArray.count (), "Error", 0, 0) ;
    if (outRemainder.mArray.count () == inDivisor.mArray.count ()) {
      uint64_t divisorForAdjust = outRemainder.mArray.lastObject (HERE) / inDivisor.mArray.lastObject (HERE) ;
      if (divisorForAdjust > 0) {
        uint64_t carry = 0 ;
        for (uint64_t i = 1 ; i <= outRemainder.mArray.count () ; i++) {
          uint64_t resultH ;
          uint64_t resultL ;
          mul64x64to128 (divisorForAdjust, inDivisor.mArray (i COMMA_HERE), resultH, resultL) ;
          resultL += carry ; // Can overflow
          resultH += resultL < carry ; // Handle Overflow
          carry = resultH ;
          carry += outRemainder.mArray (i COMMA_HERE) < resultL ;
          outRemainder.mArray (i COMMA_HERE) -= resultL ;
        }
        if (carry > 0) {
          outRemainder.mArray.appendObject (~uint64_t (0)) ;
        }
        while (carry > 0) {
          divisorForAdjust -= 1 ;
          carry = 0 ;
          for (uint64_t i = 1 ; i <= inDivisor.mArray.count () ; i++) {
            const uint64_t v1 = outRemainder.mArray (i COMMA_HERE) ;
            const uint64_t v2 = inDivisor.mArray (i COMMA_HERE) ;
            const uint64_t v = v1 + v2 ; // Can overflow
            const uint64_t overflow = v < v1 ;
            outRemainder.mArray (i COMMA_HERE) = v + carry ; // No overflow
            carry = overflow ;
          }
          for (uint64_t i = inDivisor.mArray.count () + 1 ; i <= outRemainder.mArray.count () ; i++) {
            uint64_t v = outRemainder.mArray (i COMMA_HERE) ;
            v += carry ;
            const uint64_t overflow = v < carry ;
            outRemainder.mArray (i COMMA_HERE) = v ;
            carry = overflow ;
          }
        }
     //   std::cout << " s " << s << "\n" ;
        MF_Assert (carry == 0, "Error (%llu), divisorForAdjust %llu", int64_t (carry), int64_t (divisorForAdjust)) ;
        outQuotient.addU64InPlace (divisorForAdjust) ;
      }
    }
  //--- Remove remainder leading zeros
    outRemainder.mArray.removeLeadingZeros () ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::divideByBigUnsignedOld (const BigUnsigned & inDivisor,
                                          BigUnsigned & outQuotient,
                                          BigUnsigned & outRemainder) const {
  BigUnsigned result ;
  outQuotient = BigUnsigned () ;
  outRemainder = BigUnsigned () ;
  if (inDivisor.isZero ()) { // Divide by 0
    std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
    exit (1) ;
  }else if (inDivisor.isOne ()) { // Divide by 1: quotient <- dividend, remainder <- 0
    outQuotient = *this ;
  }else if (mArray.count () < inDivisor.mArray.count ()) { // dividend < divisor: remainder <- dividend, quotient <- 0
    outRemainder = *this ;
  }else{
    internalDivideOld (*this, inDivisor, outQuotient, outRemainder) ;
  }
}

//--------------------------------------------------------------------------------------------------

static uint64_t maxAdjustCountOld = 0 ;

void BigUnsigned::internalDivideOld (const BigUnsigned & inDividend,
                                     const BigUnsigned & inDivisor,
                                     BigUnsigned & outQuotient,
                                     BigUnsigned & outRemainder) {
  outRemainder = inDividend ;
  if (outRemainder.mArray.lastObject (HERE) >= inDivisor.mArray.lastObject (HERE)) {
    outRemainder.mArray.appendObject (0) ;
  }
  const uint64_t iterationCount = outRemainder.mArray.count () - inDivisor.mArray.count () ;
  outQuotient.mArray.appendRandomObjects (iterationCount) ;
  for (uint64_t itx = iterationCount ; itx > 0 ; itx--) {
    uint64_t quotient ;
    const uint64_t remainderIndexH = outRemainder.mArray.count () + itx - iterationCount ;
    div128By64Special (outRemainder.mArray (remainderIndexH COMMA_HERE), // inDividendH < inDivisor
                       outRemainder.mArray (remainderIndexH - 1 COMMA_HERE),
                       inDivisor.mArray.lastObject (HERE),
                       quotient) ;
    outQuotient.mArray (itx COMMA_HERE) = quotient ;
    if (quotient > 0) {
      uint64_t currentCarry = 0 ;
      for (uint64_t i = 1 ; i <= inDivisor.mArray.count () ; i++) {
        uint64_t resultH ;
        uint64_t resultL ;
        mul64x64to128 (quotient, inDivisor.mArray (i COMMA_HERE), resultH, resultL) ;
        resultL += currentCarry ;
        if (resultL < currentCarry) { // Overflow
          resultH += 1 ; // Propagate overflow
          MF_Assert (resultH != 0, "resultH is null", 0, 0) ;
        }
        currentCarry = resultH ;
        const uint64_t remainderIndex = i + itx ;
        if (outRemainder.mArray (remainderIndex COMMA_HERE) < resultL) {
          currentCarry += 1 ;
          MF_Assert (currentCarry != 0, "borrow is null", 0, 0) ;
        }
        outRemainder.mArray (remainderIndex COMMA_HERE) -= resultL ;
      }
      const uint64_t remainderLastIndex = itx + inDivisor.mArray.count () ;
      bool underflow = outRemainder.mArray (remainderLastIndex COMMA_HERE) < currentCarry ;
      outRemainder.mArray (remainderLastIndex COMMA_HERE) -= currentCarry ;
      MF_Assert ((outRemainder.mArray (remainderLastIndex COMMA_HERE) == 0) || (outRemainder.mArray (remainderLastIndex COMMA_HERE) == UINT64_MAX), "last remainder error", 0, 0) ;
      MF_Assert (underflow == (outRemainder.mArray (remainderLastIndex COMMA_HERE) == UINT64_MAX), "last remainder error", 0, 0) ;
      uint64_t adjustCount = 0 ;
      while (underflow) {
        adjustCount += 1 ;
        outQuotient.mArray (itx COMMA_HERE) -= 1 ;
        uint64_t carry = 0 ; // 0 or 1
        for (uint64_t i = 1 ; i <= inDivisor.mArray.count () ; i++) {
          const uint64_t v1 = outRemainder.mArray (i + itx COMMA_HERE) ;
          const uint64_t v2 = inDivisor.mArray (i COMMA_HERE) ;
          uint64_t sum = v1 + v2 ;
          const uint64_t carry1 = sum < v1 ;
          sum += carry ;
          const uint64_t carry2 = sum < carry ;
          MF_Assert (carry2 == 0, "Invalid carry", 0, 0) ;
          outRemainder.mArray (i + itx COMMA_HERE) = sum ;
          carry = carry1 + carry2 ;
          MF_Assert (carry <= 1, "Invalid carry", 0, 0) ;
        }
        outRemainder.mArray (inDivisor.mArray.count () + itx COMMA_HERE) += carry ;
        underflow = carry == 0 ;
      }
      if (maxAdjustCountOld < adjustCount) {
        maxAdjustCountOld = adjustCount ;
        std::cout << "maxAdjustCountOld " << maxAdjustCountOld << "\n" ;
      }
    }
  }
//--- Remove leading zeros
  outRemainder.mArray.removeLeadingZeros () ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Logic operations
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::oringWith (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if (mArray.count () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mArray.count () == 0) { // Operand is zero
    result = *this ;
  }else{
    const uint64_t maxSize = std::max (mArray.count (), inOperand.mArray.count ()) ;
    result.mArray.setCapacity (maxSize) ;
    const uint64_t minSize = std::min (mArray.count (), inOperand.mArray.count ()) ;
    for (uint64_t i = 1 ; i <= minSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE) | inOperand.mArray (i COMMA_HERE)) ;
    }
    for (uint64_t i = mArray.count () + 1 ; i <= maxSize ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
    for (uint64_t i = inOperand.mArray.count () + 1 ; i <= maxSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::xoringWith (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if (mArray.count () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mArray.count () == 0) { // Operand is zero
    result = *this ;
  }else{
    const uint64_t maxSize = std::max (mArray.count (), inOperand.mArray.count ()) ;
    result.mArray.setCapacity (maxSize) ;
    const uint64_t minSize = std::min (mArray.count (), inOperand.mArray.count ()) ;
    for (uint64_t i = 1 ; i <= minSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE) ^ inOperand.mArray (i COMMA_HERE)) ;
    }
    for (uint64_t i = mArray.count () + 1 ; i <= maxSize ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
    for (uint64_t i = inOperand.mArray.count () + 1 ; i <= maxSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
    result.mArray.removeLeadingZeros () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::andingWith (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if ((mArray.count () != 0) && (inOperand.mArray.count () != 0)) { // Operand are not zero
    const uint64_t minSize = std::min (mArray.count (), inOperand.mArray.count ()) ;
    result.mArray.setCapacity (minSize) ;
    for (uint64_t i = 1 ; i <= minSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE) & inOperand.mArray (i COMMA_HERE)) ;
    }
    result.mArray.removeLeadingZeros () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::complementing (void) const {
  BigUnsigned result ;
  result.mArray.setCapacity (mArray.count ()) ;
  for (uint64_t i = 1 ; i <= mArray.count () ; i++) {
    result.mArray.appendObject (~ mArray (i COMMA_HERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Compare
#endif

//--------------------------------------------------------------------------------------------------

int BigUnsigned::compare (const BigUnsigned & inOperand) const {
  int result = 0 ;
  if (mArray.count () < inOperand.mArray.count ()) {
    result = -1 ;
  }else if (mArray.count () > inOperand.mArray.count ()) {
    result = 1 ;
  }else if (mArray.count () > 0) {
    for (uint64_t i = mArray.count () ; (result == 0) && (i > 0) ; i--) {
      if (mArray (i COMMA_HERE) < inOperand.mArray (i COMMA_HERE)) {
        result = -1 ;
      }else if (mArray (i COMMA_HERE) > inOperand.mArray (i COMMA_HERE)) {
        result = 1 ;
      }
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Print
#endif

//--------------------------------------------------------------------------------------------------

void BigUnsigned::printHex (const char * inName) const {
  if (mArray.count () == 0) {
    printf ("%s: 0\n", inName) ;
  }else{
    printf ("%s: [%" PRId64 "] 0x", inName, mArray.count ()) ;
    for (uint64_t i = mArray.count () ; i > 0 ; i--) {
      printf ("'%016" PRIX64, mArray (i COMMA_HERE)) ;
    }
    printf ("\n") ;
  }
}

//--------------------------------------------------------------------------------------------------

C_String BigUnsigned::decimalString (void) const {
  C_String result ;
  if (isZero ()) {
    result = "0" ;
  }else{
    BigUnsigned number ; mArray.copyTo (number.mArray) ;
    U64UniqueArray decimalValueArray ;
    while (!number.isZero ()) {
      const uint64_t divisor = 1'000'000'000'000'000'000 ; // 10**18
      uint64_t remainder ;
      number.divideByU64InPlace (divisor, remainder) ;
      decimalValueArray.appendObject (remainder) ;
    }
    result << cStringWithUnsigned (decimalValueArray.lastObject (HERE)) ;
    for (uint64_t i = decimalValueArray.count () - 1 ; i > 0 ; i--) {
      char s [32] ;
      snprintf (s, 31, "%018" PRIu64, decimalValueArray (i COMMA_HERE)) ;
      result << s ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String BigUnsigned::spacedDecimalString (const uint32_t inSeparation) const {
  C_String result = decimalString () ;
  if (inSeparation > 0) {
    for (int32_t i = result.length () - int32_t (inSeparation) ; i > 0 ; i -= int32_t (inSeparation)) {
      result.insertCharacterAtIndex (' ', i COMMA_HERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String BigUnsigned::hexString (void) const {
  C_String result ;
  if (mArray.count () == 0) {
    result = "0" ;
  }else{
    result << cHexStringWithUnsigned (mArray.lastObject (HERE)) ;
    for (uint64_t i = mArray.count () - 1 ; i > 0 ; i--) {
      char s [32] ;
      snprintf (s, 31, "%016" PRIX64, mArray (i COMMA_HERE)) ;
      result << s ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String BigUnsigned::xString (void) const {
  C_String result ;
  if (mArray.count () == 0) {
    result = "0" ;
  }else{
    char s [32] ;
    snprintf (s, 31, "%" PRIX64, mArray.lastObject (HERE)) ;
    result << s ;
    for (uint64_t i = mArray.count () - 1 ; i > 0 ; i--) {
      snprintf (s, 31, "%016" PRIX64, mArray (i COMMA_HERE)) ;
      result << s ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
