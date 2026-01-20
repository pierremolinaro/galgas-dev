#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "getter-lstring-op.h"

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lstring op'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_op (const GGS_lstring & inObject,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lstring temp_0 = inObject ;
  result_result = temp_0.readProperty_string ().add_operation (GGS_string (" !"), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 45)) ;
//---
  return result_result ;
}




