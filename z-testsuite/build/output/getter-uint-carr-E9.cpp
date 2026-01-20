#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "getter-uint-carr-E9.h"

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@uint carré'
//--------------------------------------------------------------------------------------------------

GGS_uint extensionGetter_carr_E9_ (const GGS_uint & inObject,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_result ; // Returned variable
  const GGS_uint temp_0 = inObject ;
  const GGS_uint temp_1 = inObject ;
  result_result = temp_0.multiply_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_readers.ggs", 24)) ;
//---
  return result_result ;
}




