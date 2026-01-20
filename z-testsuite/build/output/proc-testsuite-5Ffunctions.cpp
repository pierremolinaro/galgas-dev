#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "func-extern+test+function.h"
#include "func-function+test.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Ffunctions.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_functions'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_functions (Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of function test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_functions.ggs", 16)) ;
  }
  GGS_uint var_r_305 = function_functionTest (GGS_uint (uint32_t (2U)), GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_functions.ggs", 17)) ;
  var_r_305.log ("r"  COMMA_SOURCE_FILE ("testsuite_functions.ggs", 18)) ;
  var_r_305 = function_externTestFunction (GGS_uint (uint32_t (2U)), GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_functions.ggs", 19)) ;
  var_r_305.log ("r"  COMMA_SOURCE_FILE ("testsuite_functions.ggs", 20)) ;
}


