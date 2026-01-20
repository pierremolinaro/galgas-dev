#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "map-my+map.h"
#include "proc-bug+map.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'bugMap'
//
//--------------------------------------------------------------------------------------------------

void routine_bugMap (Compiler * inCompiler
                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_myMap var_a_230 = GGS_myMap::init (inCompiler COMMA_HERE) ;
  {
  var_a_230.setter_put (GGS_lstring::init_21__21_ (GGS_string ("var"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_bugMap.ggs", 10)), inCompiler COMMA_HERE), GGS_string ("Hello"), inCompiler COMMA_SOURCE_FILE ("testsuite_bugMap.ggs", 10)) ;
  }
  GGS_myMap var_b_291 = var_a_230 ;
  GGS_myMap var_c_310 = GGS_myMap::class_func_mapWithMapToOverride (var_b_291  COMMA_SOURCE_FILE ("testsuite_bugMap.ggs", 12)) ;
  {
  var_c_310.setter_setValueForKey (GGS_string ("World"), GGS_lstring::init_21__21_ (GGS_string ("var"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_bugMap.ggs", 13)), inCompiler COMMA_HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("testsuite_bugMap.ggs", 13)) ;
  }
  var_a_230.log ("a"  COMMA_SOURCE_FILE ("testsuite_bugMap.ggs", 14)) ;
}


