//--------------------------------------------------------------------------------------------------
//
//  'Enumerator_range' : galgas range enumerator                                                
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2012, ..., 2012 Pierre Molinaro.
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

//--------------------------------------------------------------------------------------------------
// DownEnumerator_range
//--------------------------------------------------------------------------------------------------

DownEnumerator_range::DownEnumerator_range (const GGS_range & inEnumeratedRange) :
mIsValid (inEnumeratedRange.isValid ()),
mStart (inEnumeratedRange.mProperty_start.uintValue ()),
mLength (inEnumeratedRange.mProperty_length.uintValue ()),
mCurrent (0) {
  mCurrent = mStart + mLength - 1 ;
}


//--------------------------------------------------------------------------------------------------

bool DownEnumerator_range::hasCurrentObject (void) const {
  return mIsValid && (mCurrent >= mStart) ;
}

//--------------------------------------------------------------------------------------------------

void DownEnumerator_range::gotoNextObject (void) {
  mCurrent -= 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_range::current (UNUSED_LOCATION_ARGS) const {
  return GGS_uint (hasCurrentObject (), uint32_t (mCurrent)) ;
}

//--------------------------------------------------------------------------------------------------
// UpEnumerator_range
//--------------------------------------------------------------------------------------------------

UpEnumerator_range::UpEnumerator_range (const GGS_range & inEnumeratedRange) :
mIsValid (inEnumeratedRange.isValid ()),
mStart (inEnumeratedRange.mProperty_start.uintValue ()),
mLength (inEnumeratedRange.mProperty_length.uintValue ()),
mCurrent (inEnumeratedRange.mProperty_start.uintValue ()) {
}

//--------------------------------------------------------------------------------------------------

bool UpEnumerator_range::hasCurrentObject (void) const {
  return mIsValid && (mCurrent < (mStart + mLength)) ;
}

//--------------------------------------------------------------------------------------------------

void UpEnumerator_range::gotoNextObject (void) {
  mCurrent += 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_range::current (UNUSED_LOCATION_ARGS) const {
  return GGS_uint (hasCurrentObject (), uint32_t (mCurrent)) ;
}

//--------------------------------------------------------------------------------------------------
