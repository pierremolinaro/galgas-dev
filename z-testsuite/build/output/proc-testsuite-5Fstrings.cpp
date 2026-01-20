#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-println-3F.h"
#include "proc-testsuite-5Fstrings.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_strings'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_strings (Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of string test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_strings.ggs", 4)) ;
  }
  GGS_string var_command_118 = GGS_string ("echo accentué") ;
  var_command_118.log ("command"  COMMA_SOURCE_FILE ("testsuite_strings.ggs", 6)) ;
  GGS_string var_result_172 = var_command_118.getter_popen (inCompiler COMMA_SOURCE_FILE ("testsuite_strings.ggs", 7)) ;
  var_result_172.log ("result"  COMMA_SOURCE_FILE ("testsuite_strings.ggs", 8)) ;
}


