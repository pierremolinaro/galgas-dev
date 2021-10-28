//----------------------------------------------------------------------------------------------------------------------
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
//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/AC_GALGAS_weak_reference.h"
#include "galgas2/cPtr_weakReference_class.h"
#include "galgas2/AC_GALGAS_reference_class.h"
#include "galgas2/acStrongPtr_class.h"
#include "galgas2/C_galgas_type_descriptor.h"
#include "strings/C_String.h"

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * AC_GALGAS_weak_reference::dynamicTypeDescriptor (void) const {
  const C_galgas_type_descriptor * result = NULL ;
  if (NULL != mObjectPtr) {
    result = mObjectPtr->classDescriptor () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference::AC_GALGAS_weak_reference (void) :
AC_GALGAS_root (),
mObjectPtr (NULL) {
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference::AC_GALGAS_weak_reference (const AC_GALGAS_reference_class & inSource) :
AC_GALGAS_root (),
mObjectPtr (NULL) {
  acStrongPtr_class * ptr = (acStrongPtr_class *) inSource.ptr () ;
  if (ptr != NULL) {
    cPtr_weakReference_class * proxy = ptr->getProxy () ;
    macroAssignSharedObject (mObjectPtr, proxy) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference::~AC_GALGAS_weak_reference (void) {
  macroDetachSharedObject (mObjectPtr) ;
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_weak_reference::drop (void) {
  macroDetachSharedObject (mObjectPtr) ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference::AC_GALGAS_weak_reference (const AC_GALGAS_weak_reference & inSource) :
AC_GALGAS_root (),
mObjectPtr (NULL) {
  macroAssignSharedObject (mObjectPtr, inSource.mObjectPtr) ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_weak_reference & AC_GALGAS_weak_reference::operator = (const AC_GALGAS_weak_reference & inSource) {
  macroAssignSharedObject (mObjectPtr, inSource.mObjectPtr) ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

const acPtr_class * AC_GALGAS_weak_reference::ptr (void) const {
   acPtr_class * result = NULL ;
   if (mObjectPtr != NULL) {
     cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
     result = p->strongObject () ;
   }
   return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_weak_reference::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "<@"
           << staticTypeDescriptor ()->mGalgasTypeName
           << ":" ;
  acStrongPtr_class * ptr = (acStrongPtr_class *) mObjectPtr ;
  if (ptr == NULL) {
    ioString << "not built" ;
  }else{
    cPtr_weakReference_class * proxy = ptr->getProxy () ;
    if (proxy == NULL) {
      ioString << "nil" ;
    }else{
      const C_galgas_type_descriptor * descriptor = proxy->classDescriptor () ;
      ioString << "instance of @" << descriptor->mGalgasTypeName ;
    }
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
