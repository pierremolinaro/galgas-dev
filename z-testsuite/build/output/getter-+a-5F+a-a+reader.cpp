#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+a-5F+a.h"
#include "getter-+a-5F+a-a+reader.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@A_A aReader'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_aReader (const cPtr_A_5F_A * inObject,
                                        GGS_uint in_inA,
                                        const GGS_string in_inB,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_aReader (in_inA, in_inB, inCompiler COMMA_THERE) ;
  }
  return result ;
}

