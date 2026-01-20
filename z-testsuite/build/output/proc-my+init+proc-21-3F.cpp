#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-my+init+proc-21-3F.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'myInitProc!?'
//
//--------------------------------------------------------------------------------------------------

void routine_myInitProc_21__3F_ (GGS_uint & outArgument_outValue,
                                 const GGS_uint constinArgument_inValue,
                                 Compiler * /* inCompiler */
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outValue = constinArgument_inValue ;
}


