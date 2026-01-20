#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-instruction.h"
#include "method-instruction-code+display.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instruction codeDisplay'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_codeDisplay (cPtr_instruction * inObject,
                                      GGS_bool & io_ioPenDown,
                                      GGS_double & io_ioX,
                                      GGS_double & io_ioY,
                                      GGS_double & io_ioAngle,
                                      GGS_string & io_SVG,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_instruction) ;
    inObject->method_codeDisplay (io_ioPenDown, io_ioX, io_ioY, io_ioAngle, io_SVG, inCompiler COMMA_THERE) ;
  }
}
