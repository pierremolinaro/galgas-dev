//--------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_enumAssociatedValues : class for enum associated values
//
//  This file is part of libpm library
//
//  Copyright (C) 2014, ..., 2024 Pierre Molinaro.
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

#include "AC_GALGAS_enumAssociatedValues.h"

#include <typeinfo>
#include <iostream>

//--------------------------------------------------------------------------------------------------

EnumerationAssociatedValues::EnumerationAssociatedValues (const AC_GALGAS_root * inValuePtr
                                                          COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mValuePtr (inValuePtr) {
}

//--------------------------------------------------------------------------------------------------

EnumerationAssociatedValues::~ EnumerationAssociatedValues (void) {
  macroMyDelete (mValuePtr) ;
}

//--------------------------------------------------------------------------------------------------

void EnumerationAssociatedValues::description (class String & /* ioString */,
                                               const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_enumerationAssociatedValues::AC_GALGAS_enumerationAssociatedValues (void) :
mSharedPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_enumerationAssociatedValues::assignPointer (const EnumerationAssociatedValues * inPtr)  {
  macroAssignSharedObject (mSharedPtr, inPtr) ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_enumerationAssociatedValues::AC_GALGAS_enumerationAssociatedValues (const AC_GALGAS_enumerationAssociatedValues & inSource) :
mSharedPtr (nullptr) {
  macroAssignSharedObject (mSharedPtr, inSource.mSharedPtr) ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_enumerationAssociatedValues & AC_GALGAS_enumerationAssociatedValues::operator = (const AC_GALGAS_enumerationAssociatedValues & inSource) {
  if (mSharedPtr != inSource.mSharedPtr) {
    macroAssignSharedObject (mSharedPtr, inSource.mSharedPtr) ;
  }
  return *this ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_enumerationAssociatedValues::~ AC_GALGAS_enumerationAssociatedValues (void) {
  macroDetachSharedObject (mSharedPtr) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_enumerationAssociatedValues::drop (void) {
  macroDetachSharedObject (mSharedPtr) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_enumerationAssociatedValues::description (String & ioString,
                                                         const int32_t inIndentation) const {
  if (nullptr != mSharedPtr) {
    macroValidSharedObject (mSharedPtr, EnumerationAssociatedValues) ;
    mSharedPtr->description (ioString, inIndentation) ;
  }
}

//--------------------------------------------------------------------------------------------------
