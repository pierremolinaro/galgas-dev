#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "getter-uint64-square.h"

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@uint64 square'
//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ extensionGetter_square (const GGS_uint_36__34_ & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint_36__34_ result_result ; // Returned variable
  const GGS_uint_36__34_ temp_0 = inObject ;
  const GGS_uint_36__34_ temp_1 = inObject ;
  result_result = temp_0.multiply_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 34)) ;
//---
  return result_result ;
}




