#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "setter-uint64-increment.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@uint64 increment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_increment (GGS_uint_36__34_ & ioObject,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.plusAssignOperation(GGS_uint_36__34_ (uint64_t (1ULL)), inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 84)) ;
}


