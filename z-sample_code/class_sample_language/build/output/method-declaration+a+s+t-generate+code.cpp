#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-declaration+a+s+t.h"
#include "method-declaration+a+s+t-generate+code.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@declarationAST generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_declarationAST * inObject,
                                       GGS_string & io_ioCodeToGenerate,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_declarationAST) ;
    inObject->method_generateCode (io_ioCodeToGenerate, inCompiler COMMA_THERE) ;
  }
}
