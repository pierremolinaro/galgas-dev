#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-overriding+test+extension+setter.h"
#include "method-abstract+test+extension+setter-m.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingTestExtensionSetter m'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingTestExtensionSetter::method_m (Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

