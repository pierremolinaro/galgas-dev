#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+d.h"

//--------------------------------------------------------------------------------------------------
//   INITIALIZER @classeD init!x
//--------------------------------------------------------------------------------------------------

GGS_classeD GGS_classeD::init_21_x (const GGS_uint & constinArgument_inX,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cPtr_classeD * object = nullptr ;
  macroMyNew (object, cPtr_classeD (inCompiler COMMA_THERE)) ;
  object->classeD_init_21_x (constinArgument_inX, inCompiler) ;
  const GGS_classeD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

void cPtr_classeD::classeD_init_21_x (const GGS_uint & constinArgument_inX,
                                    Compiler * /* inCompiler */) {
  mProperty_x = constinArgument_inX ;
}


