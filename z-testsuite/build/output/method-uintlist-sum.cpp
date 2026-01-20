#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "method-uintlist-sum.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@uintlist sum'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_sum (const GGS_uintlist inObject,
                          GGS_uint & outArgument_outResult,
                          Compiler * inCompiler
                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  outArgument_outResult = GGS_uint (uint32_t (0U)) ;
  const GGS_uintlist temp_0 = inObject ;
  UpEnumerator_uintlist enumerator_1154 (temp_0) ;
  while (enumerator_1154.hasCurrentObject ()) {
    outArgument_outResult = outArgument_outResult.add_operation (enumerator_1154.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 56)) ;
    enumerator_1154.gotoNextObject () ;
  }
}


