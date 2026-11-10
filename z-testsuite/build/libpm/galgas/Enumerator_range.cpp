//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2012, ..., 2012 Pierre Molinaro.
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
