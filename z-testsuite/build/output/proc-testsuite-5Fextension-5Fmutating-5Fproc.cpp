#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-println-3F.h"
#include "proc-testsuite-5Fextension-5Fmutating-5Fproc.h"
#include "setter-uint-autre+init.h"
#include "setter-uint-init3.h"
#include "setter-uint-initialize.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_extension_mutating_proc'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_extension_5F_mutating_5F_proc (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of mutating proc test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 4)) ;
  }
  GGS_uint var_v_140 = GGS_uint (uint32_t (12U)) ;
  {
  extensionSetter_initialize (var_v_140, GGS_uint (uint32_t (179U)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 6)) ;
  }
  {
  routine_println_3F_ (GGS_string ("v = ").add_operation (var_v_140.getter_string (SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 7)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 7)).add_operation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 7)), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 7)) ;
  }
  {
  extensionSetter_autreInit (var_v_140, GGS_uint (uint32_t (183U)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 8)) ;
  }
  {
  routine_println_3F_ (GGS_string ("v = ").add_operation (var_v_140.getter_string (SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 9)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 9)).add_operation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 9)), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 9)) ;
  }
  {
  extensionSetter_init_33_ (var_v_140, GGS_uint (uint32_t (752U)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 10)) ;
  }
  {
  routine_println_3F_ (GGS_string ("v = ").add_operation (var_v_140.getter_string (SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 11)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 11)).add_operation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 11)), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_mutating_proc.ggs", 11)) ;
  }
}


