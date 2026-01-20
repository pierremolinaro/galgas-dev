#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-class+without+super+class+a+s+t.h"
#include "class-declaration+a+s+t.h"
#include "graph-inheritance+graph.h"
#include "method-declaration+a+s+t-build+graph.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@classWithoutSuperClassAST buildGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_classWithoutSuperClassAST::method_buildGraph (GGS_inheritanceGraph & ioArgument_ioGraph,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_classWithoutSuperClassAST temp_0 = this ;
  const GGS_classWithoutSuperClassAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 29)) ;
  }
}

