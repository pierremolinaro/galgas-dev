#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-println-3F.h"
#include "proc-testsuite-5Fstruct.h"
#include "struct-struct+test.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_struct'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_struct (Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of struct logging"), inCompiler  COMMA_SOURCE_FILE ("testsuite_struct.ggs", 12)) ;
  }
  GGS_structTest var_s_261 = GGS_structTest::init_21_ (GGS_string ("az"), inCompiler COMMA_HERE) ;
  var_s_261.log ("s"  COMMA_SOURCE_FILE ("testsuite_struct.ggs", 14)) ;
}


