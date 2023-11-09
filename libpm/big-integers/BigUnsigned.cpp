#include <iostream>
#include <cinttypes>

//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"
#include "M_machine.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------
// https://gcc.gnu.org/onlinedocs/gcc/Integer-Overflow-Builtins.html
//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::randomNumber (void) {
  BigUnsigned result ;
  const size_t randomSize = size_t (galgas_random ()) % 20 ;
  for (size_t i=0 ; i<randomSize ; i++) {
    result.mValue.push_back (uint64_t (galgas_random ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned::BigUnsigned (void) noexcept :
mValue () {
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::leftShiftedBy (const uint32_t inShiftCount) const {
  BigUnsigned result ;
  if (mValue.size () > 0) {
    const uint32_t shift = inShiftCount % 64 ;
    uint64_t carry = 0 ;
    for (uint32_t i=0 ; i<mValue.size () ; i++) {
      const uint64_t v = mValue [i] ;
      result.mValue.push_back ((v << shift) | carry) ;
      carry = v >> (64 - shift) ;
    }
    if (carry != 0) {
      result.mValue.push_back (uint64_t (carry)) ;
    }
    const uint32_t insertedWordCount = inShiftCount / 64 ;
    if (insertedWordCount > 0) {
      result.mValue.insert (result.mValue.begin (), insertedWordCount, 0) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::addingBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if (mValue.size () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mValue.size () == 0) { // Operand is zero
    result = *this ;
  }else{
    uint64_t carry = 0 ;
    const size_t maxSize = std::max (mValue.size (), inOperand.mValue.size ()) ;
    result.mValue.reserve (maxSize) ;
    const size_t minSize = std::min (mValue.size (), inOperand.mValue.size ()) ;
    for (size_t i=0 ; i<minSize ; i++) {
      const uint64_t v1 = mValue [i] ;
      const uint64_t v2 = inOperand.mValue [i] ;
      const uint64_t sum = v1 + v2 ;
      const bool ovf = sum < v1 ;
      result.mValue.push_back (sum + carry) ;
      carry = ovf ;
    }
    for (size_t i=mValue.size () ; i<maxSize ; i++) {
      const uint64_t v2 = inOperand.mValue [i] ;
      const uint64_t sum = v2 + carry ;
      const bool ovf = sum < v2 ;
      result.mValue.push_back (sum) ;
      carry = ovf ;
    }
    for (size_t i=inOperand.mValue.size () ; i<maxSize ; i++) {
      const uint64_t v2 = mValue [i] ;
      const uint64_t sum = v2 + carry ;
      const bool ovf = sum < v2 ;
      result.mValue.push_back (sum) ;
      carry = ovf ;
    }
    if (carry != 0) {
      result.mValue.push_back (carry) ;
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
    result.mValue.reserve (mValue.size ()) ;
    bool borrow = false ;
    for (size_t i = 0 ; i < mValue.size () ; i++) {
      uint64_t v2 = (i < inOperand.mValue.size ()) ? inOperand.mValue [i] : 0 ;
      if (borrow) {
        v2 ++ ;
        if (v2 == 0) {
          result.mValue.push_back (mValue [i]) ;
          borrow = true ;
        }else{
          const uint64_t r = mValue [i] - v2 ;
          borrow = mValue [i] < v2 ;
          result.mValue.push_back (r) ;
        }
      }else{
        const uint64_t r = mValue [i] - v2 ;
        borrow = mValue [i] < v2 ;
        result.mValue.push_back (r) ;
      }
    }
    if (borrow) {
      std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
      exit (1) ;
    }
    while ((result.mValue.size () > 0) && (result.mValue [result.mValue.size () - 1] == 0)) {
      result.mValue.pop_back () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::addingU64 (const uint64_t inOperand) const {
  BigUnsigned result ;
  if (mValue.size () == 0) { // Receiver is zero
    result.mValue.push_back (inOperand) ;
  }else{
    uint64_t carry = inOperand ;
    for (size_t i=0 ; i<mValue.size () ; i++) {
      const uint64_t sum = mValue [i] + carry ;
      result.mValue.push_back (sum) ;
      carry = sum < mValue [i] ;
    }
    if (carry != 0) {
      result.mValue.push_back (carry) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

int BigUnsigned::compare (const BigUnsigned & inOperand) const {
  int result = 0 ;
  if (mValue.size () < inOperand.mValue.size ()) {
    result = -1 ;
  }else if (mValue.size () > inOperand.mValue.size ()) {
    result = 1 ;
  }else if (mValue.size () > 0) {
    for (int i = int (mValue.size ()) - 1 ; (result == 0) && (i >= 0) ; i--) {
      if (mValue [size_t (i)] < inOperand.mValue [size_t (i)]) {
        result = -1 ;
      }else if (mValue [size_t (i)] > inOperand.mValue [size_t (i)]) {
        result = 1 ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void mult64to128 (uint64_t op1,
                         uint64_t op2,
                         uint64_t & outHigh,
                         uint64_t & outLow) {
  const uint64_t u1 = (op1 & 0xffffffff) ;
  const uint64_t v1 = (op2 & 0xffffffff) ;
  uint64_t t = (u1 * v1);
  const uint64_t w3 = (t & 0xffffffff);
  uint64_t k = (t >> 32);

  op1 >>= 32;
  t = (op1 * v1) + k;
  k = (t & 0xffffffff);
  uint64_t w1 = (t >> 32);

  op2 >>= 32;
  t = (u1 * op2) + k;
  k = (t >> 32);

  outHigh = (op1 * op2) + w1 + k;
  outLow = (t << 32) + w3;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::multiplyingByU64 (const uint64_t inOperand) const {
  BigUnsigned result ;
  if ((mValue.size () != 0) && (inOperand != 0)) { // Operands are not zero
    uint64_t carry = 0 ;
    for (size_t i=0 ; i<mValue.size () ; i++) {
    //--- multiplication 64 x 64 -> 126
      uint64_t high ;
      uint64_t low ;
      mult64to128 (mValue [i], inOperand, high, low) ;
    //--- Add carry
      low += carry ;
      high += (low < carry) ;
    //--- Store result
      result.mValue.push_back (low) ;
      carry = high ;
    }
    if (carry != 0) {
      result.mValue.push_back (uint64_t (carry)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::multiplyingByBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if ((mValue.size () != 0) && (inOperand.mValue.size () != 0)) { // Operands are not zero
    for (size_t i=0 ; i<inOperand.mValue.size () ; i++) {
      const BigUnsigned r1 = multiplyingByU64 (inOperand.mValue [i]) ;
      const BigUnsigned r2 = r1.leftShiftedBy (64 * uint32_t (i)) ;
      result = result.addingBigUnsigned (r2) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::printHex (const char * inName) const {
  if (mValue.size () == 0) {
    printf ("%s: 0\n", inName) ;
  }else{
    printf ("%s:", inName) ;
    for (int i = int (mValue.size ()) - 1 ; i>= 0 ; i--) {
      printf (" %0" PRIx64 "X", mValue [size_t (i)]) ;
    }
    printf ("\n") ;
  }

}

//--------------------------------------------------------------------------------------------------
