//--------------------------------------------------------------------------------------------------
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

#include <iostream>

//--------------------------------------------------------------------------------------------------

#include "all-declarations.h"
#include "Timer.h"
#include "M_machine.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

static size_t TEST_COUNT = 10'000 ;

//--------------------------------------------------------------------------------------------------

static uint32_t msFromStart (const clock_t inStart) {
  clock_t duration = ::clock () - inStart ;
  duration /= CLOCKS_PER_SEC / 1000 ;
  return uint32_t (duration) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark BigUnsigned
#endif

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedDecimalStringConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test decimal string constructor... ") ;
  gCout.flush () ;
  const size_t LENGTH = 13 ;
  String refString ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    refString = "" ;
    const size_t n = 1 + galgas_random () % LENGTH ;
    for (size_t j = 0 ; j < n ; j++) {
      const uint32_t value = galgas_random () ;
      refString.appendUnsigned (value) ;
    }
  //--- Remove leading zeros
    while ((refString.length () > 1) && (refString.charAtIndex (0 COMMA_HERE) == '0')) {
      refString.removeCountFromIndex (1, 0 COMMA_HERE) ;
    }
  //---
    bool ok = false ;
    const BigUnsigned big (refString.cString (), BigUnsignedBase::ten, ok) ;
    const String str = big.decimalString () ;
     if ((str != refString) || !ok) {
      gCout.appendCString ("error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString ("), ok=") ;
      gCout.appendBool (ok) ;
      gCout.appendNewLine () ; ;
      gCout.appendCString ("Reference string '") ;
      gCout.appendString (refString) ;
      gCout.appendCString ("'\n") ;
      gCout.appendCString ("   decimalString '") ;
      gCout.appendString (str) ;
      gCout.appendCString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedBinaryStringConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test binary string constructor... ") ;
  gCout.flush () ;
  const size_t LENGTH = 13 ;
  String refString ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    refString = "" ;
    const size_t n = 1 + galgas_random () % LENGTH ;
    for (size_t j = 0 ; j < n ; j++) {
      uint32_t value = galgas_random () ;
      for (size_t bit = 0 ; bit < 32 ; bit ++) {
        refString.appendString (((value & 1) == 0) ? "0" : "1") ;
        value >>= 1 ;
      }
    }
  //--- Remove leading zeros
    while ((refString.length () > 1) && (refString.charAtIndex (0 COMMA_HERE) == '0')) {
      refString.removeCountFromIndex (1, 0 COMMA_HERE) ; // Remove first character
    }
  //---
    bool ok = false ;
    const BigUnsigned big (refString.cString (), BigUnsignedBase::two, ok) ;
    const String str = big.bitString () ;
    if ((str != refString) || !ok) {
      gCout.appendCString ("error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString ("), ok=") ;
      gCout.appendBool (ok) ;
      gCout.appendNewLine () ; ;
      gCout.appendCString ("Reference string '") ;
      gCout.appendString (refString) ;
      gCout.appendCString ("'\n") ;
      gCout.appendCString ("       bitString '") ;
      gCout.appendString (str) ;
      gCout.appendCString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedHexadecimalStringConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test hexadecimal string constructor... ") ;
  gCout.flush () ;
  const size_t LENGTH = 13 ;
  String refString ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    refString = "" ;
    const size_t n = 1 + galgas_random () % LENGTH ;
    for (size_t j = 0 ; j < n ; j++) {
      const uint32_t value = galgas_random () ;
      char s [12] ;
      snprintf (s, 11, "%08" PRIX32, value) ;
      refString.appendString (s) ;
    }
  //--- Remove leading zeros
    while ((refString.length () > 1) && (refString.charAtIndex (0 COMMA_HERE) == '0')) {
      refString.removeCountFromIndex (1, 0 COMMA_HERE) ; // Remove first character
    }
  //---
    bool ok = false ;
    const BigUnsigned big (refString.cString (), BigUnsignedBase::sixteen, ok) ;
    const String str = big.xString () ;
     if ((str != refString) || !ok) {
      gCout.appendCString ("error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString ("), ok=") ;
      gCout.appendBool (ok) ;
      gCout.appendNewLine () ;
      gCout.appendCString ("Reference string '") ;
      gCout.appendString (refString) ;
      gCout.appendCString ("'\n") ;
      gCout.appendCString ("         xString '") ;
      gCout.appendString (str) ;
      gCout.appendCString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU8ArrayConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test U8 array constructor, U8 access... ") ;
  gCout.flush () ;
  const size_t LENGTH = 41 ;
  uint8_t u8Array [LENGTH] ;
  String refString ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    refString = "" ;
    const size_t u8Count = 1 + galgas_random () % LENGTH ;
    for (size_t j = 0 ; j < u8Count ; j++) {
      const uint8_t u8Value = uint8_t (galgas_random ()) ;
      u8Array [j] = u8Value ;
      char s [4] ;
      snprintf (s, 3, "%02" PRIX8, u8Value) ;
      refString.appendString (s) ;
    }
  //--- Remove leading zeros
    while ((refString.length () > 1) && (refString.charAtIndex (0 COMMA_HERE) == '0')) {
      refString.removeCountFromIndex (1, 0 COMMA_HERE) ; // Remove first character
    }
  //---
    const BigUnsigned big (u8Count, u8Array) ;
    const String str = big.xString () ;
  //--- Check U8 access
    String u8AccessString ;
    if (big.u8Count () == 0) {
      u8AccessString.appendCString ("0") ;
    }else{
      char s [4] ;
      snprintf (s, 3, "%" PRIX8, big.u8AtIndex (big.u8Count () - 1)) ;
      u8AccessString.appendString (s) ;
      for (size_t j = big.u8Count () - 1 ; j > 0 ; j--) {
        const uint8_t v = big.u8AtIndex (j - 1) ;
        snprintf (s, 3, "%02" PRIX8, v) ;
        u8AccessString.appendString (s) ;
      }
    }
    if (str != refString) {
      gCout.appendCString ("error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      gCout.appendCString ("Reference string '") ;
      gCout.appendString (refString) ;
      gCout.appendCString ("'\n") ;
      gCout.appendCString ("         xString '") ;
      gCout.appendString (str) ;
      gCout.appendCString ("'\n") ;
      gCout.appendCString ("U8 access string '") ;
      gCout.appendString (u8AccessString) ;
      gCout.appendCString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU64ArrayConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test U64 array constructor... ") ;
  gCout.flush () ;
  const size_t LENGTH = 20 ;
  uint64_t u64Array [LENGTH] ;
  String refString ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    refString = "" ;
    const size_t u64Count = 1 + galgas_random () % LENGTH ;
    for (size_t j = 0 ; j < u64Count ; j++) {
      uint64_t u64Value = galgas_random () ;
      u64Value <<= 32 ;
      u64Value |= galgas_random () ;
      u64Array [j] = u64Value ;
      char s [32] ;
      if (j == 0) {
        snprintf (s, 31, "%" PRIX64, u64Value) ;
      }else{
        snprintf (s, 31, "%016" PRIX64, u64Value) ;
      }
      refString.appendString (s) ;
    }
    const BigUnsigned big (u64Count, u64Array) ;
    const String s = big.xString () ;
    if (s != refString) {
      gCout.appendCString ("error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      gCout.appendCString ("Reference string '") ;
      gCout.appendString (refString) ;
      gCout.appendCString ("'\n") ;
      gCout.appendCString ("Computed string  '") ;
      gCout.appendString (s) ;
      gCout.appendCString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU64Constructor (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test U64 constructor... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    uint64_t v = galgas_random () ;
    v <<= 32 ;
    v |= galgas_random () ;
    const String sRef = stringWithUnsigned (v) ;
    const BigUnsigned big (v) ;
    const String s = big.decimalString () ;
    if (s != sRef) {
      gCout.appendCString ("error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      gCout.appendCString ("Reference string '") ;
      gCout.appendString (sRef) ;
      gCout.appendCString ("'\n") ;
      gCout.appendCString ("Decimal string   '") ;
      gCout.appendString (s) ;
      gCout.appendCString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_and_or_complemented_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: and, or, complement... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    const BigUnsigned bigB = BigUnsigned::randomNumber () ;
    const size_t maxChunkCount = std::max (bigA.chunkCount(), bigB.chunkCount()) ;
    const BigUnsigned v1 = bigA | bigB ;
    const BigUnsigned v2 = (bigA.complemented (maxChunkCount) & bigB.complemented (maxChunkCount)).complemented (maxChunkCount) ;
    const BigUnsigned v3 = bigA & bigB ;
    const BigUnsigned v4 = (bigA.complemented (maxChunkCount) | bigB.complemented (maxChunkCount)).complemented (maxChunkCount) ;
    if ((v1 != v2) || (v3 != v4)) {
      gCout.appendCString (" error  (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      v4.printHex    ("v4") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_xor_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: xor... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    const BigUnsigned bigB = BigUnsigned::randomNumber () ;
    const size_t maxChunkCount = std::max (bigA.chunkCount(), bigB.chunkCount()) ;
    const BigUnsigned v1 = bigA ^ bigB ;
    const BigUnsigned v2 = (bigA & bigB.complemented (maxChunkCount)) | (bigA.complemented (maxChunkCount) & bigB) ;
    const BigUnsigned v3 = ((bigA.complemented (maxChunkCount) & bigB.complemented (maxChunkCount)) | (bigA & bigB)).complemented (maxChunkCount) ;
    if ((v1 != v2) || (v1 != v3)) {
      gCout.appendCString (" error at index ") ;
      gCout.appendUnsigned (i) ;
      gCout.appendNewLine () ; ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testMultiplyingDividingBigUnsignedByChunkUInt (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test multiplying, dividing by ChunkUInt... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigUnsigned dividend = BigUnsigned::randomNumber () ;
    ChunkUInt divisor = 0 ;
    while (divisor == 0) {
      divisor = ChunkUInt (galgas_random ()) ;
    }
    const BigUnsignedQuotientU64Remainder r = dividend.dividingByChunkUInt (divisor) ;
    BigUnsigned verif = r.quotient () ; // verif <- quotient
    verif *= divisor ;
    verif += r.remainder () ;
    if (dividend != verif) {
      gCout.appendCString (" error for i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (", divisor=") ;
      gCout.appendUnsigned (divisor) ;
      gCout.appendNewLine () ; ;
      dividend.printHex ("dividend") ;
      verif.printHex    ("verif   ") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedMultiplyPowerOfTwo (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test multiplying power of two... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (uint32_t i = 0 ; i < 1000 ; i++) {
    const BigUnsigned bigA = BigUnsigned::powerOfTwo (i) ;
    for (uint32_t j = 0 ; j < 1000 ; j++) {
      const BigUnsigned bigB = BigUnsigned::powerOfTwo (j) ;
      const BigUnsigned product = bigA * bigB ;
      const BigUnsigned expectedResult = BigUnsigned::powerOfTwo (i + j) ;
      if (expectedResult.compare (product) != 0) {
        gCout.appendCString (" error for i=") ;
        gCout.appendUnsigned (i) ;
        gCout.appendCString (", j=") ;
        gCout.appendUnsigned (j) ;
        gCout.appendNewLine () ; ;
        bigA.printHex    ("bigA   ") ;
        bigB.printHex    ("bigB   ") ;
        product.printHex ("product") ;
        expectedResult.printHex ("result ") ;
        exit (1) ;
      }
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedRightAndLeftShifts (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test left / right shifts... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (uint32_t i = 0 ; i < 100'000 ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    for (uint32_t shift = 0 ; shift < 200 ; shift++) {
      const BigUnsigned bigALeftShifted = bigA << shift ;
      const BigUnsigned bigALeftRightShifted = bigALeftShifted >> shift ;
      if (bigA != bigALeftRightShifted) {
        gCout.appendCString (" error for shift = ") ;
        gCout.appendUnsigned (shift) ;
        gCout.appendNewLine () ; ;
        bigA.printHex ("bigA                ") ;
        bigALeftRightShifted.printHex ("bigALeftRightShifted") ;
        bigALeftShifted.printHex ("bigALeftShifted     ") ;
        exit (1) ;
      }
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test multiplying, dividing... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigUnsigned dividend = BigUnsigned::randomNumber () ;
    BigUnsigned divisor ;
    while (divisor.isZero ()) {
      divisor = BigUnsigned::randomNumber () ;
    }
    const BigUnsignedQuotientRemainder r = dividend.divideByBigUnsigned (divisor) ;
    BigUnsigned verif = divisor ;
    verif *= r.quotient () ;
    verif += r.remainder () ;
    if ((dividend != verif) || (r.remainder () >= divisor)) {
      gCout.appendCString (" error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")") ;
      if (dividend != verif) {
        gCout.appendCString (" dividend != verif !!!") ;
      }
      if (r.remainder () >= divisor) {
        gCout.appendCString (" Remainder > divisor !!!") ;
      }
      gCout.appendNewLine () ; ;
      verif.printHex     ("Verif    ") ;
      dividend.printHex  ("Dividend ") ;
      divisor.printHex   ("Divisor  ") ;
      r.quotient ().printHex  ("Quotient ") ;
      r.remainder ().printHex ("remainder") ;
      gCout.appendCString ("With naive division\n") ;
      const BigUnsignedQuotientRemainder rr = dividend.naiveDivideByBigUnsigned (divisor) ;
      rr.quotient ().printHex  ("Quotient ") ;
      rr.remainder ().printHex ("Remainder") ;
      if (rr.remainder () >= divisor) {
        gCout.appendCString ("  Remainder > divisor !!!\n") ;
      }
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testAddingSubtractingBigUnsigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: test adding, subtracting... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    const BigUnsigned bigB = BigUnsigned::randomNumber () ;
    BigUnsigned verif = bigA ;
    verif += bigB ;
    verif -= bigB ;
    if (bigA.compare (verif) != 0) {
      gCout.appendCString (" error\n") ;
      verif.printHex ("verif") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------
// page 191
//--------------------------------------------------------------------------------------------------

static void pgcdComputing (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: gcd computing... ") ;
  gCout.appendCString ("n**17 + 9 and (n+1)**17 + 9...\n") ;
  const clock_t start = ::clock () ;
  const String s ("8 424 432 925 592 889 329 288 197 322 308 900 672 459 420 460 792 433") ;
  const BigUnsigned n (s.cString (), ' ') ;
  gCout.appendCString (" n ") ;
  gCout.appendString (n.spacedDecimalStringWithDigitCount (3)) ;
  gCout.appendNewLine () ; ;
  { const String verif = n.spacedDecimalString (3) ;
    if (s != verif) {
      gCout.appendCString ("  Error\n" "   s     '") ;
      gCout.appendString (s) ;
      gCout.appendCString ("'\n") ;
      gCout.appendCString ("   verif '") ;
      gCout.appendString (verif) ;
      gCout.appendCString ("'\n") ;
      exit (1) ;
    }
  }
//--- Computing n**17+9
  BigUnsigned nPower17Plus9 = n ;
  for (uint64_t i = 1 ; i < 17 ; i++) {
    nPower17Plus9 *= n ;
  }
  nPower17Plus9 += 9 ;
  gCout.appendCString (" n**17 + 9 ") ;
  gCout.appendString (nPower17Plus9.spacedDecimalStringWithDigitCount (3)) ;
  gCout.appendNewLine () ; ;
//--- Computing (n+1)**17+9
  BigUnsigned nPlus1 = n + 1 ;
  BigUnsigned nPlus1Power17Plus9 = nPlus1 ;
  for (uint64_t i = 1 ; i < 17 ; i++) {
    nPlus1Power17Plus9 *= nPlus1 ;
  }
  nPlus1Power17Plus9 += 9 ;
  gCout.appendCString (" (n+1)**17 + 9 ") ;
  gCout.appendString (nPlus1Power17Plus9.spacedDecimalStringWithDigitCount (3)) ;
  gCout.appendNewLine () ;
//--- Calcul du PGCD
  { BigUnsigned dividend = nPlus1Power17Plus9 ;
    BigUnsigned divisor  = nPower17Plus9 ;
    bool loop = true ;
    while (loop) {
      const BigUnsignedQuotientRemainder r = dividend.divideByBigUnsigned (divisor) ;
      loop = !r.remainder ().isZero () ;
      if (loop) {
        dividend = divisor ;
        divisor = r.remainder () ;
      }else{
        gCout.appendCString ("PGCD (n**17 + 9, (n+1)**17 + 9) = ") ;
        gCout.appendString (divisor.spacedDecimalString (3)) ;
        gCout.appendNewLine () ; ;
      }
    }
  }
//--- Computing (n-1)**17+9
  BigUnsigned nMinus1 = n - 1 ;
  BigUnsigned nMinus1Power17Plus9 = nMinus1 ;
  for (uint64_t i = 1 ; i < 17 ; i++) {
    BigUnsigned v = nMinus1Power17Plus9 * nMinus1 ;
    nMinus1Power17Plus9 = v ;
  }
  nMinus1Power17Plus9 += 9 ;
  gCout.appendCString (" (n-1)**17 + 9 ") ;
  gCout.appendString (nMinus1Power17Plus9.spacedDecimalStringWithDigitCount (3)) ;
  gCout.appendNewLine () ; ;
//--- Calcul du PGCD
  { BigUnsigned dividend = nPower17Plus9 ;
    BigUnsigned divisor  = nMinus1Power17Plus9 ;
    bool loop = true ;
    while (loop) {
      const BigUnsignedQuotientRemainder r = dividend.divideByBigUnsigned (divisor) ;
      loop = !r.remainder ().isZero () ;
      if (loop) {
        dividend = divisor ;
        divisor = r.remainder () ;
      }else{
        gCout.appendCString ("PGCD (n**17 + 9, (n-1)**17 + 9) = ") ;
        gCout.appendString (divisor.spacedDecimalString (3)) ;
        gCout.appendNewLine () ; ;
      }
    }
  }
//---
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void somePrimeNumbers (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigUnsigned: some prime numbers...\n") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 127 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    gCout.appendCString ("  2**127 - 1 = ") ;
    gCout.appendString (s) ;
    gCout.appendNewLine () ; ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 148 ;
    n += 1 ;
    const BigUnsignedQuotientU64Remainder r = n.dividingByChunkUInt (17) ;
    n = r.quotient () ;
    const String s = n.spacedDecimalString (3) ;
    gCout.appendCString ("  (2**148 + 1) / 17 = ") ;
    gCout.appendString (s) ;
    gCout.appendNewLine () ; ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 607 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    gCout.appendCString ("  2**607 - 1 = ") ;
    gCout.appendString (s) ;
    gCout.appendNewLine () ; ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 4423 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    gCout.appendCString ("  2**4423 - 1 = ") ;
    gCout.appendString (s) ;
    gCout.appendNewLine () ; ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 44497 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    gCout.appendCString ("  2**44497 - 1 = ") ;
    gCout.appendString (s) ;
    gCout.appendNewLine () ; ;
  }
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark BigSigned
#endif

//--------------------------------------------------------------------------------------------------

static void testLogicComplementBigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: logic complement... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned verif = ~ ( ~ bigA) ;
    if (bigA != verif) {
      gCout.appendCString (" error\n") ;
      bigA.printHex  ("bigA ") ;
      verif.printHex ("verif") ;
      exit (1) ;
    }
    const BigSigned verif2 = - ((~ bigA) + 1) ;
    if (bigA != verif2) {
      gCout.appendCString (" error\n") ;
      bigA.printHex  ("bigA ") ;
      verif2.printHex ("verif2") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_bitSetting_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: bit set / reset... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const uint32_t bitIndex = galgas_random () % 1500 ;
    const bool bit = bigA.bitAtIndex (bitIndex) ;
    BigSigned verif = bigA ;
    verif.setBitAtIndex (!bit, bitIndex) ;
    verif.complementBitAtIndex (bitIndex) ;
    if (bigA != verif) {
      gCout.appendCString (" error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      gCout.appendCString ("at index ") ;
      gCout.appendUnsigned (bitIndex) ;
      gCout.appendCString (", bit is ") ;
      gCout.appendUnsigned (bit) ;
      gCout.appendNewLine () ; ;
      bigA.printHex  ("bigA ") ;
      verif.printHex  ("verif") ;
      BigSigned verif2 = bigA ;
      verif2.setBitAtIndex (!bit, bitIndex) ;
      verif2.printHex  ("bigA with bit complemented") ;
      gCout.appendCString (" where at index ") ;
      gCout.appendUnsigned (bitIndex) ;
      gCout.appendCString (", bit is ") ;
      gCout.appendUnsigned (verif2.bitAtIndex (bitIndex)) ;
      gCout.appendNewLine () ; ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_XOR_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: xor... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned bigB = BigSigned::randomNumber () ;
    const BigSigned v1 = bigA ^ bigB ;
    const BigSigned v2 = (bigA & ~bigB) | (~bigA & bigB) ;
    const BigSigned v3 = ~((~bigA & ~bigB) | (bigA & bigB)) ;
    if ((v1 != v2) || (v1 != v3)) {
      gCout.appendCString (" error at index ") ;
      gCout.appendUnsigned (i) ;
      gCout.appendNewLine () ; ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_and_or_complement_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: and, or, complement... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned bigB = BigSigned::randomNumber () ;
    const BigSigned v1 = bigA | bigB ;
    const BigSigned v2 = ~ ((~ bigA) & (~ bigB)) ;
    const BigSigned v3 = bigA & bigB ;
    const BigSigned v4 = ~ ((~ bigA) | (~ bigB)) ;
    if ((v1 != v2) || (v3 != v4)) {
      gCout.appendCString (" error  (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      v4.printHex    ("v4") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testAddingSubtractingBigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: test adding, subtracting... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned bigB = BigSigned::randomNumber () ;
    BigSigned verif = bigA ;
    verif += bigB ;
    verif -= bigB ;
    if (bigA != verif) {
      gCout.appendCString (" error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      verif.printHex ("verif") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      (bigA + bigB).printHex  ("Sum ") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: test multiplying, dividing... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned dividend = BigSigned::randomNumber () ;
    BigSigned divisor ;
    while (divisor.isZero ()) {
     divisor = BigSigned::randomNumber () ;
    }
    const BigSignedQuotientRemainder r = dividend.divideByBigSigned (divisor) ;
    BigSigned verif = divisor ;
    verif *= r.quotient () ;
    verif += r.remainder () ;
    if (dividend != verif) {
      gCout.appendCString (" error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      verif.printHex     ("Verif    ") ;
      dividend.printHex  ("Dividend ") ;
      divisor.printHex   ("Divisor  ") ;
      r.quotient ().printHex  ("Quotient ") ;
      r.remainder ().printHex ("remainder") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_LeftShift_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: left shift... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const uint32_t shift = galgas_random () % 120 ;
    const BigSigned bigAshifted = bigA << shift ;
    BigSigned multiplicand ;
    multiplicand.setBitAtIndex (true, shift) ;
    const BigSigned verif = bigA * multiplicand ;
    if (bigAshifted != verif) {
      gCout.appendCString (" error\n") ;
      verif.printHex       ("Verif      ") ;
      bigAshifted.printHex ("bigAshifted") ;
      bigA.printHex        ("bigA       ") ;
      gCout.appendCString ("Shift: ") ;
      gCout.appendUnsigned (shift) ;
      gCout.appendNewLine () ; ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_RightShift_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: right shift... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const uint32_t shift = galgas_random () % 120 ;
    const BigSigned bigAshifted = bigA >> shift ;
    BigSigned divisor ;
    divisor.setBitAtIndex (true, shift) ;
    const BigSignedQuotientRemainder r = bigA.divideByBigSigned (divisor) ;
    BigSigned verif = r.quotient () ;
    if (bigA.isStrictlyNegative () && !r.remainder ().isZero()) {
      verif -= 1 ;
    }
    if (bigAshifted != verif) {
      gCout.appendCString (" error (i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (")\n") ;
      verif.printHex       ("Verif      ") ;
      bigAshifted.printHex ("bigAshifted") ;
      bigA.printHex        ("bigA       ") ;
      gCout.appendCString ("Shift: ") ;
      gCout.appendUnsigned (shift) ;
      gCout.appendNewLine () ; ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigSignedByChunkUInt (void) {
  set_galgas_random_seed (0) ;
  gCout.appendCString ("BigSigned: test multiplying, dividing by ChunkUInt... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned dividend = BigSigned::randomNumber () ;
    ChunkUInt divisor = 0 ;
    while (divisor == 0) {
      divisor = ChunkUInt (galgas_random ()) ;
    }
    const BigSignedQuotientRemainder r = dividend.dividingByChunkUInt (divisor) ;
    BigSigned verif = r.quotient () ;
    verif *= divisor ;
    verif += r.remainder () ;
    if (dividend != verif) {
      gCout.appendCString (" error for i=") ;
      gCout.appendUnsigned (i) ;
      gCout.appendCString (", divisor=") ;
      gCout.appendUnsigned (divisor) ;
      gCout.appendNewLine () ; ;
      dividend.printHex ("dividend") ;
      verif.printHex    ("verif   ") ;
      exit (1) ;
    }
  }
  gCout.appendCString ("Ok ") ;
  gCout.appendUnsigned (msFromStart (start)) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Main
#endif

//--------------------------------------------------------------------------------------------------

void routine_checkBigInteger (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  const clock_t start = ::clock () ;
  gCout.appendCString ("*** Check BigUnsigned and BigSigned (option --check-big-int) ***\n") ;
  gCout.flush () ;
  gCout.appendCString ("Chunk size: ") ;
  gCout.appendUnsigned (ChunkUIntBitCount) ;
  gCout.appendCString (" bits\n") ;
//--- Check ctl (count leading zeros) function
  const ChunkUInt testValue = ChunkUInt (0x10) ;
  const uint32_t computedCTL = countLeadingZeros (testValue) ;
  uint32_t requiredCTL = 0 ;
  { ChunkUInt v = testValue ;
    while ((v & (ChunkUInt (1) << (ChunkUIntBitCount - 1))) == 0) {
      v <<= 1 ;
      requiredCTL += 1 ;
    }
  }
  gCout.appendCString ("countLeadingZeros function: ") ;
  if (computedCTL == requiredCTL) {
    gCout.appendCString ("ok\n") ;
  }else{
    gCout.appendCString ("error, computed ") ;
    gCout.appendUnsigned (computedCTL) ;
    gCout.appendCString (", required ") ;
    gCout.appendUnsigned (requiredCTL) ;
    gCout.appendNewLine () ;
    exit (1) ;
  }
//--- BigUnsigned
  testBigUnsignedDecimalStringConstructor () ;
  testBigUnsignedBinaryStringConstructor () ;
  testBigUnsignedHexadecimalStringConstructor () ;
  testBigUnsignedU64Constructor () ;
  testBigUnsignedU8ArrayConstructor () ;
  testBigUnsignedU64ArrayConstructor () ;
  testLogic_and_or_complemented_BigUnsigned () ;
  testLogic_xor_BigUnsigned () ;
  testBigUnsignedRightAndLeftShifts () ;
  testBigUnsignedMultiplyPowerOfTwo () ;
  testMultiplyingDividingBigUnsignedByChunkUInt () ;
  testAddingSubtractingBigUnsigned () ;
  test_MultiplyingDividing_BigUnsigned () ;
  somePrimeNumbers () ;
  pgcdComputing () ;
//--- BigSigned
  test_MultiplyingDividing_BigSignedByChunkUInt () ;
  test_RightShift_BigSigned () ;
  test_LeftShift_BigSigned () ;
  testAddingSubtractingBigSigned () ;
  testLogic_and_or_complement_BigSigned () ;
  test_MultiplyingDividing_BigSigned () ;
  testLogicComplementBigSigned () ;
  testLogic_bitSetting_BigSigned () ;
  testLogic_XOR_BigSigned () ;
//---
  gCout.appendCString ("ChunkSharedArray Allocation Count: ") ;
  gCout.appendUnsigned (ChunkSharedArray::chunkSharedArrayAllocationCount ()) ;
  gCout.appendNewLine () ; ;
  gCout.appendCString ("ChunkSharedArray Currently Allocated Count: ") ;
  gCout.appendUnsigned (ChunkSharedArray::chunkSharedArrayCurrentlyAllocatedCount ()) ;
  gCout.appendNewLine () ; ;
//---
  const uint32_t duration = msFromStart (start) ;
  const uint32_t milliseconds = duration % 1000 ;
  const uint32_t seconds = (duration / 1000) % 60 ;
  const uint32_t minutes = (duration / 1000) / 60 ;
  gCout.appendCString ("Done in ") ;
  gCout.appendUnsigned (minutes) ;
  gCout.appendCString (" min ") ;
  gCout.appendUnsigned (seconds) ;
  gCout.appendCString (" s ") ;
  gCout.appendUnsigned (milliseconds) ;
  gCout.appendCString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------
