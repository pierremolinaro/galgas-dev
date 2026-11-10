//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2015, ..., 2025 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

GGS_timer::GGS_timer (void) :
AC_GALGAS_root (),
mIsValid (false),
mTimer () {
}

//--------------------------------------------------------------------------------------------------

void GGS_timer::description (String & ioString,
                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@timer: ") ;
  if (!mIsValid) {
    ioString.appendCString ("not built") ;
  }else{
    ioString.appendString (mTimer.timeString ()) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_timer GGS_timer::class_func_start (UNUSED_LOCATION_ARGS) {
  GGS_timer result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_timer GGS_timer::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_timer result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_timer::setter_stop (UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mTimer.stopTimer () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_timer::setter_resume (UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mTimer = Timer () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_timer::getter_isRunning (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mTimer.isRunning ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_timer::getter_msFromStart (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mTimer.msFromStart ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_timer::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mTimer.timeString ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
