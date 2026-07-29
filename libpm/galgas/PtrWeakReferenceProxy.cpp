//--------------------------------------------------------------------------------------------------
//
//  PtrWeakReferenceProxy : Base class for reference class class
//
//  This file is part of libpm library
//
//  Copyright (C) 2021, ..., 2026 Pierre Molinaro.
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

#include "PtrWeakReferenceProxy.h"
#include "AbstractStrongPtrClass.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

PtrWeakReferenceProxy::PtrWeakReferenceProxy (LOCATION_ARGS) :
AbstractPtrClass (THERE),
mStrongObjectPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------

PtrWeakReferenceProxy::~ PtrWeakReferenceProxy (void) {
  if (mStrongObjectPtr != nullptr) {
    mStrongObjectPtr->mProxyPtr = nullptr ;
  }
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * PtrWeakReferenceProxy::classDescriptor (void) const {
  const GALGAS_TypeDescriptor * result = nullptr ;
  if (mStrongObjectPtr != nullptr) {
    result = mStrongObjectPtr->classDescriptor () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * PtrWeakReferenceProxy::duplicate (UNUSED_LOCATION_ARGS) const {
  return nullptr ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * PtrWeakReferenceProxy::duplicate (Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  return nullptr ;
}

//--------------------------------------------------------------------------------------------------
