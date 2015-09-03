//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Handing signed integer of arbitrary size                                                                           *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2015, ..., 2015 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/PMMPInt.h"

//---------------------------------------------------------------------------------------------------------------------*

PMMPInt::PMMPInt (void) :
mUnsignedValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

PMMPInt::PMMPInt (const uint64_t inValue) :
mUnsignedValue () {
  if (inValue > 0) {
    mUnsignedValue.addObject ((uint32_t) (inValue & UINT32_MAX)) ;
    const uint64_t hi = inValue >> 32 ;
    if (hi > 0) {
      mUnsignedValue.addObject ((uint32_t) hi) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

PMMPInt::~PMMPInt (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool PMMPInt::isZero (void) const {
  return mUnsignedValue.count () == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t PMMPInt::uint32AtIndex (const int32_t inIndex) const {
  uint32_t result = 0 ;
  if (inIndex < mUnsignedValue.count ()) {
    result = mUnsignedValue (inIndex COMMA_HERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

/*bool PMMPInt::valueAtBitIndex (const uint32_t inIndex) const {
  bool result = false ;
  if (inIndex < 64) {
    result = ((mLow >> inIndex) & 1) != 0 ;
  }else if (inIndex < 128) {
    result = ((mHigh >> (inIndex - 64)) & 1) != 0 ;
  }
  return result ;
}*/

//---------------------------------------------------------------------------------------------------------------------*

/*void PMMPInt::setValueAtBitIndex (const bool inValue, const uint32_t inIndex) {
  if (inIndex < 64) {
    const uint64_t mask = ((uint64_t) 1) << inIndex ;
    if (inValue) {
      mLow |= mask ;
    }else{
      mLow &= ~mask ;
    }
  }else if (inIndex < 128) {
    const uint64_t mask = ((uint64_t) 1) << (inIndex - 64) ;
    if (inValue) {
      mHigh |= mask ;
    }else{
      mHigh &= ~mask ;
    }
  }
}*/

//---------------------------------------------------------------------------------------------------------------------*

void PMMPInt::increment (void) {
  bool add = true ;
  int32_t idx = 0 ;
  while (add && (idx < mUnsignedValue.count ())) {
    mUnsignedValue (idx COMMA_HERE) ++ ;
    add = mUnsignedValue (idx COMMA_HERE) == 0 ;
  }
  if (mUnsignedValue.count () == 0) {
    mUnsignedValue.addObject (1) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

/*PMMPInt & PMMPInt::operator -- (void) {
  if (0 == mLow) {
    mHigh -- ;
  }
  mLow -- ;
  return *this ;
}*/

//---------------------------------------------------------------------------------------------------------------------*

/*void PMMPInt::operator += (const PMMPInt & inValue) {
  const uint64_t previousLow = mLow ;
  mLow += inValue.mLow ;
  const uint64_t carry = mLow < previousLow ;
  mHigh += inValue.mHigh + carry ;
} */

//---------------------------------------------------------------------------------------------------------------------*

PMMPInt PMMPInt::operator + (const PMMPInt & inValue) const {
  PMMPInt result ;
  const int32_t leftCount = uint32WordCount () ;
  const int32_t rightCount = inValue.uint32WordCount () ;
  const int32_t count = (leftCount > rightCount) ? leftCount : rightCount ;
  uint32_t carry = 0 ;
  for (int32_t i=0 ; i<count ; i++) {
    const uint64_t left = uint32AtIndex (i) ;
    const uint64_t right = inValue.uint32AtIndex (i) ;
    const uint64_t r = left + right + carry ;
    result.mUnsignedValue.addObject((uint32_t) (r & UINT32_MAX)) ;
    carry = (uint32_t) (r >> 32) ;
  }
  if (carry > 0) {
    result.mUnsignedValue.addObject (carry) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool PMMPInt::operator == (const PMMPInt & inOperand) const {
  bool equal = uint32WordCount () == inOperand.uint32WordCount () ;
  for (int32_t i=0 ; equal && (i<uint32WordCount ()) ; i++) {
    equal = uint32AtIndex (i) == inOperand.uint32AtIndex (i) ;
  }
  return equal ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool PMMPInt::operator != (const PMMPInt & inValue) const {
  return ! (*this == inValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
