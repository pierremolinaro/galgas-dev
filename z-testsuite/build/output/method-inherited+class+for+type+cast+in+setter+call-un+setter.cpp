#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-inherited+class+for+type+cast+in+setter+call.h"
#include "method-inherited+class+for+type+cast+in+setter+call-un+setter.h"
#include "proc-println-3F.h"

//--------------------------------------------------------------------------------------------------
//Extension method '@inheritedClassForTypeCastInSetterCall unSetter'
//--------------------------------------------------------------------------------------------------

void cPtr_inheritedClassForTypeCastInSetterCall::method_unSetter (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("Appel @inheritedClassForTypeCastInSetterCall unSetter"), inCompiler  COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 72)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_unSetter (cPtr_inheritedClassForTypeCastInSetterCall * inObject,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_inheritedClassForTypeCastInSetterCall) ;
    inObject->method_unSetter (inCompiler COMMA_THERE) ;
  }
}

