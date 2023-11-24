#include <iostream>
#include <cinttypes>
#include <iomanip>

//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"
#include "utilities/M_machine.h"
#include "utilities/galgas-random.h"
#include "uint128-multiply-divide.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark U128 Operations
#endif

//--------------------------------------------------------------------------------------------------

static const uint64_t HALF_MASK = 0xFFFF'FFFF ;

//--------------------------------------------------------------------------------------------------

static void mul64x64to128 (uint64_t op1,
                           uint64_t op2,
                           uint64_t & outHigh,
                           uint64_t & outLow) {
  const uint64_t u1 = (op1 & HALF_MASK) ;
  const uint64_t v1 = (op2 & HALF_MASK) ;
  uint64_t t = (u1 * v1);
  const uint64_t w3 = (t & HALF_MASK);
  uint64_t k = (t >> 32);

  op1 >>= 32 ;
  t = (op1 * v1) + k;
  k = (t & HALF_MASK);
  uint64_t w1 = (t >> 32);

  op2 >>= 32;
  t = (u1 * op2) + k;
  k = (t >> 32);

  outHigh = (op1 * op2) + w1 + k;
  outLow = (t << 32) + w3;
}

//--------------------------------------------------------------------------------------------------

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
    uint64_t right = (rhat << 32) + un1;
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
  for (size_t i=0 ; i<randomSize ; i++) {
    uint64_t v = uint64_t (galgas_random ()) ;
    v <<= 32 ;
    v |= uint64_t (galgas_random ()) ;
    result.mArray.appendObject (v) ;
  }
//  result.mArray.lastObject (HERE) |= uint64_t (1) << 63 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned::BigUnsigned (void) noexcept :
mArray () {
}

//--------------------------------------------------------------------------------------------------

BigUnsigned::BigUnsigned (const uint64_t inValue) noexcept :
mArray () {
  if (inValue != 0) {
    mArray.appendObject (inValue) ;
  }
}

 //--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::powerOfTwo (const int32_t inPowerOfTwo) {
  const int32_t wordCount = 1 + inPowerOfTwo / 64 ;
  const int32_t bitIndex = inPowerOfTwo % 64 ;
  BigUnsigned result ;
  result.mArray.insertObjectsAtIndex (wordCount, 0, 0 COMMA_HERE) ;
  result.mArray.lastObject (HERE) |= uint64_t (1) << bitIndex ;
  return result ;
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
  return (mArray.count () == 1) && (mArray (0 COMMA_HERE) == 1) ;
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
      const uint32_t shift = inShiftCount % 64 ;
      if (shift == 0) {
        result = *this ;
      }else{
        uint64_t carry = 0 ;
        for (int32_t i=0 ; i<mArray.count () ; i++) {
          const uint64_t v = mArray (i COMMA_HERE) ;
          result.mArray.appendObject ((v << shift) | carry) ;
          carry = v >> (64 - shift) ;
        }
        if (carry != 0) {
          result.mArray.appendObject (carry) ;
        }
      }
      const uint32_t insertedWordCount = inShiftCount / 64 ;
      result.mArray.insertObjectsAtIndex (int32_t (insertedWordCount), 0, 0 COMMA_HERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Add, subtract
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::addingBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if (mArray.count () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mArray.count () == 0) { // Operand is zero
    result = *this ;
  }else{
    uint64_t carry = 0 ;
    const int32_t maxSize = std::max (mArray.count (), inOperand.mArray.count ()) ;
    result.mArray.setCapacity (maxSize + 1) ;
    const int32_t minSize = std::min (mArray.count (), inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<minSize ; i++) {
      const uint64_t v1 = mArray (i COMMA_HERE) ;
      const uint64_t v2 = inOperand.mArray (i COMMA_HERE) ;
      const uint64_t sum = v1 + v2 + carry ;
      carry = (sum < v1) || (sum < v2) ;
      result.mArray.appendObject (sum) ;
    }
    for (int32_t i=mArray.count () ; i<maxSize ; i++) {
      const uint64_t v2 = inOperand.mArray (i COMMA_HERE) ;
      const uint64_t sum = v2 + carry ;
      carry = sum < v2 ;
      result.mArray.appendObject (sum) ;
    }
    for (int32_t i=inOperand.mArray.count () ; i<maxSize ; i++) {
      const uint64_t v2 = mArray (i COMMA_HERE) ;
      const uint64_t sum = v2 + carry ;
      carry = sum < v2 ;
      result.mArray.appendObject (sum) ;
    }
    if (carry != 0) {
      result.mArray.appendObject (carry) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::subtractingBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  int compareResult = compare (inOperand) ;
  if (compareResult < 0) { // Error
    std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
    exit (1) ;
  }else if (compareResult > 0) {
    result.mArray.setCapacity (mArray.count ()) ;
    bool borrow = false ;
    for (int32_t i = 0 ; i < mArray.count () ; i++) {
      uint64_t v2 = (i < inOperand.mArray.count ()) ? inOperand.mArray (i COMMA_HERE) : 0 ;
      if (borrow) {
        v2 ++ ;
        if (v2 == 0) {
          result.mArray.appendObject (mArray (i COMMA_HERE)) ;
          borrow = true ;
        }else{
          const uint64_t r = mArray (i COMMA_HERE) - v2 ;
          borrow = mArray (i COMMA_HERE) < v2 ;
          result.mArray.appendObject (r) ;
        }
      }else{
        const uint64_t r = mArray (i COMMA_HERE) - v2 ;
        borrow = mArray (i COMMA_HERE) < v2 ;
        result.mArray.appendObject (r) ;
      }
    }
    if (borrow) {
      std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
      exit (1) ;
    }
    while ((result.mArray.count () > 0) && (result.mArray.lastObject (HERE) == 0)) {
      result.mArray.removeLastObject (HERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Multiply
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::multiplyingByBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if ((mArray.count () != 0) && (inOperand.mArray.count () != 0)) { // Operands are not zero
    result.mArray.insertObjectsAtIndex (mArray.count () + inOperand.mArray.count (), 0, 0 COMMA_HERE) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      uint64_t carry = 0 ;
      for (int32_t j = 0 ; j < mArray.count () ; j++) {
      //--- multiplication 64 x 64 -> 128
        uint64_t high ;
        uint64_t low ;
        mul64x64to128 (mArray (j COMMA_HERE), inOperand.mArray (i COMMA_HERE), high, low) ;
      //--- Add carry
        low += carry ;
        high += low < carry ;
      //--- Store result
        uint64_t v = result.mArray (i + j COMMA_HERE) ;
        v += low ;
        high += v < low ;
        result.mArray (i + j COMMA_HERE) = v ;
        carry = high ;
      }
      int32_t idx = mArray.count () + i ;
      while (carry > 0) {
        uint64_t v = result.mArray (idx COMMA_HERE) ;
        v += carry ;
        carry = v < carry ;
        result.mArray (idx COMMA_HERE) = v ;
        idx += 1 ;
      }
    }
  //--- Remove leading zeros
    while ((result.mArray.count () > 0) && (result.mArray.lastObject (HERE) == 0)) {
      result.mArray.removeLastObject (HERE) ;
    }
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
//  printHex (mArray,           "\n  -> Dividend") ;
//  printHex (inDivisor.mArray,   "  -> Divisor ") ;
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
  const int32_t iterationCount = outRemainder.mArray.count () - divisor.mArray.count () ;
  for (int32_t itx = iterationCount - 1 ; itx >= 0 ; itx--) {
    uint64_t quotient ;
    const int32_t remainderIndexH = outRemainder.mArray.count () + itx - iterationCount ;
    div128By64Special (outRemainder.mArray (remainderIndexH COMMA_HERE), // inDividendH < divisor
                       outRemainder.mArray (remainderIndexH - 1 COMMA_HERE),
                       divisor.mArray.lastObject (HERE),
                       quotient) ;
    outQuotient.mArray.insertObjectAtIndex (quotient, 0 COMMA_HERE) ;
    if (quotient > 0) {
      uint64_t currentCarry = 0 ;
      for (int32_t i = 0 ; i < divisor.mArray.count () ; i++) {
        uint64_t resultH ;
        uint64_t resultL ;
        mul64x64to128 (quotient, divisor.mArray (i COMMA_HERE), resultH, resultL) ;
        resultL += currentCarry ;
        resultH += resultL < currentCarry ; // Propagate Overflow
        currentCarry = resultH ;
        const int32_t remainderIndex = i + itx ;
        currentCarry += outRemainder.mArray (remainderIndex COMMA_HERE) < resultL ;
        outRemainder.mArray (remainderIndex COMMA_HERE) -= resultL ;
      }
      const int32_t remainderLastIndex = itx + divisor.mArray.count () ;
      bool underflow = outRemainder.mArray (remainderLastIndex COMMA_HERE) < currentCarry ;
      outRemainder.mArray (remainderLastIndex COMMA_HERE) -= currentCarry ;
      MF_Assert ((outRemainder.mArray (remainderLastIndex COMMA_HERE) == 0) || (outRemainder.mArray (remainderLastIndex COMMA_HERE) == UINT64_MAX), "last remainder error", 0, 0) ;
      MF_Assert (underflow == (outRemainder.mArray (remainderLastIndex COMMA_HERE) == UINT64_MAX), "last remainder error", 0, 0) ;
      while (underflow) {
        outQuotient.mArray (0 COMMA_HERE) -= 1 ;
        uint64_t carry = 0 ; // 0 or 1
        for (int32_t i = 0 ; i < divisor.mArray.count () ; i++) {
          const uint64_t v1 = outRemainder.mArray (i + itx COMMA_HERE) ;
          const uint64_t v2 = divisor.mArray (i COMMA_HERE) ;
          uint64_t sum = v1 + v2 ;
          const uint64_t newCarry = sum < v1 ;
          sum += carry ; // No overflow here
          outRemainder.mArray (i + itx COMMA_HERE) = sum ;
          carry = newCarry ;
          MF_Assert (carry <= 1, "Invalid carry", 0, 0) ;
        }
        outRemainder.mArray (divisor.mArray.count () + itx COMMA_HERE) += carry ;
        underflow = carry == 0 ;
      }
    }
  }
//--- Remove remainder leading zeros
  while ((outRemainder.mArray.count () > 0) && (outRemainder.mArray.lastObject (HERE) == 0)) {
    outRemainder.mArray.removeLastObject (HERE) ;
  }
//--- Adjust quotient and remainder
  if (s > 0) {
    outQuotient = outQuotient.leftShiftedBy (s) ;
    MF_Assert (outRemainder.mArray.count () <= inDivisor.mArray.count (), "Error", 0, 0) ;
    if (outRemainder.mArray.count () == inDivisor.mArray.count ()) {
      const uint64_t divisorForAdjust = outRemainder.mArray.lastObject (HERE) / inDivisor.mArray.lastObject (HERE) ;
      if (divisorForAdjust == 1) {
        uint64_t currentCarry = 0 ;
        for (int32_t i = 0 ; i < outRemainder.mArray.count () ; i++) {
          uint64_t resultL = inDivisor.mArray (i COMMA_HERE) ;
          resultL += currentCarry ;
          currentCarry = resultL < currentCarry ; // Overflow
          if (outRemainder.mArray (i COMMA_HERE) < resultL) {
            currentCarry += 1 ;
            MF_Assert (currentCarry != 0, "borrow is null", 0, 0) ;
          }
          outRemainder.mArray (i COMMA_HERE) -= resultL ;
        }
        MF_Assert (currentCarry == 0, "Error", 0, 0) ;
        if (outQuotient.mArray.count () > 0) {
          outQuotient.mArray (0 COMMA_HERE) += 1 ;
        }else{
          outQuotient.mArray.appendObject (1) ;
        }
      }else if (divisorForAdjust > 1) {
        uint64_t currentCarry = 0 ;
        for (int32_t i = 0 ; i < outRemainder.mArray.count () ; i++) {
          uint64_t resultH ;
          uint64_t resultL ;
          mul64x64to128 (divisorForAdjust, inDivisor.mArray (i COMMA_HERE), resultH, resultL) ;
          resultL += currentCarry ;
          resultH += resultL < currentCarry ;
//          if (resultL < currentCarry) { // Overflow
//            resultH += 1 ; // Propagate overflow
//            MF_Assert (resultH != 0, "resultH is null", 0, 0) ;
//          }
          currentCarry = resultH ;
          currentCarry += outRemainder.mArray (i COMMA_HERE) < resultL ;
          outRemainder.mArray (i COMMA_HERE) -= resultL ;
        }
        MF_Assert (currentCarry == 0, "Error", 0, 0) ;
        if (outQuotient.mArray.count () > 0) {
          outQuotient.mArray (0 COMMA_HERE) += divisorForAdjust ;
        }else{
          outQuotient.mArray.appendObject (divisorForAdjust) ;
        }
      }
//      uint64_t adjustCount = 0 ;
//      while (outRemainder.compare (inDivisor) > 0) {
//        adjustCount += 1 ;
//        outRemainder = outRemainder.subtractingBigUnsigned (inDivisor) ;
//        if (outQuotient.mArray.count () > 0) {
//          outQuotient.mArray (0 COMMA_HERE) += 1 ;
//        }else{
//          outQuotient.mArray.appendObject (1) ;
//        }
//      }
//      MF_Assert (divisorForAdjust == adjustCount, "error", 0, 0) ;
//      if (maxAdjustCount < adjustCount) {
//        maxAdjustCount = adjustCount ;
//        std::cout << "maxAdjustCount " << maxAdjustCount << ", s " << s << ", divisorForAdjust " << divisorForAdjust << "\n" ;
//      }
    }
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
  const int32_t iterationCount = outRemainder.mArray.count () - inDivisor.mArray.count () ;
  for (int32_t itx = iterationCount - 1 ; itx >= 0 ; itx--) {
    uint64_t quotient ;
    const int32_t remainderIndexH = outRemainder.mArray.count () + itx - iterationCount ;
    div128By64Special (outRemainder.mArray (remainderIndexH COMMA_HERE), // inDividendH < inDivisor
                       outRemainder.mArray (remainderIndexH - 1 COMMA_HERE),
                       inDivisor.mArray.lastObject (HERE),
                       quotient) ;
    outQuotient.mArray.insertObjectAtIndex (quotient, 0 COMMA_HERE) ;
    if (quotient > 0) {
      uint64_t currentCarry = 0 ;
      for (int32_t i = 0 ; i < inDivisor.mArray.count () ; i++) {
        uint64_t resultH ;
        uint64_t resultL ;
        mul64x64to128 (quotient, inDivisor.mArray (i COMMA_HERE), resultH, resultL) ;
        resultL += currentCarry ;
        if (resultL < currentCarry) { // Overflow
          resultH += 1 ; // Propagate overflow
          MF_Assert (resultH != 0, "resultH is null", 0, 0) ;
        }
        currentCarry = resultH ;
        const int32_t remainderIndex = i + itx ;
        if (outRemainder.mArray (remainderIndex COMMA_HERE) < resultL) {
          currentCarry += 1 ;
          MF_Assert (currentCarry != 0, "borrow is null", 0, 0) ;
        }
        outRemainder.mArray (remainderIndex COMMA_HERE) -= resultL ;
      }
      const int32_t remainderLastIndex = itx + inDivisor.mArray.count () ;
      bool underflow = outRemainder.mArray (remainderLastIndex COMMA_HERE) < currentCarry ;
      outRemainder.mArray (remainderLastIndex COMMA_HERE) -= currentCarry ;
      MF_Assert ((outRemainder.mArray (remainderLastIndex COMMA_HERE) == 0) || (outRemainder.mArray (remainderLastIndex COMMA_HERE) == UINT64_MAX), "last remainder error", 0, 0) ;
      MF_Assert (underflow == (outRemainder.mArray (remainderLastIndex COMMA_HERE) == UINT64_MAX), "last remainder error", 0, 0) ;
      uint64_t adjustCount = 0 ;
      while (underflow) {
        adjustCount += 1 ;
        outQuotient.mArray (0 COMMA_HERE) -= 1 ;
        uint64_t carry = 0 ; // 0 or 1
        for (int32_t i = 0 ; i < inDivisor.mArray.count () ; i++) {
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
  while ((outRemainder.mArray.count () > 0) && (outRemainder.mArray.lastObject (HERE) == 0)) {
    outRemainder.mArray.removeLastObject (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Logic operations
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::oringWithBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if (mArray.count () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mArray.count () == 0) { // Operand is zero
    result = *this ;
  }else{
    const int32_t maxSize = std::max (mArray.count (), inOperand.mArray.count ()) ;
    result.mArray.setCapacity (maxSize) ;
    const int32_t minSize = std::min (mArray.count (), inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<minSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE) | inOperand.mArray (i COMMA_HERE)) ;
    }
    for (int32_t i=mArray.count () ; i<maxSize ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
    for (int32_t i=inOperand.mArray.count () ; i<maxSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::xoringWithBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if (mArray.count () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mArray.count () == 0) { // Operand is zero
    result = *this ;
  }else{
    const int32_t maxSize = std::max (mArray.count (), inOperand.mArray.count ()) ;
    result.mArray.setCapacity (maxSize) ;
    const int32_t minSize = std::min (mArray.count (), inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<minSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE) ^ inOperand.mArray (i COMMA_HERE)) ;
    }
    for (int32_t i=mArray.count () ; i<maxSize ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
    for (int32_t i=inOperand.mArray.count () ; i<maxSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
    while ((result.mArray.count () > 0) && (result.mArray.lastObject (HERE) == 0)) {
      result.mArray.removeLastObject (HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::andingWithBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if ((mArray.count () != 0) && (inOperand.mArray.count () != 0)) { // Operand are not zero
    const int32_t minSize = std::min (mArray.count (), inOperand.mArray.count ()) ;
    result.mArray.setCapacity (minSize) ;
    for (int32_t i=0 ; i<minSize ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE) & inOperand.mArray (i COMMA_HERE)) ;
    }
    while ((result.mArray.count () > 0) && (result.mArray.lastObject (HERE) == 0)) {
      result.mArray.removeLastObject (HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::complemented (void) const {
  BigUnsigned result ;
  result.mArray.setCapacity (mArray.count ()) ;
  for (int32_t i=0 ; i<mArray.count () ; i++) {
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
//    std::cout << "count: -1\n" ;
    result = -1 ;
  }else if (mArray.count () > inOperand.mArray.count ()) {
//    std::cout << "count: +1\n" ;
    result = 1 ;
  }else if (mArray.count () > 0) {
    for (int32_t i = mArray.count () - 1 ; (result == 0) && (i >= 0) ; i--) {
      if (mArray (i COMMA_HERE) < inOperand.mArray (i COMMA_HERE)) {
//        std::cout << "index " << i << ": -1\n" ;
        result = -1 ;
      }else if (mArray (i COMMA_HERE) > inOperand.mArray (i COMMA_HERE)) {
//        std::cout << "index " << i << ": +1\n" ;
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
  printHex (mArray, inName) ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::printHex (const TC_UniqueArray <uint64_t> & inArray, const char * inName) {
  if (inArray.count () == 0) {
    printf ("%s: 0\n", inName) ;
  }else{
    printf ("%s: [%d] 0x", inName, inArray.count ()) ;
    for (int32_t i = inArray.count () - 1 ; i>= 0 ; i--) {
      printf ("'%016" PRIX64, inArray (i COMMA_HERE)) ;
    }
    printf ("\n") ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operations with U64
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::addingU64 (const uint64_t inOperand) const {
  BigUnsigned result ;
  if (mArray.count () == 0) { // Receiver is zero
    if (inOperand != 0) {
      result.mArray.appendObject (inOperand) ;
    }
  }else{
    uint64_t carry = inOperand ;
    result.mArray.setCapacity (mArray.count () + 1) ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      const uint64_t sum = mArray (i COMMA_HERE) + carry ;
      result.mArray.appendObject (sum) ;
      carry = sum < mArray (i COMMA_HERE) ;
    }
    if (carry != 0) {
      result.mArray.appendObject (carry) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::multiplyingByU64 (const uint64_t inOperand) const {
  BigUnsigned result ;
  if ((mArray.count () != 0) && (inOperand != 0)) { // Operands are not zero
    result.mArray.setCapacity (mArray.count () + 1) ;
    uint64_t carry = 0 ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
    //--- multiplication 64 x 64 -> 128
      uint64_t high ;
      uint64_t low ;
      mul64x64to128 (mArray (i COMMA_HERE), inOperand, high, low) ;
    //--- Add carry
      low += carry ;
      high += (low < carry) ;
    //--- Store result
      result.mArray.appendObject (low) ;
      carry = high ;
    }
    if (carry != 0) {
      result.mArray.appendObject (carry) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::divideByU64 (const uint64_t inDivisor,
                               BigUnsigned & outQuotient,
                               uint64_t & outRemainder) const {
  if (inDivisor == 0) {
    std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
    exit (1) ;
  }else if (inDivisor == 1) {
    outQuotient = *this ;
    outRemainder = 0 ;
  }else if (mArray.count () == 1) {
    outQuotient = BigUnsigned () ;
    outQuotient.mArray.appendObject (mArray (0 COMMA_HERE) / inDivisor) ;
    outRemainder = mArray (0 COMMA_HERE) % inDivisor ;
  }else{
    outQuotient = BigUnsigned () ;
    outQuotient.mArray.insertObjectsAtIndex (mArray.count (), 0, 0 COMMA_HERE) ;
    outRemainder = 0 ;
    for (int32_t i = mArray.count () - 1 ; i >= 0 ; i--) {
      uint64_t quotient ;
      uint64_t r ;
      divmod128by64 (outRemainder, mArray (i COMMA_HERE), inDivisor, quotient, r) ;
      outQuotient.mArray (i COMMA_HERE) = quotient ;
      outRemainder = r ;
    }
    while ((outQuotient.mArray.count () > 0) && (outQuotient.mArray.lastObject (HERE) == 0)) {
      outQuotient.mArray.removeLastObject (HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
