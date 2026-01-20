#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-my+init+proc-21-3F.h"
#include "setter-uint-init3.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@uint init3'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_init_33_ (GGS_uint & ioObject,
                               const GGS_uint constinArgument_inValue,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_myInitProc_21__3F_ (ioObject, constinArgument_inValue, inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 23)) ;
  }
}


