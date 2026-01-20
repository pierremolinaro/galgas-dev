#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+a-5F+a.h"
#include "getter-+a-5F+a-location.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@A_A location'
//
//--------------------------------------------------------------------------------------------------

GGS_location callExtensionGetter_location (const cPtr_A_5F_A * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_location result ;
  if (nullptr != inObject) {
    result = inObject->getter_location (inCompiler COMMA_THERE) ;
  }
  return result ;
}

