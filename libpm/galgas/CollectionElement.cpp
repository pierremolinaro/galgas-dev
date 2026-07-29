//--------------------------------------------------------------------------------------------------
//
//  GGS_enumerable : Base class for GALGAS enumerable object
//
//  This file is part of libpm library
//
//  Copyright (C) 2010, ..., 2026 Pierre Molinaro.
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

#include "CollectionElement.h"
#include "CollectionElementPtr.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

CollectionElement::CollectionElement (void) :
mPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------

void CollectionElement::setPointer (CollectionElementPtr * inObjectPointer) {
  macroAssignSharedObject (mPtr, inObjectPointer) ;
}

//--------------------------------------------------------------------------------------------------

CollectionElement:: ~CollectionElement (void) {
  macroDetachSharedObject (mPtr) ;
}

//--------------------------------------------------------------------------------------------------

CollectionElement::CollectionElement (const CollectionElement & inSource) :
mPtr (nullptr) {
  macroAssignSharedObject (mPtr, inSource.mPtr) ;
}

//--------------------------------------------------------------------------------------------------

CollectionElement & CollectionElement::operator = (const CollectionElement & inSource) {
  macroAssignSharedObject (mPtr, inSource.mPtr) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool CollectionElement::isValid (void) const {
  bool result = nullptr != mPtr ;
  if (result) {
    result = mPtr->isValid () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

CollectionElement CollectionElement::copy (void) {
  CollectionElement result ;
  CollectionElementPtr * p = mPtr->copy () ;
  result.setPointer (p) ;
  macroDetachSharedObject (p) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void CollectionElement::drop (void) {
  macroDetachSharedObject (mPtr) ;
}

//--------------------------------------------------------------------------------------------------

void CollectionElement::insulate (void) {
  if ((nullptr != mPtr) && !mPtr->isUniquelyReferenced ()) {
    CollectionElementPtr * p = mPtr->copy () ;
    macroAssignSharedObject (mPtr, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------
