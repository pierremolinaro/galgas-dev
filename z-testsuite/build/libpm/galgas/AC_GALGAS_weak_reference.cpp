//--------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_weak_reference : base class for reference class objects
//
//  This file is part of libpm library
//
//  Copyright (C) 2021, ..., 2021 Pierre Molinaro.
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

#include "AC_GALGAS_weak_reference.h"
#include "PtrWeakReferenceProxy.h"
#include "AC_GALGAS_reference_class.h"
#include "AbstractStrongPtrClass.h"
#include "GALGAS_TypeDescriptor.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * AC_GALGAS_weak_reference::dynamicTypeDescriptor (void) const {
  const GALGAS_TypeDescriptor * result = nullptr ;
  if (nullptr != mProxyPtr) {
    result = mProxyPtr->classDescriptor () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//   Default constructor
//--------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference::AC_GALGAS_weak_reference (void) :
AC_GALGAS_root (),
mProxyPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------
//   Destructor
//--------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference::~AC_GALGAS_weak_reference (void) {
  macroDetachSharedObject (mProxyPtr) ;
}

//--------------------------------------------------------------------------------------------------
//   Constructor, copy from strong reference
//--------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference::AC_GALGAS_weak_reference (const AC_GALGAS_reference_class & inSource) :
AC_GALGAS_root (),
mProxyPtr (nullptr) {
  AbstractStrongPtrClass * ptr = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (ptr != nullptr) {
    PtrWeakReferenceProxy * proxy = ptr->getProxy () ;
    macroAssignSharedObject (mProxyPtr, proxy) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   Constructor, copy from weak reference
//--------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference::AC_GALGAS_weak_reference (const AC_GALGAS_weak_reference & inSource) :
AC_GALGAS_root (),
mProxyPtr (nullptr) {
  macroAssignSharedObject (mProxyPtr, inSource.mProxyPtr) ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference & AC_GALGAS_weak_reference::operator = (const AC_GALGAS_weak_reference & inSource) {
  macroAssignSharedObject (mProxyPtr, inSource.mProxyPtr) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_weak_reference::drop (void) {
  macroDetachSharedObject (mProxyPtr) ;
}

//--------------------------------------------------------------------------------------------------

AbstractStrongPtrClass * AC_GALGAS_weak_reference::ptr (void) const {
  AbstractStrongPtrClass * result = nullptr ;
  if (mProxyPtr != nullptr) {
    result = mProxyPtr->strongObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_weak_reference::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (":") ;
  AbstractStrongPtrClass * ptr = (AbstractStrongPtrClass *) mProxyPtr ;
  if (ptr == nullptr) {
    ioString.appendCString ("not built") ;
  }else{
    PtrWeakReferenceProxy * proxy = ptr->getProxy () ;
    if (proxy == nullptr) {
      ioString.appendCString ("nil") ;
    }else{
      const GALGAS_TypeDescriptor * descriptor = proxy->classDescriptor () ;
      ioString.appendCString ("instance of @") ;
      ioString.appendString (descriptor->mGalgasTypeName) ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
