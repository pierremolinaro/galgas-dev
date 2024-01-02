#pragma once

//--------------------------------------------------------------------------------------------------

#include "macroAssert.h"
#include <cinttypes>

//--------------------------------------------------------------------------------------------------

typedef uint8_t ChunkUInt ;
static const ChunkUInt ChunkUIntMax = UINT8_MAX ;

static const ChunkUInt greatestPowerOf10 = 100 ; // 10**2
static const size_t greatestPowerOf10DigitCount = 2 ;

//--------------------------------------------------------------------------------------------------

inline uint32_t countLeadingZeros (const ChunkUInt inValue) {
  return uint32_t (__builtin_clz (inValue)) - 24 ;
}

//--------------------------------------------------------------------------------------------------

inline void baseMultiplication (const uint8_t inLeft,
                                const uint8_t inRight,
                                uint8_t & outHigh,
                                uint8_t & outLow) {
  const uint32_t left = inLeft ;
  const uint32_t right = inRight ;
  const uint32_t product = left * right ;
  outHigh = uint8_t (product >> 8) ;
  outLow = uint8_t (product) ;
}

//--------------------------------------------------------------------------------------------------

inline void divForSingleWordDivision (const uint8_t inDividendH, // inDividendH < inDivisor
                                      const uint8_t inDividendL,
                                      const uint8_t inDivisor,
                                      uint8_t & outQuotient,
                                      uint8_t & outRemainder) {
  macroAssert (inDividendH < inDivisor, "inDividendH error (%llu, %llu)", int64_t (inDividendH), int64_t (inDivisor)) ;
  uint32_t dividend = inDividendH ;
  dividend <<= 8 ;
  dividend |= inDividendL ;
  outQuotient = uint8_t (dividend / inDivisor) ;
  outRemainder = uint8_t (dividend % inDivisor) ;
}

//--------------------------------------------------------------------------------------------------

inline uint8_t divForNaiveDivision (const uint8_t inDividendH, // inDividendH <= inDivisor
                                    const uint8_t inDividendL,
                                    const uint8_t inDivisor) {
  if (inDividendH == inDivisor) {
    return ChunkUIntMax ;
  }else{
    macroAssert (inDividendH < inDivisor, "inDividendH error (%llx, %llx)", int64_t (inDividendH), int64_t (inDivisor)) ;
    uint32_t dividend = inDividendH ;
    dividend <<= 8 ;
    dividend |= inDividendL ;
    return uint8_t (dividend / inDivisor) ;
  }
}

//--------------------------------------------------------------------------------------------------

inline uint8_t divForDivision (const uint8_t inDividendH, // inDividendH <= inDivisor
                               const uint8_t inDividendL,
                               const uint8_t inDivisor) { // inDivisor >= 0x80
  macroAssert (inDivisor > (ChunkUIntMax / 2), "Indivisor error (%llx)", int64_t (inDivisor), 0) ;
  if (inDividendH == inDivisor) {
    return ChunkUIntMax ;
  }else{
    uint32_t dividend = inDividendH ;
    dividend <<= 8 ;
    dividend |= inDividendL ;
    const uint32_t quotient = dividend / inDivisor ;
    return uint8_t (quotient) ;
  }
}

//--------------------------------------------------------------------------------------------------
