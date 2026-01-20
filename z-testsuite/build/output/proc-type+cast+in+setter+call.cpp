#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-base+class+for+type+cast+in+setter+call.h"
#include "class-inherited+class+for+type+cast+in+setter+call.h"
#include "method-inherited+class+for+type+cast+in+setter+call-un+setter.h"
#include "proc-type+cast+in+setter+call.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'typeCastInSetterCall'
//
//--------------------------------------------------------------------------------------------------

void routine_typeCastInSetterCall (Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseClassForTypeCastInSetterCall var_object_1733 = GGS_inheritedClassForTypeCastInSetterCall::init (inCompiler COMMA_HERE) ;
  GGS_inheritedClassForTypeCastInSetterCall temp_0 ;
  if (var_object_1733.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_inheritedClassForTypeCastInSetterCall *> (var_object_1733.ptr ())) {
      temp_0 = (cPtr_inheritedClassForTypeCastInSetterCall *) var_object_1733.ptr () ;
    }else{
      inCompiler->castError ("inheritedClassForTypeCastInSetterCall", var_object_1733.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 63)) ;
    }
  }
  GGS_inheritedClassForTypeCastInSetterCall var_x_1790 = temp_0 ;
  callExtensionMethod_unSetter ((cPtr_inheritedClassForTypeCastInSetterCall *) var_x_1790.ptr (), inCompiler COMMA_SOURCE_FILE ("testsuite_extension_setters.ggs", 63)) ;
}


