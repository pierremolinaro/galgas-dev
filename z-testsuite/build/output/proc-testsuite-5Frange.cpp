#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-println-3F.h"
#include "proc-testsuite-5Frange.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_range'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_range (Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of range test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_range.ggs", 4)) ;
  }
  GGS_string var_s_115 = GGS_string ("Range [4, 3] enumeration:") ;
  UpEnumerator_range enumerator_172 (GGS_range::init_21__21_ (GGS_uint (uint32_t (4U)), GGS_uint (uint32_t (3U)), inCompiler COMMA_HERE)) ;
  while (enumerator_172.hasCurrentObject ()) {
    var_s_115.plusAssignOperation(GGS_string (" ").add_operation (enumerator_172.current (HERE).getter_string (SOURCE_FILE ("testsuite_range.ggs", 7)), inCompiler COMMA_SOURCE_FILE ("testsuite_range.ggs", 7)), inCompiler  COMMA_SOURCE_FILE ("testsuite_range.ggs", 7)) ;
    enumerator_172.gotoNextObject () ;
  }
  var_s_115.log ("s"  COMMA_SOURCE_FILE ("testsuite_range.ggs", 9)) ;
  var_s_115 = GGS_string ("Range [4, 3] reverse enumeration:") ;
  DownEnumerator_range enumerator_277 (GGS_range::init_21__21_ (GGS_uint (uint32_t (4U)), GGS_uint (uint32_t (3U)), inCompiler COMMA_HERE)) ;
  while (enumerator_277.hasCurrentObject ()) {
    var_s_115.plusAssignOperation(GGS_string (" ").add_operation (enumerator_277.current (HERE).getter_string (SOURCE_FILE ("testsuite_range.ggs", 12)), inCompiler COMMA_SOURCE_FILE ("testsuite_range.ggs", 12)), inCompiler  COMMA_SOURCE_FILE ("testsuite_range.ggs", 12)) ;
    enumerator_277.gotoNextObject () ;
  }
  var_s_115.log ("s"  COMMA_SOURCE_FILE ("testsuite_range.ggs", 14)) ;
}


