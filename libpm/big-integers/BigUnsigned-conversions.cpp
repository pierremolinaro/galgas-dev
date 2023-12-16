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
    uint32_t n = uint32_t (u8Count () - 1) * 8 ;
    uint8_t last = u8AtIndex (u8Count () - 1) ;
    MF_Assert (last != 0, "last is null", 0, 0) ;
    while (last != 0) {
      n += 1 ;
      last /= 2 ;
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
