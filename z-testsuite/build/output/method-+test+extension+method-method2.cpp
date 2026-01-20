#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+method.h"
#include "getter-+test+extension+method-reader1.h"
#include "method-+test+extension+method-method2.h"

//--------------------------------------------------------------------------------------------------
//Extension method '@TestExtensionMethod method2'
//--------------------------------------------------------------------------------------------------

void cPtr_TestExtensionMethod::method_method_32_ (GGS_uint & outArgument_result,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_TestExtensionMethod temp_0 = this ;
  outArgument_result = callExtensionGetter_reader_31_ ((const cPtr_TestExtensionMethod *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_methods.ggs", 13)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_method_32_ (cPtr_TestExtensionMethod * inObject,
                                     GGS_uint & out_result,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_TestExtensionMethod) ;
    inObject->method_method_32_ (out_result, inCompiler COMMA_THERE) ;
  }
}

