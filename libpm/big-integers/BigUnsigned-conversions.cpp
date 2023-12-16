//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"

//--------------------------------------------------------------------------------------------------

bool BigUnsigned::fitsInUInt32 (void) const {
  return u8Count () <= 4 ;
}

//--------------------------------------------------------------------------------------------------

bool BigUnsigned::fitsInUInt64 (void) const {
  return u8Count () <= 8 ;
}

//--------------------------------------------------------------------------------------------------

uint32_t BigUnsigned::requiredBitCountForUnsignedRepresentation (void) const {
  if (isZero ()) {
    return 0 ;
  }else{
    uint32_t n = uint32_t (u8Count ()) * 8 ;
    uint8_t last = u8AtIndex (u8Count () - 1) ;
    MF_Assert (last != 0, "last is null", 0, 0) ;
    while ((last & 0x80) == 0) {
      n -= 1 ;
      last <<= 1 ;
    }
    return n ;
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t BigUnsigned::uint32 (void) const {
  if (isZero ()) {
    return 0 ;
  }else{
    return uint32_t (u64AtIndex (0)) ;
  }
}

//--------------------------------------------------------------------------------------------------

uint64_t BigUnsigned::uint64 (void) const {
  if (isZero ()) {
    return 0 ;
  }else{
    return u64AtIndex (0) ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::extractBytesForUnsignedRepresentation (std::vector <uint8_t> & outValue) const {
  outValue.clear () ;
  for (size_t i = 0 ; i < u8Count () ; i++) {
    const uint8_t v = u8AtIndex (i) ;
    outValue.push_back (v) ;
  }
}

//--------------------------------------------------------------------------------------------------
