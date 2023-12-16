//
//  BigSigned.cpp
//  BigUnsigned
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

void BigSigned::operator += (const BigSigned inOperand) {
  if (!inOperand.isZero ()) {
    *this = *this + inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator + (const BigSigned inOperand) const {
  if (inOperand.isZero ()) {
    return *this ;
  }else if (isZero ()) {
    return inOperand ;
  }else if (mIsPositive == inOperand.mIsPositive) { // Same sign, addition
    return BigSigned (mIsPositive, mUnsigned + inOperand.mUnsigned) ;
  }else if (mUnsigned < inOperand.mUnsigned) {
    return BigSigned (!mIsPositive, inOperand.mUnsigned - mUnsigned) ;
  }else{
    return BigSigned (mIsPositive, mUnsigned - inOperand.mUnsigned) ;
  }
}

//--------------------------------------------------------------------------------------------------
