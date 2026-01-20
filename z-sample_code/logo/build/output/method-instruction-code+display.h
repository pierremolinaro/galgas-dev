#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instruction codeDisplay'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_codeDisplay (class cPtr_instruction * inObject,
                                      class GGS_bool & io_ioPenDown,
                                      class GGS_double & io_ioX,
                                      class GGS_double & io_ioY,
                                      class GGS_double & io_ioAngle,
                                      class GGS_string & io_SVG,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//----------------------------------------------------------------------------------------------------------------------

