#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+h.h"

//--------------------------------------------------------------------------------------------------
//   INITIALIZER @classeH init!!
//--------------------------------------------------------------------------------------------------

GGS_classeH GGS_classeH::init_21__21_ (const GGS_uint & constinArgument_inX,
                                       const GGS_uint & constinArgument_inY,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cPtr_classeH * object = nullptr ;
  macroMyNew (object, cPtr_classeH (inCompiler COMMA_THERE)) ;
  object->classeH_init_21__21_ (constinArgument_inX, constinArgument_inY, inCompiler) ;
  const GGS_classeH result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

void cPtr_classeH::classeH_init_21__21_ (const GGS_uint & constinArgument_inX,
                                       const GGS_uint & constinArgument_inY,
                                       Compiler * inCompiler) {
  mProperty_y = constinArgument_inY ;
  classeA_init_21_ (constinArgument_inX, inCompiler) ; 
}


