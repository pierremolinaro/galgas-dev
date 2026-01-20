#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+h.h"
#include "class-classe+i.h"
#include "optional-classe+h-3F.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Freference-5Fclass.h"
#include "weak-reference-classe+h-2Eweak.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_reference_class'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_reference_5F_class (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of reference classe test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_reference-classes.ggs", 76)) ;
  }
  GGS_classeI var_a_1956 = GGS_classeI::init_21_ (GGS_uint (uint32_t (5U)), inCompiler COMMA_HERE) ;
  {
  routine_println_3F_ (var_a_1956.readProperty_x ().getter_string (SOURCE_FILE ("testsuite_reference-classes.ggs", 78)), inCompiler  COMMA_SOURCE_FILE ("testsuite_reference-classes.ggs", 78)) ;
  }
  {
  routine_println_3F_ (var_a_1956.readProperty_y ().getter_string (SOURCE_FILE ("testsuite_reference-classes.ggs", 79)), inCompiler  COMMA_SOURCE_FILE ("testsuite_reference-classes.ggs", 79)) ;
  }
  var_a_1956.setProperty_z (GGS_classeH::init_21__21_ (GGS_uint (uint32_t (9U)), GGS_uint (uint32_t (11U)), inCompiler COMMA_HERE)) ;
  GGS_classeH_3F_ var_b_2046 = GGS_classeH::init_21__21_ (GGS_uint (uint32_t (13U)), GGS_uint (uint32_t (17U)), inCompiler COMMA_HERE) ;
  var_a_1956.setProperty_z (var_b_2046) ;
  var_a_1956.setProperty_z (GGS_classeH_2E_weak::init_nil ()) ;
  var_b_2046 = var_a_1956.readProperty_z () ;
  {
  routine_println_3F_ (GGS_string ("*************************************** end of reference classe test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_reference-classes.ggs", 85)) ;
  }
}


