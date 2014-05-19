//-----------------------------------------------------------------------------*
//                                                                             *
//  Managing a set with BDD                                                  *
//                                                                             *
//  This file is part of libpm library                                         *
//                                                                             *
//  Copyright (C) 2002, ..., 2010 Pierre Molinaro.                             *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                               *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This library is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU Lesser General Public License as published      *
//  by the Free Software Foundation; either version 2 of the License, or       *
//  (at your option) any later version.                                        *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "bdd/C_BDD_Set1.h"
#include "bdd/C_BDD_Set2.h"
#include "utilities/MF_Assert.h"

//-----------------------------------------------------------------------------*
//                                                                            *
//    Constructor (build an empty set)                                        *
//                                                                            *
//-----------------------------------------------------------------------------*

C_BDD_Set1::C_BDD_Set1 (void) :
mBDD (),
mDescriptor (C_BDD_Descriptor (0)) {
}

//-----------------------------------------------------------------------------*

C_BDD_Set1::C_BDD_Set1 (const C_BDD_Descriptor & inDescriptor) :
mBDD (),
mDescriptor (inDescriptor) {
}

//-----------------------------------------------------------------------------*

C_BDD_Set1::C_BDD_Set1 (const C_BDD_Descriptor & inDescriptor,
                        const C_BDD & inBDD) :
mBDD (inBDD),
mDescriptor (inDescriptor) {
}

//-----------------------------------------------------------------------------*
//                                                                            *
//    Destructor                                                              *
//                                                                            *
//-----------------------------------------------------------------------------*

C_BDD_Set1::~C_BDD_Set1 (void) {
}

//-----------------------------------------------------------------------------*

void C_BDD_Set1::init (const C_BDD::compareEnum inComparisonKind,
                       const uint32_t inValue) {
  MF_Assert (inValue <= mDescriptor.getMaxValue (),
            "inValue (%lld) > maxValue (%lld)",
            (int32_t) inValue,
            (int32_t) mDescriptor.getMaxValue ()) ;
  mBDD = C_BDD::varCompareConst (0,
                                 mDescriptor.getBDDbitsSize (),
                                 inComparisonKind,
                                 inValue) ;
  mBDD &= mDescriptor.getMask () ;
}

//-----------------------------------------------------------------------------*

bool C_BDD_Set1::isEqualTo (const C_BDD_Set1 & inOperand COMMA_LOCATION_ARGS) const {
  MF_AssertThere (mDescriptor.getMaxValue () == inOperand.mDescriptor.getMaxValue (),
                  "Invalid BDD set (max value : %ld, expected : %ld)",
                  (int32_t) inOperand.mDescriptor.getMaxValue (),
                  (int32_t) mDescriptor.getMaxValue ()) ;
  return mBDD.isEqualToBDD (inOperand.mBDD) ;
}

//-----------------------------------------------------------------------------*

void C_BDD_Set1::clear (void) {
  mBDD.setToFalse () ;
}

//-----------------------------------------------------------------------------*

void C_BDD_Set1::operator &= (const C_BDD_Set1 & inOperand) {
  MF_Assert (mDescriptor.getMaxValue () <= inOperand.mDescriptor.getMaxValue (),
            "inValue (%lld) != maxValue (%lld)",
            (int32_t) mDescriptor.getMaxValue (),
            (int32_t) inOperand.mDescriptor.getMaxValue ()) ;
  mBDD &= inOperand.mBDD ;
}

//-----------------------------------------------------------------------------*

void C_BDD_Set1::operator |= (const C_BDD_Set1 & inOperand) {
  MF_Assert (mDescriptor.getMaxValue () <= inOperand.mDescriptor.getMaxValue (),
            "inValue (%lld) != maxValue (%lld)",
            (int32_t) mDescriptor.getMaxValue (),
            (int32_t) inOperand.mDescriptor.getMaxValue ()) ;
  mBDD |= inOperand.mBDD ;
}

//-----------------------------------------------------------------------------*

C_BDD_Set1 C_BDD_Set1::operator & (const C_BDD_Set1 & inOperand) const {
  MF_Assert (mDescriptor.getMaxValue () <= inOperand.mDescriptor.getMaxValue (),
            "inValue (%lld) != maxValue (%lld)",
            (int32_t) mDescriptor.getMaxValue (),
            (int32_t) inOperand.mDescriptor.getMaxValue ()) ;
  C_BDD_Set1 r = *this ;
  r &= inOperand ;
  return r ;
}

//-----------------------------------------------------------------------------*

C_BDD_Set1 C_BDD_Set1::operator | (const C_BDD_Set1 & inOperand) const {
  MF_Assert (mDescriptor.getMaxValue () <= inOperand.mDescriptor.getMaxValue (),
            "inValue (%lld) != maxValue (%lld)",
            (int32_t) mDescriptor.getMaxValue (),
            (int32_t) inOperand.mDescriptor.getMaxValue ()) ;
  C_BDD_Set1 r = *this ;
  r |= inOperand ;
  return r ;
}

//-----------------------------------------------------------------------------*

C_BDD_Set1 C_BDD_Set1::operator ~ (void) const {
  C_BDD_Set1 r = *this ;
  r.mBDD.negate () ;
  r.mBDD &= mDescriptor.getMask () ;
  return r ;
}

//-----------------------------------------------------------------------------*

C_BDD_Set2 C_BDD_Set1::operator * (const C_BDD_Set1 & inOperand) const {
  C_BDD_Set2 r (mDescriptor, inOperand.mDescriptor) ;
  r.initDimension2 (inOperand COMMA_HERE) ;
  r.mBDD &= mBDD ;
  return r ;
}

//-----------------------------------------------------------------------------*

uint32_t C_BDD_Set1::getValuesCount (void) const {
  return (uint32_t) (mBDD.valueCount64 (mDescriptor.getBDDbitsSize ()) & UINT32_MAX) ;
}

//-----------------------------------------------------------------------------*

class cBuildArrayForSet1 : public C_bdd_value_traversing {
//--- Attributs
  protected : TC_UniqueArray <bool> & mArray ;

//--- Constructeur
  public : cBuildArrayForSet1 (TC_UniqueArray <bool> & outArray) ;

//--- Methode virtuelle appelee pour chaque valeur
  public : virtual void action (const bool inValuesArray [],
                                const uint32_t inBDDbitsSize) ;
} ;
  
//-----------------------------------------------------------------------------*

cBuildArrayForSet1::
cBuildArrayForSet1 (TC_UniqueArray <bool> & outArray) :
mArray (outArray) {
}

//-----------------------------------------------------------------------------*

void cBuildArrayForSet1::action (const bool inValuesArray [],
                                 const uint32_t inBDDbitsSize) {
  int32_t element = 0 ;
  for (int32_t i=((int32_t) inBDDbitsSize) - 1 ; i>=0 ; i--) {
    element = (element << 1) + inValuesArray [i] ;
  }
  mArray.setObjectAtIndex (true, element COMMA_HERE) ;
}

//-----------------------------------------------------------------------------*

void C_BDD_Set1::
getArray (TC_UniqueArray <bool> & outArray) const {
  { const int32_t size = ((int32_t) mDescriptor.getMaxValue ()) + 1 ;
    TC_UniqueArray <bool> temp (size, false COMMA_HERE) ;
    swap (temp, outArray) ;
  }
  cBuildArrayForSet1 s (outArray) ;
  mBDD.traverseBDDvalues (s, mDescriptor.getBDDbitsSize ()) ;
}

//-----------------------------------------------------------------------------*
