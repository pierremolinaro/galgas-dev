#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "setter-lstring-append+int.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@lstring appendInt'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendInt (GGS_lstring & ioObject,
                                const GGS_uint constinArgument_inValue,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_string.plusAssignOperation(constinArgument_inValue.getter_string (SOURCE_FILE ("testsuite_type_categories.ggs", 66)), inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 66)) ;
}


