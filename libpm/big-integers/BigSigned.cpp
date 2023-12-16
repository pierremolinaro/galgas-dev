//
//  BigSigned.cpp
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Compare
#endif

//--------------------------------------------------------------------------------------------------

int BigSigned::compare (const BigSigned & inOperand) const {
  int result = int (mIsPositive) - int (inOperand.mIsPositive) ;
  if (result == 0) {
    if (mIsPositive) {
      result = mUnsigned.compare (inOperand.mUnsigned) ;
    }else{
      result = inOperand.mUnsigned.compare (mUnsigned) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
