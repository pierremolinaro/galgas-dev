#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "externtype-complex.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Fextern-5Ftype.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_extern_type'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_extern_5F_type (Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of extern type test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_extern_type.ggs", 20)) ;
  }
  GGS_complex var_complex_530 = GGS_complex::init_21__21_ (GGS_double (1), GGS_double (1).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("testsuite_extern_type.ggs", 21)), inCompiler COMMA_HERE) ;
  var_complex_530.log ("complex"  COMMA_SOURCE_FILE ("testsuite_extern_type.ggs", 22)) ;
  var_complex_530.getter_real (inCompiler COMMA_SOURCE_FILE ("testsuite_extern_type.ggs", 23)).log ("real"  COMMA_SOURCE_FILE ("testsuite_extern_type.ggs", 23)) ;
  var_complex_530.getter_imaginary (inCompiler COMMA_SOURCE_FILE ("testsuite_extern_type.ggs", 24)).log ("imaginary"  COMMA_SOURCE_FILE ("testsuite_extern_type.ggs", 24)) ;
}


