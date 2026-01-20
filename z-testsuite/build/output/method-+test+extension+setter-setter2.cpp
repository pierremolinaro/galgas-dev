#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+setter.h"
#include "method-+test+extension+setter-setter1.h"
#include "method-+test+extension+setter-setter2.h"

//--------------------------------------------------------------------------------------------------
//Extension method '@TestExtensionSetter setter2'
//--------------------------------------------------------------------------------------------------

void cPtr_TestExtensionSetter::method_setter_32_ (GGS_uint & ioArgument_ioArg,
                                                  const GGS_string constinArgument_inS,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_TestExtensionSetter temp_0 = this ;
  callExtensionMethod_setter_31_ ((cPtr_TestExtensionSetter *) temp_0.ptr (), ioArgument_ioArg, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 41)) ;
  this->mProperty_mString.plusAssignOperation(constinArgument_inS, inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 42)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setter_32_ (cPtr_TestExtensionSetter * inObject,
                                     GGS_uint & io_ioArg,
                                     const GGS_string constin_inS,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_TestExtensionSetter) ;
    inObject->method_setter_32_ (io_ioArg, constin_inS, inCompiler COMMA_THERE) ;
  }
}

