//--------------------------------------------------------------------------------------------------
//
//     BDD package (implementation of ROBDD)
//
//  This file is part of libpm library
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "bdd/C_BDD.h"
#include "bdd/C_BDD-node.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark BDD operators
#endif

//--------------------------------------------------------------------------------------------------

void C_BDD::setToFalse (void) {
  mBDDvalue = 0  ;
}

//--------------------------------------------------------------------------------------------------

void C_BDD::setToTrue (void) {
  mBDDvalue = 1  ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::ite (const C_BDD & f, const C_BDD & g, const C_BDD & h) {
  return C_BDD (internalITEoperation (f.mBDDvalue, g.mBDDvalue, h.mBDDvalue)) ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::implies (const C_BDD & inOperand) const {
//--- f -> g est defini par (non f) ou g, c'est a dire non (f et (non g))
  return C_BDD (internalANDoperation (mBDDvalue, inOperand.mBDDvalue ^ 1) ^ 1) ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::operator & (const C_BDD & inOperand) const {
  return C_BDD (internalANDoperation (mBDDvalue, inOperand.mBDDvalue)) ;
}

//--------------------------------------------------------------------------------------------------

void C_BDD::operator &= (const C_BDD & inOperand) {
   mBDDvalue = internalANDoperation (mBDDvalue, inOperand.mBDDvalue) ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::operator | (const C_BDD & inOperand) const {
  return C_BDD (internalANDoperation (mBDDvalue ^ 1, inOperand.mBDDvalue ^ 1) ^ 1) ;
}

//--------------------------------------------------------------------------------------------------

void C_BDD::operator |= (const C_BDD & inOperand) {
  mBDDvalue = internalANDoperation (mBDDvalue ^ 1, inOperand.mBDDvalue ^ 1) ^ 1 ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::equalTo(const C_BDD & inOperand) const {
  return C_BDD (internalITEoperation (mBDDvalue, inOperand.mBDDvalue, inOperand.mBDDvalue ^ 1)) ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::notEqualTo (const C_BDD & inOperand) const {
  return C_BDD (internalITEoperation (mBDDvalue, inOperand.mBDDvalue ^ 1, inOperand.mBDDvalue)) ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::lowerOrEqual (const C_BDD & inOperand) const { // <=
  return C_BDD (internalANDoperation (mBDDvalue, inOperand.mBDDvalue ^ 1) ^ 1) ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::greaterThan (const C_BDD & inOperand) const { // >
  return C_BDD (internalANDoperation (mBDDvalue, inOperand.mBDDvalue ^ 1)) ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::lowerThan (const C_BDD & inOperand) const { // <
  return C_BDD (internalANDoperation (mBDDvalue ^ 1, inOperand.mBDDvalue)) ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::greaterOrEqual (const C_BDD & inOperand) const { // >=
  return C_BDD (internalANDoperation (mBDDvalue ^ 1, inOperand.mBDDvalue) ^ 1) ;
}

//--------------------------------------------------------------------------------------------------
