//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator * (const BigSigned inOperand) const {
  return BigSigned (mIsPositive == inOperand.mIsPositive, mUnsigned * inOperand.mUnsigned) ;
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator *= (const BigSigned inOperand) {
  mUnsigned *= inOperand.mUnsigned ;
  if (isZero ()) {
    mIsPositive = true ;
  }else{
    mIsPositive ^= !inOperand.mIsPositive ;
  }
}

//--------------------------------------------------------------------------------------------------
