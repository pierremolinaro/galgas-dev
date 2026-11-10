//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2010, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"
#include "galgas-input-output.h"

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_root::log (const char * inMessage COMMA_LOCATION_ARGS) const {
  String s = "LOGGING " ;
  s.appendString (inMessage) ;
  s.appendCString (": ") ;
  description (s, 0) ;
  s.appendCString ("\n") ;
  ggs_printMessage (s COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string AC_GALGAS_root::getter_description (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    description (s, 0) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void AC_GALGAS_root::checkIsValid (LOCATION_ARGS) const {
    macroAssertThere (isValid (), "Object not valid", 0, 0) ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void AC_GALGAS_root::printNonNullClassInstanceProperties (const char * /* inPropertyName */) const {
  }
#endif

//--------------------------------------------------------------------------------------------------
