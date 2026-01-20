#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+method.h"
#include "getter-+test+extension+method-reader1.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@TestExtensionMethod reader1'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_TestExtensionMethod::getter_reader_31_ (Compiler */* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (2U)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_uint callExtensionGetter_reader_31_ (const cPtr_TestExtensionMethod * inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_reader_31_ (inCompiler COMMA_THERE) ;
  }
  return result ;
}

