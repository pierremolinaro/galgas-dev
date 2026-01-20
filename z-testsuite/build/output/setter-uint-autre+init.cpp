#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "setter-uint-autre+init.h"
#include "setter-uint-initialize.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@uint autreInit'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_autreInit (GGS_uint & ioObject,
                                const GGS_uint constinArgument_inValue,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_initialize (ioObject, constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 19)) ;
  }
}


