#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "setter-uint-initialize.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@uint initialize'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_initialize (GGS_uint & ioObject,
                                 const GGS_uint constinArgument_inValue,
                                 Compiler * /* inCompiler */
                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject = constinArgument_inValue ;
}


