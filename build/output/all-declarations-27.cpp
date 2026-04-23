#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 964)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GGS_string & outArgument_outHeader,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GGS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GGS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 975)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 972))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 982)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 993)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 990))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_40637 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1002)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_selfTypeDefinition_40637.readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas", 1003)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_semanticTypeForGeneration temp_2 = this ;
    result_result = GGS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_40637.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1008)), var_selfTypeDefinition_40637.readProperty_superType () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1006))) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1022)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1022))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1022)) ;
  GGS_string var_code_41774 ;
  {
  const GGS_functionImplementationForGeneration temp_1 = this ;
  const GGS_functionImplementationForGeneration temp_2 = this ;
  const GGS_functionImplementationForGeneration temp_3 = this ;
  const GGS_functionImplementationForGeneration temp_4 = this ;
  const GGS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1024)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1024)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GGS_bool (false), GGS_bool (false), var_code_41774, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1023)) ;
  }
  const GGS_functionImplementationForGeneration temp_6 = this ;
  const GGS_functionImplementationForGeneration temp_7 = this ;
  const GGS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_41774, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1039)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1035))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1050)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1050))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1050)) ;
  GGS_string var_code_42682 ;
  {
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1052)), ioArgument_ioInclusionSet, GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), temp_2.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GGS_bool (true), GGS_bool (false), var_code_42682, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1051)) ;
  }
  const GGS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_42682, GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1067)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1063))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1088)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_string & outArgument_outHeader,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1098))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1098)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1108)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1108))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1108)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1119)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1119))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1119)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  ioArgument_ioSwiftAppProductFileList.addAssignOperation (GGS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1120)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1120))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1120)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_2.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1123)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1123)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1123)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_3.readProperty_mSwiftUIImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1143)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssignOperation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1152)) ;
  const GGS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1163)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GGS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GGS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssignOperation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1175)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1175))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1175)) ;
  UpEnumerator_wrapperFileMap enumerator_47143 (constinArgument_inFilewrapperFileMap) ;
  while (enumerator_47143.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssignOperation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1177)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1177))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1177)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_47143.current_mIsTextFile (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssignOperation (enumerator_47143.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1179))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1179)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssignOperation (enumerator_47143.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1181))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1181)) ;
    }
    enumerator_47143.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_47498 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_47498.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_47498.current_mRegularFileMap (HERE), enumerator_47498.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1185)) ;
    }
    enumerator_47498.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_regularFileIndexStringList_48031 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularBinaryContentIndexStringList_48081 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularTextContentIndexStringList_48140 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_directoryIndexStringList_48197 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_48031, var_directoryIndexStringList_48197, var_regularTextContentIndexStringList_48140, var_regularBinaryContentIndexStringList_48081, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1205)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_48031, var_directoryIndexStringList_48197, var_regularTextContentIndexStringList_48140, var_regularBinaryContentIndexStringList_48081, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1213))) ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  UpEnumerator_filewrapperTemplateListForGeneration enumerator_48848 (temp_3.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_48848.hasCurrentObject ()) {
    const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_48848.current_mFilewrapperTemplateName (HERE), enumerator_48848.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1222))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1222)) ;
    enumerator_48848.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GGS_string constinArgument_inFilewrapperName,
                                                              const GGS_string constinArgument_inFilewrapperDirectory,
                                                              const GGS_uint constinArgument_inFilewrapperDirectoryIndex,
                                                              const GGS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GGS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_wrapperFileMap enumerator_49574 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_49574.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_49574.current_mIsTextFile (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_contents_49661 = GGS_string::class_func_stringWithContentsOfFile (enumerator_49574.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1242)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1243)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1243)).add_operation (enumerator_49574.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1243)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1243)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1243)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1244)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1245)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1245)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1246)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1247)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1247)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1248)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_49661.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1249)).objectCompare (GGS_uint (uint32_t (100U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_stringlist var_components_50107 = var_contents_49661.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1250)) ;
            GGS_string var_lastLine_50200 ;
            {
            var_components_50107.setter_popLast (var_lastLine_50200, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1251)) ;
            }
            UpEnumerator_stringlist enumerator_50223 (var_components_50107) ;
            const bool bool_2 = true ;
            if (enumerator_50223.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1254)) ;
              while (enumerator_50223.hasCurrentObject () && bool_2) {
                GGS_string var_s_50319 = enumerator_50223.current_mValue (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1256)) ;
                ioArgument_ioImplementation.plusAssignOperation(var_s_50319.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1257)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1257)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1257)) ;
                enumerator_50223.gotoNextObject () ;
              }
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_50200.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1259)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                ioArgument_ioImplementation.plusAssignOperation(var_lastLine_50200.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1260)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          ioArgument_ioImplementation.plusAssignOperation(var_contents_49661.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1263)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1263)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1266)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1267)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1268)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1268)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1270)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1270)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1271)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1272)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1272)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1272)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1273)) ;
        ioArgument_ioImplementation.plusAssignOperation(var_contents_49661.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1274)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1274)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1274)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1275)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1276)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1276)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1277)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1278)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1278)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1279)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_data var_contents_51487 = GGS_data::class_func_dataWithContentsOfFile (enumerator_49574.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)) ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)).add_operation (enumerator_49574.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)).add_operation (enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1284)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1285)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285)).add_operation (var_contents_51487.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1285)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1285)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285)).add_operation (var_contents_51487.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1286)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)).add_operation (GGS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)).add_operation (enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1287)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1287)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1287)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1288)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1287)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1288)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1288)).add_operation (enumerator_49574.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1289)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)).add_operation (enumerator_49574.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1290)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1290)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1290)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1290)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1290)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1291)).add_operation (var_contents_51487.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1292)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1292)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1293)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1293)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)) ;
    }
    enumerator_49574.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_52484 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_52484.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_52484.current_lkey (HERE).readProperty_string (), enumerator_52484.current_mWrapperDirectoryIndex (HERE), enumerator_52484.current_mRegularFileMap (HERE), enumerator_52484.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1299)) ;
    }
    enumerator_52484.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)).add_operation (GGS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1311)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1310)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1311)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1312)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1312)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1312)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1312)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1312)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)) ;
  UpEnumerator_wrapperFileMap enumerator_53085 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_53085.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_53085.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)) ;
    enumerator_53085.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1316)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1316)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)).add_operation (GGS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1322)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)) ;
  UpEnumerator_wrapperDirectoryMap enumerator_53699 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_53699.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_53699.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)) ;
    enumerator_53699.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)).add_operation (GGS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1330)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1331)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1332)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1333)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1333)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1335)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1335)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1335)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1335)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1335)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)) ;
  GGS_string var_filewrapperImplementation_55033 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GGS_string::makeEmptyString (), GGS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_55033, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_55033 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1356))) ;
  const GGS_filewrapperDeclarationForGeneration temp_5 = this ;
  UpEnumerator_filewrapperTemplateListForGeneration enumerator_55494 (temp_5.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_55494.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_55648 = GGS_string::makeEmptyString () ;
    GGS_uint var_temporaryVariableIndex_55699 = GGS_uint (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_55745 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_55745.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1366))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1366)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_55866 (enumerator_55494.current_mFilewrapperTemplateFormalInputParameters (HERE)) ;
    while (enumerator_55866.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_55745.plusPlusAssignOperation (enumerator_55866.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)) ;
      enumerator_55866.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_55997 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_55494.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_55648, ioArgument_ioInclusionSet, var_temporaryVariableIndex_55699, var_unusedVariableCppNameSet_55745, var_useColumnMarker_55997, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)) ;
    }
    const GGS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssignOperation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_55494.current_mFilewrapperTemplateName (HERE), enumerator_55494.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_55745, var_useColumnMarker_55997, var_generatedCodeForInstructionList_55648 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1380))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1380)) ;
    enumerator_55494.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GGS_string & ioArgument_ioHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssignOperation(GGS_string ("class GGS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mCppDeclarationString () ;
  const GGS_primitiveTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_57495 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_primitiveTypeForGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_57495.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)), var_selfTypeDefinition_57495.readProperty_classFunctionMap (), var_selfTypeDefinition_57495.readProperty_classMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_primitiveTypeForGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_57495.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)), var_selfTypeDefinition_57495.readProperty_isConcrete (), var_selfTypeDefinition_57495.readProperty_initializerMap (), var_selfTypeDefinition_57495.readProperty_classFunctionMap (), var_selfTypeDefinition_57495.readProperty_getterMap (), var_selfTypeDefinition_57495.readProperty_setterMap (), var_selfTypeDefinition_57495.readProperty_instanceMethodMap (), var_selfTypeDefinition_57495.readProperty_classMethodMap (), var_selfTypeDefinition_57495.readProperty_readSubscriptMap (), var_selfTypeDefinition_57495.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_57495.readProperty_features (), var_selfTypeDefinition_57495.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_57495.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_57495.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const GGS_string constinArgument_inDirectory,
                                                              const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                                              GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                              GGS_stringlist & ioArgument_ioToolCppFileList,
                                                              GGS_stringset & ioArgument_ioAllProductFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_generatedCode_59321 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455))) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_59422 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59422.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59422.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_59422.current_mDeclaration (HERE).ptr (), var_generatedCode_59321, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)) ;
      }
    }
    enumerator_59422.gotoNextObject () ;
  }
  var_generatedCode_59321.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_59637 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59637.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59637.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1463)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_generatedCode_59321.plusAssignOperation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_59637.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)) ;
      }
    }
    enumerator_59637.gotoNextObject () ;
  }
  UpEnumerator_semanticDeclarationListForGeneration enumerator_59824 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59824.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59824.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1468)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_stringset joker_59960 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_59986 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_59824.current_mDeclaration (HERE).ptr (), joker_59960, var_code_59986, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)) ;
        var_generatedCode_59321.plusAssignOperation(var_code_59986, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)) ;
      }
    }
    enumerator_59824.gotoNextObject () ;
  }
  var_generatedCode_59321.plusAssignOperation(GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_60134 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_60134.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60134.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_stringset joker_60283 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__60309 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_60134.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_60283, var_headerString_32__60309, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)) ;
        var_generatedCode_59321.plusAssignOperation(var_headerString_32__60309, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)) ;
      }
    }
    enumerator_60134.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1480)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.h"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_59321, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483)) ;
      }
    }
  }
  var_generatedCode_59321 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1496))) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_61078 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_61078.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_61078.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1498)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_generatedCode_59321.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_61078.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1499)) ;
        GGS_stringset joker_61298 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_61324 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_61078.current_mDeclaration (HERE).ptr (), GGS_unifiedTypeMap::init (inCompiler COMMA_HERE), joker_61298, var_code_61324, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1500)) ;
        var_generatedCode_59321.plusAssignOperation(var_code_61324, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1501)) ;
      }
    }
    enumerator_61078.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1504)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1505)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.cpp"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_59321, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1507)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (Compiler * /* inCompiler */,
                                                                                  const GGS_string & /* in_COMPONENT_5F_NAME */,
                                                                                  const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_295.gotoNextObject () ;
      index_295_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (Compiler * /* inCompiler */,
                                                                                          const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"Compiler.h\"\n#include \"galgas-input-output.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_264_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_264 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_264.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_264.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_264.gotoNextObject () ;
      index_264_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GGS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 31)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 31)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_receiverExpression_3850 ;
  const GGS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3850, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 77)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3900 = var_receiverExpression_3850.readProperty_mResultType () ;
  GGS_string var_receiverTypeName_3952 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 85)).readProperty_typeName ().readProperty_string () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 88)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_templateGetterCallInExpressionAST temp_4 = this ;
        test_1 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)).readProperty_propertyMap ().getter_hasKey (temp_4.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_templateGetterCallInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead og getter call"), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 90)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_4427 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 93)).readProperty_getterMap () ;
    GGS_functionSignature var_getterFormalArgumentTypeList_4526 ;
    GGS_methodKind var_kind_4575 ;
    GGS_bool var_hasCompilerArgument_4594 ;
    GGS_unifiedTypeMapEntry var_returnedType_4643 ;
    GGS_stringlist var_fieldList_4664 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    const GGS_templateGetterCallInExpressionAST temp_7 = this ;
    GGS_string var_actualGetterName_4699 = temp_7.readProperty_mGetterName ().readProperty_string () ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateGetterCallInExpressionAST temp_9 = this ;
      test_8 = var_getterMap_4427.getter_hasKey (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_actualGetterNameString_4981 ;
        const GGS_templateGetterCallInExpressionAST temp_10 = this ;
        GGS_location joker_4903 ; // Joker input parameter
        GGS_methodQualifier joker_4965 ; // Joker input parameter
        var_getterMap_4427.method_searchKey (temp_10.readProperty_mGetterName (), var_kind_4575, var_getterFormalArgumentTypeList_4526, joker_4903, var_hasCompilerArgument_4594, var_returnedType_4643, joker_4965, var_actualGetterNameString_4981, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 102)) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_actualGetterNameString_4981.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_templateGetterCallInExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_actualGetterName_4699) ;
            inCompiler->emitSemanticError (temp_12.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 112)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_uint var_matchingReaderCount_5174 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 116)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas", 116)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_getterFormalArgumentTypeList_4526 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4594 = GGS_bool (true) ;
          var_returnedType_4643 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas", 119)) ;
          var_kind_4575 = GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 120)) ;
          UpEnumerator_typedPropertyList enumerator_5491 (extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 121)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_5491.hasCurrentObject ()) {
            GGS_getterMap var_aMap_5574 = extensionGetter_definition (enumerator_5491.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 122)).readProperty_getterMap () ;
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_templateGetterCallInExpressionAST temp_16 = this ;
              const GGS_getterMap_2E_element var_entry_5638 = var_aMap_5574.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_5574.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_15 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_15) {
                var_matchingReaderCount_5174.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 124)) ;
                var_getterFormalArgumentTypeList_4526 = var_entry_5638.readProperty_mArgumentTypeList () ;
                var_hasCompilerArgument_4594 = var_entry_5638.readProperty_mHasCompilerArgument () ;
                var_returnedType_4643 = var_entry_5638.readProperty_mReturnedType () ;
                var_kind_4575 = var_entry_5638.readProperty_mKind () ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = GGS_bool (ComparisonKind::notEqual, var_entry_5638.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_actualGetterName_4699 = var_entry_5638.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
                var_fieldList_4664.addAssignOperation (enumerator_5491.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
              }
            }
            enumerator_5491.gotoNextObject () ;
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            test_18 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_5174.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              const GGS_templateGetterCallInExpressionAST temp_19 = this ;
              const GGS_templateGetterCallInExpressionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).add_operation (GGS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 136)) ;
              var_getterFormalArgumentTypeList_4526.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4594.drop () ; // Release error dropped variable
              var_returnedType_4643.drop () ; // Release error dropped variable
              var_kind_4575.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_22 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_22) {
              test_22 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_5174.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GGS_string var_s_6555 = GGS_string::makeEmptyString () ;
                UpEnumerator_stringlist enumerator_6577 (var_fieldList_4664) ;
                while (enumerator_6577.hasCurrentObject ()) {
                  var_s_6555.plusAssignOperation(enumerator_6577.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 143)) ;
                  enumerator_6577.gotoNextObject () ;
                  if (enumerator_6577.hasCurrentObject ()) {
                    var_s_6555.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 144)) ;
                  }
                }
                const GGS_templateGetterCallInExpressionAST temp_23 = this ;
                const GGS_templateGetterCallInExpressionAST temp_24 = this ;
                GenericArray <FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (GGS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (var_s_6555, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)) ;
                var_getterFormalArgumentTypeList_4526.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4594.drop () ; // Release error dropped variable
                var_returnedType_4643.drop () ; // Release error dropped variable
                var_kind_4575.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::equal, var_getterMap_4427.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 151)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            const GGS_templateGetterCallInExpressionAST temp_27 = this ;
            GenericArray <FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 153)).add_operation (GGS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 153)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)) ;
            var_getterFormalArgumentTypeList_4526.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4594.drop () ; // Release error dropped variable
            var_returnedType_4643.drop () ; // Release error dropped variable
            var_kind_4575.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_26) {
          const GGS_templateGetterCallInExpressionAST temp_29 = this ;
          const GGS_templateGetterCallInExpressionAST temp_30 = this ;
          GenericArray <FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, var_getterMap_4427.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GGS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)) ;
          var_getterFormalArgumentTypeList_4526.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4594.drop () ; // Release error dropped variable
          var_returnedType_4643.drop () ; // Release error dropped variable
          var_kind_4575.drop () ; // Release error dropped variable
        }
      }
    }
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_templateGetterCallInExpressionAST temp_33 = this ;
      test_32 = GGS_bool (ComparisonKind::notEqual, temp_33.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 163)).objectCompare (var_getterFormalArgumentTypeList_4526.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 163)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        const GGS_templateGetterCallInExpressionAST temp_34 = this ;
        const GGS_templateGetterCallInExpressionAST temp_35 = this ;
        const GGS_templateGetterCallInExpressionAST temp_36 = this ;
        GenericArray <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)).add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)).add_operation (var_getterFormalArgumentTypeList_4526.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 165)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 165)).add_operation (temp_36.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 166)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 165)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_7984 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateGetterCallInExpressionAST temp_38 = this ;
      UpEnumerator_templateExpressionListAST enumerator_8063 (temp_38.readProperty_mExpressionList ()) ;
      UpEnumerator_functionSignature enumerator_8162 (var_getterFormalArgumentTypeList_4526) ;
      while (enumerator_8063.hasCurrentObject () && enumerator_8162.hasCurrentObject ()) {
        GalgasBool test_39 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_39) {
          test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_8162.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8063.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_39) {
            GGS_string temp_40 ;
            const GalgasBool test_41 = GGS_bool (ComparisonKind::notEqual, enumerator_8162.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_41) {
              temp_40 = enumerator_8162.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)) ;
            }else if (GalgasBool::boolFalse == test_41) {
              temp_40 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_8287 = GGS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)) ;
            GenericArray <FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, EnumFixItKind::fixItReplace, var_s_8287) ;
            inCompiler->emitSemanticError (enumerator_8063.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_8287, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)) ;
          }
        }
        GGS_semanticExpressionForGeneration var_exp_8693 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8063.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_8693, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8162.current_mFormalArgumentType (HERE), var_exp_8693.readProperty_mResultType (), enumerator_8063.current_mEndOfExpressionLocation (HERE), var_exp_8693, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)) ;
        }
        var_constructorEffectiveParameterList_7984.addAssignOperation (var_exp_8693  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)) ;
        enumerator_8063.gotoNextObject () ;
        enumerator_8162.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        const GGS_templateGetterCallInExpressionAST temp_44 = this ;
        test_43 = GGS_bool (ComparisonKind::notEqual, var_actualGetterName_4699.objectCompare (temp_44.readProperty_mGetterName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_templateGetterCallInExpressionAST temp_45 = this ;
          GenericArray <FixItDescription> fixItArray46 ;
          appendFixItActions (fixItArray46, EnumFixItKind::fixItReplace, var_actualGetterName_4699) ;
          inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)) ;
        }
      }
      const GGS_templateGetterCallInExpressionAST temp_47 = this ;
      outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4643, temp_47.readProperty_mGetterName ().readProperty_location (), var_kind_4575, var_receiverExpression_3850, var_fieldList_4664, var_actualGetterName_4699, var_constructorEffectiveParameterList_7984, var_hasCompilerArgument_4594, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateClassFunctionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateClassFunctionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_constructorType_9891 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 213)) ;
  GGS_classFunctionMap var_classFunctionMap_10024 = extensionGetter_definition (var_constructorType_9891, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 215)).readProperty_classFunctionMap () ;
  GGS_unifiedTypeMapEntry var_returnedType_10142 ;
  GGS_bool var_hasCompilerArgument_10167 ;
  GGS_functionSignature var_classFuncFormalArgumentTypeList_10212 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateClassFunctionAST temp_2 = this ;
    const GGS_classFunctionMap_2E_element var_entry_10253 = var_classFunctionMap_10024.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_classFunctionMap_10024.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      var_classFuncFormalArgumentTypeList_10212 = var_entry_10253.readProperty_mArgumentTypeList () ;
      var_hasCompilerArgument_10167 = var_entry_10253.readProperty_mHasCompilerArgument () ;
      var_returnedType_10142 = var_entry_10253.readProperty_mReturnedType () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_10024.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_templateClassFunctionAST temp_4 = this ;
        const GGS_templateClassFunctionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 227)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 227)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 226)) ;
        var_classFuncFormalArgumentTypeList_10212.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10167.drop () ; // Release error dropped variable
        var_returnedType_10142.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_templateClassFunctionAST temp_7 = this ;
      const GGS_templateClassFunctionAST temp_8 = this ;
      const GGS_templateClassFunctionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_classFunctionMap_10024.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 233))) ;
      inCompiler->emitSemanticError (temp_7.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)).add_operation (temp_9.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 230)) ;
      var_classFuncFormalArgumentTypeList_10212.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10167.drop () ; // Release error dropped variable
      var_returnedType_10142.drop () ; // Release error dropped variable
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_11061 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS_semanticExpressionListForGeneration var_classFunctionEffectiveParameterList_11124 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_templateClassFunctionAST temp_12 = this ;
    test_11 = GGS_bool (ComparisonKind::notEqual, temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 239)).objectCompare (var_classFuncFormalArgumentTypeList_10212.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 239)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_templateClassFunctionAST temp_13 = this ;
      const GGS_templateClassFunctionAST temp_14 = this ;
      const GGS_templateClassFunctionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_14.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)).add_operation (extensionGetter_definition (var_constructorType_9891, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)).add_operation (var_classFuncFormalArgumentTypeList_10212.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 242)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (temp_15.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 243)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 243)), fixItArray16  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 240)) ;
      var_classFunctionEffectiveParameterList_11124.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    var_classFunctionEffectiveParameterList_11124 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_templateClassFunctionAST temp_17 = this ;
    UpEnumerator_templateExpressionListAST enumerator_11728 (temp_17.readProperty_mExpressionList ()) ;
    UpEnumerator_functionSignature enumerator_11817 (var_classFuncFormalArgumentTypeList_10212) ;
    while (enumerator_11728.hasCurrentObject () && enumerator_11817.hasCurrentObject ()) {
      {
      var_requiredTypes_11061.setter_append (enumerator_11817.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 248)) ;
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_11817.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11728.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_11817.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_11817.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 250)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11993 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 250)) ;
          GenericArray <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, EnumFixItKind::fixItReplace, var_s_11993) ;
          inCompiler->emitSemanticError (enumerator_11728.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11993, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_12383 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_11728.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_12383, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11817.current_mFormalArgumentType (HERE), var_exp_12383.readProperty_mResultType (), enumerator_11728.current_mEndOfExpressionLocation (HERE), var_exp_12383, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)) ;
      }
      var_classFunctionEffectiveParameterList_11124.addAssignOperation (var_exp_12383  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 261)) ;
      enumerator_11728.gotoNextObject () ;
      enumerator_11817.gotoNextObject () ;
    }
  }
  const GGS_templateClassFunctionAST temp_22 = this ;
  const GGS_templateClassFunctionAST temp_23 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_10142, temp_22.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_9891, temp_23.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_11124, var_hasCompilerArgument_10167, var_requiredTypes_11061, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFileWrapperTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GGS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 287)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14328 ;
  const GGS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_14328, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 302)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14570 ;
  const GGS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_14570, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 310)) ;
  {
  const GGS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14328.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 319)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 319)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 319)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14328, var_rightExpression_14570, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 318)) ;
  }
  const GGS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14328.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14328, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 330)), var_rightExpression_14570, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_15664 ;
  const GGS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15664, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 345)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_15906 ;
  const GGS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15906, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 353)) ;
  {
  const GGS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 362)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 362)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 362)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15664, var_rightExpression_15906, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 361)) ;
  }
  const GGS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_15664.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15664, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 373)), var_rightExpression_15906, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16999 ;
  const GGS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_16999, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 388)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17241 ;
  const GGS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_17241, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 396)) ;
  {
  const GGS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16999.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 405)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 405)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 405)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16999, var_rightExpression_17241, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 404)) ;
  }
  const GGS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16999.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16999, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 416)), var_rightExpression_17241, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                  GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                  const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_19209 = GGS_string::makeEmptyString () ;
  const GGS_templateLiteralStringExpressionAST temp_0 = this ;
  UpEnumerator_stringlist enumerator_19223 (temp_0.readProperty_mLiteralStringList ()) ;
  while (enumerator_19223.hasCurrentObject ()) {
    var_s_19209.plusAssignOperation(enumerator_19223.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 456)) ;
    enumerator_19223.gotoNextObject () ;
  }
  const GGS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19209, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GGS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralCharExpressionAST temp_0 = this ;
  const GGS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GGS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_21791 ;
  const GGS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_21791, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 517)) ;
  GGS_unifiedTypeMapEntry var_type_21867 = var_expression_21791.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_21867, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 526)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 526)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 526)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 526)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateNotOperatorAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_21867, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 528)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 528)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 528)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 527)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_21867, temp_4.readProperty_mOperatorLocation (), var_expression_21791, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_22871 ;
  const GGS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_22871, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 550)) ;
  GGS_unifiedTypeMapEntry var_type_22947 = var_expression_22871.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_22947, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 559)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 559)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 559)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 559)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLogicalNegateAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_22947, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 561)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 561)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 561)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 560)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_22947, temp_4.readProperty_mOperatorLocation (), var_expression_22871, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateTestDynamicClassAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_23998 ;
  const GGS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_23998, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 582)) ;
  const GGS_templateTestDynamicClassAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_24047 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 590)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_23998.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 592)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 592)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_24294 = var_castType_24047 ;
      GGS_bool var_found_24321 = GGS_bool (ComparisonKind::equal, var_t_24294.objectCompare (var_expression_23998.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 596)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 596)).isValid ()) {
        uint32_t variant_24361 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 596)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 596)).uintValue () ;
        bool loop_24361 = true ;
        while (loop_24361) {
          loop_24361 = var_found_24321.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 597)).operator_and (extensionGetter_definition (var_t_24294, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 597)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 597)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 597)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 597)).isValid () ;
          if (loop_24361) {
            loop_24361 = var_found_24321.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 597)).operator_and (extensionGetter_definition (var_t_24294, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 597)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 597)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 597)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 597)).boolValue () ;
          }
          if (loop_24361 && (0 == variant_24361)) {
            loop_24361 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 596)) ;
          }
          if (loop_24361) {
            variant_24361 -= 1 ;
            var_t_24294 = extensionGetter_definition (var_t_24294, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 598)).readProperty_superType () ;
            var_found_24321 = GGS_bool (ComparisonKind::equal, var_t_24294.objectCompare (var_expression_23998.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_24321.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 601)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_templateTestDynamicClassAST temp_4 = this ;
          const GGS_templateTestDynamicClassAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 603)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 603)).add_operation (extensionGetter_definition (var_expression_23998.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 603)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 603)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 603)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 602)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_23998.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_23998.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 607)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 607)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606)) ;
  }
  const GGS_templateTestDynamicClassAST temp_8 = this ;
  const GGS_templateTestDynamicClassAST temp_9 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_23998, temp_9.readProperty_mTypeComparisonKind (), var_castType_24047, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateOptionAccessAST temp_0 = this ;
  GGS_lstring var_usefulnessName_25556 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_25556 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)) ;
  }
  GGS_bool var_optionComponentIsPredefined_25860 ;
  GGS_commandLineOptionMap var_boolOptionMap_25919 ;
  GGS_commandLineOptionMap var_uintOptionMap_25964 ;
  GGS_commandLineOptionMap var_stringOptionMap_26009 ;
  GGS_commandLineOptionMap var_stringListOptionMap_26056 ;
  const GGS_templateOptionAccessAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_25860, var_boolOptionMap_25919, var_uintOptionMap_25964, var_stringOptionMap_26009, var_stringListOptionMap_26056, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)) ;
  const GGS_templateOptionAccessAST temp_2 = this ;
  GGS_bool var_found_26086 = var_boolOptionMap_25919.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 637)) ;
  GGS_unifiedTypeMapEntry var_returnedType_26169 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_26086.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 639)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_templateOptionAccessAST temp_4 = this ;
      var_found_26086 = var_uintOptionMap_25964.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 640)) ;
      var_returnedType_26169 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_found_26086.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 643)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_templateOptionAccessAST temp_6 = this ;
      var_found_26086 = var_stringOptionMap_26009.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 644)) ;
      var_returnedType_26169 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_found_26086.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 647)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateOptionAccessAST temp_8 = this ;
      var_found_26086 = var_stringListOptionMap_26056.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 648)) ;
      var_returnedType_26169 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_found_26086.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_templateOptionAccessAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_templateOptionAccessAST temp_12 = this ;
          const GGS_templateOptionAccessAST temp_13 = this ;
          const GGS_templateOptionAccessAST temp_14 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_26169, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25860, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_templateOptionAccessAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("char"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_templateOptionAccessAST temp_17 = this ;
            const GGS_templateOptionAccessAST temp_18 = this ;
            const GGS_templateOptionAccessAST temp_19 = this ;
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25860, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_15) {
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            const GGS_templateOptionAccessAST temp_21 = this ;
            test_20 = GGS_bool (ComparisonKind::equal, temp_21.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              const GGS_templateOptionAccessAST temp_22 = this ;
              const GGS_templateOptionAccessAST temp_23 = this ;
              const GGS_templateOptionAccessAST temp_24 = this ;
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25860, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            GalgasBool test_25 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_25) {
              const GGS_templateOptionAccessAST temp_26 = this ;
              test_25 = GGS_bool (ComparisonKind::equal, temp_26.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("comment"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_25) {
                const GGS_templateOptionAccessAST temp_27 = this ;
                const GGS_templateOptionAccessAST temp_28 = this ;
                const GGS_templateOptionAccessAST temp_29 = this ;
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25860, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_25) {
              const GGS_templateOptionAccessAST temp_30 = this ;
              GenericArray <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 685)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_stringset var_s_28175 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator_commandLineOptionMap enumerator_28203 (var_boolOptionMap_25919) ;
    while (enumerator_28203.hasCurrentObject ()) {
      var_s_28175.plusPlusAssignOperation (enumerator_28203.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 690)) ;
      enumerator_28203.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_28271 (var_uintOptionMap_25964) ;
    while (enumerator_28271.hasCurrentObject ()) {
      var_s_28175.plusPlusAssignOperation (enumerator_28271.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 693)) ;
      enumerator_28271.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_28339 (var_stringOptionMap_26009) ;
    while (enumerator_28339.hasCurrentObject ()) {
      var_s_28175.plusPlusAssignOperation (enumerator_28339.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 696)) ;
      enumerator_28339.gotoNextObject () ;
    }
    const GGS_templateOptionAccessAST temp_32 = this ;
    const GGS_templateOptionAccessAST temp_33 = this ;
    const GGS_templateOptionAccessAST temp_34 = this ;
    GenericArray <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, EnumFixItKind::fixItReplace, var_s_28175) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 699)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 699)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 699)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 699)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 698)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFunctionCallAST temp_0 = this ;
  GGS_lstring var_usefulnessName_29123 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 716)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_29123 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 717)) ;
  }
  GGS_functionSignature var_functionSignature_29435 ;
  GGS_unifiedTypeMapEntry var_resultType_29483 ;
  GGS_bool var_isInternal_29509 ;
  const GGS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_29435, var_resultType_29483, var_isInternal_29509, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 719)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_29509.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateFunctionCallAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_29574 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 727)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_templateFunctionCallAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)).objectCompare (var_procDeclarationLocation_29574.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_templateFunctionCallAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_29574.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 729)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 729)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 729)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_templateFunctionCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_29435.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 733)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 733)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateFunctionCallAST temp_10 = this ;
      const GGS_templateFunctionCallAST temp_11 = this ;
      const GGS_templateFunctionCallAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 735)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 735)).add_operation (var_functionSignature_29435.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 735)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 735)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 735)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 735)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 736)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 736)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 736)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 734)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_30288 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_templateFunctionCallAST temp_14 = this ;
    UpEnumerator_functionSignature enumerator_30412 (var_functionSignature_29435) ;
    UpEnumerator_templateExpressionListAST enumerator_30466 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_30412.hasCurrentObject () && enumerator_30466.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_30724 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_30466.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_30724, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 742)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_30412.current_mFormalArgumentType (HERE), var_expression_30724.readProperty_mResultType (), enumerator_30466.current_mEndOfExpressionLocation (HERE), var_expression_30724, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 749)) ;
      }
      var_semanticExpressionListForGeneration_30288.addAssignOperation (var_expression_30724  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_30412.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_30466.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_30412.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_30412.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 752)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_31017 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 752)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_31017) ;
          inCompiler->emitSemanticError (enumerator_30466.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_31017, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)) ;
        }
      }
      enumerator_30412.gotoNextObject () ;
      enumerator_30466.gotoNextObject () ;
    }
    const GGS_templateFunctionCallAST temp_19 = this ;
    const GGS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_29483, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_30288, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateExtensionTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GGS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_32765 ;
  GGS_string var_sourceVariableCppName_32775 ;
  const GGS_templateVarInExpressionAST temp_0 = this ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_32765, var_sourceVariableCppName_32775, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 791)) ;
  const GGS_templateVarInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_32765, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_32775, var_sourceVariableCppName_32775, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_33706 ;
  const GGS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_33706, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 811)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_33948 ;
  const GGS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_33948, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 819)) ;
  {
  const GGS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_33706.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 828)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 828)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 828)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_33706, var_rightExpression_33948, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 827)) ;
  }
  const GGS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_33706.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_33706, GGS_binaryOperator::class_func_add (SOURCE_FILE ("templateAnalysis.galgas", 839)), var_rightExpression_33948, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_35185 ;
  const GGS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_35185, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 856)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_35427 ;
  const GGS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_35427, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 864)) ;
  {
  const GGS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_35185.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 873)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 873)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 873)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_35185, var_rightExpression_35427, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 872)) ;
  }
  const GGS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_35185.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_35185, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("templateAnalysis.galgas", 884)), var_rightExpression_35427, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_36673 ;
  const GGS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_36673, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 901)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_36915 ;
  const GGS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_36915, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)) ;
  {
  const GGS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_36673.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 918)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 918)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 918)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_36673, var_rightExpression_36915, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 917)) ;
  }
  const GGS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_36673.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_36673, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 929)), var_rightExpression_36915, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_38162 ;
  const GGS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_38162, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_38404 ;
  const GGS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_38404, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 954)) ;
  {
  const GGS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_38162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 963)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 963)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 963)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_38162, var_rightExpression_38404, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 962)) ;
  }
  const GGS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_38162.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_38162, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 974)), var_rightExpression_38404, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_39645 ;
  const GGS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_39645, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 991)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_39887 ;
  const GGS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_39887, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 999)) ;
  {
  const GGS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_39645.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1008)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1008)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1008)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_39645, var_rightExpression_39887, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1007)) ;
  }
  const GGS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_39645.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_39645, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1019)), var_rightExpression_39887, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_41094 ;
  const GGS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_41094, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1036)) ;
  GGS_unifiedTypeMapEntry var_type_41170 = var_expression_41094.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_41170, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1045)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1045)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1045)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1045)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateUnaryMinusOperationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_41170, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1047)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1047)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1047)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1046)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_41170, temp_4.readProperty_mOperatorLocation (), var_expression_41094, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_42399 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_42399, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1070)) ;
  GGS_unifiedTypeMapEntry var_type_42479 = var_expression_42399.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_type_42479, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1079)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas", 1079)))) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_42479, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1079)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1079)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1079)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GGS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1080)) ;
    }
  }
  GGS_propertyMap var_propertyMap_42718 = extensionGetter_definition (var_type_42479, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1082)).readProperty_propertyMap () ;
  GGS_AccessControl var_accessControl_42813 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GGS_bool joker_42827 ; // Joker input parameter
  var_propertyMap_42718.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_42813, joker_42827, var_type_42479, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1083)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_42813, GGS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas", 1084)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1084)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GGS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_type_42479, temp_7.readProperty_mOperatorLocation (), var_expression_42399, temp_8.readProperty_mStructFieldName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_43825 ;
  const GGS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_43825, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1106)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_44071 ;
  const GGS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_44071, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1114)) ;
  {
  const GGS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_43825.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1123)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas", 1123)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1123)).operator_or (extensionGetter_definition (var_leftExpression_43825.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1123)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1123)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1123)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1123)), GGS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_43825, var_rightExpression_44071, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1122)) ;
  }
  const GGS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_43825, GGS_comparison::class_func_equal (SOURCE_FILE ("templateAnalysis.galgas", 1134)), var_rightExpression_44071, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_45240 ;
  const GGS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_45240, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1149)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_45486 ;
  const GGS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_45486, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1157)) ;
  {
  const GGS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_45240.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1166)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas", 1166)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1166)).operator_or (extensionGetter_definition (var_leftExpression_45240.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1166)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1166)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1166)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1166)), GGS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_45240, var_rightExpression_45486, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165)) ;
  }
  const GGS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_45240, GGS_comparison::class_func_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1177)), var_rightExpression_45486, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_46659 ;
  const GGS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_46659, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1192)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_46905 ;
  const GGS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_46905, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1200)) ;
  {
  const GGS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_46659.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1209)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)), GGS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_46659, var_rightExpression_46905, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1208)) ;
  }
  const GGS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_46659, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1220)), var_rightExpression_46905, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_48007 ;
  const GGS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48007, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1235)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_48253 ;
  const GGS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_48253, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1243)) ;
  {
  const GGS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_48007.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1252)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1252)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1252)), GGS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_48007, var_rightExpression_48253, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1251)) ;
  }
  const GGS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_48007, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1263)), var_rightExpression_48253, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_49358 ;
  const GGS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_49358, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1278)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_49604 ;
  const GGS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_49604, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1286)) ;
  {
  const GGS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_49358.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1295)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1295)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1295)), GGS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_49358, var_rightExpression_49604, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1294)) ;
  }
  const GGS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_49358, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1306)), var_rightExpression_49604, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_50708 ;
  const GGS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_50708, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_50954 ;
  const GGS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50954, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1329)) ;
  {
  const GGS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_50708.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1338)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1338)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1338)), GGS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_50708, var_rightExpression_50954, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1337)) ;
  }
  const GGS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_50708, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1349)), var_rightExpression_50954, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_52066 ;
  const GGS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_52066, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1364)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_52312 ;
  const GGS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_52312, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1372)) ;
  GGS_unifiedTypeMapEntry var_leftType_52394 = var_leftExpression_52066.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_52459 = var_rightExpression_52312.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_52394, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1382)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1382)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1382)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1382)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateLeftShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_52394, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1384)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1384)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1384)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1383)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_52459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1386)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateLeftShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_52459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1388)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1388)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1388)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1387)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_52394, temp_8.readProperty_mOperatorLocation (), var_leftExpression_52066, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1396)), var_rightExpression_52312, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_53834 ;
  const GGS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_53834, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1412)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_54080 ;
  const GGS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_54080, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1420)) ;
  GGS_unifiedTypeMapEntry var_leftType_54162 = var_leftExpression_53834.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_54227 = var_rightExpression_54080.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_54162, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1430)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1430)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1430)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1430)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateRightShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_54162, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1432)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1432)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1432)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1431)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_54227, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1434)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateRightShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_54227, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1436)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1436)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1436)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1435)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_54162, temp_8.readProperty_mOperatorLocation (), var_leftExpression_53834, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1444)), var_rightExpression_54080, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      const GGS_templateInstructionListAST constinArgument_inInstructionList,
                                                                      GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_templateInstructionListAST enumerator_55950 (constinArgument_inInstructionList) ;
  while (enumerator_55950.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_55950.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1474)) ;
    enumerator_55950.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                            GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1493)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_57284 ;
  const GGS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_57284, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1505)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_57284.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1512)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_57284.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1513)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1513)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1513)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1513)) ;
    }
  }
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionExpressionForGeneration::init_21_ (var_expression_57284, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1515)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_58162 ;
  const GGS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_58162, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1527)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_58162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1534)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bigint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_getterCallExpressionForGeneration var_conversionExpression_58257 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_expression_58162.readProperty_mResultType (), var_expression_58162.readProperty_mLocation (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 1538)), var_expression_58162, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_string ("uint"), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE) ;
      var_expression_58162 = var_conversionExpression_58257 ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_58162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1546)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_templateBlockInstructionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GGS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_58162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1547)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1547)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1547)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1547)) ;
      }
    }
  }
  GGS_templateInstructionListForGeneration var_blockInstructionList_58726 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_58726, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1550)) ;
  }
  const GGS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateBlockInstructionForGeneration::init_21__21__21_ (var_expression_58162, temp_6.readProperty_mLocation (), var_blockInstructionList_58726, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1558)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                       GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                       const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                       GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionGetColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionGotoColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1582)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_60583 = GGS_templateInstructionIfBranchListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_templateInstructionIfAST temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListAST enumerator_60685 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_60685.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_60911 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_60685.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_60911, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1597)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_60911.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1604)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_60911.readProperty_mLocation (), GGS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_60911.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)) ;
      }
    }
    GGS_templateInstructionListForGeneration var_instructionList_61163 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_60685.current_mInstructionList (HERE), var_instructionList_61163, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1608)) ;
    }
    var_templateInstructionIfBranchList_60583.addAssignOperation (var_expression_60911, var_instructionList_61163  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1616)) ;
    enumerator_60685.gotoNextObject () ;
  }
  GGS_templateInstructionListForGeneration var_elseInstructionList_61509 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_61509, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1620)) ;
  }
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionIfForGeneration::init_21__21_ (var_templateInstructionIfBranchList_60583, var_elseInstructionList_61509, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1629)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const GGS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GGS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_templateInstructionListForGeneration enumerator_2260 (constinArgument_inInstructionList) ;
  while (enumerator_2260.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_2260.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 42)) ;
    enumerator_2260.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 60)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GGS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_cppName_3499 ;
  const GGS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3499, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 72)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (var_cppName_3499, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_indendationVarCppName_4088 ;
  const GGS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 88)) ;
  {
  const GGS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 89)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 99)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                            GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                            GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                             GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionIfForGeneration temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_6326 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_6326.hasCurrentObject ()) {
    GGS_string var_ifVarCppName_6570 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_6326.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6570, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)) ;
    GGS_string var_testVar_6597 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_6597, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (var_ifVarCppName_6570, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_testVar_6597, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_6326.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 159)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)) ;
    }
    enumerator_6326.gotoNextObject () ;
  }
  {
  const GGS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 163)) ;
  }
  const GGS_templateInstructionIfForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_7579 (temp_2.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_7579.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 172)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolNotValid :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 174)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 175)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 176)) ;
    enumerator_7579.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (GGS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_21711 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 605)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_21711.getter_count (SOURCE_FILE ("templateSyntax.galgas", 606)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssignOperation (GGS_templateInstructionStringAST::init_21_ (var_s_21711, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 607)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_7604 ;
  const GGS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_7604, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 219)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptor_7726 = extensionGetter_definition (var_expression_7604.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 227)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptor_7726.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 228)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_7604.readProperty_mLocation (), GGS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_7604.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 229)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 229)).add_operation (GGS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 229)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 229)) ;
    }
  }
  GGS_templateInstructionListForGeneration var_beforeInstructionList_8024 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_8024, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)) ;
  }
  const GGS_templateInstructionForeachAST temp_4 = this ;
  GGS_string var_enumeratorCppName_8319 = GGS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 242)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 242)) ;
  GGS_templateVariableMap var_doVariableMap_8418 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GGS_templateInstructionForeachAST temp_5 = this ;
  const GGS_templateInstructionForeachAST temp_6 = this ;
  GGS_string var_cppIndexVarName_8479 = GGS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 244)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 244)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 244)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 245)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      const GGS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_8418.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_8479, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 247)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_templateInstructionForeachAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 249)).objectCompare (var_enumerationDescriptor_7726.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 249)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_templateInstructionForeachAST temp_12 = this ;
      const GGS_templateInstructionForeachAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfProperties (), var_enumerationDescriptor_7726.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 251)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (GGS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (temp_13.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 252)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (GGS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 252)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 250)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_templateInstructionForeachAST temp_15 = this ;
    UpEnumerator_enumerationDescriptorList enumerator_9051 (var_enumerationDescriptor_7726) ;
    UpEnumerator_lstringlist enumerator_9103 (temp_15.readProperty_mEnumeration ()) ;
    while (enumerator_9051.hasCurrentObject () && enumerator_9103.hasCurrentObject ()) {
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, enumerator_9103.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          {
          var_doVariableMap_8418.setter_insertKey (enumerator_9103.current_mValue (HERE), enumerator_9051.current_mEnumeratedType (HERE), var_enumeratorCppName_8319.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)).add_operation (enumerator_9051.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)) ;
          }
        }
      }
      enumerator_9051.gotoNextObject () ;
      enumerator_9103.gotoNextObject () ;
    }
  }
  GGS_templateAnalysisContext var_doAnalysisContext_9453 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_8418, inCompiler COMMA_HERE) ;
  GGS_templateInstructionListForGeneration var_doInstructionList_9606 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9453, ioArgument_ioTypeMap, temp_17.readProperty_mDoInstructionList (), var_doInstructionList_9606, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 270)) ;
  }
  GGS_templateInstructionListForGeneration var_betweenInstructionList_9894 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9894, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 280)) ;
  }
  GGS_templateInstructionListForGeneration var_afterInstructionList_10195 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_19 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_19.readProperty_mAfterInstructionList (), var_afterInstructionList_10195, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 290)) ;
  }
  const GGS_templateInstructionForeachAST temp_20 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mIsAscending (), var_expression_7604, var_enumeratorCppName_8319, var_beforeInstructionList_8024, var_doInstructionList_9606, var_cppIndexVarName_8479, var_betweenInstructionList_9894, var_afterInstructionList_10195, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 299)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_foreachVarCppName_11994 ;
  const GGS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11994, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 335)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 337)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)).add_operation (GGS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_foreachVarCppName_11994, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_mIsAscending ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string ("Up") ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_string ("Down") ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)) ;
  const GGS_templateInstructionForeachForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("Enumerator_").add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)) ;
  const GGS_templateInstructionForeachForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)).add_operation (var_foreachVarCppName_11994, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_templateInstructionForeachForGeneration temp_10 = this ;
    const GGS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 347)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 347)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_templateInstructionForeachForGeneration temp_12 = this ;
      const GGS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)).add_operation (GGS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GGS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 350)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 351)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 351)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 352)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 353)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 362)) ;
    }
  }
  const GGS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 365)) ;
  }
  {
  const GGS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 367)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_20 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_20.readProperty_mEnumeratorCppName ().add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 376)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_templateInstructionForeachForGeneration temp_22 = this ;
    test_21 = GGS_bool (ComparisonKind::greaterThan, temp_22.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 378)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_templateInstructionForeachForGeneration temp_23 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (temp_23.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 379)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 379)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 380)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_24 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_24.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 381)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 389)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 390)) ;
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_templateInstructionForeachForGeneration temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 393)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_templateInstructionForeachForGeneration temp_27 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_27.readProperty_mIndexCppName ().add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 396)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 397)) ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GGS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 399)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 400)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 400)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 401)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 402)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 410)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 411)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 414)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 415)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_5536 ;
  const GGS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_5536, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 139)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_5566 = extensionGetter_definition (var_switchExpression_5536.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas", 146)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_5536.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas", 146)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_5662 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      GGS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5785 = GGS_templateInstructionSwitchBranchListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateInstructionSwitchAST temp_2 = this ;
      UpEnumerator_templateInstructionSwitchBranchListAST enumerator_5895 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
      while (enumerator_5895.hasCurrentObject ()) {
        GGS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_6006 = GGS_extractedAssociatedValuesForGeneration::init (inCompiler COMMA_HERE) ;
        GGS_templateAnalysisContext var_analysisContext_6061 = constinArgument_inAnalysisContext ;
        UpEnumerator__5B_lstring_5D_ enumerator_6123 (enumerator_5895.current_constantList (HERE)) ;
        while (enumerator_6123.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_5566.readProperty_constantMap ().getter_hasKey (enumerator_6123.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_5662.getter_hasKey (enumerator_6123.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6123.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6123.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)), fixItArray5  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_5662.plusPlusAssignOperation (enumerator_6123.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)) ;
              GGS_associatedValueDescriptorList var_associatedTypeList_6594 ;
              GGS_uint joker_6555 ; // Joker input parameter
              var_enumType_5566.readProperty_constantMap ().method_searchKey (enumerator_6123.current (HERE), joker_6555, var_associatedTypeList_6594, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6594.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 161)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_5895.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 161)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 161)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6123.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_6123.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 163)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 163)), fixItArray7  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 162)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_6594.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 164)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_5895.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 164)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 164)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6123.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6123.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)), fixItArray9  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_6594.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 167)).objectCompare (enumerator_5895.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 167)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6594.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 170)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6123.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6123.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (var_associatedTypeList_6594.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 169)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)), fixItArray13  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 168)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator_associatedValueDescriptorList enumerator_7382 (var_associatedTypeList_6594) ;
                    UpEnumerator_switchExtractedValuesListAST enumerator_7447 (enumerator_5895.current_associatedValuesExtraction (HERE)) ;
                    GGS_uint index_7364 (uint32_t (0)) ;
                    while (enumerator_7382.hasCurrentObject () && enumerator_7447.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_7447.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_7382.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 174)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_7447.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_7447.current_mExtractedValueTypeName (HERE).readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_7382.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)), fixItArray16  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_7854 = GGS_string ("extractedValue_").add_operation (enumerator_7447.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (enumerator_7447.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (index_7364.getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)) ;
                      var_extractedAssociatedValuesForGeneration_6006.addAssignOperation (enumerator_7382.current (HERE).readProperty_type (), var_cppName_7854, enumerator_7382.current (HERE).readProperty_name ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_7447.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          {
                          var_analysisContext_6061.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_7447.current_mExtractedValueName (HERE), enumerator_7382.current (HERE).readProperty_type (), var_cppName_7854, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 185)) ;
                          }
                        }
                      }
                      enumerator_7382.gotoNextObject () ;
                      enumerator_7447.gotoNextObject () ;
                      index_7364.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6123.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_6123.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (extensionGetter_definition (var_switchExpression_5536.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 196)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 196)), fixItArray18  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 194)) ;
          }
          enumerator_6123.gotoNextObject () ;
        }
        GGS_templateInstructionListForGeneration var_instructionList_8688 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
        {
        routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6061, ioArgument_ioTypeMap, enumerator_5895.current_instructionList (HERE), var_instructionList_8688, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 200)) ;
        }
        var_templateInstructionSwitchBranchList_5785.addAssignOperation (enumerator_5895.current_constantList (HERE), var_extractedAssociatedValuesForGeneration_6006, enumerator_5895.current_endOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 211)), var_instructionList_8688  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 208)) ;
        enumerator_5895.gotoNextObject () ;
      }
      GGS_stringset var_forgottenConstants_9167 = var_enumType_5566.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 215)).substract_operation (var_constantsNamedInSwitchInstruction_5662, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 215)) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_9167.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 216)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_string var_s_9311 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_9329 (var_forgottenConstants_9167) ;
          while (enumerator_9329.hasCurrentObject ()) {
            var_s_9311.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_9329.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 219)) ;
            enumerator_9329.gotoNextObject () ;
          }
          const GGS_templateInstructionSwitchAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_switchExpressionEndLocation (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9311, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 222)), fixItArray21  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 221)) ;
        }
      }
      ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionSwitchForGeneration::init_21__21__21_ (var_switchExpression_5536.readProperty_mResultType (), var_switchExpression_5536, var_templateInstructionSwitchBranchList_5785, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 225)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GenericArray <FixItDescription> fixItArray22 ;
    inCompiler->emitSemanticError (var_switchExpression_5536.readProperty_mLocation (), GGS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_5536.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 232)).readProperty_typeKind (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)).add_operation (GGS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 232)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVarCppName_11373 ;
  const GGS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_switchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11373, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVarCppName_11373, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 274)) ;
  const GGS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 275)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid :\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 276)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 277)) ;
  const GGS_templateInstructionSwitchForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11699 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
  while (enumerator_11699.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_11769 (enumerator_11699.current (HERE).readProperty_mConstantList ()) ;
    while (enumerator_11769.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 281)) ;
      const GGS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 282)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 283)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11769.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 284)).add_operation (GGS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 284)) ;
      enumerator_11769.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 286)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 287)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_11699.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 288)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        UpEnumerator_extractedAssociatedValuesForGeneration enumerator_12218 (enumerator_11699.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12218.hasCurrentObject ()) {
          extensionMethod_addHeaderFileName (enumerator_12218.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 290)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12218.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_12218.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 292)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 292)) ;
          enumerator_12218.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVarCppName_11373, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 294)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 294)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11699.current (HERE).readProperty_mConstantList ().readSubscript__3F_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 295)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 295)) ;
        UpEnumerator_extractedAssociatedValuesForGeneration enumerator_12694 (enumerator_11699.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12694.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12694.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 297)) ;
          enumerator_12694.gotoNextObject () ;
          if (enumerator_12694.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 298)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 300)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_11699.current (HERE).readProperty_mInstructionList ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 302)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 303)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_11699.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 304)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 312)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 314)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 315)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 316)) ;
    }
    enumerator_11699.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 319)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas&&?galgas4???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas_26__26__3F_galgas_34__3F__3F__3F__21__21__21_ (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GGS_bool constinArgument_inGalgas_34_,
                                                                                              const GGS_string constinArgument_inProductDirectory,
                                                                                              const GGS_location constinArgument_inEndOfProjectSourceFile,
                                                                                              const GGS_galgasDeclarationAST constinArgument_inSemanticDeclarations,
                                                                                              GGS_semanticContext & outArgument_outSemanticContext,
                                                                                              GGS_unifiedTypeMap & outArgument_outTypeMap,
                                                                                              GGS_semanticDeclarationListForGeneration & outArgument_outSemanticDeclarationSortedListForGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSemanticDeclarationSortedListForGeneration.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 32)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Building semantic context"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 33)) ;
      }
    }
  }
  GGS_galgasDeclarationAST var_semanticDeclarations_2145 = constinArgument_inSemanticDeclarations ;
  {
  routine_appendPredefinedTypesASTs_26__26_ (var_semanticDeclarations_2145.mProperty_mDeclarationList, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37)) ;
  }
  GGS_commandLineOptionListAST var_options_2358 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  UpEnumerator__32_stringlist enumerator_2399 (GGS_application::class_func_boolOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 40))) ;
  while (enumerator_2399.hasCurrentObject ()) {
    var_options_2358.addAssignOperation (GGS_string ("bool").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 42)), GGS_lstring::init_21__21_ (enumerator_2399.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 43)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_boolOptionInvocationCharacter (enumerator_2399.current (HERE).readProperty_mValue_30_ (), enumerator_2399.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), inCompiler COMMA_HERE), GGS_application::class_func_boolOptionInvocationString (enumerator_2399.current (HERE).readProperty_mValue_30_ (), enumerator_2399.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)), GGS_application::class_func_boolOptionCommentString (enumerator_2399.current (HERE).readProperty_mValue_30_ (), enumerator_2399.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 41)) ;
    enumerator_2399.gotoNextObject () ;
  }
  UpEnumerator__32_stringlist enumerator_2824 (GGS_application::class_func_uintOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 50))) ;
  while (enumerator_2824.hasCurrentObject ()) {
    var_options_2358.addAssignOperation (GGS_string ("uint").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 52)), GGS_lstring::init_21__21_ (enumerator_2824.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 53)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_uintOptionInvocationCharacter (enumerator_2824.current (HERE).readProperty_mValue_30_ (), enumerator_2824.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), inCompiler COMMA_HERE), GGS_application::class_func_uintOptionInvocationString (enumerator_2824.current (HERE).readProperty_mValue_30_ (), enumerator_2824.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)), GGS_application::class_func_uintOptionCommentString (enumerator_2824.current (HERE).readProperty_mValue_30_ (), enumerator_2824.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 51)) ;
    enumerator_2824.gotoNextObject () ;
  }
  UpEnumerator__32_stringlist enumerator_3255 (GGS_application::class_func_stringOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 60))) ;
  while (enumerator_3255.hasCurrentObject ()) {
    var_options_2358.addAssignOperation (GGS_string ("string").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 62)), GGS_lstring::init_21__21_ (enumerator_3255.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 63)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_stringOptionInvocationCharacter (enumerator_3255.current (HERE).readProperty_mValue_30_ (), enumerator_3255.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), inCompiler COMMA_HERE), GGS_application::class_func_stringOptionInvocationString (enumerator_3255.current (HERE).readProperty_mValue_30_ (), enumerator_3255.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)), GGS_application::class_func_stringOptionCommentString (enumerator_3255.current (HERE).readProperty_mValue_30_ (), enumerator_3255.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 67)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 68))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 61)) ;
    enumerator_3255.gotoNextObject () ;
  }
  var_semanticDeclarations_2145.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (true), GGS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 72)), var_options_2358, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 70)) ;
  GGS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3848 = function_optionNameForUsefulEntitiesGraph (GGS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)) ;
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3848  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 76)) ;
  GGS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_4243 ;
  {
  routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (var_semanticDeclarations_2145, constinArgument_inEndOfProjectSourceFile, constinArgument_inGalgas_34_, outArgument_outSemanticContext, outArgument_outTypeMap, var_sortedSemanticDeclarationListAST_4243, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 78)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 87)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      routine_println_3F_ (GGS_string ("*** Semantic analysis"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 88)) ;
      }
    }
  }
  UpEnumerator_lstringlist enumerator_4436 (extensionGetter_unsolvedEntryList (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 91))) ;
  while (enumerator_4436.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (enumerator_4436.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("the '@").add_operation (enumerator_4436.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)).add_operation (GGS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)) ;
    enumerator_4436.gotoNextObject () ;
  }
  outArgument_outSemanticDeclarationSortedListForGeneration = GGS_semanticDeclarationListForGeneration::init (inCompiler COMMA_HERE) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 96)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_predefinedTypes var_predefinedTypes_4675 = function_buildPredefinedTypes (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 97)) ;
      UpEnumerator_semanticDeclarationListAST enumerator_4750 (var_sortedSemanticDeclarationListAST_4243) ;
      while (enumerator_4750.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((cPtr_semanticDeclarationAST *) enumerator_4750.current (HERE).readProperty_mSemanticDeclaration ().ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, outArgument_outTypeMap, var_predefinedTypes_4675, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 99)) ;
        enumerator_4750.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgasSemanticContext???galgas4!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (const GGS_galgasDeclarationAST constinArgument_inDeclarations,
                                                                           const GGS_location constinArgument_inEndOfProjectSourceFile,
                                                                           const GGS_bool constinArgument_inGalgas_34_,
                                                                           GGS_semanticContext & outArgument_outSemanticContext,
                                                                           GGS_unifiedTypeMap & outArgument_outTypeMap,
                                                                           GGS_semanticDeclarationListAST & outArgument_outSortedSemanticDeclarationListAST,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release 'out' argument
  GGS_galgasDeclarationAST var_semanticDeclarations_5919 = constinArgument_inDeclarations ;
  UpEnumerator_semanticDeclarationListAST enumerator_5993 (constinArgument_inDeclarations.readProperty_mDeclarationList ()) ;
  while (enumerator_5993.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((cPtr_semanticDeclarationAST *) enumerator_5993.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticDeclarations_5919, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 127)) ;
    enumerator_5993.gotoNextObject () ;
  }
  GGS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_6296 = GGS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  GGS_extensionInitializerForBuildingContext var_extensionInitializerForBuildingContext_6404 = GGS_extensionInitializerForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_equatableExtensionMap var_equatableExtensionMap_6478 = GGS_equatableExtensionMap::init (inCompiler COMMA_HERE) ;
  GGS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6550 = GGS_extensionMethodMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6637 = GGS_extensionGetterMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6724 = GGS_extensionSetterMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6801 = GGS_semanticDeclarationListAST::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListAST enumerator_6881 (var_semanticDeclarations_5919.readProperty_mDeclarationList ()) ;
  while (enumerator_6881.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((cPtr_semanticDeclarationAST *) enumerator_6881.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticTypePrecedenceGraph_6296, var_equatableExtensionMap_6478, var_extensionInitializerForBuildingContext_6404, var_extensionMethodMapForBuildingContext_6550, var_extensionGetterMapForBuildingContext_6637, var_extensionSetterMapForBuildingContext_6724, var_extensionOverrideDefinitionList_6801, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 141)) ;
    enumerator_6881.gotoNextObject () ;
  }
  UpEnumerator_lstringlist enumerator_7337 (var_semanticTypePrecedenceGraph_6296.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 152))) ;
  while (enumerator_7337.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_7337.current (HERE).readProperty_mValue ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 153)).objectCompare (GGS_char (utf32 (63)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_println_3F_ (GGS_string ("Optional '").add_operation (enumerator_7337.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)) ;
        }
      }
    }
    enumerator_7337.gotoNextObject () ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_semanticTypePrecedenceGraph_6296.getter_undefinedNodeCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator_lstringlist enumerator_7589 (var_semanticTypePrecedenceGraph_6296.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159))) ;
      while (enumerator_7589.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7589.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_7589.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)).add_operation (GGS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)) ;
        enumerator_7589.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GGS_string ("semantic analysis not performed, due to undefined type error(s)"), fixItArray3  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 162)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
      outArgument_outTypeMap.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_8041 ;
    GGS_lstringlist joker_7999 ; // Joker input parameter
    GGS_lstringlist joker_8082 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_6296.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_7999, var_unsortedSemanticDeclarationListAST_8041, joker_8082, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 166)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_8041.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 172)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string var_s_8158 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_8041.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)) ;
        UpEnumerator_semanticDeclarationListAST enumerator_8328 (var_unsortedSemanticDeclarationListAST_8041) ;
        while (enumerator_8328.hasCurrentObject ()) {
          var_s_8158.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_8328.current (HERE).readProperty_mSemanticDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)) ;
          enumerator_8328.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_8158, fixItArray5  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 177)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
        outArgument_outTypeMap.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssignOperation(var_extensionOverrideDefinitionList_6801, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 180)) ;
      outArgument_outTypeMap = GGS_unifiedTypeMap::init (inCompiler COMMA_HERE) ;
      outArgument_outSemanticContext = GGS_semanticContext::init_21_galgas_34_ (constinArgument_inGalgas_34_, inCompiler COMMA_HERE) ;
      UpEnumerator_semanticDeclarationListAST enumerator_8845 (outArgument_outSortedSemanticDeclarationListAST) ;
      while (enumerator_8845.hasCurrentObject ()) {
        callExtensionMethod_enterDeclarationInSemanticContext ((cPtr_semanticDeclarationAST *) enumerator_8845.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_equatableExtensionMap_6478, var_extensionInitializerForBuildingContext_6404, var_extensionMethodMapForBuildingContext_6550, var_extensionGetterMapForBuildingContext_6637, var_extensionSetterMapForBuildingContext_6724, outArgument_outTypeMap, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 186)) ;
        enumerator_8845.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3???&swift&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26_swift_26__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                      const GGS_string constinArgument_inProductDirectory,
                                                                                      const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                      GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                                      GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                                      GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                                                      GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_semanticDeclarationListForGeneration enumerator_9963 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_9963.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((cPtr_semanticDeclarationForGeneration *) enumerator_9963.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioSwiftAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 216)) ;
    enumerator_9963.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 224)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 225)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 226)) ;
          }
          {
          routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 232)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 239)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 239)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 240)) ;
            }
            {
            routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 246)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 253)).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 253)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 254)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 260)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 267)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 268)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 277)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 283)) ;
              }
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyHeaders??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyHeaders_3F__3F__26__26_ (const GGS_string constinArgument_inProductDirectory,
                                                  const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                  GGS_stringset & ioArgument_ioAllProductFileSet,
                                                  GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_headerInclusionList_31__12909 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_headerInclusionList_32__12954 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_13002 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_13002.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset var_inclusionSet_31__13125 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerDef_31__13225 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__13125, var_headerDef_31__13225, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 308)) ;
        GGS_string var_headerIncludes_31__13247 = GGS_string::makeEmptyString () ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_inclusionSet_31__13125.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)).add_operation (GGS_string ("headers 1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)) ;
            }
          }
        }
        UpEnumerator_stringset enumerator_13441 (var_inclusionSet_31__13125) ;
        while (enumerator_13441.hasCurrentObject ()) {
          var_headerIncludes_31__13247.plusAssignOperation(GGS_string ("#include \"").add_operation (enumerator_13441.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)) ;
          enumerator_13441.gotoNextObject () ;
        }
        var_headerIncludes_31__13247.plusAssignOperation(var_headerDef_31__13225, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 316)) ;
        GGS_stringset var_inclusionSet_32__13587 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerDef_32__13707 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__13587, var_headerDef_32__13707, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 318)) ;
        GGS_string var_headerIncludes_32__13729 = GGS_string::makeEmptyString () ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_inclusionSet_32__13587.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 320)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)).add_operation (GGS_string ("headers 2"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)) ;
            }
          }
        }
        UpEnumerator_stringset enumerator_13923 (var_inclusionSet_32__13587) ;
        while (enumerator_13923.hasCurrentObject ()) {
          var_headerIncludes_32__13729.plusAssignOperation(GGS_string ("#include \"").add_operation (enumerator_13923.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)) ;
          enumerator_13923.gotoNextObject () ;
        }
        var_headerIncludes_32__13729.plusAssignOperation(var_headerDef_32__13707, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 326)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 328)).enumValue ()) {
        case GGS_headerKind::Enumeration::invalid:
          break ;
        case GGS_headerKind::Enumeration::enum_noHeader:
          {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_31__13247.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 331)).readProperty_location (), GGS_string ("'noHeader' setting for the '").add_operation (enumerator_13002.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 332)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 332)), fixItArray4  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 331)) ;
              }
            }
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13729.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 335)).readProperty_location (), GGS_string ("'noHeader' setting for the '").add_operation (enumerator_13002.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 336)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 336)), fixItArray6  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 335)) ;
              }
            }
          }
          break ;
        case GGS_headerKind::Enumeration::enum_oneHeader:
          {
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, var_headerIncludes_31__13247.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 340)).readProperty_location (), GGS_string ("'oneHeader' setting for the '").add_operation (enumerator_13002.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 341)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 341)), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 340)) ;
              }
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13729.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 344)).readProperty_location (), GGS_string ("'oneHeader' setting for the '").add_operation (enumerator_13002.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 345)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 345)), fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 344)) ;
              }
            }
          }
          break ;
        case GGS_headerKind::Enumeration::enum_twoHeaders:
          {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, var_headerIncludes_31__13247.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GenericArray <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)).readProperty_location (), GGS_string ("'twoHeaders' setting for the '").add_operation (enumerator_13002.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)), fixItArray12  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)) ;
              }
            }
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = GGS_bool (ComparisonKind::equal, var_headerIncludes_32__13729.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GenericArray <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)).readProperty_location (), GGS_string ("'twoHeaders' setting for the '").add_operation (enumerator_13002.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)), fixItArray14  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)) ;
              }
            }
          }
          break ;
        }
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          test_15 = GGS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)).objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            GGS_string var_headerString_15539 = GGS_string ("#pragma once\n") ;
            var_headerString_15539.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)) ;
            var_headerString_15539.plusAssignOperation(GGS_string ("#include \"all-predefined-types.h\"\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)) ;
            var_headerString_15539.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)) ;
            var_headerString_15539.plusAssignOperation(var_headerIncludes_31__13247, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)) ;
            var_headerString_15539.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 364)) ;
            var_headerString_15539.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)) ;
            GGS_string temp_16 ;
            const GalgasBool test_17 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              temp_16 = GGS_string ("-1") ;
            }else if (GalgasBool::boolFalse == test_17) {
              temp_16 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_headerFileName_15970 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 366)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 366)) ;
            var_headerInclusionList_31__12909.addAssignOperation (var_headerFileName_15970  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 368)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_15970.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)) ;
            ioArgument_ioToolHeaderFileList.addAssignOperation (var_headerFileName_15970.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15970.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)), var_headerString_15539, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)) ;
            }
          }
        }
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_string var_headerString_16542 = GGS_string ("#ifndef ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)).add_operation (GGS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)) ;
            var_headerString_16542.plusAssignOperation(GGS_string ("#define ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)).add_operation (GGS_string ("_DEFINED\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)) ;
            var_headerString_16542.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)) ;
            var_headerString_16542.plusAssignOperation(GGS_string ("#include \"").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)).add_operation (GGS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)) ;
            var_headerString_16542.plusAssignOperation(GGS_string ("\n//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)) ;
            var_headerString_16542.plusAssignOperation(var_headerIncludes_32__13729, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384)) ;
            var_headerString_16542.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 385)) ;
            var_headerString_16542.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)) ;
            var_headerString_16542.plusAssignOperation(GGS_string ("#endif\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 387)) ;
            var_headerInclusionList_32__12954.addAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 388))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 388)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389)) ;
            ioArgument_ioToolHeaderFileList.addAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 390)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 390))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 390)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13002.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 393)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 393)), var_headerString_16542, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 391)) ;
            }
          }
        }
      }
    }
    enumerator_13002.gotoNextObject () ;
  }
  GGS_string var_headerString_17793 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), var_headerInclusionList_31__12909.add_operation (var_headerInclusionList_32__12954, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 402)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 400))) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 404)) ;
  ioArgument_ioToolHeaderFileList.addAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 405)) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_headerString_17793, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 406)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateOneBigHeader??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateOneBigHeader_3F__3F__26__26_ (const GGS_string constinArgument_inProductDirectory,
                                                   const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                   GGS_stringset & ioArgument_ioAllProductFileSet,
                                                   GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_headerString_18482 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), GGS_stringlist::init (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 420))) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_18638 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_18638.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18638.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset joker_18791 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_31__18817 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18638.current (HERE).readProperty_mDeclaration ().ptr (), joker_18791, var_headerString_31__18817, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 427)) ;
        var_headerString_18482.plusAssignOperation(var_headerString_31__18817, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 428)) ;
      }
    }
    enumerator_18638.gotoNextObject () ;
  }
  UpEnumerator_semanticDeclarationListForGeneration enumerator_18923 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_18923.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18923.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 433)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 433)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_stringset joker_19096 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__19122 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18923.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, joker_19096, var_headerString_32__19122, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 434)) ;
        var_headerString_18482.plusAssignOperation(var_headerString_32__19122, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 435)) ;
      }
    }
    enumerator_18923.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 438)) ;
  ioArgument_ioToolHeaderFileList.addAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 439)) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_headerString_18482, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 440)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildHeader???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildHeader_3F__3F__3F__26__26_ (const GGS_headerCompositionMap constinArgument_inHeaderCompositionMap,
                                              const GGS_string constinArgument_inHeaderFileName,
                                              const GGS_string constinArgument_inDeclarationName,
                                              GGS_headerRepartitionMap & ioArgument_ioHeaderRepartitionMap,
                                              GGS_string & ioArgument_ioHeaderString,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 473)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 473)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 474)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 474)) ;
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 475)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_stringset var_inclusionSet_20655 ;
          GGS_string var_headerString_20689 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 477)), var_inclusionSet_20655, var_headerString_20689, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 476)) ;
          UpEnumerator_stringset enumerator_20721 (var_inclusionSet_20655) ;
          while (enumerator_20721.hasCurrentObject ()) {
            {
            routine_buildHeader_3F__3F__3F__26__26_ (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20721.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 482)) ;
            }
            enumerator_20721.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssignOperation(var_headerString_20689, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 490)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssignOperation(GGS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 492)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 492)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'definitionGroupAmount'
//
//--------------------------------------------------------------------------------------------------

static GGS_uint onceFunction_definitionGroupAmount (Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (50U)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_definitionGroupAmount = false ;
static GGS_uint gOnceFunctionResult_definitionGroupAmount ;

//--------------------------------------------------------------------------------------------------

GGS_uint function_definitionGroupAmount (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_definitionGroupAmount) {
    gOnceFunctionResult_definitionGroupAmount = onceFunction_definitionGroupAmount (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_definitionGroupAmount = true ;
  }
  return gOnceFunctionResult_definitionGroupAmount ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_definitionGroupAmount (void) {
  gOnceFunctionResult_definitionGroupAmount.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_definitionGroupAmount (nullptr,
                                                                 releaseOnceFunctionResult_definitionGroupAmount) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_definitionGroupAmount [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_definitionGroupAmount (Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_definitionGroupAmount (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_definitionGroupAmount ("definitionGroupAmount",
                                                                       functionWithGenericHeader_definitionGroupAmount,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_definitionGroupAmount) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                 const GGS_string constinArgument_inProductDirectory,
                                                                 const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                 GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                 GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_useOneHugeHeader_21623 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  GGS_bigint var_n_21736 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515)) ;
  GGS_bigint var_fileIdx_21748 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)) ;
  GGS_string var_implementationString_21766 = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_21809 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_21849 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_21849.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21849.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_code_22058 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_21849.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21809, var_code_22058, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_inclusionSet_21809.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 522)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21849.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)).add_operation (GGS_string (" cpp headers"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)) ;
            }
          }
        }
        var_implementationString_21766.plusAssignOperation(var_code_22058, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525)) ;
        var_implementationString_21766.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21849.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)) ;
        var_n_21736.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 527)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_n_21736.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)).getter_bigint (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_useOneHugeHeader_21623.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 530)) ;
                temp_4.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 530)) ;
                var_inclusionSet_21809 = temp_4 ;
              }
            }
            GGS_string var_header_22511 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21809.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 533)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 532))) ;
            GGS_string var_fileName_22648 = GGS_string ("all-declarations-").add_operation (var_fileIdx_21748.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)) ;
            GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_fileName_22648, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_22648  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 537)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22648, var_header_22511.add_operation (var_implementationString_21766, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 538)) ;
            }
            var_n_21736 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 543)) ;
            var_fileIdx_21748.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 544)) ;
            var_implementationString_21766 = GGS_string::makeEmptyString () ;
            var_inclusionSet_21809 = GGS_stringset::init (inCompiler COMMA_HERE) ;
          }
        }
      }
    }
    enumerator_21849.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_implementationString_21766.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_useOneHugeHeader_21623.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 553)) ;
          temp_8.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 553)) ;
          var_inclusionSet_21809 = temp_8 ;
        }
      }
      GGS_string var_header_23214 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21809.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 556)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 555))) ;
      GGS_string var_fileName_23339 = GGS_string ("all-declarations-").add_operation (var_fileIdx_21748.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 558)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 558)) ;
      GGS_stringlist temp_9 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 559)) ;
      temp_9.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_fileName_23339, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 559)) ;
      ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 559)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_23339  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 560)) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_23339, var_header_23214.add_operation (var_implementationString_21766, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 561)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFilesWithFewHeaders???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                   const GGS_string constinArgument_inProductDirectory,
                                                                                   const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                   GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                                   GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                   GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_headerCompositionMap var_headerCompositionMap_24089 = GGS_headerCompositionMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_24137 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_24137.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 580)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 580)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset var_inclusionSet_31__24260 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_31__24360 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__24260, var_headerString_31__24360, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 582)) ;
        GGS_stringset var_inclusionSet_32__24396 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__24516 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__24396, var_headerString_32__24516, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 584)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 585)).objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 585)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string temp_2 ;
            const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              temp_2 = GGS_string ("-1") ;
            }else if (GalgasBool::boolFalse == test_3) {
              temp_2 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_headerFileName_24606 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)) ;
            {
            var_headerCompositionMap_24089.setter_insertKey (var_headerFileName_24606.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 588)), var_inclusionSet_31__24260, var_headerString_31__24360, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 587)) ;
            }
          }
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 593)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 593)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)) ;
            temp_5.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)).add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)) ;
            var_headerCompositionMap_24089.setter_insertKey (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24137.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 595)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 595)), var_inclusionSet_32__24396.operator_or (temp_5 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)), var_headerString_32__24516, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 594)) ;
            }
          }
        }
      }
    }
    enumerator_24137.gotoNextObject () ;
  }
  GGS_headerRepartitionMap var_headerRepartitionMap_25270 = GGS_headerRepartitionMap::init (inCompiler COMMA_HERE) ;
  GGS_bigint var_fileIdx_25303 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)) ;
  GGS_string var_implementationString_25321 = GGS_string::makeEmptyString () ;
  GGS_string var_headerString_25353 = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_25388 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_headerFileName_25413 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_25481 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_25481.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 609)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 609)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24089, var_headerFileName_25413, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)).add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)), var_headerRepartitionMap_25270, var_headerString_25353, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)) ;
                }
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24089, var_headerFileName_25413, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)), var_headerRepartitionMap_25270, var_headerString_25353, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_8) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 614)).objectCompare (GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 614)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  {
                  routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24089, var_headerFileName_25413, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)), var_headerRepartitionMap_25270, var_headerString_25353, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)) ;
                  }
                }
              }
            }
          }
        }
        GGS_string var_code_26375 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_25388, var_code_26375, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)) ;
        UpEnumerator_stringset enumerator_26392 (var_inclusionSet_25388) ;
        while (enumerator_26392.hasCurrentObject ()) {
          {
          routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24089, var_headerFileName_25413, enumerator_26392.current_key (HERE), var_headerRepartitionMap_25270, var_headerString_25353, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)) ;
          }
          enumerator_26392.gotoNextObject () ;
        }
        var_implementationString_25321.plusAssignOperation(var_code_26375, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)) ;
        var_implementationString_25321.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_25481.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::greaterThan, var_implementationString_25321.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 624)).objectCompare (GGS_uint (uint32_t (786432U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)) ;
            temp_11.plusPlusAssignOperation (GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)) ;
            var_inclusionSet_25388 = temp_11 ;
            GGS_string var_cppHeader_26765 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_25388.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 627)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 626))) ;
            GGS_string var_fileName_26905 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629)) ;
            GGS_stringlist temp_12 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 630)) ;
            temp_12.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_fileName_26905, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 630)) ;
            ioArgument_ioToolProductFileList = temp_12.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 630)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_26905  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 631)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_26905, var_cppHeader_26765.add_operation (var_implementationString_25321, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)) ;
            }
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_25413.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)) ;
            ioArgument_ioToolHeaderFileList.addAssignOperation (var_headerFileName_25413.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 639))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 639)) ;
            GGS_stringlist temp_13 ;
            const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, var_fileIdx_25303.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_14) {
              temp_13 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
            }else if (GalgasBool::boolFalse == test_14) {
              GGS_stringlist temp_15 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)) ;
              temp_15.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)) ;
              temp_13 = temp_15 ;
            }
            GGS_string var_startOfHeader_27346 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25413, temp_13 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640))) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25413.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 646)), var_startOfHeader_27346.add_operation (var_headerString_25353, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 644)) ;
            }
            var_fileIdx_25303.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 650)) ;
            var_implementationString_25321 = GGS_string::makeEmptyString () ;
            var_headerString_25353 = GGS_string::makeEmptyString () ;
            var_headerFileName_25413 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653)) ;
            var_inclusionSet_25388 = GGS_stringset::init (inCompiler COMMA_HERE) ;
          }
        }
      }
    }
    enumerator_25481.gotoNextObject () ;
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, var_implementationString_25321.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      var_fileIdx_25303.minusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 660)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 660)) ;
    }
  }
  if (GalgasBool::boolFalse == test_16) {
    GGS_stringlist temp_17 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)) ;
    temp_17.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)) ;
    GGS_string var_header_27973 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_17 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662))) ;
    GGS_string var_fileName_28110 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665)) ;
    GGS_stringlist temp_18 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
    temp_18.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_fileName_28110, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
    ioArgument_ioToolProductFileList = temp_18.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
    ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_28110  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 667)) ;
    {
    GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_28110, var_header_27973.add_operation (var_implementationString_25321, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 668)) ;
    }
    ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_25413.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)) ;
    ioArgument_ioToolHeaderFileList.addAssignOperation (var_headerFileName_25413.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 675))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 675)) ;
    GGS_stringlist temp_19 ;
    const GalgasBool test_20 = GGS_bool (ComparisonKind::equal, var_fileIdx_25303.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      temp_19 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    }else if (GalgasBool::boolFalse == test_20) {
      GGS_stringlist temp_21 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)) ;
      temp_21.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)) ;
      temp_19 = temp_21 ;
    }
    GGS_string var_startOfHeader_28504 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25413, temp_19 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676))) ;
    {
    GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25413.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682)), var_startOfHeader_28504.add_operation (var_headerString_25353, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 680)) ;
    }
  }
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 687)) ;
  ioArgument_ioToolHeaderFileList.addAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 688)) ;
  GGS_stringlist temp_22 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 691)) ;
  temp_22.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25303.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 691)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 691)) ;
  GGS_string var_startOfAllDeclarationsHeader_28952 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), temp_22 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 689))) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_28952, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 693)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                  GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                  GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_useOneHugeHeader_29622 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_29731 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_29731.hasCurrentObject ()) {
    GGS_stringset var_inclusionSet_29798 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_29731.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_implementationString_29978 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_29731.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_29798, var_implementationString_29978, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 714)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_29731.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_inclusionSet_29798.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29731.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 716))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 716)) ;
          }
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_useOneHugeHeader_29622.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 719)) ;
            temp_3.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 719)) ;
            var_inclusionSet_29798 = temp_3 ;
          }
        }
        GGS_string var_header_30240 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_29798.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 722)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 721))) ;
        var_implementationString_29978.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29731.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 724)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 724)) ;
        GGS_string var_fileName_30458 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29731.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 725)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 725)) ;
        ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_30458  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 726)) ;
        {
        GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_30458, var_header_30240.add_operation (var_implementationString_29978, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 727)) ;
        }
        ioArgument_ioToolProductFileList.addAssignOperation (var_fileName_30458  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 732)) ;
      }
    }
    enumerator_29731.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GGS_lexicalTypeMap onceFunction_buildLexicalTypeMap (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap result_result ; // Returned variable
  result_result = GGS_lexicalTypeMap::init (inCompiler COMMA_HERE) ;
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 357)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 357)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("char"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 358)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 358)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 359)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 359)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("uint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 360)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 360)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 361)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 361)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 362)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 362)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("double"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 363)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 363)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 364)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 364)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GGS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (nullptr,
                                                               releaseOnceFunctionResult_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_buildLexicalTypeMap [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_buildLexicalTypeMap (Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GGS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GGS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                                   GGS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_lexicalAttributeListAST enumerator_14099 (constinArgument_inLexicalAttributeList) ;
  while (enumerator_14099.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_14099.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 384)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_lexicalTypeEnum var_lexicalType_14258 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_14099.current_mTypeName (HERE), var_lexicalType_14258, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 385)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_14099.current_mName (HERE), var_lexicalType_14258, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 386)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_m_14360 = GGS_string::makeEmptyString () ;
      var_m_14360.plusAssignOperation(GGS_string ("the @").add_operation (enumerator_14099.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)).add_operation (GGS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)) ;
      UpEnumerator_lexicalTypeMap enumerator_14476 (constinArgument_inLexicalTypeMap) ;
      while (enumerator_14476.hasCurrentObject ()) {
        var_m_14360.plusAssignOperation(GGS_string (" @").add_operation (enumerator_14476.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)) ;
        enumerator_14476.gotoNextObject () ;
        if (enumerator_14476.hasCurrentObject ()) {
          var_m_14360.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)) ;
        }
      }
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_14099.current_mTypeName (HERE).readProperty_location (), var_m_14360, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)) ;
    }
    enumerator_14099.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexiqueComponentAST temp_0 = this ;
  result_result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 811)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_29769 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 824)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_29769, temp_2, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 825)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                         const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                         const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                         const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap var_lexicalTypeMap_30693 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 839)) ;
  GGS_lexicalAttributeMap var_lexicalAttributeMap_30760 = GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_30693, temp_0.readProperty_mLexicalAttributeListAST (), var_lexicalAttributeMap_30760, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 841)) ;
  }
  GGS_terminalMap var_terminalMap_30957 = GGS_terminalMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  UpEnumerator_terminalDeclarationListAST enumerator_31006 (temp_1.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_31006.hasCurrentObject ()) {
    GGS_lexicalSentValueList var_argumentTypeList_31056 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_31125 (enumerator_31006.current_mSentAttributeList (HERE)) ;
    while (enumerator_31125.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_31223 ;
      var_lexicalAttributeMap_30760.method_searchKey (enumerator_31125.current_mAttributeName (HERE), var_attributeLexicalType_31223, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 851)) ;
      var_argumentTypeList_31056.addAssignOperation (enumerator_31125.current_mFormalSelector (HERE), enumerator_31125.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_31223  COMMA_SOURCE_FILE ("lexique-component.galgas", 852)) ;
      enumerator_31125.gotoNextObject () ;
    }
    {
    var_terminalMap_30957.setter_insertKey (enumerator_31006.current_mName (HERE), var_argumentTypeList_31056, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 854)) ;
    }
    enumerator_31006.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_2 = this ;
  UpEnumerator_lexicalListDeclarationListAST enumerator_31439 (temp_2.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_31439.hasCurrentObject ()) {
    GGS_lexicalSentValueList var_argumentTypeList_31501 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_31570 (enumerator_31439.current_mSentAttributeList (HERE)) ;
    while (enumerator_31570.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_31669 ;
      var_lexicalAttributeMap_30760.method_searchKey (enumerator_31570.current_mAttributeName (HERE), var_attributeLexicalType_31669, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 860)) ;
      var_argumentTypeList_31501.addAssignOperation (enumerator_31570.current_mFormalSelector (HERE), enumerator_31570.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_31669  COMMA_SOURCE_FILE ("lexique-component.galgas", 861)) ;
      enumerator_31570.gotoNextObject () ;
    }
    UpEnumerator_lexicalListEntryListAST enumerator_31817 (enumerator_31439.current_mEntryList (HERE)) ;
    while (enumerator_31817.hasCurrentObject ()) {
      {
      var_terminalMap_30957.setter_insertKey (enumerator_31817.current_mTerminalSpelling (HERE), var_argumentTypeList_31501, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 864)) ;
      }
      enumerator_31817.gotoNextObject () ;
    }
    enumerator_31439.gotoNextObject () ;
  }
  {
  const GGS_lexiqueComponentAST temp_3 = this ;
  const GGS_lexiqueComponentAST temp_4 = this ;
  const GGS_lexiqueComponentAST temp_5 = this ;
  const GGS_lexiqueComponentAST temp_6 = this ;
  const GGS_lexiqueComponentAST temp_7 = this ;
  const GGS_lexiqueComponentAST temp_8 = this ;
  const GGS_lexiqueComponentAST temp_9 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), temp_4.readProperty_mIsTemplate (), var_terminalMap_30957, temp_5.readProperty_mIndexingListAST (), temp_6.readProperty_mTerminalDeclarationListAST (), temp_7.readProperty_mLexicalAttributeListAST (), temp_8.readProperty_mLexicalStyleListAST (), temp_9.readProperty_mLexicalListDeclarationListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 868)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument_inProductDirectory */,
                                                        const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                        const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_33054 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 891)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_33054, var_nameForUsefulness_33054, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 892)) ;
  }
  GGS_lexicalTypeMap var_lexicalTypeMap_33307 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 894)) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_33445 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_33445, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 896)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_33564 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_33564, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 898)) ;
  }
  GGS_stringset var_unicodeTestFunctions_33691 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_33691, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 900)) ;
  }
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_33784 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_1.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_33445, var_lexicalFunctionMap_33564, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS_terminalList::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS_templateDelimitorList::init (inCompiler COMMA_HERE), GGS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_33691, inCompiler COMMA_HERE) ;
  GGS_bigint var_styleIndex_34188 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 917)) ;
  const GGS_lexiqueComponentAST temp_2 = this ;
  UpEnumerator_lexicalStyleListAST enumerator_34216 (temp_2.readProperty_mLexicalStyleListAST ()) ;
  while (enumerator_34216.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_33784.mProperty_mStyleMap.setter_insertKey (enumerator_34216.current_mName (HERE), enumerator_34216.current_mComment (HERE), var_styleIndex_34188.getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 919)) ;
    }
    var_styleIndex_34188.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 920)), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 920)) ;
    enumerator_34216.gotoNextObject () ;
  }
  {
  const GGS_lexiqueComponentAST temp_3 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_33307, temp_3.readProperty_mLexicalAttributeListAST (), var_lexiqueAnalysisContext_33784.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 923)) ;
  }
  const GGS_lexiqueComponentAST temp_4 = this ;
  UpEnumerator_terminalDeclarationListAST enumerator_34706 (temp_4.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_34706.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_34780 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_34706.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 931)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_lstring joker_34897 ; // Joker input parameter
        var_lexiqueAnalysisContext_33784.readProperty_mStyleMap ().method_searchKey (enumerator_34706.current_mStyle (HERE), joker_34897, var_terminalStyleIndex_34780, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 932)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_34937 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_35006 (enumerator_34706.current_mSentAttributeList (HERE)) ;
    while (enumerator_35006.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_35129 ;
      var_lexiqueAnalysisContext_33784.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_35006.current_mAttributeName (HERE), var_attributeLexicalType_35129, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 936)) ;
      var_argumentTypeList_34937.addAssignOperation (enumerator_35006.current_mFormalSelector (HERE), enumerator_35006.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_35129  COMMA_SOURCE_FILE ("lexique-component.galgas", 937)) ;
      enumerator_35006.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_33784.mProperty_mTerminalMap.setter_insertKey (enumerator_34706.current_mName (HERE), var_argumentTypeList_34937, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 939)) ;
    }
    var_lexiqueAnalysisContext_33784.mProperty_mTerminalList.addAssignOperation (enumerator_34706.current_mName (HERE), var_argumentTypeList_34937, enumerator_34706.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_34706.current_isEndOfTemplateMark (HERE), enumerator_34706.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 945)), var_terminalStyleIndex_34780  COMMA_SOURCE_FILE ("lexique-component.galgas", 940)) ;
    enumerator_34706.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_6 = this ;
  UpEnumerator_lexicalListDeclarationListAST enumerator_35627 (temp_6.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_35627.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_35695 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::greaterThan, enumerator_35627.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 950)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_lstring joker_35812 ; // Joker input parameter
        var_lexiqueAnalysisContext_33784.readProperty_mStyleMap ().method_searchKey (enumerator_35627.current_mStyle (HERE), joker_35812, var_terminalStyleIndex_35695, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 951)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_35852 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_35921 (enumerator_35627.current_mSentAttributeList (HERE)) ;
    while (enumerator_35921.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_36044 ;
      var_lexiqueAnalysisContext_33784.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_35921.current_mAttributeName (HERE), var_attributeLexicalType_36044, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 955)) ;
      var_argumentTypeList_35852.addAssignOperation (enumerator_35921.current_mFormalSelector (HERE), enumerator_35921.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_36044  COMMA_SOURCE_FILE ("lexique-component.galgas", 956)) ;
      enumerator_35921.gotoNextObject () ;
    }
    GGS_lexicalExplicitTokenListMap var_lexicalTokenListMap_36199 = GGS_lexicalExplicitTokenListMap::init (inCompiler COMMA_HERE) ;
    GGS_tokenSortedlist var_tokenSortedlist_36233 = GGS_tokenSortedlist::init (inCompiler COMMA_HERE) ;
    UpEnumerator_lexicalListEntryListAST enumerator_36332 (enumerator_35627.current_mEntryList (HERE)) ;
    while (enumerator_36332.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_36378 = enumerator_35627.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_36332.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 961)) ;
      var_lexiqueAnalysisContext_33784.mProperty_mTerminalList.addAssignOperation (enumerator_36332.current_mTerminalSpelling (HERE), var_argumentTypeList_35852, var_syntaxErrorMessage_36378, enumerator_36332.current_isEndOfTemplateMark (HERE), enumerator_36332.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 967)), var_terminalStyleIndex_35695  COMMA_SOURCE_FILE ("lexique-component.galgas", 962)) ;
      {
      var_lexiqueAnalysisContext_33784.mProperty_mTerminalMap.setter_insertKey (enumerator_36332.current_mTerminalSpelling (HERE), var_argumentTypeList_35852, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 969)) ;
      }
      {
      var_lexicalTokenListMap_36199.setter_insertKey (enumerator_36332.current_mEntrySpelling (HERE), enumerator_36332.current_mTerminalSpelling (HERE), enumerator_36332.current_nonAtomicSelection (HERE), enumerator_36332.current_isEndOfTemplateMark (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 970)) ;
      }
      var_tokenSortedlist_36233.addAssignOperation (enumerator_36332.current_mEntrySpelling (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 976)), enumerator_36332.current_mEntrySpelling (HERE).readProperty_string (), enumerator_36332.current_mTerminalSpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 976)) ;
      var_lexiqueAnalysisContext_33784.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_36332.current_mEntrySpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 977)) ;
      enumerator_36332.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_33784.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_35627.current_mName (HERE), var_lexicalTokenListMap_36199, var_tokenSortedlist_36233, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 979)) ;
    }
    enumerator_35627.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_8 = this ;
  UpEnumerator_lexicalMessageDeclarationListAST enumerator_37400 (temp_8.readProperty_mLexicalMessageDeclarationListAST ()) ;
  while (enumerator_37400.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_33784.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_37400.current_mMessageName (HERE), enumerator_37400.current_mMessageValue (HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 983)) ;
    }
    enumerator_37400.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_9 = this ;
  UpEnumerator_lexicalRuleListAST enumerator_37622 (temp_9.readProperty_mLexicalRuleListAST ()) ;
  while (enumerator_37622.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((cPtr_abstractLexicalRuleAST *) enumerator_37622.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_33784, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 987)) ;
    enumerator_37622.gotoNextObject () ;
  }
  UpEnumerator_lexicalMessageMap enumerator_37814 (var_lexiqueAnalysisContext_33784.readProperty_mLexicalMessageMap ()) ;
  while (enumerator_37814.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = enumerator_37814.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 991)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_37814.current_lkey (HERE).readProperty_location (), GGS_string ("unused message"), fixItArray11  COMMA_SOURCE_FILE ("lexique-component.galgas", 992)) ;
      }
    }
    enumerator_37814.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_12 = this ;
  UpEnumerator_templateDelimitorListAST enumerator_38068 (temp_12.readProperty_mTemplateDelimitorListAST ()) ;
  while (enumerator_38068.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_33784.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_38068.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 997)) ;
    var_lexiqueAnalysisContext_33784.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_38068.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 998)) ;
    var_lexiqueAnalysisContext_33784.mProperty_mTemplateDelimitorList.addAssignOperation (enumerator_38068.current_mStartString (HERE), enumerator_38068.current_mEndString (HERE), enumerator_38068.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 999)) ;
    enumerator_38068.gotoNextObject () ;
  }
  GGS_stringset var_indexNameSet_38391 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_13 = this ;
  UpEnumerator_indexingListAST enumerator_38428 (temp_13.readProperty_mIndexingListAST ()) ;
  while (enumerator_38428.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_indexNameSet_38391.getter_hasKey (enumerator_38428.current_mIndexName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexique-component.galgas", 1003)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_38428.current_mIndexName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_38428.current_mIndexName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1004)).add_operation (GGS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1004)), fixItArray15  COMMA_SOURCE_FILE ("lexique-component.galgas", 1004)) ;
      }
    }
    var_indexNameSet_38391.plusPlusAssignOperation (enumerator_38428.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1006)) ;
    enumerator_38428.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_16 = this ;
  UpEnumerator_templateReplacementListAST enumerator_38747 (temp_16.readProperty_mTemplateReplacementListAST ()) ;
  while (enumerator_38747.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_33784.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_38747.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1010)) ;
    var_lexiqueAnalysisContext_33784.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_38747.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1011)) ;
    enumerator_38747.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("lexique-component.galgas", 1015)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_lexiqueComponentAST temp_18 = this ;
      const GGS_lexiqueComponentAST temp_19 = this ;
      const GGS_lexiqueComponentAST temp_20 = this ;
      const GGS_lexiqueComponentAST temp_21 = this ;
      GGS_string var_headerContents_39117 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (inCompiler, temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1018)), temp_19.readProperty_mLexicalListDeclarationListAST (), var_lexiqueAnalysisContext_33784, temp_20.readProperty_mTemplateDelimitorListAST (), temp_21.readProperty_mIndexingListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1017))) ;
      const GGS_lexiqueComponentAST temp_22 = this ;
      const GGS_lexiqueComponentAST temp_23 = this ;
      const GGS_lexiqueComponentAST temp_24 = this ;
      const GGS_lexiqueComponentAST temp_25 = this ;
      const GGS_lexiqueComponentAST temp_26 = this ;
      const GGS_lexiqueComponentAST temp_27 = this ;
      const GGS_lexiqueComponentAST temp_28 = this ;
      GGS_string var_cppContents_39418 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (inCompiler, temp_22.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1026)), extensionGetter_useLoopLocalVar (temp_23.readProperty_mLexicalRuleListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1027)), var_lexiqueAnalysisContext_33784.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_33784.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_33784.readProperty_mTerminalList (), var_lexiqueAnalysisContext_33784.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_33784.readProperty_mUnicodeStringToGenerate (), temp_24.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_33784, temp_25.readProperty_mTemplateDelimitorListAST (), temp_26.readProperty_mLexiqueComponentName ().readProperty_string (), temp_27.readProperty_mTemplateReplacementListAST (), temp_28.readProperty_mLexicalStyleListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1025))) ;
      const GGS_lexiqueComponentAST temp_29 = this ;
      const GGS_lexiqueComponentAST temp_30 = this ;
      const GGS_lexiqueComponentAST temp_31 = this ;
      const GGS_lexiqueComponentAST temp_32 = this ;
      const GGS_lexiqueComponentAST temp_33 = this ;
      const GGS_lexiqueComponentAST temp_34 = this ;
      const GGS_lexiqueComponentAST temp_35 = this ;
      GGS_string var_swiftUIImplementation_40123 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_swiftUIImplementationZone_32_ (inCompiler, GGS_string ("lexique-").add_operation (temp_29.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1042)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1042)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1042)), temp_30.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_33784.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_33784.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_33784.readProperty_mTerminalList (), var_lexiqueAnalysisContext_33784.readProperty_mUnicodeStringToGenerate (), temp_31.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_33784, temp_32.readProperty_mTemplateReplacementListAST (), temp_33.readProperty_mIndexingListAST (), temp_34.readProperty_mLexicalStyleListAST (), temp_35.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1041))) ;
      const GGS_lexiqueComponentAST temp_36 = this ;
      const GGS_lexiqueComponentAST temp_37 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string::makeEmptyString (), GGS_lexiqueDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (true), GGS_string ("lexique-").add_operation (temp_36.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1060)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1060)), temp_37.readProperty_mLexiqueComponentName ().readProperty_string (), GGS_string::makeEmptyString (), var_headerContents_39117, var_cppContents_39418, var_swiftUIImplementation_40123, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 1056)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates headerZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (Compiler * inCompiler,
                                                                          const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                          const GGS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                          const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                          const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                          const GGS_indexingListAST & in_INDEXING_5F_LIST
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    R O U T I N E S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_654_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    UpEnumerator_lexicalRoutineMap enumerator_654 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ()) ;
    while (enumerator_654.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_654.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("\nvoid scanner_routine_") ;
        result.appendString (enumerator_654.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GGS_uint index_873_ (0) ;
        if (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          UpEnumerator_lexicalRoutineFormalArgumentList enumerator_873 (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE)) ;
          while (enumerator_873.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (extensionGetter_cppTypeName (enumerator_873.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (extensionGetter_cppReferenceInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_873.current_mArgumentNameForComment (HERE).stringValue ()) ;
            enumerator_873.gotoNextObject () ;
            index_873_.increment () ;
          }
        }
        GGS_uint index_1226_ (0) ;
        if (enumerator_654.current_mErrorMessageList (HERE).isValid ()) {
          UpEnumerator_stringlist enumerator_1226 (enumerator_654.current_mErrorMessageList (HERE)) ;
          while (enumerator_1226.hasCurrentObject ()) {
            result.appendString (",\n                const char * ") ;
            result.appendString (enumerator_1226.current_mValue (HERE).stringValue ()) ;
            enumerator_1226.gotoNextObject () ;
            index_1226_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_654.gotoNextObject () ;
      index_654_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    F U N C T I O N S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_1712_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    UpEnumerator_lexicalFunctionMap enumerator_1712 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ()) ;
    while (enumerator_1712.hasCurrentObject ()) {
      const GalgasBool test_1 = enumerator_1712.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1712.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" scanner_function_") ;
        result.appendString (enumerator_1712.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GGS_uint index_1907_ (0) ;
        if (enumerator_1712.current_mLexicalTypeList (HERE).isValid ()) {
          UpEnumerator_lexicalFunctionFormalArgumentList enumerator_1907 (enumerator_1712.current_mLexicalTypeList (HERE)) ;
          while (enumerator_1907.hasCurrentObject ()) {
            result.appendString (",\n                const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1907.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1907.current_mArgumentNameForComment (HERE).stringValue ()) ;
            enumerator_1907.gotoNextObject () ;
            index_1907_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1712.gotoNextObject () ;
      index_1712_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cToken {\n") ;
  GGS_uint index_2424_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_2424 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_2424.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_2424.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2424.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2424.gotoNextObject () ;
      index_2424_.increment () ;
    }
  }
  result.appendString ("\n  public: cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public Lexique {\n//--- Constructors\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GGS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) { }\n  #endif\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 80)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n\n//--- Terminal symbols enumeration\n  public: const static int32_t kToken_ = 0 ;\n") ;
  GGS_uint index_4097_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_4097 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_4097.hasCurrentObject ()) {
      result.appendString ("  public: static const int32_t kToken_") ;
      result.appendString (enumerator_4097.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_4097_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_4097.gotoNextObject () ;
      index_4097_idx.increment () ;
    }
  }
  GGS_uint index_4323_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    UpEnumerator_lexicalListDeclarationListAST enumerator_4323 (in_DELIMITOR_5F_LIST_5F_LIST) ;
    while (enumerator_4323.hasCurrentObject ()) {
      result.appendString ("\n//--- Key words table '") ;
      result.appendString (enumerator_4323.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'\n  public: static int32_t search_into_") ;
      result.appendString (enumerator_4323.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) ;\n") ;
      enumerator_4323.gotoNextObject () ;
      index_4323_.increment () ;
    }
  }
  result.appendString ("  \n\n//--- Assign from attribute\n") ;
  GGS_uint index_4589_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_4589 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_4589.hasCurrentObject ()) {
      result.appendString ("  public: GGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_4589.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" synthetizedAttribute_") ;
      result.appendString (enumerator_4589.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      enumerator_4589.gotoNextObject () ;
      index_4589_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Attribute access\n") ;
  GGS_uint index_4860_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_4860 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_4860.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_4860.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" attributeValue_") ;
      result.appendString (enumerator_4860.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      enumerator_4860.gotoNextObject () ;
      index_4860_.increment () ;
    }
  }
  result.appendString ("\n\n//--- indexing keys\n") ;
  GGS_uint index_5061_idx (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    UpEnumerator_indexingListAST enumerator_5061 (in_INDEXING_5F_LIST) ;
    while (enumerator_5061.hasCurrentObject ()) {
      result.appendString ("public: static const uint32_t kIndexing_") ;
      result.appendString (enumerator_5061.current_mIndexName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_5061_idx.getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_5061.gotoNextObject () ;
      index_5061_idx.increment () ;
    }
  }
  result.appendString ("\n//--- Parse lexical token\n  protected: void internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) ;\n  protected: virtual bool parseLexicalToken (void) override ;\n\n//--- Get terminal message\n  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;\n\n//--- Get terminal count\n  public: virtual int32_t terminalVocabularyCount (void) const override { return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 125)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 125)).stringValue ()) ;
  result.appendString (" ; }\n\n//--- Get Token String\n  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;\n\n//--- Enter Token\n  protected: void enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) ;\n\n//--- Style name for Latex\n  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;\n  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (Compiler * inCompiler,
                                                                                            const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                            const GGS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                            const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                            const GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                            const GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                            const GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                            const GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                            const GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                            const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                            const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                            const GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                            const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                            const GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E                                                                             \n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"utf32.h\"\n#include \"scanner_actions.h\"\n#include \"LexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void)") ;
  GGS_uint index_634_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_634 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    const bool nonEmpty_enumerator_634 = enumerator_634.hasCurrentObject () ;
    if (nonEmpty_enumerator_634) {
      result.appendString (" :\n") ;
    }
    while (enumerator_634.hasCurrentObject ()) {
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_634.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_634.gotoNextObject () ;
      if (enumerator_634.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_634_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceFileName\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique (inCallerCompiler, inSourceFileName COMMA_THERE)") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceString,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inStringForError\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                        Lexical error message list                                             \n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_2068_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalMessageMap enumerator_2068 (in_LEXICAL_5F_MESSAGE_5F_MAP) ;
    while (enumerator_2068.hasCurrentObject ()) {
      result.appendString ("\nstatic const char * gLexicalMessage_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2068.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_2068.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2068.gotoNextObject () ;
      index_2068_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                getMessageForTerminal                                                          \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getMessageForTerminal (const int32_t inTerminalIndex) const {\n  String result = \"<unknown>\" ;\n  if ((inTerminalIndex >= 0) && (inTerminalIndex < ") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue ()) ;
  result.appendString (")) {\n    static const char * syntaxErrorMessageArray [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue ()) ;
  result.appendString ("] = {kEndOfSourceLexicalErrorMessage") ;
  GGS_uint index_2931_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_2931 (in_TERMINAL_5F_LIST) ;
    while (enumerator_2931.hasCurrentObject ()) {
      result.appendString (",\n        ") ;
      result.appendString (enumerator_2931.current_mSyntaxErrorMessage (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 64)).stringValue ()) ;
      enumerator_2931.gotoNextObject () ;
      index_2931_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = syntaxErrorMessageArray [inTerminalIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S                                           \n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_3454_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    UpEnumerator_stringset enumerator_3454 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES) ;
    while (enumerator_3454.hasCurrentObject ()) {
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_3454.current_key (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_3454.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3454.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_3454.current_key (HERE).getter_utf_33__32_Representation (GGS_bool (false) COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3454.gotoNextObject () ;
      index_3454_.increment () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_3903_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_3903 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_3903.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//             Key words table '") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'      \n//--------------------------------------------------------------------------------------------------\n\nstatic const int32_t ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_3903.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).stringValue ()) ;
      result.appendString (" ;\n\nstatic const C_unicode_lexique_table_entry ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" [ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("] = {\n") ;
      GGS_uint index_4594_ (0) ;
      if (enumerator_3903.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_4594 (enumerator_3903.current_mTokenSortedList (HERE)) ;
        while (enumerator_4594.hasCurrentObject ()) {
          result.appendString ("  C_unicode_lexique_table_entry (kUnicodeString_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4594.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (", Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("::kToken_") ;
          result.appendString (enumerator_4594.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (")") ;
          enumerator_4594.gotoNextObject () ;
          if (enumerator_4594.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_4594_.increment () ;
        }
      }
      result.appendString ("\n} ;\n\nint32_t Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::search_into_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) {\n  return searchInList (inSearchedString, ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      enumerator_3903.gotoNextObject () ;
      index_3903_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                          getCurrentTokenString                                                \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getCurrentTokenString (const cToken * inTokenPtr) const {\n  const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = (const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inTokenPtr ;\n  String s ;\n  if (ptr == nullptr) {\n    s.appendCString (\"$$\") ;\n  }else{\n    switch (ptr->mTokenCode) {\n    case kToken_:\n      s.appendCString (\"$$\") ;\n      break ;\n") ;
  GGS_uint index_5941_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_5941 (in_TERMINAL_5F_LIST) ;
    while (enumerator_5941.hasCurrentObject ()) {
      result.appendString ("    case kToken_") ;
      result.appendString (enumerator_5941.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 115)).stringValue ()) ;
      result.appendString (":\n      s.appendChar (utf32 ('$')) ;\n      s.appendCString (") ;
      result.appendString (enumerator_5941.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (") ;\n      s.appendChar (utf32 ('$')) ;\n") ;
      GGS_uint index_6290_ (0) ;
      if (enumerator_5941.current_mSentAttributeList (HERE).isValid ()) {
        UpEnumerator_lexicalSentValueList enumerator_6290 (enumerator_5941.current_mSentAttributeList (HERE)) ;
        while (enumerator_6290.hasCurrentObject ()) {
          result.appendString ("      s.appendChar (utf32 (' ')) ;\n      s.") ;
          result.appendString (extensionGetter_appendMethodName (enumerator_6290.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (" (ptr->mLexicalAttribute_") ;
          result.appendString (enumerator_6290.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (extensionGetter_appendArgumentOfMethod (enumerator_6290.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_6290.gotoNextObject () ;
          index_6290_.increment () ;
        }
      }
      result.appendString ("      break ;\n") ;
      enumerator_5941.gotoNextObject () ;
      index_5941_.increment () ;
    }
  }
  result.appendString ("    default:\n      break ;\n    }\n  }\n  return s ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters                                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_7149_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    UpEnumerator_templateDelimitorList enumerator_7149 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
    const bool nonEmpty_enumerator_7149 = enumerator_7149.hasCurrentObject () ;
    if (nonEmpty_enumerator_7149) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_7149.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_7149.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_7149.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_7149.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_7149.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_7149.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_7149.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_7149.gotoNextObject () ;
      if (enumerator_7149.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_7149_.increment () ;
    }
    if (nonEmpty_enumerator_7149) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements                                               \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_8150_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    UpEnumerator_templateReplacementListAST enumerator_8150 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
    const bool nonEmpty_enumerator_8150 = enumerator_8150.hasCurrentObject () ;
    if (nonEmpty_enumerator_8150) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_8150.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8150.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8150.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8150.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8150.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_8150.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_8150.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", true)") ;
      enumerator_8150.gotoNextObject () ;
      if (enumerator_8150.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_8150_.increment () ;
    }
    if (nonEmpty_enumerator_8150) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_5 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    GGS_uint index_9296_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      UpEnumerator_terminalList enumerator_9296 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
      const bool nonEmpty_enumerator_9296 = enumerator_9296.hasCurrentObject () ;
      if (nonEmpty_enumerator_9296) {
        result.appendString ("static const bool ") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_kEndOfScriptInTemplateArray [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_9296.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_9296.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_9296.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        enumerator_9296.gotoNextObject () ;
        if (enumerator_9296.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_9296_.increment () ;
      }
      if (nonEmpty_enumerator_9296) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               INTERNAL PARSE LEXICAL TOKEN                                         \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) {\n") ;
  const GalgasBool test_6 = in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  bool loop = true ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_9934_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_9934 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_9934.hasCurrentObject ()) {
      result.appendString ("  token.mLexicalAttribute_") ;
      result.appendString (enumerator_9934.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (extensionGetter_initialization (enumerator_9934.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9934.gotoNextObject () ;
      index_9934_.increment () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n  try{\n") ;
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  GGS_uint index_10155_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalRuleListAST enumerator_10155 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_10155.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateLexicalRuleCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10155.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 200)).stringValue ()) ;
      enumerator_10155.gotoNextObject () ;
      index_10155_.increment () ;
    }
  }
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  result.appendString ("if (testForInputUTF32Char (utf32 ('\\0'))) { // End of source text \? \n      token.mTokenCode = kToken_ ; // Empty string code\n    }else{ // Unknown input character\n      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n      token.mTokenCode = -1 ; // No token\n      advance () ; // ... go throught unknown character\n    }\n  }catch (const C_lexicalErrorException &) {\n    token.mTokenCode = -1 ; // No token\n    advance () ; // ... go throught unknown character\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N                                         \n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\\0')) {\n") ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0)\n     && (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n     && (mCurrentChar.u32 () != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                               true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar.u32 () != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray, ") ;
    result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).stringValue ()) ;
    result.appendString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.appendString (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                                kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendChar (previousChar ()) ;\n            }\n            ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray, ") ;
    result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).stringValue ()) ;
    result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mCurrentChar.u32 () != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  ") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("    internalParseLexicalToken (token) ;") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  }\n  if (mCurrentChar.u32 () == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         E N T E R    T O K E N                                                \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = nullptr ;\n  macroMyNew (ptr, cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ()) ;\n  ptr->mTokenCode = ioToken.mTokenCode ;\n  ptr->mStartLocation = mTokenStartLocation ;\n  ptr->mEndLocation = mTokenEndLocation ;\n  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n  ioToken.mTemplateStringBeforeToken = \"\" ;\n") ;
  GGS_uint index_14549_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_14549 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_14549.hasCurrentObject ()) {
      result.appendString ("  ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14549.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" = ioToken.mLexicalAttribute_") ;
      result.appendString (enumerator_14549.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_14549.gotoNextObject () ;
      index_14549_.increment () ;
    }
  }
  result.appendString ("  enterTokenFromPointer (ptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//               A T T R I B U T E   A C C E S S                                                 \n") ;
  GGS_uint index_14979_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_14979 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_14979.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_14979.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::attributeValue_") ;
      result.appendString (enumerator_14979.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  return ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14979.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_14979.gotoNextObject () ;
      index_14979_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//         A S S I G N    F R O M    A T T R I B U T E                                           \n") ;
  GGS_uint index_15684_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_15684 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_15684.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15684.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::synthetizedAttribute_") ;
      result.appendString (enumerator_15684.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  macroValidSharedObject (ptr, cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n  GGS_") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15684.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (" value (ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_15684.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (") ;\n  GGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15684.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).stringValue ()) ;
      result.appendString (" result (value, currentLocation) ;\n  return result ;\n}\n\n") ;
      enumerator_15684.gotoNextObject () ;
      index_15684_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N                                             \n//--------------------------------------------------------------------------------------------------\n\n GGS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;\n") ;
  GGS_uint index_17165_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_17165 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_17165.hasCurrentObject ()) {
      result.appendString ("  result.addAssignOperation (GGS_string (") ;
      result.appendString (enumerator_17165.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      enumerator_17165.gotoNextObject () ;
      index_17165_.increment () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GenericUniqueArray <String> & ") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 334)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_17678_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_17678 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_17678.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).add_operation (enumerator_17678.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).stringValue ()) ;
      result.appendString (") ;\n") ;
      enumerator_17678.gotoNextObject () ;
      index_17678_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 345)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GenericUniqueArray <String> & ") ;
  const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 346)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_18391_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_18391 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_18391.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).add_operation (enumerator_18391.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GGS_uint index_18588_ (0) ;
      if (enumerator_18391.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_18588 (enumerator_18391.current_mTokenSortedList (HERE)) ;
        while (enumerator_18588.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_18588.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_18588.gotoNextObject () ;
          index_18588_.increment () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      enumerator_18391.gotoNextObject () ;
      index_18391_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic LexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n//--------------------------------------------------------------------------------------------------\n\nuint32_t Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n  static const uint32_t kTerminalSymbolStyles [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GGS_uint index_19683_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_19683 (in_TERMINAL_5F_LIST) ;
    while (enumerator_19683.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_19683.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_19683.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" */") ;
      enumerator_19683.gotoNextObject () ;
      index_19683_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleNameForIndex (const uint32_t inStyleIndex) const {\n  String result ;\n  if (inStyleIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).stringValue ()) ;
  result.appendString (") {\n    static const char * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).stringValue ()) ;
  result.appendString ("] = {\n      \"\"") ;
  GGS_uint index_20519_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_20519 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_20519.hasCurrentObject ()) {
      result.appendString (",\n      ") ;
      result.appendString (enumerator_20519.current_mName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 388)).stringValue ()) ;
      enumerator_20519.gotoNextObject () ;
      index_20519_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inStyleIndex] ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftUIImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftUIImplementationZone_32_ (Compiler * inCompiler,
                                                                                         const GGS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                         const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                         const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                         const GGS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                         const GGS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                         const GGS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                         const GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                         const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                         const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                         const GGS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                         const GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                         const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   LEXIQUE ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n\nstruct SettingViewFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @AppStorage(\"FontFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n\n  @AppStorage(\"LineHeightFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mLineHeight : Int = 12\n\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mDefaultColor : Color = .black\n\n") ;
  GGS_uint index_891_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_891 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_891.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(\"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_891.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mColorFor_") ;
      result.appendString (enumerator_891.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Color = .black\n\n  @AppStorage(\"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_891.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mBoldFor_") ;
      result.appendString (enumerator_891.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_891.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mItalicFor_") ;
      result.appendString (enumerator_891.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n") ;
      enumerator_891.gotoNextObject () ;
      index_891_.increment () ;
    }
  }
  result.appendString ("\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n  private var mColorFor_lexical_error : Color = .red\n\n  @AppStorage(\"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n  private var mBoldFor_lexical_error : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n  private var mItalicFor_lexical_error : Bool = false\n\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n  private var mColorFor_template : Color = .gray\n\n  @AppStorage(\"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n  private var mBoldFor_template : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n  private var mItalicFor_template : Bool = false\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var body : some View {\n    Form {\n      LabeledContent (\"Font\") { CustomFontPicker (fontBinding: self.$mFont) }\n      Picker(\"Line Height\", selection: self.$mLineHeight) {\n        Text(\"1.0\").tag(10)\n        Text(\"1.1\").tag(11)\n        Text(\"1.2\").tag(12)\n        Text(\"1.5\").tag(15)\n        Text(\"1.7\").tag(17)\n        Text(\"2.0\").tag(20)\n      }.pickerStyle(.automatic)\n      ColorPicker (\"Default Color\", selection: self.$mDefaultColor)\n") ;
  GGS_uint index_2552_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_2552 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_2552.hasCurrentObject ()) {
      result.appendString ("      LabeledContent (") ;
      result.appendString (enumerator_2552.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_") ;
      result.appendString (enumerator_2552.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (").labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_") ;
      result.appendString (enumerator_2552.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n          Toggle (\"Italic\", isOn: self.$mItalicFor_") ;
      result.appendString (enumerator_2552.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n        }\n      }\n") ;
      enumerator_2552.gotoNextObject () ;
      index_2552_.increment () ;
    }
  }
  result.appendString ("      LabeledContent (\"Lexical Error\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_lexical_error).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_lexical_error)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_lexical_error)\n        }\n      }\n      LabeledContent (\"Template\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_template).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_template)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_template)\n        }\n      }\n    }.padding (20)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\nclass ScannerFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : AbstractScanner {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mDebug = false\n  private let mVerboseDebug = false\n  private var mTokenArray = [LexicalToken] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override func popUpDefinitionList () -> [[UInt16]] {\n    return gPopUpData_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override func lineComment () -> String\? {\n    return gLineComment_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,\n                                granularity inGranularity : NSSelectionGranularity,\n                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {\n    var result = inTextViewComputedRange\n    switch inGranularity {\n    case .selectByCharacter :\n      ()\n    case .selectByWord :\n      var found = false\n      var idx = 0\n      while idx < self.mTokenArray.count, !found {\n        let token = self.mTokenArray [idx]\n        idx += 1\n        let tokenRange = token.range\n        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)\n           && (tokenRange.location <= inProposedSelectionRange.location)\n        if found, self.atomicSelectionFor (token: token.tokenCode) {\n          result = tokenRange\n        }\n      }\n    case .selectByParagraph :\n      var found = false\n      var idx = 0\n      while idx < self.mTokenArray.count, !found {\n        let token = self.mTokenArray [idx]\n        idx += 1\n        let tokenRange = token.range\n        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)\n           && (tokenRange.location <= inProposedSelectionRange.location)\n        if found {\n          result = tokenRange\n        }\n      }\n    @unknown default:\n      ()\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Scanner\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_6186_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_6186 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_6186.hasCurrentObject ()) {
      result.appendString ("  private var mLexicalAttribute_") ;
      result.appendString (enumerator_6186.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_6186.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_6186.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 163)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_6186.gotoNextObject () ;
      index_6186_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func lexiqueIdentifier () -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func isTemplateLexique () -> Bool {\n    return ") ;
  result.appendString (GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 175)).objectCompare (GGS_uint (uint32_t (0U)))).getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 175)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func terminalVocabularyCount () -> Int {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 181)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 181)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {\n    let kTerminalSymbolStyles : [UInt8] = [\n      0, // Default\n") ;
  GGS_uint index_7267_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_7267 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_7267.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_7267.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 191)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_7267_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 191)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 191)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_7267.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 191)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_7267.gotoNextObject () ;
      index_7267_idx.increment () ;
    }
  }
  result.appendString ("      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 193)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 193)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 193)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 193)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 193)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 193)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 194)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 194)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 194)).stringValue ()) ;
  result.appendString ("  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 194)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 194)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 194)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalSymbolStyles [Int (inTokenIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {\n    let kTerminalAtomicSelection : [Bool] = [\n      false, // Default\n") ;
  GGS_uint index_8096_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_8096 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_8096.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_8096.current_atomicSelection (HERE).getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 206)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_8096_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 206)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 206)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_8096.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 206)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_8096.gotoNextObject () ;
      index_8096_idx.increment () ;
    }
  }
  result.appendString ("      false, // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 208)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 208)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 208)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      false  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 209)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 209)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 209)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalAtomicSelection [Int (inTokenIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func indexingTitles () -> [String] {\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 218)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("    return [\n") ;
    GGS_uint index_8792_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      UpEnumerator_indexingListAST enumerator_8792 (in_INDEXING_5F_LIST) ;
      while (enumerator_8792.hasCurrentObject ()) {
        result.appendString ("      ") ;
        result.appendString (enumerator_8792.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 222)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_8792.current_mIndexName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        enumerator_8792.gotoNextObject () ;
        if (enumerator_8792.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_8792_.increment () ;
      }
    }
    result.appendString ("\n    ]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("\n    return []\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  S T Y L E S\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleCount () -> UInt8 {\n    return ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 239)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 239)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleNameFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex: inIndex)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex: inIndex)\n  }\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n  final var mLineHeight : Int = 12\n  final var mDefaultColor : Color = .black\n") ;
  GGS_uint index_10069_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_10069 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_10069.hasCurrentObject ()) {
      result.appendString ("  final var mColorFor_") ;
      result.appendString (enumerator_10069.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Color = .black\n  final var mBoldFor_") ;
      result.appendString (enumerator_10069.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n  final var mItalicFor_") ;
      result.appendString (enumerator_10069.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n") ;
      enumerator_10069.gotoNextObject () ;
      index_10069_.increment () ;
    }
  }
  result.appendString ("  final var mColorFor_lexical_error : Color = .red\n  final var mBoldFor_lexical_error : Bool = false\n  final var mItalicFor_lexical_error : Bool = false\n  final var mColorFor_template : Color = .gray\n  final var mBoldFor_template : Bool = false\n  final var mItalicFor_template : Bool = false\n  final var mTokenAttributeArray = [[NSAttributedString.Key : Any]\?] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {\n    ioStyleDidChange = false\n    let ud = UserDefaults.standard\n    if let s = ud.string (forKey: \"FontFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = CustomFont (rawValue: s) {\n      if self.mFont != v {\n        self.mFont = v\n        ioStyleDidChange = true\n      }\n    }\n    if let s = ud.string (forKey: \"LineHeightFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = Int (s) {\n      if self.mLineHeight != v {\n        self.mLineHeight = v\n        ioStyleDidChange = true\n      }\n    }\n    if let s = ud.string (forKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = Color (rawValue: s) {\n      if self.mDefaultColor != v {\n        self.mDefaultColor = v\n        ioStyleDidChange = true\n      }\n    }\n") ;
  GGS_uint index_11504_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_11504 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_11504.hasCurrentObject ()) {
      result.appendString ("    if let s = ud.string (forKey: \"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"), let v = Color (rawValue: s) {\n      if self.mColorFor_") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mColorFor_") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mBoldFor_") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mBoldFor_") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mItalicFor_") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mItalicFor_") ;
      result.appendString (enumerator_11504.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n") ;
      enumerator_11504.gotoNextObject () ;
      index_11504_.increment () ;
    }
  }
  result.appendString ("    if let s = ud.string (forKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"), let v = Color (rawValue: s) {\n      if self.mColorFor_lexical_error != v {\n        self.mColorFor_lexical_error = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n      if self.mBoldFor_lexical_error != v {\n        self.mBoldFor_lexical_error = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n      if self.mItalicFor_lexical_error != v {\n        self.mItalicFor_lexical_error = v\n        ioStyleDidChange = true\n      }\n    }\n    if let s = ud.string (forKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\"), let v = Color (rawValue: s) {\n      if self.mColorFor_template != v {\n        self.mColorFor_template = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n      if self.mBoldFor_template != v {\n        self.mBoldFor_template = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n      if self.mItalicFor_template != v {\n        self.mItalicFor_template = v\n        ioStyleDidChange = true\n      }\n    }\n  //--- Build token attribute array\n    if ioStyleDidChange {\n      let fontManager = NSFontManager.shared\n      let boldFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .boldFontMask)\n      let italicFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .italicFontMask)\n      let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)\n      self.mTokenAttributeArray.removeAll (keepingCapacity: true)\n      var attributes = [NSAttributedString.Key : Any] ()\n") ;
  GGS_uint index_14577_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_14577 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_14577.hasCurrentObject ()) {
      result.appendString ("    //--- Attributes for ") ;
      result.appendString (enumerator_14577.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n      if self.mColorFor_") ;
      result.appendString (enumerator_14577.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_") ;
      result.appendString (enumerator_14577.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n      }\n      if self.mBoldFor_") ;
      result.appendString (enumerator_14577.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" && self.mItalicFor_") ;
      result.appendString (enumerator_14577.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_") ;
      result.appendString (enumerator_14577.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_") ;
      result.appendString (enumerator_14577.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n") ;
      enumerator_14577.gotoNextObject () ;
      index_14577_.increment () ;
    }
  }
  result.appendString ("    //--- Lexical error\n      if self.mColorFor_lexical_error != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)\n      }\n      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_lexical_error {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_lexical_error {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n    //--- Template\n      if self.mColorFor_template != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_template)\n      }\n      if self.mBoldFor_template && self.mItalicFor_template {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_template {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_template {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {\n    if self.mDebug { Swift.print (\"performLexicalColoringAfterUserDefaultChange\") }\n    let start = Date ()\n    var styleDidChange = false\n    self.updateTokenStyleArrays (&styleDidChange)\n    if styleDidChange {\n      let nsString = inTextStorage.string as NSString\n      let fullRange = NSRange (location: 0, length: nsString.length)\n    //---- Apply default attributes\n      let tsDelegate : (any NSTextStorageDelegate)\? = inTextStorage.delegate\n      inTextStorage.delegate = nil // NSTextStorageDelegate\n      inTextStorage.beginEditing ()\n      let defaultFont = self.mFont.nsFont\n      inTextStorage.font = defaultFont\n      let ps = NSMutableParagraphStyle ()\n      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0\n      let defaultAttributes : [NSAttributedString.Key : Any] = [\n        .font: defaultFont,\n        .foregroundColor: NSColor (self.mDefaultColor),\n        .paragraphStyle : ps\n      ]\n      inTextStorage.setAttributes (defaultAttributes, range: fullRange)\n    //--- Apply styles\n      for token in self.mTokenArray {\n        let idx = Int (self.styleIndexFor (token: token.tokenCode))\n        if idx > 0, idx < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [idx - 1] {\n          inTextStorage.addAttributes (attributes, range: token.range)\n        }\n      }\n      inTextStorage.endEditing ()\n      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate\n    }\n    if self.mDebug { Swift.print (\"  done: \\(Int (Date ().timeIntervalSince (start) * 1000.0)) ms\") }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,\n                                                   editedRange inEditedRange : NSRange,\n                                                   changeInLength inDelta : Int,\n                                                   popMenuItems ioPopupMenuItems : inout [IdentifiableAttributedString]) {\n    if self.mDebug { Swift.print (\"performLexicalAnalysisAndColoring \\(inEditedRange), delta \\(inDelta)\") }\n    let nsString = inTextStorage.string as NSString\n  //---\n    var savedTokenCount = 0\n    var found = false\n    while savedTokenCount < self.mTokenArray.count, !found {\n      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {\n        savedTokenCount += 1\n      }else{\n        found = true\n      }\n    }\n    if self.mDebug { Swift.print (\"  savedTokenCount \\(savedTokenCount), currently \\(self.mTokenArray.count) tokens\") }\n  //--- Eliminate tokens beyond end of source string\n    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {\n      if self.mVerboseDebug { Swift.print (\"Remove last token \\(lastToken.range), beyond end\") }\n      _ = self.mTokenArray.removeLast ()\n    }\n    if self.mDebug { Swift.print (\"  Eliminate token beyond end: \\(self.mTokenArray.count) tokens\") }\n  //--- Translater les tokens suivants\n    var i = savedTokenCount + 1\n    while i < self.mTokenArray.count {\n      let token = self.mTokenArray [i]\n      let newToken = LexicalToken (\n        range: NSRange (location: token.range.location + inDelta, length: token.range.length),\n        tokenCode: token.tokenCode,\n        templateDelimiterIndex: token.templateDelimiterIndex\n      )\n      self.mTokenArray [i] = newToken\n      i += 1\n    }\n  //--- Eliminate tokens beyond end of source string\n    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {\n      if self.mVerboseDebug { Swift.print (\"Remove last token \\(lastToken.range), beyond end\") }\n      _ = self.mTokenArray.removeLast ()\n    }\n    if self.mDebug { Swift.print (\"  Eliminate token beyond end, after delta correction: \\(self.mTokenArray.count) tokens\") }\n  //--- Perform lexical analysis\n    let start = Date ()\n    if savedTokenCount == 0 {\n      self.resetScannerLocation (withString: nsString)\n    }else{\n      self.resetScanner (\n        withString: nsString,\n        location: self.mTokenArray [savedTokenCount-1].range.upperBound,\n        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex\n      )\n    }\n    if self.mDebug { Swift.print (\"  Scanning start location: \\(self.currentLocation)\") }\n    var stop = false\n    var insertionIndex = savedTokenCount\n    while self.currentLocation < nsString.length, !stop {\n      let token : LexicalToken = self.parseLexicalTokenForLexicalColoring ()\n      if token.tokenCode > 0 { // For eliminating separators\n        if self.mVerboseDebug { Swift.print (\"  -> new token \\(token.range) '\\(nsString.substring (with: token.range))'\") }\n      //--- Eliminate previous tokens before new token location\n        if insertionIndex < self.mTokenArray.count,\n              self.mTokenArray [insertionIndex] == token,\n              token.range.location > inEditedRange.upperBound {\n          if self.mVerboseDebug { Swift.print (\"    stop at \\(insertionIndex)\") }\n          stop = true\n        }else{\n          while insertionIndex < self.mTokenArray.count,\n                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {\n            if self.mVerboseDebug { Swift.print (\"    remove token \\(self.mTokenArray [insertionIndex].range) at \\(insertionIndex)\") }\n            self.mTokenArray.remove (at: insertionIndex)\n          }\n          if insertionIndex == self.mTokenArray.count {\n            if self.mVerboseDebug { Swift.print (\"    append token \\(token.range) at \\(insertionIndex)\") }\n            self.mTokenArray.append (token)\n            insertionIndex += 1\n          }else{\n            if self.mVerboseDebug {  Swift.print (\"    insert token \\(token.range) at \\(insertionIndex)\") }\n            self.mTokenArray.insert (token, at: insertionIndex)\n            insertionIndex += 1\n          }\n        }\n      }\n    }\n    if self.mDebug { Swift.print (\"  Lexical analysis time: \\(Int (Date ().timeIntervalSince (start) * 1000.0)) ms\") }\n  //---- Apply default attributes\n    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0)\n      \? 0\n      : self.mTokenArray [savedTokenCount - 1].range.upperBound)\n    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)\n       \? nsString.length\n       : self.mTokenArray [insertionIndex].range.upperBound\n    )\n    if self.mDebug { Swift.print (\"  Attributes will change from char index \\(modificationStart) to \\(modificationEnd)\") }\n    let start2 = Date ()\n    if modificationStart < modificationEnd {\n      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)\n      let tsDelegate : (any NSTextStorageDelegate)\? = inTextStorage.delegate\n      inTextStorage.delegate = nil // NSTextStorageDelegate\n      inTextStorage.beginEditing ()\n      let defaultFont = self.mFont.nsFont\n      let ps = NSMutableParagraphStyle ()\n      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0\n      let defaultAttributes : [NSAttributedString.Key : Any] = [\n        .font: defaultFont,\n        .foregroundColor: NSColor (self.mDefaultColor),\n        .paragraphStyle : ps\n      ]\n      if self.mVerboseDebug { Swift.print (\"Apply default attributes \\(modifiedRange)\") }\n      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)\n    //--- Apply styles\n      var idx = 0\n      stop = false\n      while idx < self.mTokenArray.count, !stop { // Apply token styles\n        let token = self.mTokenArray [idx]\n        idx += 1\n        if token.range.lowerBound >= modifiedRange.upperBound {\n          stop = true\n        }else if token.range.upperBound > modifiedRange.lowerBound {\n          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))\n          if styleIndex > 0, styleIndex < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [styleIndex - 1] {\n            inTextStorage.addAttributes (attributes, range: token.range)\n          }\n        }\n      }\n      inTextStorage.endEditing ()\n      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate\n    }\n    if self.mDebug { Swift.print (\"  Adding attributes: \\(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms\") }\n    ioPopupMenuItems = self.updateEntryPopUpButtons (self.mTokenArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func parseLexicalTokenForLexicalColoring () -> LexicalToken {\n    var loop = true\n    var scanningOk = true\n") ;
  GGS_uint index_25326_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_25326 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_25326.hasCurrentObject ()) {
      result.appendString ("    self.mLexicalAttribute_") ;
      result.appendString (enumerator_25326.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_25326.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 586)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_25326.gotoNextObject () ;
      index_25326_.increment () ;
    }
  }
  result.appendString ("    var tokenCode : UInt16 = 0\n    let startLocation = self.currentLocation\n") ;
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 591)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 591)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 591)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 591)).uintValue ())) ;
  }
  GGS_uint index_25563_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalRuleListAST enumerator_25563 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_25563.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateSwiftCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_25563.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 593)).stringValue ()) ;
      enumerator_25563.gotoNextObject () ;
      index_25563_.increment () ;
    }
  }
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 591)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 591)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 591)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 591)).uintValue ())) ;
  }
  result.appendString ("if self.testForInputChar (0) { // End of source text \?\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n    }else{ // Unknown input character\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n      self.advance ()\n    }\n    return LexicalToken (\n      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n      tokenCode: tokenCode,\n      templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n") ;
  GGS_uint index_26396_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_26396 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ()) ;
    while (enumerator_26396.hasCurrentObject ()) {
      const GalgasBool test_1 = enumerator_26396.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//             Key words table '") ;
        result.appendString (enumerator_26396.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//--------------------------------------------------------------------------------------------------\n\nfileprivate let kDictionary_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 618)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_26396.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : [String : UInt16] = [\n") ;
        GGS_uint index_26946_ (0) ;
        if (enumerator_26396.current_mTokenSortedList (HERE).isValid ()) {
          UpEnumerator_tokenSortedlist enumerator_26946 (enumerator_26396.current_mTokenSortedList (HERE)) ;
          while (enumerator_26946.hasCurrentObject ()) {
            result.appendString ("  ") ;
            result.appendString (enumerator_26946.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 620)).stringValue ()) ;
            result.appendString (" : ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_26946.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 620)).stringValue ()) ;
            enumerator_26946.gotoNextObject () ;
            if (enumerator_26946.hasCurrentObject ()) {
              result.appendString (",\n") ;
            }
            index_26946_.increment () ;
          }
        }
        result.appendString ("\n]\n\nfileprivate func search_into_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 624)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_26396.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (_ inSearchedString : String) -> UInt16 {\n  return kDictionary_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 625)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_26396.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" [inSearchedString, default: ") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
        result.appendString ("_1_]\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_26396.gotoNextObject () ;
      index_26396_.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"Default Style\", // 0\n") ;
  GGS_uint index_27949_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_27949 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_27949.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_27949.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 644)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_27949_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 644)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 644)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_27949.gotoNextObject () ;
      index_27949_idx.increment () ;
    }
  }
  result.appendString ("    \"Lexical error\", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 646)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 646)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 646)).stringValue ()) ;
  result.appendString ("\n    \"Template\" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 647)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 647)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 647)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\", // 0\n") ;
  GGS_uint index_28516_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_28516 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_28516.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 658)).add_operation (enumerator_28516.current_mName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 658)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 658)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_28516_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 658)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 658)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_28516.gotoNextObject () ;
      index_28516_idx.increment () ;
    }
  }
  result.appendString ("    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string (".ERROR"), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 660)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 660)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 660)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 660)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 660)).stringValue ()) ;
  result.appendString ("\n    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string (".TEMPLATE"), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 661)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 661)).stringValue ()) ;
  result.appendString (" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 661)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 661)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 661)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 670)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 671)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GGS_uint index_29434_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_29434 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_29434.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_29434.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 674)).stringValue ()) ;
        enumerator_29434.gotoNextObject () ;
        if (enumerator_29434.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_29434_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 684)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 685)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GGS_uint index_30080_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_30080 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
      while (enumerator_30080.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_30080.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 688)).stringValue ()) ;
        result.appendString (", endString: ") ;
        result.appendString (enumerator_30080.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 688)).stringValue ()) ;
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_30080.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 689)).getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 689)).stringValue ()) ;
        result.appendString (")") ;
        enumerator_30080.gotoNextObject () ;
        if (enumerator_30080.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_30080_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//--------------------------------------------------------------------------------------------------\n\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ : UInt16 = 0\n") ;
  GGS_uint index_30742_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_30742 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_30742.hasCurrentObject ()) {
      result.appendString ("let ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_30742.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 703)).stringValue ()) ;
      result.appendString (" : UInt16 = ") ;
      result.appendString (index_30742_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 703)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 703)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_30742.gotoNextObject () ;
      index_30742_idx.increment () ;
    }
  }
  result.appendString ("let ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 705)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 705)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 705)).stringValue ()) ;
  result.appendString ("\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 706)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 706)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 706)).stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 116)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                 const GGS_string constinArgument_inSelector,
                                                                 Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GGS_bool test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 123)))) ;
  if (GalgasBool::boolTrue != test_0.boolEnum ()) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("actual-parameters.galgas", 123)))) ;
  }
  result_result = test_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_outputActualParameterAST temp_2 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & ioArgument_ioActualOutputArgumentList,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterAST temp_0 = this ;
  const GGS_outputActualParameterAST temp_1 = this ;
  const GGS_outputActualParameterAST temp_2 = this ;
  ioArgument_ioActualOutputArgumentList.addAssignOperation (temp_0.readProperty_mActualSelector (), temp_1.readProperty_mOutputActualParameterExpression (), temp_2.readProperty_mEndOfExpressionLocation ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 132)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GGS_lstring constinArgument_inFormalSelector,
                                                                       const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                       const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                       GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                       GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("actual-parameters.galgas", 152)))).operator_and (GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 153)))) COMMA_SOURCE_FILE ("actual-parameters.galgas", 152)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 155)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 155)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 157)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_8117 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)) ;
        const GGS_outputActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_8117) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_8117, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 161)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 161)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 161)) ;
      }
    }
    GGS_semanticExpressionForGeneration var_expression_8637 ;
    const GGS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8637, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 163)) ;
    {
    const GGS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expression_8637.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8637, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas", 173)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_outputActualParameterForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_expression_8637, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 180)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                      const GGS_string constinArgument_inSelector,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 207)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputActualParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 216)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            const GGS_lstring constinArgument_inFormalSelector,
                                                                            const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                            const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                            GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                            GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 233)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 235)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 235)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 237)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_11867 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)) ;
        const GGS_outputInputActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_11867) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11867, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 240)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 240)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 240)) ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_parameterType_12216 ;
  GGS_string var_variableCppName_12241 ;
  {
  const GGS_outputInputActualParameterAST temp_9 = this ;
  GGS_string joker_12263 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_12216, var_variableCppName_12241, joker_12263, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 243)) ;
  }
  GGS_unifiedTypeMapEntryList var_typeList_12280 = GGS_unifiedTypeMapEntryList::class_func_listWithValue (var_parameterType_12216  COMMA_SOURCE_FILE ("actual-parameters.galgas", 249)) ;
  const GGS_outputInputActualParameterAST temp_10 = this ;
  UpEnumerator_lstringlist enumerator_12356 (temp_10.readProperty_mStructAttributeList ()) ;
  while (enumerator_12356.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_12405 = extensionGetter_definition (var_parameterType_12216, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 251)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_12513 ;
    GGS_bool var_isConstant_12540 ;
    var_propertyMap_12405.method_searchKey (enumerator_12356.current_mValue (HERE), var_accessControl_12513, var_isConstant_12540, var_parameterType_12216, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 252)) ;
    extensionMethod_checkSetAccess (var_accessControl_12513, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_12356.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 258)) ;
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_isConstant_12540.boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_12356.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 260)) ;
      }
    }
    var_typeList_12280.addAssignOperation (var_parameterType_12216  COMMA_SOURCE_FILE ("actual-parameters.galgas", 262)) ;
    enumerator_12356.gotoNextObject () ;
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_12216)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_outputInputActualParameterAST temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mOutputInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_12216, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 267)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 267)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 267)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 269)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 269)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)) ;
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_outputInputActualParameterAST temp_17 = this ;
    test_16 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_17.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 272)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_outputInputActualParameterAST temp_18 = this ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mOutputInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray19  COMMA_SOURCE_FILE ("actual-parameters.galgas", 273)) ;
    }
  }
  const GGS_outputInputActualParameterAST temp_20 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 276)) ;
  const GGS_outputInputActualParameterAST temp_21 = this ;
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (var_parameterType_12216, var_variableCppName_12241, temp_21.readProperty_mStructAttributeList (), var_typeList_12280, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 278)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputJokerParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_expression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 299)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputJokerParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string constinArgument_inSelector,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 306)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputJokerParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputJokerParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputJokerParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_checkAgainstFormalArgument (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           const GGS_lstring constinArgument_inFormalSelector,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 332)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputJokerParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 335)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 336)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputJokerParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_16519 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)) ;
        const GGS_outputInputJokerParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_16519) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_16519, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)) ;
      }
    }
  }
  GGS_semanticExpressionForGeneration var_expressionGeneration_17025 ;
  const GGS_outputInputJokerParameterAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_expression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionGeneration_17025, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 342)) ;
  {
  const GGS_outputInputJokerParameterAST temp_10 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expressionGeneration_17025.readProperty_mResultType (), temp_10.readProperty_mActualSelector ().readProperty_location (), var_expressionGeneration_17025, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas", 352)) ;
  }
  const GGS_outputInputJokerParameterAST temp_11 = this ;
  GGS_string var_cppVarName_17311 = GGS_string ("joker_").add_operation (temp_11.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 359)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 359)) ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GGS_bool (false), var_cppVarName_17311, var_expressionGeneration_17025, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 360)) ;
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_17311, GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 370)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 366)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputSelfParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 392)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputSelfParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputSelfParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputSelfParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 401)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputSelfParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                          GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 418)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputSelfParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 420)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 420)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 421)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 422)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputSelfParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_20474 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)) ;
        const GGS_outputInputSelfParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_20474) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_20474, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 425)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 425)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 425)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_20695 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 428)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 428)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_20695.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 429)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 429)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_outputInputSelfParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mActualSelector ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 430)) ;
        }
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_20695.readProperty_type ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_outputInputSelfParameterAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_20695.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 435)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 435)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 435)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 437)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 436)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 437)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 434)) ;
        }
      }
      ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GGS_string ("ioObject"), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 443)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 439)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_outputInputSelfParameterAST temp_16 = this ;
    GenericArray <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mActualSelector ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 446)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualExistingVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualExistingVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                                const GGS_string constinArgument_inSelector,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 470)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualExistingVariableParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualExistingVariableParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualExistingVariableParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 479)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      const GGS_lstring constinArgument_inFormalSelector,
                                                                                      const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                      const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                      GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 496)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualExistingVariableParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 498)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 498)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 499)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 499)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 497)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualExistingVariableParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 501)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_24113 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 501)) ;
        const GGS_inputActualExistingVariableParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_24113) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_24113, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)) ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_parameterType_24392 ;
  GGS_string var_targetVariableCppName_24417 ;
  {
  const GGS_inputActualExistingVariableParameterAST temp_9 = this ;
  GGS_string joker_24445 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_24392, var_targetVariableCppName_24417, joker_24445, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 504)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_24392)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_inputActualExistingVariableParameterAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_24392, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 513)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 513)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 513)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 514)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 514)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 514)), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 512)) ;
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    const GGS_inputActualExistingVariableParameterAST temp_14 = this ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 517)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_inputActualExistingVariableParameterAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("actual-parameters.galgas", 518)) ;
    }
  }
  const GGS_inputActualExistingVariableParameterAST temp_17 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 521)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_25172 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualExistingVariableParameterAST temp_18 = this ;
  UpEnumerator_lstringlist enumerator_25210 (temp_18.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_25210.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_25336 ;
    GGS_string var_nameForCheckingFormalParameterUsing_25371 ;
    {
    GGS_unifiedTypeMapEntry joker_25320 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_25210.current_mValue (HERE), joker_25320, var_targetVariableCppName_25336, var_nameForCheckingFormalParameterUsing_25371, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 525)) ;
    }
    var_poisonedVarCppNameList_25172.addAssignOperation (var_targetVariableCppName_25336, var_nameForCheckingFormalParameterUsing_25371  COMMA_SOURCE_FILE ("actual-parameters.galgas", 531)) ;
    enumerator_25210.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_24392, var_targetVariableCppName_24417, var_poisonedVarCppNameList_25172, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 533)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfPropertyParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfPropertyParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                            const GGS_string constinArgument_inSelector,
                                                                            Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 560)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfPropertyParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfPropertyParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 569)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  const GGS_lstring constinArgument_inFormalSelector,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                  const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                  GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                  GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 587)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 589)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 589)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 590)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 590)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 588)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualSelfPropertyParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 592)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_28174 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 592)) ;
        const GGS_inputActualSelfPropertyParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_28174) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_28174, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 593)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 593)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 593)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_28374 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 596)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 596)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_propertiesAreMutable (var_selfAvailable_28374.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 597)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 597)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_inputActualSelfPropertyParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 598)) ;
        }
      }
      GGS_propertyMap var_propertyMap_28620 = extensionGetter_definition (var_selfAvailable_28374.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).readProperty_propertyMap () ;
      GGS_unifiedTypeMapEntry var_parameterType_28749 ;
      const GGS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GGS_AccessControl joker_28740_2 ; // Joker input parameter
      GGS_bool joker_28740_1 ; // Joker input parameter
      var_propertyMap_28620.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_28740_2, joker_28740_1, var_parameterType_28749, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)) ;
      const GGS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GGS_string var_targetVariableCppName_28774 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 602)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 603)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_28749)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_inputActualSelfPropertyParameterAST temp_16 = this ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_28749, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 607)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 607)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 607)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 608)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 608)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 608)), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 606)) ;
        }
      }
      GGS__32_stringlist var_poisonedVarCppNameList_29357 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfPropertyParameterAST temp_18 = this ;
      UpEnumerator_lstringlist enumerator_29397 (temp_18.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_29397.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_29531 ;
        GGS_string var_nameForCheckingFormalParameterUsing_29568 ;
        {
        GGS_unifiedTypeMapEntry joker_29513 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_29397.current_mValue (HERE), joker_29513, var_targetVariableCppName_29531, var_nameForCheckingFormalParameterUsing_29568, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 613)) ;
        }
        var_poisonedVarCppNameList_29357.addAssignOperation (var_targetVariableCppName_29531, var_nameForCheckingFormalParameterUsing_29568  COMMA_SOURCE_FILE ("actual-parameters.galgas", 619)) ;
        enumerator_29397.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_28749, var_targetVariableCppName_28774, var_poisonedVarCppNameList_29357, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 621)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_inputActualSelfPropertyParameterAST temp_19 = this ;
    GenericArray <FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (temp_19.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray20  COMMA_SOURCE_FILE ("actual-parameters.galgas", 628)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 652)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 661)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 678)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 681)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 681)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 679)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualSelfParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 683)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_32491 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 683)) ;
        const GGS_inputActualSelfParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_32491) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_32491, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 684)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 684)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 684)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_32691 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 687)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 687)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_32691.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 688)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 688)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_inputActualSelfParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mSelfLocation (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 689)) ;
        }
      }
      GGS_string var_targetVariableCppName_32915 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_32691.readProperty_type ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_inputActualSelfParameterAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mSelfLocation (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_32691.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 697)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 696)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 697)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)) ;
        }
      }
      GGS__32_stringlist var_poisonedVarCppNameList_33390 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfParameterAST temp_16 = this ;
      UpEnumerator_lstringlist enumerator_33430 (temp_16.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_33430.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_33564 ;
        GGS_string var_nameForCheckingFormalParameterUsing_33601 ;
        {
        GGS_unifiedTypeMapEntry joker_33546 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_33430.current_mValue (HERE), joker_33546, var_targetVariableCppName_33564, var_nameForCheckingFormalParameterUsing_33601, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 702)) ;
        }
        var_poisonedVarCppNameList_33390.addAssignOperation (var_targetVariableCppName_33564, var_nameForCheckingFormalParameterUsing_33601  COMMA_SOURCE_FILE ("actual-parameters.galgas", 708)) ;
        enumerator_33430.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_selfAvailable_32691.readProperty_type (), var_targetVariableCppName_32915, var_poisonedVarCppNameList_33390, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 710)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_inputActualSelfParameterAST temp_17 = this ;
    GenericArray <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas", 717)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 742)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewVariableParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewVariableParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 751)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 769)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 772)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 773)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 770)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualNewVariableParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 775)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_36601 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 775)) ;
        const GGS_inputActualNewVariableParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_36601) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_36601, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 776)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 776)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 776)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_inputActualNewVariableParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_36888 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 780)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_36888)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_inputActualNewVariableParameterAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_36888, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 783)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 783)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 783)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 785)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 784)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 785)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 782)) ;
        }
      }
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_15 = this ;
  const GGS_inputActualNewVariableParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_37355 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 789)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 789)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 789)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 789)) ;
  {
  const GGS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GGS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_37355, var_targetVariableCppName_37355, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 790)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_37355, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 798)) ;
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 802)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_inputActualNewVariableParameterAST temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas", 803)) ;
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 806)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_38293 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewVariableParameterAST temp_23 = this ;
  UpEnumerator_lstringlist enumerator_38331 (temp_23.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_38331.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_38457 ;
    GGS_string var_nameForCheckingFormalParameterUsing_38492 ;
    {
    GGS_unifiedTypeMapEntry joker_38441 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_38331.current_mValue (HERE), joker_38441, var_targetVariableCppName_38457, var_nameForCheckingFormalParameterUsing_38492, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 810)) ;
    }
    var_poisonedVarCppNameList_38293.addAssignOperation (var_targetVariableCppName_38457, var_nameForCheckingFormalParameterUsing_38492  COMMA_SOURCE_FILE ("actual-parameters.galgas", 816)) ;
    enumerator_38331.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_37355, var_poisonedVarCppNameList_38293, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 818)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewConstantParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewConstantParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 847)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewConstantParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewConstantParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 856)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 874)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 876)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 876)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 876)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 878)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 877)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 878)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualNewConstantParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 880)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_41452 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 880)) ;
        const GGS_inputActualNewConstantParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_41452) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_41452, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_inputActualNewConstantParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_41739 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 885)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_41739)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_inputActualNewConstantParameterAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_41739, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 888)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 888)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 888)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 889)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 889)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 889)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 887)) ;
        }
      }
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_15 = this ;
  const GGS_inputActualNewConstantParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_42198 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 893)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 893)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 893)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 893)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 893)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 893)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_42198, var_targetVariableCppName_42198, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 895)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    {
    const GGS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_42198, var_targetVariableCppName_42198, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 902)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_42198, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 910)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 915)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_inputActualNewConstantParameterAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("actual-parameters.galgas", 916)) ;
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 919)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_43359 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewConstantParameterAST temp_26 = this ;
  UpEnumerator_lstringlist enumerator_43397 (temp_26.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_43397.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_43523 ;
    GGS_string var_nameForCheckingFormalParameterUsing_43558 ;
    {
    GGS_unifiedTypeMapEntry joker_43507 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_43397.current_mValue (HERE), joker_43507, var_targetVariableCppName_43523, var_nameForCheckingFormalParameterUsing_43558, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 923)) ;
    }
    var_poisonedVarCppNameList_43359.addAssignOperation (var_targetVariableCppName_43523, var_nameForCheckingFormalParameterUsing_43558  COMMA_SOURCE_FILE ("actual-parameters.galgas", 929)) ;
    enumerator_43397.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_42198, var_poisonedVarCppNameList_43359, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 931)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputSingleJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputSingleJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 957)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputSingleJokerActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputSingleJokerActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 966)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 983)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 985)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 985)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 987)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 984)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 989)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_46678 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 989)) ;
        const GGS_inputSingleJokerActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_46678) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_46678, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 990)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 990)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 990)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_9 = this ;
      GGS_string var_cppVarName_46877 = GGS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 992)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 992)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 992)) ;
      GGS__32_stringlist var_poisonedVarCppNameList_47009 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputSingleJokerActualParameterAST temp_10 = this ;
      UpEnumerator_lstringlist enumerator_47049 (temp_10.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_47049.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_47183 ;
        GGS_string var_nameForCheckingFormalParameterUsing_47220 ;
        {
        GGS_unifiedTypeMapEntry joker_47165 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_47049.current_mValue (HERE), joker_47165, var_targetVariableCppName_47183, var_nameForCheckingFormalParameterUsing_47220, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 996)) ;
        }
        var_poisonedVarCppNameList_47009.addAssignOperation (var_targetVariableCppName_47183, var_nameForCheckingFormalParameterUsing_47220  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1002)) ;
        enumerator_47049.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_46877, var_poisonedVarCppNameList_47009, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1004)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string /* constinArgument_inSelector */,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1031)))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1037)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           const GGS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1053)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1055)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1055)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1055)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1056)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1056)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1056)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1054)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_inputJokerActualParameterAST temp_3 = this ;
    const GGS_inputJokerActualParameterAST temp_4 = this ;
    GGS_string var_cppVarName_50187 = GGS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1058)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 1058)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1058)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1058)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas", 1058)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1058)) ;
    ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_50187, GGS__32_stringlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1060)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_string & ioArgument_ioImplementation,
                                                                              GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                              GGS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GGS_string & outArgument_outCppName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 34)) ;
  const GGS_outputActualParameterForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 35)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GGS_string & /* ioArgument_ioImplementation */,
                                                                                   GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                   GGS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterForGeneration temp_0 = this ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_2403 (temp_0.readProperty_mTypeList ()) ;
  while (enumerator_2403.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2403.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 49)) ;
    enumerator_2403.gotoNextObject () ;
  }
  const GGS_outputInputActualParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mOutputInputVariableCppName () ;
  const GGS_outputInputActualParameterForGeneration temp_2 = this ;
  UpEnumerator_lstringlist enumerator_2531 (temp_2.readProperty_mStructAttributeList ()) ;
  while (enumerator_2531.hasCurrentObject ()) {
    outArgument_outCppName.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_2531.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)) ;
    enumerator_2531.gotoNextObject () ;
  }
  {
  const GGS_outputInputActualParameterForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mOutputInputVariableCppName () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 55)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GGS_string & /* ioArgument_ioImplementation */,
                                                                             GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                             GGS_stringlist & ioArgument_ioOutputVariableList,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppName,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualParameterForGeneration temp_0 = this ;
  outArgument_outCppName = temp_0.readProperty_mInputActualCppName () ;
  const GGS_inputActualParameterForGeneration temp_1 = this ;
  ioArgument_ioOutputVariableList.addAssignOperation (temp_1.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 69)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 70)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GGS_string & ioArgument_ioImplementation,
                                                                            GGS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                            GGS_stringlist & ioArgument_ioOutputVariableList,
                                                                            GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GGS_string & outArgument_outCppName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83)) ;
  const GGS_inputJokerParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mInputActualCppName () ;
  const GGS_inputJokerParameterForGeneration temp_2 = this ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (GGS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)) ;
  const GGS_inputJokerParameterForGeneration temp_3 = this ;
  ioArgument_ioJokerParametersToReleaseList.addAssignOperation (temp_3.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 86)) ;
  const GGS_inputJokerParameterForGeneration temp_4 = this ;
  ioArgument_ioOutputVariableList.addAssignOperation (temp_4.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 97)) ;
  {
  const GGS_semanticBlockInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 98)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 106)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument_ioImplementation */,
                                                                                     GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument_ioImplementation */,
                                                                                GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputJokerParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas", 128)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 129)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 129)) ;
      const GGS_inputJokerParameterForGeneration temp_3 = this ;
      UpEnumerator__32_stringlist enumerator_5843 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_5843.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_5843.current_mValue_31_ (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 131)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_5843.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 132)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 132)) ;
        enumerator_5843.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 134)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputActualParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas", 143)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)) ;
      const GGS_inputActualParameterForGeneration temp_3 = this ;
      UpEnumerator__32_stringlist enumerator_6546 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_6546.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_6546.current_mValue_31_ (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 146)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_6546.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)) ;
        enumerator_6546.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 149)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkextensionSetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionSetterName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList var_descendantClasses_7449 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 181)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_7527 (var_descendantClasses_7449) ;
  while (enumerator_7527.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_7575 = extensionGetter_definition (enumerator_7527.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 183)).readProperty_typeName () ;
    GGS_lstringlist var_overridingMethods_7644 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_7575.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 184)) ;
    GGS_bool var_found_7754 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_7777 (var_overridingMethods_7644) ;
    bool bool_0 = var_found_7754.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 186)).isValidAndTrue () ;
    if (enumerator_7777.hasCurrentObject () && bool_0) {
      while (enumerator_7777.hasCurrentObject () && bool_0) {
        var_found_7754 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionSetterName.readProperty_string ().objectCompare (enumerator_7777.current_mValue (HERE).readProperty_string ())) ;
        enumerator_7777.gotoNextObject () ;
        if (enumerator_7777.hasCurrentObject ()) {
          bool_0 = var_found_7754.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 186)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_7754.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 189)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_7527.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 190)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 190)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_7575.readProperty_string (), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 191)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.readProperty_location (), GGS_string ("an abstract extension method '").add_operation (constinArgument_inAbstractExtensionSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 200)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 200)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 200)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 201)).add_operation (var_descendantClassName_7575.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 202)).add_operation (GGS_string ("' does not implement this method"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 202)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 200)) ;
        }
      }
    }
    enumerator_7527.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionMethodDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionMethodName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList var_descendantClasses_9057 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 218)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_9135 (var_descendantClasses_9057) ;
  while (enumerator_9135.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_9183 = extensionGetter_definition (enumerator_9135.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 220)).readProperty_typeName () ;
    GGS_lstringlist var_overridingMethods_9252 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_9183.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 221)) ;
    GGS_bool var_found_9362 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_9385 (var_overridingMethods_9252) ;
    bool bool_0 = var_found_9362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 223)).isValidAndTrue () ;
    if (enumerator_9385.hasCurrentObject () && bool_0) {
      while (enumerator_9385.hasCurrentObject () && bool_0) {
        var_found_9362 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionMethodName.readProperty_string ().objectCompare (enumerator_9385.current_mValue (HERE).readProperty_string ())) ;
        enumerator_9385.gotoNextObject () ;
        if (enumerator_9385.hasCurrentObject ()) {
          bool_0 = var_found_9362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 223)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_9362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 226)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_9135.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 227)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 227)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_9183.readProperty_string (), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 228)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.readProperty_location (), GGS_string ("an abstract extension method '").add_operation (constinArgument_inAbstractExtensionMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 237)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 237)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 237)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 238)).add_operation (var_descendantClassName_9183.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 239)).add_operation (GGS_string ("' does not implement this method"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 239)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 237)) ;
        }
      }
    }
    enumerator_9135.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionGetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionGetterName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionGetterListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList var_descendantClasses_10665 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 255)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_10743 (var_descendantClasses_10665) ;
  while (enumerator_10743.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_10791 = extensionGetter_definition (enumerator_10743.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 257)).readProperty_typeName () ;
    GGS_lstringlist var_overridingReaders_10860 = extensionGetter_listForKey (constinArgument_inOverridingExtensionGetterListMap, var_descendantClassName_10791.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 258)) ;
    GGS_bool var_found_10970 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_10993 (var_overridingReaders_10860) ;
    bool bool_0 = var_found_10970.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 260)).isValidAndTrue () ;
    if (enumerator_10993.hasCurrentObject () && bool_0) {
      while (enumerator_10993.hasCurrentObject () && bool_0) {
        var_found_10970 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionGetterName.readProperty_string ().objectCompare (enumerator_10993.current_mValue (HERE).readProperty_string ())) ;
        enumerator_10993.gotoNextObject () ;
        if (enumerator_10993.hasCurrentObject ()) {
          bool_0 = var_found_10970.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 260)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_10970.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 263)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_10743.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 264)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 264)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_10791.readProperty_string (), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 265)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.readProperty_location (), GGS_string ("an abstract extension getter '").add_operation (constinArgument_inAbstractExtensionGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 274)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 274)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 274)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 275)).add_operation (var_descendantClassName_10791.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 276)).add_operation (GGS_string ("' does not implement this getter"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 276)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 274)) ;
        }
      }
    }
    enumerator_10743.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("projectGlobalCheckings.galgas", 288)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Perform global checkings"), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 289)) ;
      }
    }
  }
  GGS_descendantClassListMap var_descendantClassListMap_12271 = GGS_descendantClassListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_unifiedTypeMap enumerator_12312 (ioArgument_ioTypeMap) ;
  while (enumerator_12312.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_superType_12346 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_12312.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 295)).readProperty_superType () ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_superType_12346.getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas", 296)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 296)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        extensionSetter_insertKey (var_descendantClassListMap_12271, extensionGetter_definition (var_superType_12346, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 298)).readProperty_typeName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12312.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 297)) ;
        }
      }
    }
    enumerator_12312.gotoNextObject () ;
  }
  GGS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_12658 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionMethodListMap_12732 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_12798 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_12874 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_12958 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionReaderListMap_13032 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_13098 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_13174 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_13258 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionSetterListMap_13332 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_13398 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_13474 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListAST enumerator_13528 (constinArgument_inSemanticDeclarationList) ;
  while (enumerator_13528.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((cPtr_semanticDeclarationAST *) enumerator_13528.current_mSemanticDeclaration (HERE).ptr (), var_abstractExtensionSetterListMap_13258, var_extensionSetterListMap_13332, var_overridingExtensionSetterListMap_13398, var_overridingAbstractExtensionSetterListMap_13474, var_abstractExtensionMethodListMap_12658, var_extensionMethodListMap_12732, var_overridingExtensionMethodListMap_12798, var_overridingAbstractExtensionMethodListMap_12874, var_abstractExtensionGetterListMap_12958, var_extensionReaderListMap_13032, var_overridingExtensionGetterListMap_13098, var_overridingAbstractExtensionGetterListMap_13174, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 317)) ;
    enumerator_13528.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas", 333)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14265 (var_abstractExtensionSetterListMap_13258.readProperty_dictionary ()) ;
      while (enumerator_14265.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14368 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_14404 (enumerator_14265.current_mList (HERE)) ;
        while (enumerator_14404.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14368.setter_insertKey (enumerator_14404.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 338)) ;
          }
          enumerator_14404.gotoNextObject () ;
        }
        enumerator_14265.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14573 (var_extensionSetterListMap_13332.readProperty_dictionary ()) ;
      while (enumerator_14573.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14668 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_14704 (enumerator_14573.current_mList (HERE)) ;
        while (enumerator_14704.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14668.setter_insertKey (enumerator_14704.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 345)) ;
          }
          enumerator_14704.gotoNextObject () ;
        }
        enumerator_14573.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14879 (var_overridingExtensionSetterListMap_13398.readProperty_dictionary ()) ;
      while (enumerator_14879.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14984 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_15020 (enumerator_14879.current_mList (HERE)) ;
        while (enumerator_15020.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14984.setter_insertKey (enumerator_15020.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 352)) ;
          }
          enumerator_15020.gotoNextObject () ;
        }
        enumerator_14879.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15204 (var_overridingAbstractExtensionMethodListMap_12874.readProperty_dictionary ()) ;
      while (enumerator_15204.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_15317 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_15353 (enumerator_15204.current_mList (HERE)) ;
        while (enumerator_15353.hasCurrentObject ()) {
          {
          var_extensionSetterMap_15317.setter_insertKey (enumerator_15353.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 359)) ;
          }
          enumerator_15353.gotoNextObject () ;
        }
        enumerator_15204.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15574 (var_abstractExtensionSetterListMap_13258.readProperty_dictionary ()) ;
      while (enumerator_15574.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_15640 (enumerator_15574.current_mList (HERE)) ;
        while (enumerator_15640.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15574.current_key (HERE), enumerator_15574.current_key (HERE), enumerator_15640.current_mValue (HERE), var_descendantClassListMap_12271, var_overridingExtensionSetterListMap_13398, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 365)) ;
          }
          enumerator_15640.gotoNextObject () ;
        }
        enumerator_15574.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16029 (var_overridingAbstractExtensionSetterListMap_13474.readProperty_dictionary ()) ;
      while (enumerator_16029.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_16105 (enumerator_16029.current_mList (HERE)) ;
        while (enumerator_16105.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_16029.current_key (HERE), enumerator_16029.current_key (HERE), enumerator_16105.current_mValue (HERE), var_descendantClassListMap_12271, var_overridingExtensionSetterListMap_13398, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 378)) ;
          }
          enumerator_16105.gotoNextObject () ;
        }
        enumerator_16029.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16435 (var_abstractExtensionMethodListMap_12658.readProperty_dictionary ()) ;
      while (enumerator_16435.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16538 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_16574 (enumerator_16435.current_mList (HERE)) ;
        while (enumerator_16574.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16538.setter_insertKey (enumerator_16574.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 392)) ;
          }
          enumerator_16574.gotoNextObject () ;
        }
        enumerator_16435.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16743 (var_extensionMethodListMap_12732.readProperty_dictionary ()) ;
      while (enumerator_16743.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16838 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_16874 (enumerator_16743.current_mList (HERE)) ;
        while (enumerator_16874.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16838.setter_insertKey (enumerator_16874.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 399)) ;
          }
          enumerator_16874.gotoNextObject () ;
        }
        enumerator_16743.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17049 (var_overridingExtensionMethodListMap_12798.readProperty_dictionary ()) ;
      while (enumerator_17049.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17154 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_17190 (enumerator_17049.current_mList (HERE)) ;
        while (enumerator_17190.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17154.setter_insertKey (enumerator_17190.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 406)) ;
          }
          enumerator_17190.gotoNextObject () ;
        }
        enumerator_17049.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17374 (var_overridingAbstractExtensionMethodListMap_12874.readProperty_dictionary ()) ;
      while (enumerator_17374.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17487 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_17523 (enumerator_17374.current_mList (HERE)) ;
        while (enumerator_17523.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17487.setter_insertKey (enumerator_17523.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 413)) ;
          }
          enumerator_17523.gotoNextObject () ;
        }
        enumerator_17374.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17744 (var_abstractExtensionMethodListMap_12658.readProperty_dictionary ()) ;
      while (enumerator_17744.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_17810 (enumerator_17744.current_mList (HERE)) ;
        while (enumerator_17810.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17744.current_key (HERE), enumerator_17744.current_key (HERE), enumerator_17810.current_mValue (HERE), var_descendantClassListMap_12271, var_overridingExtensionMethodListMap_12798, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 419)) ;
          }
          enumerator_17810.gotoNextObject () ;
        }
        enumerator_17744.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18188 (var_overridingAbstractExtensionMethodListMap_12874.readProperty_dictionary ()) ;
      while (enumerator_18188.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_18264 (enumerator_18188.current_mList (HERE)) ;
        while (enumerator_18264.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_18188.current_key (HERE), enumerator_18188.current_key (HERE), enumerator_18264.current_mValue (HERE), var_descendantClassListMap_12271, var_overridingExtensionMethodListMap_12798, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 432)) ;
          }
          enumerator_18264.gotoNextObject () ;
        }
        enumerator_18188.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18747 (var_abstractExtensionGetterListMap_12958.readProperty_dictionary ()) ;
      while (enumerator_18747.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18850 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_18886 (enumerator_18747.current_mList (HERE)) ;
        while (enumerator_18886.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18850.setter_insertKey (enumerator_18886.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 448)) ;
          }
          enumerator_18886.gotoNextObject () ;
        }
        enumerator_18747.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19055 (var_extensionReaderListMap_13032.readProperty_dictionary ()) ;
      while (enumerator_19055.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19150 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_19186 (enumerator_19055.current_mList (HERE)) ;
        while (enumerator_19186.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19150.setter_insertKey (enumerator_19186.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 455)) ;
          }
          enumerator_19186.gotoNextObject () ;
        }
        enumerator_19055.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19361 (var_overridingExtensionGetterListMap_13098.readProperty_dictionary ()) ;
      while (enumerator_19361.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19466 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_19502 (enumerator_19361.current_mList (HERE)) ;
        while (enumerator_19502.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19466.setter_insertKey (enumerator_19502.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 462)) ;
          }
          enumerator_19502.gotoNextObject () ;
        }
        enumerator_19361.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19696 (var_abstractExtensionGetterListMap_12958.readProperty_dictionary ()) ;
      while (enumerator_19696.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_19762 (enumerator_19696.current_mList (HERE)) ;
        while (enumerator_19762.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19696.current_key (HERE), enumerator_19696.current_key (HERE), enumerator_19762.current_mValue (HERE), var_descendantClassListMap_12271, var_overridingExtensionGetterListMap_13098, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 468)) ;
          }
          enumerator_19762.gotoNextObject () ;
        }
        enumerator_19696.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_20113 (var_overridingAbstractExtensionGetterListMap_13174.readProperty_dictionary ()) ;
      while (enumerator_20113.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_20189 (enumerator_20113.current_mList (HERE)) ;
        while (enumerator_20189.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_20113.current_key (HERE), enumerator_20113.current_key (HERE), enumerator_20189.current_mValue (HERE), var_descendantClassListMap_12271, var_overridingExtensionGetterListMap_13098, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 481)) ;
          }
          enumerator_20189.gotoNextObject () ;
        }
        enumerator_20113.gotoNextObject () ;
      }
    }
  }
}


