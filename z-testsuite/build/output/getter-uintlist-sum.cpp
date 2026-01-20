#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "getter-uintlist-sum.h"

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@uintlist sum'
//--------------------------------------------------------------------------------------------------

GGS_uint extensionGetter_sum (const GGS_uintlist & inObject,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
  const GGS_uintlist temp_0 = inObject ;
  UpEnumerator_uintlist enumerator_865 (temp_0) ;
  while (enumerator_865.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_865.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 40)) ;
    enumerator_865.gotoNextObject () ;
  }
//---
  return result_result ;
}




