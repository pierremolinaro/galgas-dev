#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+b.h"

//--------------------------------------------------------------------------------------------------
//   INITIALIZER @classeB init!
//--------------------------------------------------------------------------------------------------

GGS_classeB GGS_classeB::init_21_ (const GGS_uint & constinArgument_inX,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  cPtr_classeB * object = nullptr ;
  macroMyNew (object, cPtr_classeB (inCompiler COMMA_THERE)) ;
  object->classeB_init_21_ (constinArgument_inX, inCompiler) ;
  const GGS_classeB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

void cPtr_classeB::classeB_init_21_ (const GGS_uint & constinArgument_inX,
                                   Compiler * /* inCompiler */) {
  mProperty_x = constinArgument_inX ;
}


