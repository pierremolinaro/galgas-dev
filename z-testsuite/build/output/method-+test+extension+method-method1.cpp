#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+method.h"
#include "method-+test+extension+method-method1.h"

//--------------------------------------------------------------------------------------------------
//Extension method '@TestExtensionMethod method1'
//--------------------------------------------------------------------------------------------------

void cPtr_TestExtensionMethod::method_method_31_ (Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_method_31_ (cPtr_TestExtensionMethod * inObject,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_TestExtensionMethod) ;
    inObject->method_method_31_ (inCompiler COMMA_THERE) ;
  }
}

