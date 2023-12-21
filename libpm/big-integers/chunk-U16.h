#pragma once

//--------------------------------------------------------------------------------------------------

#include "macroAssert.h"
#include <cinttypes>

//--------------------------------------------------------------------------------------------------

typedef uint16_t ChunkUInt ;
static const size_t ChunkUIntBitCount = 16 ;
static const ChunkUInt ChunkUIntMax = UINT16_MAX ;

//--------------------------------------------------------------------------------------------------

static const ChunkUInt greatestPowerOf10 = 10'000 ; // 10**4
static const size_t greatestPowerOf10DigitCount = 4 ;

#define ChunkUIntDecimalFormatSpecifierWithLeadingZeros "%04" PRIu16
#define ChunkUIntHexFormatSpecifierWithLeadingZeros "%04" PRIX16

//--------------------------------------------------------------------------------------------------

inline uint32_t countLeadingZeros (const ChunkUInt inValue) {
  return uint32_t (__builtin_clz (inValue) - 16) ;
}

//--------------------------------------------------------------------------------------------------

inline void baseMultiplication (const uint16_t inLeft,
                                const uint16_t inRight,
                                uint16_t & outHigh,
                                uint16_t & outLow) {
  const uint32_t left = inLeft ;
  const uint32_t right = inRight ;
  const uint32_t product = left * right ;
  outHigh = uint16_t (product >> 16) ;
  outLow = uint16_t (product) ;
}

//--------------------------------------------------------------------------------------------------

inline void divForSingleWordDivision (const uint16_t inDividendH, // inDividendH < inDivisor
                                      const uint16_t inDividendL,
                                      const uint16_t inDivisor,
                                      uint16_t & outQuotient,
                                      uint16_t & outRemainder) {
  macroAssert (inDividendH < inDivisor, "inDividendH error (%llu, %llu)", int64_t (inDividendH), int64_t (inDivisor)) ;
  uint32_t dividend = inDividendH ;
  dividend <<= 16 ;
  dividend |= inDividendL ;
  outQuotient = uint16_t (dividend / inDivisor) ;
  outRemainder = uint16_t (dividend % inDivisor) ;
}

//--------------------------------------------------------------------------------------------------

inline uint16_t divForNaiveDivision (const uint16_t inDividendH, // inDividendH <= inDivisor
                                     const uint16_t inDividendL,
                                     const uint16_t inDivisor) {
  if (inDividendH == inDivisor) {
    return ChunkUIntMax ;
  }else{
    macroAssert (inDividendH < inDivisor, "inDividendH error (%llx, %llx)", int64_t (inDividendH), int64_t (inDivisor)) ;
    uint32_t dividend = inDividendH ;
    dividend <<= 16 ;
    dividend |= inDividendL ;
    return uint16_t (dividend / inDivisor) ;
  }
}

//--------------------------------------------------------------------------------------------------

inline uint16_t divForDivision (const uint16_t inDividendH, // inDividendH <= inDivisor
                                const uint16_t inDividendL,
                                const uint16_t inDivisor) { // inDivisor >= 0x8000
  macroAssert (inDivisor > (ChunkUIntMax / 2), "Indivisor error (%llx)", int64_t (inDivisor), 0) ;
  if (inDividendH == inDivisor) {
    return ChunkUIntMax ;
  }else{
    uint32_t dividend = inDividendH ;
    dividend <<= 16 ;
    dividend |= inDividendL ;
    const uint32_t quotient = dividend / inDivisor ;
    return uint16_t (quotient) ;
  }
}

//--------------------------------------------------------------------------------------------------
