
#include "all-declarations.h"

//---------------------------------------------------------------------------------------------------------------------*

static uint32_t randomU32 (void) {
  return (uint32_t) rand () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void routine_checkGMP (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  co << "*** Check GMP (option --check-gmp) ***\n" ;
  uint32_t errorCount = 0 ;
  {
    co << "Add, subtract test..." ;
    co.flush () ;
    uint32_t addSubtractErrorCount = 0 ;
    for (int32_t i=0 ; i<500000 ; i++) {
      const C_BigInt bigA = C_BigInt::randomNumber () ;
      const C_BigInt bigB = C_BigInt::randomNumber () ;
      const C_BigInt bigAdd = bigA + bigB ;
      const C_BigInt bigSub = bigA - bigB ;
      const C_BigInt bigAdd2 = bigA + bigA ;
      if (bigAdd2 != (bigAdd + bigSub)) {
        if (addSubtractErrorCount == 0) {
          co << "\n" ;
        }
        co << "  Error for " << bigA.decimalString () << " and " << bigB.decimalString () << "\n" ;
        addSubtractErrorCount ++ ;
      }
    }
    if (addSubtractErrorCount == 0) {
      co << "Ok\n" ;
    }
    errorCount += addSubtractErrorCount ;
  }
  {
    co << "Multiplication test..." ;
    co.flush () ;
    uint32_t multiplicationErrorCount = 0 ;
    for (int32_t i=0 ; i<500000 ; i++) {
      const C_BigInt bigA = C_BigInt::randomNumber () ;
      const C_BigInt bigB = C_BigInt::randomNumber () ;
      const C_BigInt bigAdd = bigA + bigB ;
      const C_BigInt bigSub = bigA - bigB ;
      const C_BigInt bigProd = bigAdd * bigSub ;
      const C_BigInt bigA2minusB2 = bigA * bigA - bigB * bigB ;
      if (bigA2minusB2 != bigProd) {
        if (multiplicationErrorCount == 0) {
          co << "\n" ;
        }
        co << "  Error for " << bigA.decimalString () << " and " << bigB.decimalString () << "\n" ;
        multiplicationErrorCount ++ ;
      }
    }
    if (multiplicationErrorCount == 0) {
      co << "Ok\n" ;
    }
    errorCount += multiplicationErrorCount ;
  }
  {
    co << "Division test..." ;
    co.flush () ;
    uint32_t divisionErrorCount = 0 ;
    for (int32_t i=0 ; i<500000 ; i++) {
      const C_BigInt bigA = C_BigInt::randomNumber () ;
      C_BigInt bigB = C_BigInt::randomNumber () ;
      bigB >>= (randomU32 () & 127) ;
      while (bigB.isZero ()) {
        bigB = C_BigInt::randomNumber () ;
        bigB >>= (randomU32 () & 127) ;
      }
      C_BigInt quotient ;
      C_BigInt remainder ;
      bigA.divideBy (bigB, quotient, remainder) ;
      const C_BigInt bigAA = bigB * quotient + remainder ;
      if (bigA != bigAA) {
        if (divisionErrorCount == 0) {
          co << "\n" ;
        }
        co << "  Error for " << bigA.decimalString () << " and " << bigB.decimalString () << "\n" ;
        divisionErrorCount ++ ;
      }
    }
    if (divisionErrorCount == 0) {
      co << "Ok\n" ;
    }
    errorCount += divisionErrorCount ;
  }
/*  co << "***** C_BigInt example ******\n" ;
  C_BigInt bigint ;
  co << "Zero : " << bigint.hexString() << "\n" ;
  ++ bigint ;
  co << "increment : " << bigint.hexString() << "\n" ;
  -- bigint ;
  co << "Decrement : " << bigint.hexString() << "\n" ;
  -- bigint ;
  co << "Decrement : " << bigint.hexString() << "\n" ;
  C_BigInt bigint2 (UINT32_MAX, false) ;
  co << "0xFFFFFFFF : " << bigint2.hexString() << "\n" ;
  ++ bigint2 ;
  co << "increment : " << bigint2.hexString() << "\n" ;
  -- bigint2 ;
  co << "Decrement : " << bigint2.hexString() << "\n" ;
  -- bigint2 ;
  co << "Decrement : " << bigint2.hexString() << "\n" ;
  bigint2 = bigint2 << 40 ;
  co << "<< 40 : " << bigint2.hexString() << "\n" ;
  -- bigint2 ;
  co << "Decrement : " << bigint2.hexString() << "\n" ;
//--- Random tests
  co << "Add and subtract random test 1\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    const int32_t a = randomS16 () ;
    const int32_t b = randomS16 () ;
    const C_BigInt bigA (a) ;
    const C_BigInt bigB (b) ;
    const C_BigInt bigAdd = bigA + bigB ;
    const C_BigInt bigAddVerif (a + b) ;
    if (bigAdd != bigAddVerif) {
      co << "Error 1 for " << cStringWithSigned (a) << " + " << cStringWithSigned (b) << "\n" ;
      errorCount ++ ;
    }
    const C_BigInt bigNeg = bigA - bigB ;
    const C_BigInt bigNegVerif (a - b) ;
    if (bigNeg != bigNegVerif) {
      co << "Error 2 for " << cStringWithSigned (a) << " - " << cStringWithSigned (b) << "\n" ;
      errorCount ++ ;
    }
    const C_BigInt bigNeg2 = (- bigA) + bigB ;
    const C_BigInt bigNeg2Verif (b - a) ;
    if (bigNeg2 != bigNeg2Verif) {
      co << "Error 3 for -" << cStringWithSigned (a) << " + " << cStringWithSigned (b) << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Add and subtract random test 2\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    const C_BigInt bigA (randomU64 (), randomU64 (), randomBool ()) ;
    const C_BigInt bigB (randomU64 (), randomU64 (), randomBool ()) ;
    const C_BigInt bigC = bigB + bigA - bigB ;
    if (bigA != bigC) {
      co << "Error 1 for " << bigA.decimalString () << " != " << bigC.decimalString () << "\n" ;
      errorCount ++ ;
    }
    const C_BigInt bigD = bigA + bigB - bigA ;
    if (bigB != bigD) {
      co << "Error 2 for " << bigB.decimalString () << " != " << bigD.decimalString () << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Multiply random test\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    const uint32_t a = randomU16 () ;
    const uint32_t b = randomU16 () ;
    const C_BigInt bigA (a, false) ;
    const C_BigInt bigMul = bigA * b ;
    const C_BigInt bigMulVerif (a * b, false) ;
    if (bigMul != bigMulVerif) {
      co << "Error for " << cStringWithUnsigned (a) << " + " << cStringWithUnsigned (b) << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Other random test\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    const int32_t a = randomS32 () ;
    const uint32_t b = randomU32 () ;
    C_BigInt bigA (a) ;
    for (int32_t j=0 ; j<10 ; j++) {
      bigA *= b ;
    }
    C_BigInt bigB = bigA ;
    ++ bigB ;
    const C_BigInt bigC = bigA - bigB ;
    const C_BigInt bigCVerif (-1) ;
    if (bigC != bigCVerif) {
      co << "Error for combining " << cStringWithSigned (a) << " and " << cStringWithUnsigned (b) << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Display in decimal\n" ;
  for (int32_t i=0 ; i<1000 ; i++) {
    const uint32_t v = randomU32 () ;
    const C_BigInt bigV (v, false) ;
    const C_String strV = cStringWithUnsigned (v) ;
    const C_String strBigV = bigV.decimalString () ;
    if (strV != strV) {
      co << "Error for decimalString: '" << strV << "' != '" << strBigV << "'\n" ;
      errorCount ++ ;
    }
  }
  co << "Computing 100!\n" ;
  C_BigInt f (1, false) ;
  for (uint32_t i=2 ; i<=100 ; i++) {
    f *= i ;
  }
  co << "100! = " << f.decimalString() << "\n" ;
  co << "Computing 1000!\n" ;
  f = C_BigInt (1, false) ;
  for (uint32_t i=2 ; i<=1000 ; i++) {
    f *= i ;
  }
  co << "1000! = " << f.decimalString() << "\n" ;
  co << "Shift right positive numbers\n" ;
  for (uint32_t i=2 ; i<=1000 ; i++) {
    const C_BigInt bigV (randomU64 (), randomU64 (), false) ;
    const uint32_t shift = randomU32 () % 100 ;
    const C_BigInt bigVLeftShifted = bigV << shift ;
    const C_BigInt bigResult = bigVLeftShifted >> shift ;
    if (bigV != bigResult) {
      co << "Error : " << bigV.decimalString() << " != " << bigResult.decimalString() << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Shift right negative numbers\n" ;
  const C_BigInt minusOne (1, true) ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    const C_BigInt bigV (randomU64 (), randomU64 (), true) ;
    const uint32_t shift = randomU32 () % 100 ;
    const C_BigInt bigVLeftShifted = bigV << shift ;
    const C_BigInt bigResult = bigVLeftShifted >> shift ;
    if (bigV != bigResult) {
      co << "Error : " << bigV.decimalString() << " != " << bigResult.decimalString() << "\n" ;
      errorCount ++ ;
    }
    C_BigInt v = bigVLeftShifted ;
    while (v != minusOne) {
      v >>= randomU32 () % 39 ;
    }
  }
  co << "Multiplication\n" ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    const C_BigInt bigA = C_BigInt (randomU64 (), randomU64 (), randomBool ()) * randomU32 () ;
    const C_BigInt bigAM = minusOne * bigA * minusOne ;
    if (bigA != bigAM) {
      co << "Error : A" << bigA.decimalString() << " != -1*A*-1" << bigAM.decimalString() << "\n" ;
      errorCount ++ ;
    }
    const C_BigInt bigB = C_BigInt (randomU64 (), randomU64 (), randomBool ()) * randomU32 () ;
    const C_BigInt bigABAB = (bigA + bigB) * (bigA - bigB) ;
    const C_BigInt bigAABB = bigA * bigA  - bigB * bigB ;
    if (bigA != bigAM) {
      co << "Error : (A+B)*(A-B)" << bigABAB.decimalString() << " != A*A-B*B" << bigAABB.decimalString() << "\n" ;
      errorCount ++ ;
    }
    const C_BigInt bigF = (bigA + bigB) * (bigB + bigA) ;
    const C_BigInt bigG = bigA * bigA + bigB * bigB + bigA * bigB + bigB * bigA ;
    if (bigF != bigG) {
      co << "Error : (A+B)*(B+A) " << bigF.decimalString() << " != A*A+2*A*B+B*B " << bigG.decimalString() << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Division by uint32_t\n" ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    const C_BigInt bigA = C_BigInt (randomU64 (), randomU64 (), false) * randomU32 () ;
    const uint32_t divisor = randomU32 () | 1 ;
    C_BigInt quotient ;
    uint32_t remainder ;
    bigA.divideBy (divisor, quotient, remainder) ;
    const C_BigInt bigAM = quotient * divisor + remainder ;
    if (bigA != bigAM) {
      co << "Error : " << bigA.decimalString() << " != " << bigAM.decimalString() << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Division by C_BigInt\n" ;
  for (uint32_t i=1 ; i<1000 ; i++) {
    const C_BigInt dividende = C_BigInt (randomU64 (), randomU64 (), false) * C_BigInt (randomU64 (), randomU64 (), false) ;
    const C_BigInt divisor = C_BigInt (randomU64 (), randomU64 (), false) + 2 ;
    C_BigInt quotient ;
    C_BigInt remainder ;
    dividende.divideBy (divisor, quotient, remainder) ;
    const C_BigInt result = quotient * divisor + remainder ;
    if (dividende != result) {
      co << "Error : " << dividende.decimalString() << " != " << result.decimalString() << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Conversions to uint64\n" ;
  C_BigInt uint64Test (UINT64_MAX, false) ;
  if (! uint64Test.fitsInUInt64 ()) {
    co << "Error : 0x" << uint64Test.hexString () << " is not an uint64\n" ;
    errorCount ++ ;
  }
  uint64Test += 1 ;
  if (uint64Test.fitsInUInt64 ()) {
    co << "Error : 0x" << uint64Test.hexString () << " is an uint64\n" ;
    errorCount ++ ;
  }
  for (uint32_t i=1 ; i<1000 ; i++) {
    const uint32_t v = randomU32 () ;
    const C_BigInt bigV = C_BigInt (v, false) ;
    const uint64_t vv = bigV.uint64 () ;
    if (vv != v) {
      co << "Error 1: " << cStringWithUnsigned (v) << " != " << cStringWithUnsigned (vv) << "\n" ;
      errorCount ++ ;
    }
    const uint64_t v2 = randomU64 () ;
    const C_BigInt bigVV = C_BigInt (v2, false) ;
    const uint64_t vv2 = bigVV.uint64 () ;
    if (vv2 != v2) {
      co << "Error 2: " << cStringWithUnsigned (v2) << " != " << cStringWithUnsigned (vv2) << "\n" ;
      errorCount ++ ;
    }
  }
  co << "Conversions to sint64\n" ;
  C_BigInt int64Test (INT64_MAX) ;
  if (! int64Test.fitsInSInt64 ()) {
    co << "Error : " << int64Test.hexString () << " (INT64_MAX) is not an int64\n" ;
    errorCount ++ ;
  }
  int64Test += 1 ;
  if (int64Test.fitsInSInt64 ()) {
    co << "Error : " << int64Test.hexString () << " (INT64_MAX + 1) is an int64\n" ;
    errorCount ++ ;
  }
  int64Test = C_BigInt (INT64_MIN) ;
  if (! int64Test.fitsInSInt64 ()) {
    co << "Error : " << int64Test.hexString () << " (INT64_MIN) is not an int64\n" ;
    errorCount ++ ;
  }
  int64Test -= 1 ;
  if (int64Test.fitsInSInt64 ()) {
    co << "Error : " << int64Test.hexString () << " (INT64_MIN - 1) is an int64\n" ;
    errorCount ++ ;
  }
  for (uint32_t i=1 ; i<1000 ; i++) {
    const int64_t v = randomS64 () ;
    const C_BigInt bigV = C_BigInt (v) ;
    const int64_t vv = bigV.int64 () ;
    if (vv != v) {
      co << "Error 1: " << cStringWithSigned (v) << " != " << cStringWithSigned (vv) << "\n" ;
      errorCount ++ ;
    }
    const uint64_t v2 = randomU64 () ;
    const C_BigInt bigVV = C_BigInt (v2, false) ;
    const uint64_t vv2 = bigVV.uint64 () ;
    if (vv2 != v2) {
      co << "Error 2: " << cStringWithUnsigned (v2) << " != " << cStringWithUnsigned (vv2) << "\n" ;
      errorCount ++ ;
    }
  } */
  if (errorCount == 0) {
    co << "*** Success ***\n" ;
  }else{
    co << "*** Total error count: " << cStringWithSigned (errorCount) << " ***\n" ;
    exit (1) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
