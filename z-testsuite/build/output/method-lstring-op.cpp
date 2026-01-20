#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "method-lstring-op.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@lstring op'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_op (const GGS_lstring inObject,
                         GGS_string & outArgument_outResult,
                         Compiler * inCompiler
                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  const GGS_lstring temp_0 = inObject ;
  outArgument_outResult = temp_0.readProperty_string ().add_operation (GGS_string (" !"), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 61)) ;
}


