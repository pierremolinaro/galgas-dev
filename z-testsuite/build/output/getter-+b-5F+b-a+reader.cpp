#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+b-5F+b.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@B_B aReader'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_B_5F_B::getter_aReader (GGS_uint inArgument_inA,
                                        const GGS_string constinArgument_inB,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  inArgument_inA.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 10)) ;
  result_result = constinArgument_inB.add_operation (inArgument_inA.getter_string (SOURCE_FILE ("testsuite_extension_readers.ggs", 11)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 11)) ;
//---
  return result_result ;
}


