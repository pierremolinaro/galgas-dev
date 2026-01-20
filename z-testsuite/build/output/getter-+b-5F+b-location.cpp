#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+b-5F+b.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@B_B location'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_B_5F_B::getter_location (Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 21)) ;
//---
  return result_outLocation ;
}


