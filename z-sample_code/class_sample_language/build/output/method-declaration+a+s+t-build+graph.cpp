#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-declaration+a+s+t.h"
#include "graph-inheritance+graph.h"
#include "method-declaration+a+s+t-build+graph.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@declarationAST buildGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildGraph (cPtr_declarationAST * inObject,
                                     GGS_inheritanceGraph & io_ioGraph,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_declarationAST) ;
    inObject->method_buildGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
