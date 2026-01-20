#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "setter-uintlist-append+square.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@uintlist appendSquare'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSquare (GGS_uintlist & ioObject,
                                   const GGS_uint constinArgument_inValue,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.setter_append (constinArgument_inValue.multiply_operation (constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 70)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 70)) ;
  }
}


