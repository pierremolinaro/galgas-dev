#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-class+without+super+class+a+s+t.h"
#include "method-declaration+a+s+t-generate+code.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@classWithoutSuperClassAST generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_classWithoutSuperClassAST::method_generateCode (GGS_string & ioArgument_ioCodeToGenerate,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classWithoutSuperClassAST temp_0 = this ;
  ioArgument_ioCodeToGenerate.plusAssignOperation(GGS_string ("class ").add_operation (temp_0.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 44)).add_operation (GGS_string (" { } ;\n"), inCompiler COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 44)) ;
}

