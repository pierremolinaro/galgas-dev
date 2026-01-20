#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+b-5F+b.h"
#include "getter-+a-5F+a-a+reader.h"
#include "getter-+b-5F+b-other+reader.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@B_B otherReader'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_B_5F_B::getter_otherReader (GGS_uint inArgument_inA,
                                            const GGS_string constinArgument_inB,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  inArgument_inA.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 15)) ;
  const GGS_B_5F_B temp_0 = this ;
  const GGS_B_5F_B temp_1 = this ;
  result_result = constinArgument_inB.add_operation (inArgument_inA.getter_string (SOURCE_FILE ("testsuite_extension_readers.ggs", 16)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 16)).add_operation (callExtensionGetter_aReader ((const cPtr_B_5F_B *) temp_0.ptr (), inArgument_inA, constinArgument_inB, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 16)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 16)).add_operation (callExtensionGetter_aReader ((const cPtr_B_5F_B *) temp_1.ptr (), inArgument_inA, constinArgument_inB, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 16)), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 16)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_otherReader (const cPtr_B_5F_B * inObject,
                                            GGS_uint in_inA,
                                            const GGS_string in_inB,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_otherReader (in_inA, in_inB, inCompiler COMMA_THERE) ;
  }
  return result ;
}

