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
