#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-rotate.h"
#include "method-instruction-code+display.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@rotate codeDisplay'
//--------------------------------------------------------------------------------------------------

void cPtr_rotate::method_codeDisplay (GGS_bool & /* ioArgument_ioPenDown */,
                                      GGS_double & /* ioArgument_ioX */,
                                      GGS_double & /* ioArgument_ioY */,
                                      GGS_double & ioArgument_ioAngle,
                                      GGS_string & /* ioArgument_SVG */,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_rotate temp_0 = this ;
  ioArgument_ioAngle = ioArgument_ioAngle.add_operation (temp_0.readProperty_mAngle ().readProperty_uint ().getter_double (SOURCE_FILE ("logo-semantics.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 87)) ;
}

