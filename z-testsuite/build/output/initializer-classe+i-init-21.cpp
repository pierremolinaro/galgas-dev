#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+i.h"

//--------------------------------------------------------------------------------------------------
//   INITIALIZER @classeI init!
//--------------------------------------------------------------------------------------------------

GGS_classeI GGS_classeI::init_21_ (const GGS_uint & constinArgument_inY,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  cPtr_classeI * object = nullptr ;
  macroMyNew (object, cPtr_classeI (inCompiler COMMA_THERE)) ;
  object->classeI_init_21_ (constinArgument_inY, inCompiler) ;
  const GGS_classeI result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

void cPtr_classeI::classeI_init_21_ (const GGS_uint & constinArgument_inY,
                                   Compiler * inCompiler) {
  mProperty_y = constinArgument_inY ;
  classeC_init (inCompiler) ; 
}


