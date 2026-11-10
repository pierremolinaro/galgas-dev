//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2014, ..., 2024 Pierre Molinaro.
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
