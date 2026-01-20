#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "struct-struct+test.h"

//--------------------------------------------------------------------------------------------------
//   INITIALIZER @structTest init!
//--------------------------------------------------------------------------------------------------

GGS_structTest GGS_structTest::init_21_ (const GGS_string & constinArgument_inString,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_structTest result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mString = constinArgument_inString ;
  return result ;
}


