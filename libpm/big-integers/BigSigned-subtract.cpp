//
//  BigSigned.cpp
//  BigUnsigned
//
//  Created by Pierre Molinaro on 08/12/2023.
//
//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

void BigSigned::operator -= (const BigSigned inOperand) {
  if (!inOperand.isZero ()) {
    *this = *this - inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator - (const BigSigned inOperand) const {
  if (inOperand.isZero ()) {
    return *this ;
  }else if (isZero ()) {
    return - inOperand ;
  }else if (mIsPositive != inOperand.mIsPositive) { // Opposite sign, addition
    return BigSigned (mIsPositive, mUnsigned + inOperand.mUnsigned) ;
  }else if (mUnsigned < inOperand.mUnsigned) { // Same sign
    return BigSigned (!mIsPositive, inOperand.mUnsigned - mUnsigned) ;
  }else{
    return BigSigned (mIsPositive, mUnsigned - inOperand.mUnsigned) ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator - (void) const {
  if (isZero ()) {
    return BigSigned () ;
  }else{
    return BigSigned (!mIsPositive, mUnsigned) ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigSigned::negateInPlace (void) {
  if (!isZero ()) {
    mIsPositive = !mIsPositive ;
  }
}

//--------------------------------------------------------------------------------------------------
