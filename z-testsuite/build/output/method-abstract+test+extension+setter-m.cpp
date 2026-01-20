#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-abstract+test+extension+setter.h"
#include "method-abstract+test+extension+setter-m.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractTestExtensionSetter m'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_m (cPtr_abstractTestExtensionSetter * inObject,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractTestExtensionSetter) ;
    inObject->method_m (inCompiler COMMA_THERE) ;
  }
}
