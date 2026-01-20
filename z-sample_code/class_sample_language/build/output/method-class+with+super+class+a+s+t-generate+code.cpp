#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-class+with+super+class+a+s+t.h"
#include "method-declaration+a+s+t-generate+code.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@classWithSuperClassAST generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_classWithSuperClassAST::method_generateCode (GGS_string & ioArgument_ioCodeToGenerate,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classWithSuperClassAST temp_0 = this ;
  const GGS_classWithSuperClassAST temp_1 = this ;
  ioArgument_ioCodeToGenerate.plusAssignOperation(GGS_string ("class ").add_operation (temp_0.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 49)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 49)).add_operation (temp_1.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 49)).add_operation (GGS_string (" { } ;\n"), inCompiler COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("class_sample_language_semantics.galgas", 49)) ;
}

