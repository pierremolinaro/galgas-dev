#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-forward.h"
#include "method-instruction-code+display.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forward codeDisplay'
//--------------------------------------------------------------------------------------------------

void cPtr_forward::method_codeDisplay (GGS_bool & ioArgument_ioPenDown,
                                       GGS_double & ioArgument_ioX,
                                       GGS_double & ioArgument_ioY,
                                       GGS_double & ioArgument_ioAngle,
                                       GGS_string & ioArgument_SVG,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forward temp_0 = this ;
  GGS_double var_x_2836 = ioArgument_ioX.add_operation (temp_0.readProperty_mLength ().readProperty_uint ().getter_double (SOURCE_FILE ("logo-semantics.galgas", 105)).multiply_operation (ioArgument_ioAngle.getter_cosDegree (SOURCE_FILE ("logo-semantics.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 105)) ;
  const GGS_forward temp_1 = this ;
  GGS_double var_y_2904 = ioArgument_ioY.add_operation (temp_1.readProperty_mLength ().readProperty_uint ().getter_double (SOURCE_FILE ("logo-semantics.galgas", 106)).multiply_operation (ioArgument_ioAngle.getter_sinDegree (SOURCE_FILE ("logo-semantics.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 106)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = ioArgument_ioPenDown.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_SVG.plusAssignOperation(GGS_string ("<line x1=\"").add_operation (ioArgument_ioX.getter_string (SOURCE_FILE ("logo-semantics.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 108)).add_operation (GGS_string ("\" y1=\""), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 108)).add_operation (ioArgument_ioY.getter_string (SOURCE_FILE ("logo-semantics.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 108)).add_operation (GGS_string ("\" x2=\""), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 108)).add_operation (var_x_2836.getter_string (SOURCE_FILE ("logo-semantics.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 108)).add_operation (GGS_string ("\" y2=\""), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 108)).add_operation (var_y_2904.getter_string (SOURCE_FILE ("logo-semantics.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 108)).add_operation (GGS_string ("\" style=\"stroke:#1F56D2\" stroke-linecap=\"round\" />\n"), inCompiler COMMA_SOURCE_FILE ("logo-semantics.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("logo-semantics.galgas", 108)) ;
    }
  }
  ioArgument_ioX = var_x_2836 ;
  ioArgument_ioY = var_y_2904 ;
}

