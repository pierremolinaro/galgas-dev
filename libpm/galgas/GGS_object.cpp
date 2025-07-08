//--------------------------------------------------------------------------------------------------
//
//  GGS_object : Base class for GALGAS object handling
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2010 Pierre Molinaro.
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

#include "all-predefined-types.h"
#include "cPtr_object.h"

//--------------------------------------------------------------------------------------------------

GGS_object::GGS_object (void) :
AC_GALGAS_root (),
mSharedObject (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GGS_object::GGS_object (AC_GALGAS_root * inObjectPointer
                        COMMA_LOCATION_ARGS) :
AC_GALGAS_root (),
mSharedObject (nullptr) {
  macroMyNew (mSharedObject, cPtr_object (inObjectPointer COMMA_THERE)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_object::GGS_object (const GGS_object & inSource) :
AC_GALGAS_root (),
mSharedObject (nullptr) {
  macroAssignSharedObject (mSharedObject, inSource.mSharedObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_object & GGS_object::operator = (const GGS_object & inSource) {
  macroAssignSharedObject (mSharedObject, inSource.mSharedObject) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_object::~ GGS_object (void) {
  macroDetachSharedObject (mSharedObject) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_object::drop (void) {
  macroDetachSharedObject (mSharedObject) ;
}

//--------------------------------------------------------------------------------------------------

const AC_GALGAS_root * GGS_object::embeddedObject (void) const {
  const AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    result = mSharedObject->embeddedObjectPtr () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_object::description (String & /* ioString */,
                              const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_object::objectCompare (const GGS_object & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const ptrdiff_t diff = mSharedObject - inOperand.mSharedObject ;
    if (diff < 0) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (diff > 0) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_type GGS_object::getter_objectStaticType (UNUSED_LOCATION_ARGS) const {
  GGS_type result ;
  if (isValid ()) {
    result = mSharedObject->objectStaticType () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_type GGS_object::getter_objectDynamicType (UNUSED_LOCATION_ARGS) const {
  GGS_type result ;
  if (isValid ()) {
    result = mSharedObject->objectDynamicType () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
