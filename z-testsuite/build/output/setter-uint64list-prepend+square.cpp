#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "getter-uint64-square.h"
#include "setter-uint64list-prepend+square.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@uint64list prependSquare'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_prependSquare (GGS_uint_36__34_list & ioObject,
                                    const GGS_uint_36__34_ constinArgument_inValue,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.setter_insertAtIndex (extensionGetter_square (constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 74)), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 74)) ;
  }
}


