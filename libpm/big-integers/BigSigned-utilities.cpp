//
//  BigSigned-utilities.cpp
//  BigSignedU8U64
//
//  Created by Pierre Molinaro on 15/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

int32_t BigSigned::sign (void) const {
  if (isZero ()) {
    return 0 ;
  }else if (mIsPositive) {
    return 1 ;
  }else{
    return -1 ;
  }
}
