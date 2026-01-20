#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+setter.h"
#include "method-+test+extension+setter-setter1.h"

//--------------------------------------------------------------------------------------------------
//Extension method '@TestExtensionSetter setter1'
//--------------------------------------------------------------------------------------------------

void cPtr_TestExtensionSetter::method_setter_31_ (GGS_uint & ioArgument_ioArg,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_TestExtensionSetter temp_0 = this ;
  this->mProperty_mInteger = temp_0.readProperty_mInteger ().add_operation (ioArgument_ioArg, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 30)) ;
  ioArgument_ioArg.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 31)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setter_31_ (cPtr_TestExtensionSetter * inObject,
                                     GGS_uint & io_ioArg,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_TestExtensionSetter) ;
    inObject->method_setter_31_ (io_ioArg, inCompiler COMMA_THERE) ;
  }
}

