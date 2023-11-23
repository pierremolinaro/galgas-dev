#include <iostream>
#include <cinttypes>

//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"
#include "utilities/M_machine.h"
#include "utilities/galgas-random.h"
#include "uint128-multiply-divide.h"

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
    result.mArray.push_back (v) ;
  }
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
    mArray.push_back (inValue) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Testing value
#endif

//----------------------------------------------------------------------------------------------------------------------

bool BigUnsigned::isZero (void) const {
  return mArray.size () == 0 ;
}

//----------------------------------------------------------------------------------------------------------------------

bool BigUnsigned::isOne (void) const {
  return (mArray.size () == 1) && (mArray [0] == 1) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shifts
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::leftShiftedBy (const uint32_t inShiftCount) const {
  BigUnsigned result ;
  if (mArray.size () > 0) {
    const uint32_t shift = inShiftCount % 64 ;
    uint64_t carry = 0 ;
    for (uint32_t i=0 ; i<mArray.size () ; i++) {
      const uint64_t v = mArray [i] ;
      result.mArray.push_back ((v << shift) | carry) ;
      carry = v >> (64 - shift) ;
    }
    if (carry != 0) {
      result.mArray.push_back (uint64_t (carry)) ;
    }
    const uint32_t insertedWordCount = inShiftCount / 64 ;
    if (insertedWordCount > 0) {
      result.mArray.insert (result.mArray.begin (), insertedWordCount, 0) ;
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
  if (mArray.size () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mArray.size () == 0) { // Operand is zero
    result = *this ;
  }else{
    uint64_t carry = 0 ;
    const size_t maxSize = std::max (mArray.size (), inOperand.mArray.size ()) ;
    result.mArray.reserve (maxSize) ;
    const size_t minSize = std::min (mArray.size (), inOperand.mArray.size ()) ;
    for (size_t i=0 ; i<minSize ; i++) {
      const uint64_t v1 = mArray [i] ;
      const uint64_t v2 = inOperand.mArray [i] ;
      const uint64_t sum = v1 + v2 ;
      const bool ovf = sum < v1 ;
      result.mArray.push_back (sum + carry) ;
      carry = ovf ;
    }
    for (size_t i=mArray.size () ; i<maxSize ; i++) {
      const uint64_t v2 = inOperand.mArray [i] ;
      const uint64_t sum = v2 + carry ;
      const bool ovf = sum < v2 ;
      result.mArray.push_back (sum) ;
      carry = ovf ;
    }
    for (size_t i=inOperand.mArray.size () ; i<maxSize ; i++) {
      const uint64_t v2 = mArray [i] ;
      const uint64_t sum = v2 + carry ;
      const bool ovf = sum < v2 ;
      result.mArray.push_back (sum) ;
      carry = ovf ;
    }
    if (carry != 0) {
      result.mArray.push_back (carry) ;
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
    result.mArray.reserve (mArray.size ()) ;
    bool borrow = false ;
    for (size_t i = 0 ; i < mArray.size () ; i++) {
      uint64_t v2 = (i < inOperand.mArray.size ()) ? inOperand.mArray [i] : 0 ;
      if (borrow) {
        v2 ++ ;
        if (v2 == 0) {
          result.mArray.push_back (mArray [i]) ;
          borrow = true ;
        }else{
          const uint64_t r = mArray [i] - v2 ;
          borrow = mArray [i] < v2 ;
          result.mArray.push_back (r) ;
        }
      }else{
        const uint64_t r = mArray [i] - v2 ;
        borrow = mArray [i] < v2 ;
        result.mArray.push_back (r) ;
      }
    }
    if (borrow) {
      std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
      exit (1) ;
    }
    while ((result.mArray.size () > 0) && (result.mArray.back () == 0)) {
      result.mArray.pop_back () ;
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
  if ((mArray.size () != 0) && (inOperand.mArray.size () != 0)) { // Operands are not zero
    for (size_t i=0 ; i<inOperand.mArray.size () ; i++) {
      const BigUnsigned r1 = multiplyingByU64 (inOperand.mArray [i]) ;
      const BigUnsigned r2 = r1.leftShiftedBy (64 * uint32_t (i)) ;
      result = result.addingBigUnsigned (r2) ;
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
  printHex (mArray,           "\n  -> Dividend") ;
  printHex (inDivisor.mArray,   "  -> Divisor ") ;
  BigUnsigned result ;
  outQuotient = BigUnsigned () ;
  outRemainder = BigUnsigned () ;
  if (inDivisor.isZero ()) { // Divide by 0
    std::cout << "Error " << __FILE__ << ":" << __LINE__ << "\n" ;
    exit (1) ;
  }else if (inDivisor.isOne ()) { // Divide by 1: quotient <- dividend, remainder <- 0
    outQuotient = *this ;
  }else if (mArray.size () < inDivisor.mArray.size ()) { // dividend < divisor: remainder <- dividend, quotient <- 0
    outRemainder = *this ;
  }else{
    outRemainder = *this ;
    if (outRemainder.mArray.back () >= inDivisor.mArray.back ()) {
      outRemainder.mArray.push_back (0) ;
    }
    const size_t offset = outRemainder.mArray.size () - inDivisor.mArray.size () - 1 ;
    std::cout << "  dividend[" << outRemainder.mArray.size ()
              << "], divisor[" << inDivisor.mArray.size () << "], offset " << offset << "\n" ;
    for (int idx = int (offset) ; idx > 0 ; idx--) {
      uint64_t q ;
      uint64_t r ;
      const size_t remainderIndexH = outRemainder.mArray.size () + size_t (idx) - offset - 1 ;
      divmod128by64 (outRemainder.mArray [remainderIndexH], // inDividendH < inDivisor
                     outRemainder.mArray [remainderIndexH - 1],
                     inDivisor.mArray.back (),
                     q,
                     r) ;
      std::cout << "+++  idx " << idx << ", outRemainder.mArray [" << (remainderIndexH) << "], q " << q << "\n" ;
      outQuotient.mArray.insert (outQuotient.mArray.begin (), q) ;
      uint64_t currentBorrow = 0 ;
      for (size_t i = 0 ; i < inDivisor.mArray.size () ; i++) {
        uint64_t resultH ;
        uint64_t resultL ;
        mul64x64to128 (inDivisor.mArray [i], q, resultH, resultL) ;
        std::cout << std::hex << "  resultH " << resultH << ", resultL " << resultL << std::dec << "\n" ;
        if (resultL < currentBorrow) { // Underflow
          resultH -= 1 ; // Propagate borrow
        }
        resultL -= currentBorrow ;
        currentBorrow = resultH ; // + (outRemainder.mArray [i + idx - 1] < resultL) ;
        const size_t remainderIndex = i + size_t (idx) ;
        std::cout << std::hex << "  currentBorrow " << currentBorrow << std::dec << "\n" ;
        std::cout << std::hex  << "  outRemainder.mArray ["
                  << std::dec << (remainderIndex) << "]: " << std::hex  << outRemainder.mArray [remainderIndex] ;
        outRemainder.mArray [remainderIndex] -= resultL ;
        std::cout << "  --> " << outRemainder.mArray [remainderIndex] << std::dec << "\n" ;
      }
      const bool underflow = outRemainder.mArray [size_t (idx) + inDivisor.mArray.size ()] < currentBorrow ;
      outRemainder.mArray [size_t (idx) + inDivisor.mArray.size ()] -= currentBorrow ;
      if (underflow) {
        std::cout << "  #underflow" << "\n" ;
        outQuotient.mArray [0] -= 1 ;
        uint64_t carry = 0 ;
        for (size_t i = 0 ; i < inDivisor.mArray.size () ; i++) {
          const uint64_t v1 = outRemainder.mArray [i + size_t (idx)] ;
          const uint64_t v2 = inDivisor.mArray [i] ;
          const uint64_t sum = v1 + v2 ;
          outRemainder.mArray [i + size_t (idx)] = sum + carry ;
          carry = sum < v1 ;
        }
      }
      printHex (mArray,              "  -> Dividend                  ") ;
      printHex (outRemainder.mArray, "  -> Remainder") ;
 //     exit (1) ;
    }
    while ((outRemainder.mArray.size () > 0) && (outRemainder.mArray.back () == 0)) {
      outRemainder.mArray.pop_back () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Logic operations
#endif

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::oringWithBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if (mArray.size () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mArray.size () == 0) { // Operand is zero
    result = *this ;
  }else{
    const size_t maxSize = std::max (mArray.size (), inOperand.mArray.size ()) ;
    result.mArray.reserve (maxSize) ;
    const size_t minSize = std::min (mArray.size (), inOperand.mArray.size ()) ;
    for (size_t i=0 ; i<minSize ; i++) {
      result.mArray.push_back (mArray [i] | inOperand.mArray [i]) ;
    }
    for (size_t i=mArray.size () ; i<maxSize ; i++) {
      result.mArray.push_back (inOperand.mArray [i]) ;
    }
    for (size_t i=inOperand.mArray.size () ; i<maxSize ; i++) {
      result.mArray.push_back (mArray [i]) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::xoringWithBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if (mArray.size () == 0) { // Receiver is zero
    result = inOperand ;
  }else if (inOperand.mArray.size () == 0) { // Operand is zero
    result = *this ;
  }else{
    const size_t maxSize = std::max (mArray.size (), inOperand.mArray.size ()) ;
    result.mArray.reserve (maxSize) ;
    const size_t minSize = std::min (mArray.size (), inOperand.mArray.size ()) ;
    for (size_t i=0 ; i<minSize ; i++) {
      result.mArray.push_back (mArray [i] ^ inOperand.mArray [i]) ;
    }
    for (size_t i=mArray.size () ; i<maxSize ; i++) {
      result.mArray.push_back (inOperand.mArray [i]) ;
    }
    for (size_t i=inOperand.mArray.size () ; i<maxSize ; i++) {
      result.mArray.push_back (mArray [i]) ;
    }
    while ((result.mArray.size () > 0) && (result.mArray.back () == 0)) {
      result.mArray.pop_back () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::andingWithBigUnsigned (const BigUnsigned & inOperand) const {
  BigUnsigned result ;
  if ((mArray.size () != 0) && (inOperand.mArray.size () != 0)) { // Operand are not zero
    const size_t minSize = std::min (mArray.size (), inOperand.mArray.size ()) ;
    result.mArray.reserve (minSize) ;
    for (size_t i=0 ; i<minSize ; i++) {
      result.mArray.push_back (mArray [i] & inOperand.mArray [i]) ;
    }
    while ((result.mArray.size () > 0) && (result.mArray.back () == 0)) {
      result.mArray.pop_back () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::complemented (void) const {
  BigUnsigned result ;
  result.mArray.reserve (mArray.size ()) ;
  for (size_t i=0 ; i<mArray.size () ; i++) {
    result.mArray.push_back (~ mArray [i]) ;
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
  if (mArray.size () < inOperand.mArray.size ()) {
    result = -1 ;
  }else if (mArray.size () > inOperand.mArray.size ()) {
    result = 1 ;
  }else if (mArray.size () > 0) {
    for (int i = int (mArray.size ()) - 1 ; (result == 0) && (i >= 0) ; i--) {
      if (mArray [size_t (i)] < inOperand.mArray [size_t (i)]) {
        result = -1 ;
      }else if (mArray [size_t (i)] > inOperand.mArray [size_t (i)]) {
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

void BigUnsigned::printHex (const std::vector <uint64_t> & inArray, const char * inName) {
  if (inArray.size () == 0) {
    printf ("%s: 0\n", inName) ;
  }else{
    printf ("%s: 0x", inName) ;
    for (int i = int (inArray.size ()) - 1 ; i>= 0 ; i--) {
      printf ("'%016" PRIx64, inArray [size_t (i)]) ;
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
  if (mArray.size () == 0) { // Receiver is zero
    if (inOperand != 0) {
      result.mArray.push_back (inOperand) ;
    }
  }else{
    uint64_t carry = inOperand ;
    result.mArray.reserve (mArray.size () + 1) ;
    for (size_t i=0 ; i<mArray.size () ; i++) {
      const uint64_t sum = mArray [i] + carry ;
      result.mArray.push_back (sum) ;
      carry = sum < mArray [i] ;
    }
    if (carry != 0) {
      result.mArray.push_back (carry) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

BigUnsigned BigUnsigned::multiplyingByU64 (const uint64_t inOperand) const {
  BigUnsigned result ;
  if ((mArray.size () != 0) && (inOperand != 0)) { // Operands are not zero
    result.mArray.reserve (mArray.size () + 1) ;
    uint64_t carry = 0 ;
    for (size_t i=0 ; i<mArray.size () ; i++) {
    //--- multiplication 64 x 64 -> 128
      uint64_t high ;
      uint64_t low ;
      mul64x64to128 (mArray [i], inOperand, high, low) ;
    //--- Add carry
      low += carry ;
      high += (low < carry) ;
    //--- Store result
      result.mArray.push_back (low) ;
      carry = high ;
    }
    if (carry != 0) {
      result.mArray.push_back (carry) ;
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
  }else if (mArray.size () == 1) {
    outQuotient = BigUnsigned () ;
    outQuotient.mArray.push_back (mArray [0] / inDivisor) ;
    outRemainder = mArray [0] % inDivisor ;
  }else{
    outQuotient = BigUnsigned () ;
    outQuotient.mArray.resize (mArray.size (), 0) ;
    outRemainder = 0 ;
    for (int i = int (mArray.size ()) - 1 ; i >= 0 ; i--) {
      uint64_t quotient ;
      uint64_t r ;
      divmod128by64 (outRemainder, mArray [size_t (i)], inDivisor, quotient, r) ;
      outQuotient.mArray [size_t (i)] = quotient ;
      outRemainder = r ;
    }
    while ((outQuotient.mArray.size () > 0) && (outQuotient.mArray.back () == 0)) {
      outQuotient.mArray.pop_back () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
