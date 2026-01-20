#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+method.h"
#include "method-+test+extension+method-method1.h"
#include "method-+test+extension+method-method2.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Fextension-5Fmethods.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_extension_methods'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_extension_5F_methods (Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of extension procs"), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_methods.ggs", 17)) ;
  }
  GGS_TestExtensionMethod var_c_353 = GGS_TestExtensionMethod::init (inCompiler COMMA_HERE) ;
  callExtensionMethod_method_31_ ((cPtr_TestExtensionMethod *) var_c_353.ptr (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_methods.ggs", 19)) ;
  GGS_uint var_v_414 ;
  callExtensionMethod_method_32_ ((cPtr_TestExtensionMethod *) var_c_353.ptr (), var_v_414, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_methods.ggs", 20)) ;
  {
  routine_println_3F_ (var_v_414.getter_string (SOURCE_FILE ("testsuite_extension_methods.ggs", 21)), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_methods.ggs", 21)) ;
  }
}


