//
//  BigSigned.cpp
//  BigUnsigned
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

#include <cinttypes>

//--------------------------------------------------------------------------------------------------

void BigSigned::printHex (const char * inName) const {
  if (isZero ()) {
    printf ("%s: 0\n", inName) ;
  }else{
    printf ("%s: [%" PRIu64 "] %s0x", inName, uint64_t (mUnsigned.u8Count ()), mIsPositive ? "" : "-") ;
    for (size_t i = mUnsigned.u64Count () ; i > 0 ; i--) {
      printf ("%016" PRIX64, mUnsigned.u64AtIndex (i-1)) ;
    }
    printf ("\n") ;
  }
}

//--------------------------------------------------------------------------------------------------

C_String BigSigned::decimalString (void) const {
  if (mIsPositive) {
    return mUnsigned.decimalString () ;
  }else{
    C_String s = "-" ;
    s += mUnsigned.decimalString () ;
    return s ;
  }
}

//--------------------------------------------------------------------------------------------------

C_String BigSigned::spacedDecimalString (const uint32_t inSeparation) const {
  if (mIsPositive) {
    return mUnsigned.spacedDecimalString (inSeparation) ;
  }else{
    C_String s = "-" ;
    s += mUnsigned.spacedDecimalString (inSeparation) ;
    return s ;
  }
}

//--------------------------------------------------------------------------------------------------

C_String BigSigned::hexString (void) const {
  if (mIsPositive) {
    return mUnsigned.hexString () ;
  }else{
    C_String s = "-" ;
    s += mUnsigned.hexString () ;
    return s ;
  }
}

//--------------------------------------------------------------------------------------------------

C_String BigSigned::xString (void) const {
  if (mIsPositive) {
    return mUnsigned.xString () ;
  }else{
    C_String s = "-" ;
    s += mUnsigned.xString () ;
    return s ;
  }
}

//--------------------------------------------------------------------------------------------------
