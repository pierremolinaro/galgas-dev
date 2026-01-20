#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+setter.h"
#include "class-overriding+test+extension+setter.h"
#include "method-+test+extension+setter-setter2.h"
#include "method-abstract+test+extension+setter-m.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Fextension-5Fsetters.h"
#include "proc-type+cast+in+setter+call.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_extension_setters'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_extension_5F_setters (Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of extension setter test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 4)) ;
  }
  GGS_TestExtensionSetter var_v_130 = GGS_TestExtensionSetter::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_string ("Hello"), inCompiler COMMA_HERE) ;
  GGS_uint var_u_182 = GGS_uint (uint32_t (2U)) ;
  GGS_string var_s_202 = GGS_string (" World") ;
  callExtensionMethod_setter_32_ ((cPtr_TestExtensionSetter *) var_v_130.ptr (), var_u_182, var_s_202, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 8)) ;
  var_u_182.log ("u"  COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 9)) ;
  var_v_130.log ("v"  COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 9)) ;
  GGS_overridingTestExtensionSetter var_w_254 = GGS_overridingTestExtensionSetter::init_21__21__21__21_ (GGS_uint (uint32_t (1U)), GGS_string::makeEmptyString (), GGS_string::makeEmptyString (), GGS_uint (uint32_t (2U)), inCompiler COMMA_HERE) ;
  callExtensionMethod_m ((cPtr_overridingTestExtensionSetter *) var_w_254.ptr (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 11)) ;
  {
  routine_typeCastInSetterCall (inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 13)) ;
  }
}


