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

static size_t TEST_COUNT = 1'000'000 ;

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
//    std::cout << "Test multiplications 64 x 64 -> 128... " ;
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
//      std::cout << "Ok " << timer.msFromStart () << " ms\n" ;
//    }else{
//      std::cout << errorCount << " errors (" << timer.msFromStart () << " ms)\n" ;
//      exit (1) ;
//    }
//  }
//#endif

//--------------------------------------------------------------------------------------------------

//#if COMPILE_FOR_WINDOWS == 0
//  static void testUnsigned128Divisions (void) {
//    C_Timer timer ;
//    uint64_t errorCount = 0 ;
//    std::cout << "Test divisions 128 / 64 -> (128, 64)... " ;
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
//      std::cout << "Ok " << timer.msFromStart () << " ms\n" ;
//    }else{
//      std::cout << errorCount << " errors (" << timer.msFromStart () << " ms)\n" ;
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
  std::cout << "BigUnsigned: test decimal string constructor... " ;
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
    while ((refString.length () > 1) && (refString (0 COMMA_HERE) == '0')) {
      refString.suppress (0, 1 COMMA_HERE) ;
    }
  //---
    bool ok = false ;
    const BigUnsigned big (refString.cString (HERE), BigUnsignedBase::ten, ok) ;
    const String str = big.decimalString () ;
     if ((str != refString) || !ok) {
      std::cout << "error (i=" << i << "), ok=" << ok << "\n" ;
      std::cout << "Reference string '" << refString.cString (HERE) << "'\n" ;
      std::cout << "   decimalString '" << str.cString (HERE) << "'\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedBinaryStringConstructor (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test binary string constructor... " ;
  const size_t LENGTH = 13 ;
  String refString ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    refString = "" ;
    const size_t n = 1 + galgas_random () % LENGTH ;
    for (size_t j = 0 ; j < n ; j++) {
      uint32_t value = galgas_random () ;
      for (size_t bit = 0 ; bit < 32 ; bit ++) {
        refString += (((value & 1) == 0) ? "0" : "1") ;
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
      std::cout << "error (i=" << i << "), ok=" << ok << "\n" ;
      std::cout << "Reference string '" << refString.cString (HERE) << "'\n" ;
      std::cout << "       bitString '" << str.cString (HERE) << "'\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedHexadecimalStringConstructor (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test hexadecimal string constructor... " ;
  const size_t LENGTH = 13 ;
  String refString ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    refString = "" ;
    const size_t n = 1 + galgas_random () % LENGTH ;
    for (size_t j = 0 ; j < n ; j++) {
      const uint32_t value = galgas_random () ;
      char s [12] ;
      snprintf (s, 11, "%08" PRIX8, value) ;
      refString += s ;
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
      std::cout << "error (i=" << i << "), ok=" << ok << "\n" ;
      std::cout << "Reference string '" << refString.cString (HERE) << "'\n" ;
      std::cout << "         xString '" << str.cString (HERE) << "'\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU8ArrayConstructor (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test U8 array constructor, U8 access... " ;
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
      refString += s ;
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
      u8AccessString += "0" ;
    }else{
      char s [4] ;
      snprintf (s, 3, "%" PRIX8, big.u8AtIndex (big.u8Count () - 1)) ;
      u8AccessString += s ;
      for (size_t j = big.u8Count () - 1 ; j > 0 ; j--) {
        const uint8_t v = big.u8AtIndex (j - 1) ;
        snprintf (s, 3, "%02" PRIX8, v) ;
        u8AccessString += s ;
      }
    }
    if (str != refString) {
      std::cout << "error (i=" << i << ")\n" ;
      std::cout << "Reference string '" << refString.cString (HERE) << "'\n" ;
      std::cout << "         xString '" << str.cString (HERE) << "'\n" ;
      std::cout << "U8 access string '" << u8AccessString.cString (HERE) << "'\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU64ArrayConstructor (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test U64 array constructor... " ;
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
      refString += s ;
    }
    const BigUnsigned big (u64Count, u64Array) ;
    const String s = big.xString () ;
    if (s != refString) {
      std::cout << "error (i=" << i << ")\n" ;
      std::cout << "Reference string '" << refString.cString (HERE) << "'\n" ;
      std::cout << "Computed string  '" << s.cString (HERE) << "'\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedU64Constructor (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test U64 constructor... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    uint64_t v = galgas_random () ;
    v <<= 32 ;
    v |= galgas_random () ;
    const String sRef = stringWithUnsigned (v) ;
    const BigUnsigned big (v) ;
    const String s = big.decimalString () ;
    if (s != sRef) {
      std::cout << "error (i=" << i << ")\n" ;
      std::cout << "Reference string '" << sRef.cString (HERE) << "'\n" ;
      std::cout << "Decimal string   '" << s.cString (HERE) << "'\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_and_or_complemented_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: and, or, complement... " ;
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
      std::cout << " error  (i=" << i << ")\n" ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      v4.printHex    ("v4") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_xor_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: xor... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    const BigUnsigned bigB = BigUnsigned::randomNumber () ;
    const size_t maxChunkCount = std::max (bigA.chunkCount(), bigB.chunkCount()) ;
    const BigUnsigned v1 = bigA ^ bigB ;
    const BigUnsigned v2 = (bigA & bigB.complemented (maxChunkCount)) | (bigA.complemented (maxChunkCount) & bigB) ;
    const BigUnsigned v3 = ((bigA.complemented (maxChunkCount) & bigB.complemented (maxChunkCount)) | (bigA & bigB)).complemented (maxChunkCount) ;
    if ((v1 != v2) || (v1 != v3)) {
      std::cout << " error at index " << i << "\n" ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testMultiplyingDividingBigUnsignedByChunkUInt (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test multiplying, dividing by ChunkUInt... " ;
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
      std::cout << " error for i=" << i << ", divisor=" << divisor << "\n" ;
      dividend.printHex ("dividend") ;
      verif.printHex    ("verif   ") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedMultiplyPowerOfTwo (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test multiplying power of two... " ;
  const clock_t start = ::clock () ;
  for (uint32_t i = 0 ; i < 1000 ; i++) {
    const BigUnsigned bigA = BigUnsigned::powerOfTwo (i) ;
    for (uint32_t j = 0 ; j < 1000 ; j++) {
      const BigUnsigned bigB = BigUnsigned::powerOfTwo (j) ;
      const BigUnsigned product = bigA * bigB ;
      const BigUnsigned expectedResult = BigUnsigned::powerOfTwo (i + j) ;
      if (expectedResult.compare (product) != 0) {
        std::cout << " error for i=" << i << ", j=" << j << "\n" ;
        bigA.printHex    ("bigA   ") ;
        bigB.printHex    ("bigB   ") ;
        product.printHex ("product") ;
        expectedResult.printHex ("result ") ;
        exit (1) ;
      }
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testBigUnsignedRightAndLeftShifts (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test left / right shifts... " ;
  const clock_t start = ::clock () ;
  for (uint32_t i = 0 ; i < 100'000 ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    for (uint32_t shift = 0 ; shift < 200 ; shift++) {
      const BigUnsigned bigALeftShifted = bigA << shift ;
      const BigUnsigned bigALeftRightShifted = bigALeftShifted >> shift ;
      if (bigA != bigALeftRightShifted) {
        std::cout << " error for shift = " << shift << "\n" ;
        bigA.printHex ("bigA                ") ;
        bigALeftRightShifted.printHex ("bigALeftRightShifted") ;
        bigALeftShifted.printHex ("bigALeftShifted     ") ;
        exit (1) ;
      }
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigUnsigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test multiplying, dividing... " ;
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
//    std::cout << "----\n" ;
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
      std::cout << " error (i=" << i << ")" ;
      if (dividend != verif) {
        std::cout << " dividend != verif !!!" ;
      }
      if (r.remainder () >= divisor) {
        std::cout << " Remainder > divisor !!!" ;
      }
      std::cout << "\n" ;
      verif.printHex     ("Verif    ") ;
      dividend.printHex  ("Dividend ") ;
      divisor.printHex   ("Divisor  ") ;
      r.quotient ().printHex  ("Quotient ") ;
      r.remainder ().printHex ("remainder") ;
      std::cout << "With naive division\n" ;
      const BigUnsignedQuotientRemainder rr = dividend.naiveDivideByBigUnsigned (divisor) ;
      rr.quotient ().printHex  ("Quotient ") ;
      rr.remainder ().printHex ("Remainder") ;
      if (rr.remainder () >= divisor) {
        std::cout << "  Remainder > divisor !!!\n" ;
      }
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testAddingSubtractingBigUnsigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: test adding, subtracting... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigUnsigned bigA = BigUnsigned::randomNumber () ;
    const BigUnsigned bigB = BigUnsigned::randomNumber () ;
    BigUnsigned verif = bigA ;
    verif += bigB ;
    verif -= bigB ;
    if (bigA.compare (verif) != 0) {
      std::cout << " error\n" ;
      verif.printHex ("verif") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------
// page 191
//--------------------------------------------------------------------------------------------------

static void pgcdComputing (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: gcd computing... " ;
  std::cout << "n**17 + 9 and (n+1)**17 + 9...\n" ;
  const clock_t start = ::clock () ;
  const String s ("8 424 432 925 592 889 329 288 197 322 308 900 672 459 420 460 792 433") ;
  const BigUnsigned n (s.cString (HERE), ' ') ;
  std::cout << " n " << n.spacedDecimalStringWithDigitCount (3).cString (HERE) << "\n" ;
  { const String verif = n.spacedDecimalString (3) ;
    if (s != verif) {
      std::cout << "  Error\n" ;
      std::cout << "   s     '" << s.cString (HERE) << "'\n" ;
      std::cout << "   verif '" << verif.cString (HERE) << "'\n" ;
      exit (1) ;
    }
  }
//--- Computing n**17+9
  BigUnsigned nPower17Plus9 = n ;
  for (uint64_t i = 1 ; i < 17 ; i++) {
    nPower17Plus9 *= n ;
  }
  nPower17Plus9 += 9 ;
  std::cout << " n**17 + 9 " << nPower17Plus9.spacedDecimalStringWithDigitCount (3).cString (HERE) << "\n" ;
//--- Computing (n+1)**17+9
  BigUnsigned nPlus1 = n + 1 ;
  BigUnsigned nPlus1Power17Plus9 = nPlus1 ;
  for (uint64_t i = 1 ; i < 17 ; i++) {
    nPlus1Power17Plus9 *= nPlus1 ;
  }
  nPlus1Power17Plus9 += 9 ;
  std::cout << " (n+1)**17 + 9 " << nPlus1Power17Plus9.spacedDecimalStringWithDigitCount (3).cString (HERE) << "\n" ;
//--- Calcul du PGCD
  { BigUnsigned dividend = nPlus1Power17Plus9 ;
    BigUnsigned divisor  = nPower17Plus9 ;
    bool loop = true ;
    while (loop) {
      const BigUnsignedQuotientRemainder r = dividend.divideByBigUnsigned (divisor) ;
//    std::cout << "  Dividend " << dividend.componentCount ()
//              << ", divisor " << divisor.componentCount ()
//              << ", quotient " << quotient.componentCount ()
//              << ", remainder " << remainder.componentCount () << "\n" << std::flush ;
//    BigUnsigned verif = divisor ;
//    verif.mulBigUnsignedInPlace (quotient) ;
//    verif.addBigUnsignedInPlace (remainder) ;
//    if ((verif != dividend) || (remainder >= divisor)) {
//      std::cout << "*** Error verif\n" ;
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
        std::cout << "PGCD (n**17 + 9, (n+1)**17 + 9) = " << divisor.spacedDecimalString (3).cString (HERE) << "\n" ;
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
  std::cout << " (n-1)**17 + 9 " << nMinus1Power17Plus9.spacedDecimalStringWithDigitCount (3).cString (HERE) << "\n" ;
//--- Calcul du PGCD
  { BigUnsigned dividend = nPower17Plus9 ;
    BigUnsigned divisor  = nMinus1Power17Plus9 ;
    bool loop = true ;
    while (loop) {
      const BigUnsignedQuotientRemainder r = dividend.divideByBigUnsigned (divisor) ;
//    std::cout << "  Dividend " << dividend.componentCount ()
//              << ", divisor " << divisor.componentCount ()
//              << ", quotient " << quotient.componentCount ()
//              << ", remainder " << remainder.componentCount () << "\n" << std::flush ;
//    BigUnsigned verif = divisor ;
//    verif.mulBigUnsignedInPlace (quotient) ;
//    verif.addBigUnsignedInPlace (remainder) ;
//    if ((verif != dividend) || (remainder >= divisor)) {
//      std::cout << "*** Error verif\n" ;
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
        std::cout << "PGCD (n**17 + 9, (n-1)**17 + 9) = " << divisor.spacedDecimalString (3).cString (HERE) << "\n" ;
      }
    }
  }
//---
  std::cout << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void somePrimeNumbers (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigUnsigned: some prime numbers...\n" ;
  const clock_t start = ::clock () ;
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 127 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    std::cout << "  2**127 - 1 = " << s.cString (HERE) << "\n" ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 148 ;
    n += 1 ;
    const BigUnsignedQuotientU64Remainder r = n.dividingByChunkUInt (17) ;
    n = r.quotient () ;
    const String s = n.spacedDecimalString (3) ;
    std::cout << "  (2**148 + 1) / 17 = " << s.cString (HERE) << "\n" ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 607 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    std::cout << "  2**607 - 1 = " << s.cString (HERE) << "\n" ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 4423 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    std::cout << "  2**4423 - 1 = " << s.cString (HERE) << "\n" ;
  }
  { BigUnsigned n = BigUnsigned (1) ;
    n <<= 44497 ;
    n -= 1 ;
    const String s = n.spacedDecimalString (3) ;
    std::cout << "  2**44497 - 1 = " << s.cString (HERE) << "\n" ;
  }
  std::cout << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark BigSigned
#endif

//--------------------------------------------------------------------------------------------------

static void testLogicComplementBigSigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: logic complement... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned verif = ~ ( ~ bigA) ;
    if (bigA != verif) {
      std::cout << " error\n" ;
      bigA.printHex  ("bigA ") ;
      verif.printHex ("verif") ;
      exit (1) ;
    }
    const BigSigned verif2 = - ((~ bigA) + 1) ;
    if (bigA != verif2) {
      std::cout << " error\n" ;
      bigA.printHex  ("bigA ") ;
      verif2.printHex ("verif2") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_bitSetting_BigSigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: bit set / reset... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const uint32_t bitIndex = galgas_random () % 1500 ;
    const bool bit = bigA.bitAtIndex (bitIndex) ;
    BigSigned verif = bigA ;
    verif.setBitAtIndex (!bit, bitIndex) ;
    verif.complementBitAtIndex (bitIndex) ;
    if (bigA != verif) {
      std::cout << " error (i=" << i << ")\n" ;
      std::cout << "at index " << bitIndex << ", bit is " << bit << "\n" ;
      bigA.printHex  ("bigA ") ;
      verif.printHex  ("verif") ;
      BigSigned verif2 = bigA ;
      verif2.setBitAtIndex (!bit, bitIndex) ;
      verif2.printHex  ("bigA with bit complemented") ;
      std::cout << " where at index " << bitIndex << ", bit is " << verif2.bitAtIndex (bitIndex) << "\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_XOR_BigSigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: xor... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned bigB = BigSigned::randomNumber () ;
    const BigSigned v1 = bigA ^ bigB ;
    const BigSigned v2 = (bigA & ~bigB) | (~bigA & bigB) ;
    const BigSigned v3 = ~((~bigA & ~bigB) | (bigA & bigB)) ;
    if ((v1 != v2) || (v1 != v3)) {
      std::cout << " error at index " << i << "\n" ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testLogic_and_or_complement_BigSigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: and, or, complement... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned bigB = BigSigned::randomNumber () ;
    const BigSigned v1 = bigA | bigB ;
    const BigSigned v2 = ~ ((~ bigA) & (~ bigB)) ;
    const BigSigned v3 = bigA & bigB ;
    const BigSigned v4 = ~ ((~ bigA) | (~ bigB)) ;
    if ((v1 != v2) || (v3 != v4)) {
      std::cout << " error  (i=" << i << ")\n" ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      v1.printHex    ("v1") ;
      v2.printHex    ("v2") ;
      v3.printHex    ("v3") ;
      v4.printHex    ("v4") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void testAddingSubtractingBigSigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: test adding, subtracting... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const BigSigned bigB = BigSigned::randomNumber () ;
    BigSigned verif = bigA ;
    verif += bigB ;
    verif -= bigB ;
    if (bigA != verif) {
      std::cout << " error (i=" << i << ")\n" ;
      verif.printHex ("verif") ;
      bigA.printHex  ("bigA ") ;
      bigB.printHex  ("bigB ") ;
      (bigA + bigB).printHex  ("Sum ") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigSigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: test multiplying, dividing... " ;
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
      std::cout << " error (i=" << i << ")\n" ;
      verif.printHex     ("Verif    ") ;
      dividend.printHex  ("Dividend ") ;
      divisor.printHex   ("Divisor  ") ;
      r.quotient ().printHex  ("Quotient ") ;
      r.remainder ().printHex ("remainder") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void test_LeftShift_BigSigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: left shift... " ;
  const clock_t start = ::clock () ;
  for (size_t i = 0 ; i < TEST_COUNT ; i++) {
    const BigSigned bigA = BigSigned::randomNumber () ;
    const uint32_t shift = galgas_random () % 120 ;
    const BigSigned bigAshifted = bigA << shift ;
    BigSigned multiplicand ;
    multiplicand.setBitAtIndex (true, shift) ;
    const BigSigned verif = bigA * multiplicand ;
    if (bigAshifted != verif) {
      std::cout << " error\n" ;
      verif.printHex       ("Verif      ") ;
      bigAshifted.printHex ("bigAshifted") ;
      bigA.printHex        ("bigA       ") ;
      std::cout << "Shift: " << shift << "\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void test_RightShift_BigSigned (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: right shift... " ;
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
      std::cout << " error (i=" << i << ")\n" ;
      verif.printHex       ("Verif      ") ;
      bigAshifted.printHex ("bigAshifted") ;
      bigA.printHex        ("bigA       ") ;
      std::cout << "Shift: " << shift << "\n" ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

static void test_MultiplyingDividing_BigSignedByChunkUInt (void) {
  set_galgas_random_seed (0) ;
  std::cout << "BigSigned: test multiplying, dividing by ChunkUInt... " ;
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
      std::cout << " error for i=" << i << ", divisor=" << divisor << "\n" ;
      dividend.printHex ("dividend") ;
      verif.printHex    ("verif   ") ;
      exit (1) ;
    }
  }
  std::cout << "Ok " << msFromStart (start) << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Main
#endif

//--------------------------------------------------------------------------------------------------

void routine_checkBigInteger (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  std::cout << "*** Check BigUnsigned and BigSigned (option --check-bit-int) ***\n" ;
//  #if COMPILE_FOR_WINDOWS == 0
//    testUnsigned128Divisions () ;
//    testUnsigned128Multplications () ;
//  #endif
  std::cout << "Chunk size: " << ChunkUIntBitCount << " bits\n" ;
  const clock_t start = ::clock () ;
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
  std::cout << "ChunkSharedArray Allocation Count: "
            << ChunkSharedArray::chunkSharedArrayAllocationCount () << "\n" ;
  std::cout << "ChunkSharedArray Currently Allocated Count: "
            << ChunkSharedArray::chunkSharedArrayCurrentlyAllocatedCount () << "\n" ;
//---
  const uint32_t duration = msFromStart (start) ;
  const uint32_t milliseconds = duration % 1000 ;
  const uint32_t seconds = (duration / 1000) % 60 ;
  const uint32_t minutes = (duration / 1000) / 60 ;
  std::cout << "Done in " << minutes << " min " << seconds << " s " << milliseconds << " ms\n" ;
}

//--------------------------------------------------------------------------------------------------
