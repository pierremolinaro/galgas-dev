#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-pen+down.h"
#include "method-instruction-code+display.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@penDown codeDisplay'
//--------------------------------------------------------------------------------------------------

void cPtr_penDown::method_codeDisplay (GGS_bool & ioArgument_ioPenDown,
                                       GGS_double & /* ioArgument_ioX */,
                                       GGS_double & /* ioArgument_ioY */,
                                       GGS_double & /* ioArgument_ioAngle */,
                                       GGS_string & /* ioArgument_SVG */,
                                       Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioPenDown = GGS_bool (true) ;
}

