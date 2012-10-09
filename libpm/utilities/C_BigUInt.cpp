//---------------------------------------------------------------------------*
//                                                                           *
//  Handing unsigned integer of arbitrary size                               *
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2012, ..., 2012 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "utilities/C_BigUInt.h"

//---------------------------------------------------------------------------*

C_BigUInt::C_BigUInt (void) :
mValueArray () {
}

//---------------------------------------------------------------------------*

C_BigUInt::C_BigUInt (const PMUInt64 inValue) :
mValueArray () {
  if (0 != inValue) {
    mValueArray.addObject ((PMUInt32) (inValue & PMUINT32_MAX)) ;
    if ((inValue >> 32) != 0) {
      mValueArray.addObject ((PMUInt32) (inValue >> 32)) ;
    }
  }
}

//---------------------------------------------------------------------------*

C_BigUInt::~C_BigUInt (void) {
}

//---------------------------------------------------------------------------*

bool C_BigUInt::isZero (void) const {
  return mValueArray.count () == 0 ;
}

//---------------------------------------------------------------------------*

bool C_BigUInt::valueAtBitIndex (const PMUInt32 inIndex) const {
  bool result = false ;
  if (inIndex < (mValueArray.count () * 32U)) {
    result = (mValueArray (inIndex / 32 COMMA_HERE) & (1 << (inIndex % 32))) != 0 ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

void C_BigUInt::setValueAtBitIndex (const bool inValue, const PMUInt32 inIndex) {
  if (inValue) {
    while (mValueArray.count () < (PMSInt32) (inIndex / 32)) {
      mValueArray.addObject (0) ;
    }
    mValueArray (inIndex / 32 COMMA_HERE) |= 1 << (inIndex % 32) ;
  }else if (mValueArray.count () > (PMSInt32) (inIndex / 32)) {
    mValueArray (inIndex / 32 COMMA_HERE) &= ~(1 << (inIndex % 32)) ;
    normalize () ;
  }
}

//---------------------------------------------------------------------------*

void C_BigUInt::normalize (void) {
  while ((mValueArray.count () > 0) && (0 == mValueArray.lastObject (HERE))) {
    mValueArray.removeLastObject (HERE) ;
  }
}

//---------------------------------------------------------------------------*

void C_BigUInt::operator += (const C_BigUInt & inValue) {
  while (mValueArray.count () < inValue.mValueArray.count ()) {
    mValueArray.addObject (0) ;
  }
  PMUInt64 accumulator = 0 ;
  for (PMSInt32 i=0 ; i<inValue.mValueArray.count () ; i++) {
    accumulator += ((PMUInt64) mValueArray (i COMMA_HERE)) + ((PMUInt64) inValue.mValueArray (i COMMA_HERE)) ;
    mValueArray (i COMMA_HERE) = (PMUInt32) (accumulator & PMUINT32_MAX) ;
    accumulator >>= 32 ;
  }
  for (PMSInt32 i=inValue.mValueArray.count () ; (i<mValueArray.count ()) && (0 != accumulator) ; i++) {
    accumulator += ((PMUInt64) mValueArray (i COMMA_HERE)) ;
    mValueArray (i COMMA_HERE) = (PMUInt32) (accumulator & PMUINT32_MAX) ;
    accumulator >>= 32 ;
  }
  if (0 != accumulator) {
    mValueArray.addObject ((PMUInt32) (accumulator & PMUINT32_MAX)) ;
  }
}

//---------------------------------------------------------------------------*

C_BigUInt C_BigUInt::operator + (const C_BigUInt & inValue) const {
  C_BigUInt result = *this ;
  result += inValue ;
  return result ;
}

//---------------------------------------------------------------------------*

bool C_BigUInt::operator == (const C_BigUInt & inValue) const {
  bool result = mValueArray.count () == inValue.mValueArray.count () ;
  for (PMSInt32 i=0 ; (i<mValueArray.count ()) && result ; i++) {
    result = mValueArray (i COMMA_HERE) == inValue.mValueArray (i COMMA_HERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

bool C_BigUInt::operator != (const C_BigUInt & inValue) const {
  return ! (*this == inValue) ;
}

//---------------------------------------------------------------------------*

bool C_BigUInt::greaterThan (const PMUInt32 inOperand) const {
  return
    (mValueArray.count () > 1)
  ||
    ((mValueArray.count () == 1) && (mValueArray.lastObject (HERE) > inOperand))
  ;
}

//---------------------------------------------------------------------------*

void C_BigUInt::multiplyBy (const PMUInt32 inMultiplicand) {
  PMUInt64 carry = 0 ;
  for (PMSInt32 i=0 ; i<mValueArray.count () ; i++) {
     carry += ((PMUInt64) inMultiplicand) * ((PMUInt64) mValueArray (i COMMA_HERE)) ;
     mValueArray (i COMMA_HERE) = (PMUInt32) (carry & PMUINT32_MAX) ;
     carry >>= 32 ;
  }
  if (0 != carry) {
    mValueArray.addObject ((PMUInt32) carry) ;
  }
  printf ("-->") ;
  for (PMSInt32 i=mValueArray.count () - 1 ; i>=0 ; i--) {
    printf (" %03u", mValueArray (i COMMA_HERE)) ;
  }
  printf ("\n") ;
}

//---------------------------------------------------------------------------*

void C_BigUInt::divideBy (const PMUInt32 inDivisor,
                          PMUInt32 & outRemainder) {
  PMUInt64 remainder = 0 ;
  for (PMSInt32 i=mValueArray.count () - 1 ; i>=0 ; i--) {
     remainder <<= 32 ;
     remainder += (PMUInt64) mValueArray (i COMMA_HERE) ;
     mValueArray (i COMMA_HERE) = (PMUInt32) ((remainder / inDivisor) & PMUINT32_MAX) ;
     remainder %= inDivisor ;
  }
  normalize () ;
  outRemainder = (PMUInt32) (remainder) ;
}

//---------------------------------------------------------------------------*

C_String C_BigUInt::decimalString (void) const {
  C_String result ;
  if (isZero()) {
    result << "0" ;
  }else{
    C_BigUInt value = *this ;
    TC_UniqueArray <PMUInt32> values ;
    while (! value.isZero ()) {
      PMUInt32 remainder = 0 ;
      value.divideBy (1000, remainder) ;
      values.addObject (remainder) ;
    }
    result = cStringWithUnsigned (values.lastObject (HERE)) ;
    for (PMSInt32 i=values.count () - 2 ; i>=0 ; i--) {
      char s [8] ;
      sprintf (s, " %03u", values (i COMMA_HERE)) ;
      result << s ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*
