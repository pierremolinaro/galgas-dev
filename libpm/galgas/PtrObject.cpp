//--------------------------------------------------------------------------------------------------
//
//  AbstractPtrClass : Base class for GALGAS class
//
//  This file is part of libpm library
//
//  Copyright (C) 2008, ..., 2026 Pierre Molinaro.
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

#include "PtrObject.h"
#include "all-predefined-types.h"
#include "MF_MemoryControl.h"

//--------------------------------------------------------------------------------------------------

PtrObject::PtrObject (LOCATION_ARGS) :
SharedObject (THERE),
mEmbeddedObjectPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------

PtrObject::PtrObject (AC_GALGAS_root * inObjectPointer
                          COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mEmbeddedObjectPtr (nullptr) {
  mEmbeddedObjectPtr = inObjectPointer ;
}

//--------------------------------------------------------------------------------------------------

PtrObject::~PtrObject (void) {
  macroMyDelete (mEmbeddedObjectPtr) ;
}

//--------------------------------------------------------------------------------------------------

GGS_type PtrObject::objectStaticType (void) const {
  GGS_type result ;
  if (nullptr != mEmbeddedObjectPtr) {
    result = mEmbeddedObjectPtr->getter_staticType (HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_type PtrObject::objectDynamicType (void) const {
  GGS_type result ;
  if (nullptr != mEmbeddedObjectPtr) {
    result = mEmbeddedObjectPtr->getter_dynamicType (HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
