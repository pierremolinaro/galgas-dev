#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+b-5F+b.h"
#include "getter-+a-5F+a-location.h"
#include "getter-+b-5F+b-other+reader.h"
#include "getter-uint-carr-E9.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Fextension-5Freaders.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_extension_readers'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_extension_5F_readers (Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of extension reader test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 28)) ;
  }
  GGS_B_5F_B var_b_712 = GGS_B_5F_B::init (inCompiler COMMA_HERE) ;
  GGS_string var_s_734 = callExtensionGetter_otherReader ((const cPtr_B_5F_B *) var_b_712.ptr (), GGS_uint (uint32_t (2U)), GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 30)) ;
  var_s_734.log ("s"  COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 31)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (false).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_B_5F_B *) var_b_712.ptr (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 33)), GGS_string ("non displayed message"), fixItArray1  COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 33)) ;
    }
  }
  GGS_uint var_a_843 = GGS_uint (uint32_t (9U)) ;
  {
  routine_println_3F_ (GGS_string ("Carré de 9: ").add_operation (extensionGetter_carr_E9_ (var_a_843, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 36)).getter_string (SOURCE_FILE ("testsuite_extension_readers.ggs", 36)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 36)).add_operation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 36)), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 36)) ;
  }
}


