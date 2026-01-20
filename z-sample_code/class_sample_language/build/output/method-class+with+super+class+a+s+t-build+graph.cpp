#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-class+with+super+class+a+s+t.h"
#include "class-declaration+a+s+t.h"
#include "graph-inheritance+graph.h"
#include "method-declaration+a+s+t-build+graph.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@classWithSuperClassAST buildGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_classWithSuperClassAST::method_buildGraph (GGS_inheritanceGraph & ioArgument_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_classWithSuperClassAST temp_0 = this ;
  const GGS_classWithSuperClassAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 34)) ;
  }
  {
  const GGS_classWithSuperClassAST temp_2 = this ;
  const GGS_classWithSuperClassAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mClassName (), temp_3.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 35)) ;
  }
}

