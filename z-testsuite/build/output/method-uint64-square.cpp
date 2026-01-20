#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "method-uint64-square.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@uint64 square'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_square (const GGS_uint_36__34_ inObject,
                             GGS_uint_36__34_ & outArgument_outResult,
                             Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  const GGS_uint_36__34_ temp_0 = inObject ;
  const GGS_uint_36__34_ temp_1 = inObject ;
  outArgument_outResult = temp_0.multiply_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 50)) ;
}


