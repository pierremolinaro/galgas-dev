//--------------------------------------------------------------------------------------------------
//
//  e-mail : pierre@pcmolinaro.name
//
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.                                        
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include <iostream>

//--------------------------------------------------------------------------------------------------

#include "all-declarations.h"
#include "time/C_Timer.h"
#include "utilities/M_machine.h"
#include "utilities/galgas-random.h"

//--------------------------------------------------------------------------------------------------

static size_t TEST_COUNT = 10'000 ;

//--------------------------------------------------------------------------------------------------

static uint32_t msFromStart (const clock_t inStart) {
  clock_t duration = ::clock () - inStart ;
  duration /= CLOCKS_PER_SEC / 1000 ;
  return uint32_t (duration) ;
}

//--------------------------------------------------------------------------------------------------

//#if COMPILE_FOR_WINDOWS == 0
//  static void testUnsigned128Multplications (void) {
//    C_Timer timer ;
//    uint64_t errorCount = 0 ;
//    gCout.addString ("Test multiplications 64 x 64 -> 128... " ;
//    for (int i = 0 ; i < 100'000'000 ; i++) {
//      const uint64_t operand1 = uint64_t (galgas_random ()) ;
//      const uint64_t operand2 = uint64_t (galgas_random ()) ;
//    //--- Compute reference result
//     const unsigned __int128 op1_128 = operand1 ;
//     const unsigned __int128 op2_128 = operand2 ;
//     const unsigned __int128 referenceProduct = op1_128 * op2_128 ;
//    //--- Compute with galgas routine
//     uint64_t productH ;
//     uint64_t productL ;
//     mul64x64to128 (operand1, operand2, productH, productL) ;
//    //--- Compare result
//      unsigned __int128 product = productH ;
//      product <<= 64 ;
//      product |= productL ;
//      const bool ok = referenceProduct == product ;
//      if (!ok) {
//        errorCount += 1 ;
//      }
//    }
//    if (errorCount == 0) {
//      gCout.addString ("Ok " << timer.msFromStart () << " ms\n" ;
//    }else{
//      gCout.addString (errorCount << " errors (" << timer.msFromStart () << " ms)\n" ;
//      exit (1) ;
//    }
//  }
//#endif

//--------------------------------------------------------------------------------------------------

//#if COMPILE_FOR_WINDOWS == 0
//  static void testUnsigned128Divisions (void) {
//    C_Timer timer ;
//    uint64_t errorCount = 0 ;
//    gCout.addString ("Test divisions 128 / 64 -> (128, 64)... " ;
//    for (int i = 0 ; i < 100'000'000 ; i++) {
//      const uint64_t dividendH = uint64_t (galgas_random ()) ;
//      const uint64_t dividendL = uint64_t (galgas_random ()) ;
//      uint64_t divisor = 0 ;
//      while (divisor == 0) {
//        divisor = uint64_t (galgas_random ()) ;
//      }
//    //--- Build 128 bits operands
//      unsigned __int128 dividend = dividendH ;
//      dividend <<= 64 ;
//      dividend |= dividendL ;
//    //--- Compute reference result
//     const unsigned __int128 referenceQuotient = dividend / divisor ;
//     const unsigned __int128 referenceRemainder = dividend % divisor ;
//    //--- Compute with galgas routine
//     uint64_t quotientH ;
//     uint64_t quotientL ;
//     uint64_t remainder ;
//     div128By64 (dividendH, dividendL, divisor, quotientH, quotientL, remainder) ;
//    //--- Compare result
//      unsigned __int128 quotient = quotientH ;
//      quotient <<= 64 ;
//      quotient |= quotientL ;
//      const bool ok = (referenceQuotient == quotient) && (referenceRemainder == remainder) ;
//      if (!ok) {
//        errorCount += 1 ;
//      }
//    }
//    if (errorCount == 0) {
//      gCout.addString ("Ok " << timer.msFromStart () << " ms\n" ;
//    }else{
//      gCout.addString (errorCount << " errors (" << timer.msFromStart () << " ms)\n" ;
//      exit (1) ;
//    }
//  }
//#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark BigUnsigned
#endif

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedDecimalStringConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test decimal string constructor... ") ;
  gCout.flush () ;
  const size_t LENGTH = 13 ;
  String refString ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    refString = "" ;
    const size_t n = 1 + galgas_random () % LENGTH ;
    for (size_t j = 0 ; j < n ; j++) {
      const uint32_t value = galgas_random () ;
      refString.addUnsigned (value) ;
    }
  //--- Remove leading zeros
    while ((refString.length () > 1) && (refString (0 COMMA_HERE) == '0')) {
      refString.suppress (0, 1 COMMA_HERE) ;
    }
  //---
    bool ok = false ;
    const BigUnsigned big (refString.cString (HERE), BigUnsignedBase::ten, ok) ;
    const String str = big.decimalString () ;
     if ((str != refString) || !ok) {
      gCout.addString ("error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString ("), ok=") ;
      gCout.addBool (ok) ;
      gCout.addNL () ; ;
      gCout.addString ("Reference string '") ;
      gCout.addString (refString) ;
      gCout.addString ("'\n") ;
      gCout.addString ("   decimalString '") ;
      gCout.addString (str) ;
      gCout.addString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedBinaryStringConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test binary string constructor... ") ;
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
        refString.addString (((value & 1) == 0) ? "0" : "1") ;
        value >>= 1 ;
      }
    }
  //--- Remove leading zeros
    while ((refString.length () > 1) && (refString (0 COMMA_HERE) == '0')) {
      refString.suppress (0, 1 COMMA_HERE) ; // Remove first character
//      refString.erase (refString.begin ()) ; // Remove first character
    }
  //---
    bool ok = false ;
    const BigUnsigned big (refString.cString (HERE), BigUnsignedBase::two, ok) ;
    const String str = big.bitString () ;
    if ((str != refString) || !ok) {
      gCout.addString ("error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString ("), ok=") ;
      gCout.addBool (ok) ;
      gCout.addNL () ; ;
      gCout.addString ("Reference string '") ;
      gCout.addString (refString) ;
      gCout.addString ("'\n") ;
      gCout.addString ("       bitString '") ;
      gCout.addString (str) ;
      gCout.addString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedHexadecimalStringConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test hexadecimal string constructor... ") ;
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
      refString.addString (s) ;
    }
  //--- Remove leading zeros
    while ((refString.length () > 1) && (refString (0 COMMA_HERE) == '0')) {
      refString.suppress (0, 1 COMMA_HERE) ; // Remove first character
//      refString.erase (refString.begin ()) ; // Remove first character
    }
  //---
    bool ok = false ;
    const BigUnsigned big (refString.cString (HERE), BigUnsignedBase::sixteen, ok) ;
    const String str = big.xString () ;
     if ((str != refString) || !ok) {
      gCout.addString ("error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString ("), ok=") ;
      gCout.addBool (ok) ;
      gCout.addNL () ; ;
      gCout.addString ("Reference string '") ;
      gCout.addString (refString) ;
      gCout.addString ("'\n") ;
      gCout.addString ("         xString '") ;
      gCout.addString (str) ;
      gCout.addString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU8ArrayConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test U8 array constructor, U8 access... ") ;
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
      refString.addString (s) ;
    }
  //--- Remove leading zeros
    while ((refString.length () > 1) && (refString (0 COMMA_HERE) == '0')) {
      refString.suppress (0, 1 COMMA_HERE) ; // Remove first character
//      refString.erase (refString.begin ()) ; // Remove first character
    }
  //---
    const BigUnsigned big (u8Count, u8Array) ;
    const String str = big.xString () ;
  //--- Check U8 access
    String u8AccessString ;
    if (big.u8Count () == 0) {
      u8AccessString.addString ("0") ;
    }else{
      char s [4] ;
      snprintf (s, 3, "%" PRIX8, big.u8AtIndex (big.u8Count () - 1)) ;
      u8AccessString.addString (s) ;
      for (size_t j = big.u8Count () - 1 ; j > 0 ; j--) {
        const uint8_t v = big.u8AtIndex (j - 1) ;
        snprintf (s, 3, "%02" PRIX8, v) ;
        u8AccessString.addString (s) ;
      }
    }
    if (str != refString) {
      gCout.addString ("error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      gCout.addString ("Reference string '") ;
      gCout.addString (refString) ;
      gCout.addString ("'\n") ;
      gCout.addString ("         xString '") ;
      gCout.addString (str) ;
      gCout.addString ("'\n") ;
      gCout.addString ("U8 access string '") ;
      gCout.addString (u8AccessString) ;
      gCout.addString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU64ArrayConstructor (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test U64 array constructor... ") ;
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
      refString.addString (s) ;
    }
    const BigUnsigned big (u64Count, u64Array) ;
    const String s = big.xString () ;
    if (s != refString) {
      gCout.addString ("error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      gCout.addString ("Reference string '") ;
      gCout.addString (refString) ;
      gCout.addString ("'\n") ;
      gCout.addString ("Computed string  '") ;
      gCout.addString (s) ;
      gCout.addString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU64Constructor (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test U64 constructor... ") ;
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
      gCout.addString ("error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      gCout.addString ("Reference string '") ;
      gCout.addString (sRef) ;
      gCout.addString ("'\n") ;
      gCout.addString ("Decimal string   '") ;
      gCout.addString (s) ;
      gCout.addString ("'\n") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_and_or_complemented_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: and, or, complement... ") ;
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
      gCout.addString (" error  (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      v4.printHex    ("v4") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_xor_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: xor... ") ;
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
      gCout.addString (" error at index ") ;
      gCout.addUnsigned (i) ;
      gCout.addNL () ; ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testMultiplyingDividingBigUnsignedByChunkUInt (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test multiplying, dividing by ChunkUInt... ") ;
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
      gCout.addString (" error for i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (", divisor=") ;
      gCout.addUnsigned (divisor) ;
      gCout.addNL () ; ;
      dividend.printHex ("dividend") ;
      verif.printHex    ("verif   ") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedMultiplyPowerOfTwo (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test multiplying power of two... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (uint32_t i = 0 ; i < 1000 ; i++) {
    const BigUnsigned bigA = BigUnsigned::powerOfTwo (i) ;
    for (uint32_t j = 0 ; j < 1000 ; j++) {
      const BigUnsigned bigB = BigUnsigned::powerOfTwo (j) ;
      const BigUnsigned product = bigA * bigB ;
      const BigUnsigned expectedResult = BigUnsigned::powerOfTwo (i + j) ;
      if (expectedResult.compare (product) != 0) {
        gCout.addString (" error for i=") ;
        gCout.addUnsigned (i) ;
        gCout.addString (", j=") ;
        gCout.addUnsigned (j) ;
        gCout.addNL () ; ;
        bigA.printHex    ("bigA   ") ;
        bigB.printHex    ("bigB   ") ;
        product.printHex ("product") ;
        expectedResult.printHex ("result ") ;
        exit (1) ;
      }
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedRightAndLeftShifts (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test left / right shifts... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (uint32_t i = 0 ; i < 100'000 ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    for (uint32_t shift = 0 ; shift < 200 ; shift++) {
      const BigUnsigned bigALeftShifted = bigA << shift ;
      const BigUnsigned bigALeftRightShifted = bigALeftShifted >> shift ;
      if (bigA != bigALeftRightShifted) {
        gCout.addString (" error for shift = ") ;
        gCout.addUnsigned (shift) ;
        gCout.addNL () ; ;
        bigA.printHex ("bigA                ") ;
        bigALeftRightShifted.printHex ("bigALeftRightShifted") ;
        bigALeftShifted.printHex ("bigALeftShifted     ") ;
        exit (1) ;
      }
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test multiplying, dividing... ") ;
  gCout.flush () ;
//  const BigUnsigned dividend (2, 2, (uint8_t[2]) {0x57, 0x4E} COMMA_HERE) ;
//  const BigUnsigned divisor (2, 2, (uint8_t[2]) {0x51, 0xD3} COMMA_HERE) ;
//  const BigUnsignedQuotientRemainder r = dividend.divideByBigUnsigned (divisor) ;
//  BigUnsigned verif = divisor ;
//  verif *= r.quotient () ;
//  verif.printHex     ("Q * div  ") ;
//  verif += r.remainder () ;
//  verif.printHex     ("Verif    ") ;
//  dividend.printHex  ("Dividend ") ;
//  divisor.printHex   ("Divisor  ") ;
//  r.quotient ().printHex   ("Quotient ") ;
//  r.remainder ().printHex   ("Remainder") ;
//  exit (1) ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
//    gCout.addString ("----\n" ;
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
      gCout.addString (" error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")") ;
      if (dividend != verif) {
        gCout.addString (" dividend != verif !!!") ;
      }
      if (r.remainder () >= divisor) {
        gCout.addString (" Remainder > divisor !!!") ;
      }
      gCout.addNL () ; ;
      verif.printHex     ("Verif    ") ;
      dividend.printHex  ("Dividend ") ;
      divisor.printHex   ("Divisor  ") ;
      r.quotient ().printHex  ("Quotient ") ;
      r.remainder ().printHex ("remainder") ;
      gCout.addString ("With naive division\n") ;
      const BigUnsignedQuotientRemainder rr = dividend.naiveDivideByBigUnsigned (divisor) ;
      rr.quotient ().printHex  ("Quotient ") ;
      rr.remainder ().printHex ("Remainder") ;
      if (rr.remainder () >= divisor) {
        gCout.addString ("  Remainder > divisor !!!\n") ;
      }
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testAddingSubtractingBigUnsigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: test adding, subtracting... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    const BigUnsigned bigB = BigUnsigned::randomNumber () ;
    BigUnsigned verif = bigA ;
    verif += bigB ;
    verif -= bigB ;
    if (bigA.compare (verif) != 0) {
      gCout.addString (" error\n") ;
      verif.printHex ("verif") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------
// page 191
//--------------------------------------------------------------------------------------------------

static void pgcdComputing (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: gcd computing... ") ;
  gCout.addString ("n**17 + 9 and (n+1)**17 + 9...\n") ;
  const clock_t start = ::clock () ;
  const String s ("8 424 432 925 592 889 329 288 197 322 308 900 672 459 420 460 792 433") ;
  const BigUnsigned n (s.cString (HERE), ' ') ;
  gCout.addString (" n ") ;
  gCout.addString (n.spacedDecimalStringWithDigitCount (3)) ;
  gCout.addNL () ; ;
  { const String verif = n.spacedDecimalString (3) ;
    if (s != verif) {
      gCout.addString ("  Error\n" "   s     '") ;
      gCout.addString (s) ;
      gCout.addString ("'\n") ;
      gCout.addString ("   verif '") ;
      gCout.addString (verif) ;
      gCout.addString ("'\n") ;
      exit (1) ;
    }
  }
//--- Computing n**17+9
  BigUnsigned nPower17Plus9 = n ;
  for (uint64_t i = 1 ; i < 17 ; i++) {
    nPower17Plus9 *= n ;
  }
  nPower17Plus9 += 9 ;
  gCout.addString (" n**17 + 9 ") ;
  gCout.addString (nPower17Plus9.spacedDecimalStringWithDigitCount (3)) ;
  gCout.addNL () ; ;
//--- Computing (n+1)**17+9
  BigUnsigned nPlus1 = n + 1 ;
  BigUnsigned nPlus1Power17Plus9 = nPlus1 ;
  for (uint64_t i = 1 ; i < 17 ; i++) {
    nPlus1Power17Plus9 *= nPlus1 ;
  }
  nPlus1Power17Plus9 += 9 ;
  gCout.addString (" (n+1)**17 + 9 ") ;
  gCout.addString (nPlus1Power17Plus9.spacedDecimalStringWithDigitCount (3)) ;
  gCout.addNL () ; ;
//--- Calcul du PGCD
  { BigUnsigned dividend = nPlus1Power17Plus9 ;
    BigUnsigned divisor  = nPower17Plus9 ;
    bool loop = true ;
    while (loop) {
      const BigUnsignedQuotientRemainder r = dividend.divideByBigUnsigned (divisor) ;
//    gCout.addString ("  Dividend " << dividend.componentCount ()
//              << ", divisor " << divisor.componentCount ()
//              << ", quotient " << quotient.componentCount ()
//              << ", remainder " << remainder.componentCount () << "\n" << std::flush ;
//    BigUnsigned verif = divisor ;
//    verif.mulBigUnsignedInPlace (quotient) ;
//    verif.addBigUnsignedInPlace (remainder) ;
//    if ((verif != dividend) || (remainder >= divisor)) {
//      gCout.addString ("*** Error verif\n" ;
//      dividend.printHex  ("dividend ") ;
//      verif.printHex     ("verif    ") ;
//      quotient.printHex  ("quotient ") ;
//      divisor.printHex   ("divisor  ") ;
//      remainder.printHex ("remainder") ;
//      exit (1) ;
//    }
      loop = !r.remainder ().isZero () ;
      if (loop) {
        dividend = divisor ;
        divisor = r.remainder () ;
      }else{
        gCout.addString ("PGCD (n**17 + 9, (n+1)**17 + 9) = ") ;
        gCout.addString (divisor.spacedDecimalString (3)) ;
        gCout.addNL () ; ;
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
  gCout.addString (" (n-1)**17 + 9 ") ;
  gCout.addString (nMinus1Power17Plus9.spacedDecimalStringWithDigitCount (3)) ;
  gCout.addNL () ; ;
//--- Calcul du PGCD
  { BigUnsigned dividend = nPower17Plus9 ;
    BigUnsigned divisor  = nMinus1Power17Plus9 ;
    bool loop = true ;
    while (loop) {
      const BigUnsignedQuotientRemainder r = dividend.divideByBigUnsigned (divisor) ;
//    gCout.addString ("  Dividend " << dividend.componentCount ()
//              << ", divisor " << divisor.componentCount ()
//              << ", quotient " << quotient.componentCount ()
//              << ", remainder " << remainder.componentCount () << "\n" << std::flush ;
//    BigUnsigned verif = divisor ;
//    verif.mulBigUnsignedInPlace (quotient) ;
//    verif.addBigUnsignedInPlace (remainder) ;
//    if ((verif != dividend) || (remainder >= divisor)) {
//      gCout.addString ("*** Error verif\n" ;
//      dividend.printHex  ("dividend ") ;
//      verif.printHex     ("verif    ") ;
//      quotient.printHex  ("quotient ") ;
//      divisor.printHex   ("divisor  ") ;
//      remainder.printHex ("remainder") ;
//      exit (1) ;
//    }
      loop = !r.remainder ().isZero () ;
      if (loop) {
        dividend = divisor ;
        divisor = r.remainder () ;
      }else{
        gCout.addString ("PGCD (n**17 + 9, (n-1)**17 + 9) = ") ;
        gCout.addString (divisor.spacedDecimalString (3)) ;
        gCout.addNL () ; ;
      }
    }
  }
//---
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void somePrimeNumbers (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigUnsigned: some prime numbers...\n") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 127 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    gCout.addString ("  2**127 - 1 = ") ;
    gCout.addString (s) ;
    gCout.addNL () ; ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 148 ;
    n += 1 ;
    const BigUnsignedQuotientU64Remainder r = n.dividingByChunkUInt (17) ;
    n = r.quotient () ;
    const String s = n.spacedDecimalString (3) ;
    gCout.addString ("  (2**148 + 1) / 17 = ") ;
    gCout.addString (s) ;
    gCout.addNL () ; ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 607 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    gCout.addString ("  2**607 - 1 = ") ;
    gCout.addString (s) ;
    gCout.addNL () ; ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 4423 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    gCout.addString ("  2**4423 - 1 = ") ;
    gCout.addString (s) ;
    gCout.addNL () ; ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 44497 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    gCout.addString ("  2**44497 - 1 = ") ;
    gCout.addString (s) ;
    gCout.addNL () ; ;
  }
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark BigSigned
#endif

//--------------------------------------------------------------------------------------------------

static void testLogicComplementBigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: logic complement... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned verif = ~ ( ~ bigA) ;
    if (bigA != verif) {
      gCout.addString (" error\n") ;
      bigA.printHex  ("bigA ") ;
      verif.printHex ("verif") ;
      exit (1) ;
    }
    const BigSigned verif2 = - ((~ bigA) + 1) ;
    if (bigA != verif2) {
      gCout.addString (" error\n") ;
      bigA.printHex  ("bigA ") ;
      verif2.printHex ("verif2") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_bitSetting_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: bit set / reset... ") ;
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
      gCout.addString (" error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      gCout.addString ("at index ") ;
      gCout.addUnsigned (bitIndex) ;
      gCout.addString (", bit is ") ;
      gCout.addUnsigned (bit) ;
      gCout.addNL () ; ;
      bigA.printHex  ("bigA ") ;
      verif.printHex  ("verif") ;
      BigSigned verif2 = bigA ;
      verif2.setBitAtIndex (!bit, bitIndex) ;
      verif2.printHex  ("bigA with bit complemented") ;
      gCout.addString (" where at index ") ;
      gCout.addUnsigned (bitIndex) ;
      gCout.addString (", bit is ") ;
      gCout.addUnsigned (verif2.bitAtIndex (bitIndex)) ;
      gCout.addNL () ; ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_XOR_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: xor... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned bigB = BigSigned::randomNumber () ;
    const BigSigned v1 = bigA ^ bigB ;
    const BigSigned v2 = (bigA & ~bigB) | (~bigA & bigB) ;
    const BigSigned v3 = ~((~bigA & ~bigB) | (bigA & bigB)) ;
    if ((v1 != v2) || (v1 != v3)) {
      gCout.addString (" error at index ") ;
      gCout.addUnsigned (i) ;
      gCout.addNL () ; ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_and_or_complement_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: and, or, complement... ") ;
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
      gCout.addString (" error  (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      v4.printHex    ("v4") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void testAddingSubtractingBigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: test adding, subtracting... ") ;
  gCout.flush () ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned bigB = BigSigned::randomNumber () ;
    BigSigned verif = bigA ;
    verif += bigB ;
    verif -= bigB ;
    if (bigA != verif) {
      gCout.addString (" error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      verif.printHex ("verif") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      (bigA + bigB).printHex  ("Sum ") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: test multiplying, dividing... ") ;
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
//    bool ok = dividend == verif ;
//    if (ok) {
//      if (dividend.isPositive ()) {
//        ok = (r.remainder () < divisor) && r.remainder ().isPositive () ;
//      }else{
//        ok = (r.remainder () > divisor) && (!r.remainder ().isPositive () || r.remainder ().isZero ()) ;
//      }
//    }
    if (dividend != verif) {
      gCout.addString (" error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      verif.printHex     ("Verif    ") ;
      dividend.printHex  ("Dividend ") ;
      divisor.printHex   ("Divisor  ") ;
      r.quotient ().printHex  ("Quotient ") ;
      r.remainder ().printHex ("remainder") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_LeftShift_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: left shift... ") ;
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
      gCout.addString (" error\n") ;
      verif.printHex       ("Verif      ") ;
      bigAshifted.printHex ("bigAshifted") ;
      bigA.printHex        ("bigA       ") ;
      gCout.addString ("Shift: ") ;
      gCout.addUnsigned (shift) ;
      gCout.addNL () ; ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_RightShift_BigSigned (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: right shift... ") ;
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
      gCout.addString (" error (i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (")\n") ;
      verif.printHex       ("Verif      ") ;
      bigAshifted.printHex ("bigAshifted") ;
      bigA.printHex        ("bigA       ") ;
      gCout.addString ("Shift: ") ;
      gCout.addUnsigned (shift) ;
      gCout.addNL () ; ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigSignedByChunkUInt (void) {
  set_galgas_random_seed (0) ;
  gCout.addString ("BigSigned: test multiplying, dividing by ChunkUInt... ") ;
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
      gCout.addString (" error for i=") ;
      gCout.addUnsigned (i) ;
      gCout.addString (", divisor=") ;
      gCout.addUnsigned (divisor) ;
      gCout.addNL () ; ;
      dividend.printHex ("dividend") ;
      verif.printHex    ("verif   ") ;
      exit (1) ;
    }
  }
  gCout.addString ("Ok ") ;
  gCout.addUnsigned (msFromStart (start)) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Main
#endif

//--------------------------------------------------------------------------------------------------

void routine_checkBigInteger (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  const clock_t start = ::clock () ;
  gCout.addString ("*** Check BigUnsigned and BigSigned (option --check-big-int) ***\n") ;
  gCout.flush () ;
//  #if COMPILE_FOR_WINDOWS == 0
//    testUnsigned128Divisions () ;
//    testUnsigned128Multplications () ;
//  #endif
  gCout.addString ("Chunk size: ") ;
  gCout.addUnsigned (ChunkUIntBitCount) ;
  gCout.addString (" bits\n") ;
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
  gCout.addString ("countLeadingZeros function: ") ;
  if (computedCTL == requiredCTL) {
    gCout.addString ("ok\n") ;
  }else{
    gCout.addString ("error, computed ") ;
    gCout.addUnsigned (computedCTL) ;
    gCout.addString (", required ") ;
    gCout.addUnsigned (requiredCTL) ;
    gCout.addNL () ;
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
  gCout.addString ("ChunkSharedArray Allocation Count: ") ;
  gCout.addUnsigned (ChunkSharedArray::chunkSharedArrayAllocationCount ()) ;
  gCout.addNL () ; ;
  gCout.addString ("ChunkSharedArray Currently Allocated Count: ") ;
  gCout.addUnsigned (ChunkSharedArray::chunkSharedArrayCurrentlyAllocatedCount ()) ;
  gCout.addNL () ; ;
//---
  const uint32_t duration = msFromStart (start) ;
  const uint32_t milliseconds = duration % 1000 ;
  const uint32_t seconds = (duration / 1000) % 60 ;
  const uint32_t minutes = (duration / 1000) / 60 ;
  gCout.addString ("Done in ") ;
  gCout.addUnsigned (minutes) ;
  gCout.addString (" min ") ;
  gCout.addUnsigned (seconds) ;
  gCout.addString (" s ") ;
  gCout.addUnsigned (milliseconds) ;
  gCout.addString (" ms\n") ;
}

//--------------------------------------------------------------------------------------------------