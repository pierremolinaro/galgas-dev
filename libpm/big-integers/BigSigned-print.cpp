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

String BigSigned::decimalString (void) const {
  if (mIsPositive) {
    return mUnsigned.decimalString () ;
  }else{
    String s = "-" ;
    s.addString (mUnsigned.decimalString ()) ;
    return s ;
  }
}

//--------------------------------------------------------------------------------------------------

String BigSigned::spacedDecimalString (const uint32_t inSeparation) const {
  if (mIsPositive) {
    return mUnsigned.spacedDecimalString (inSeparation) ;
  }else{
    String s = "-" ;
    s.addString (mUnsigned.spacedDecimalString (inSeparation)) ;
    return s ;
  }
}

//--------------------------------------------------------------------------------------------------

String BigSigned::hexString (void) const {
  if (mIsPositive) {
    return mUnsigned.hexString () ;
  }else{
    String s = "-" ;
    s.addString (mUnsigned.hexString ()) ;
    return s ;
  }
}

//--------------------------------------------------------------------------------------------------

String BigSigned::xString (void) const {
  if (mIsPositive) {
    return mUnsigned.xString () ;
  }else{
    String s = "-" ;
    s.addString (mUnsigned.xString ()) ;
    return s ;
  }
}

//--------------------------------------------------------------------------------------------------
