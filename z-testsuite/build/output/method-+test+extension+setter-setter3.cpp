#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+setter.h"
#include "method-+test+extension+setter-setter3.h"

//--------------------------------------------------------------------------------------------------
//Extension method '@TestExtensionSetter setter3'
//--------------------------------------------------------------------------------------------------

void cPtr_TestExtensionSetter::method_setter_33_ (const GGS_uint constinArgument_inArg,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  this->mProperty_mString.setter_appendSpacesUntilColumn (constinArgument_inArg, inCompiler COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 25)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setter_33_ (cPtr_TestExtensionSetter * inObject,
                                     const GGS_uint constin_inArg,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_TestExtensionSetter) ;
    inObject->method_setter_33_ (constin_inArg, inCompiler COMMA_THERE) ;
  }
}

