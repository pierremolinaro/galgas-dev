#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

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
//
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//
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
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_40698 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1002)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_selfTypeDefinition_40698.readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas", 1003)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_semanticTypeForGeneration temp_2 = this ;
    result_result = GGS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_40698.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1008)), var_selfTypeDefinition_40698.readProperty_superType () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1006))) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1022)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1022))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1022)) ;
  GGS_string var_code_41839 ;
  {
  const GGS_functionImplementationForGeneration temp_1 = this ;
  const GGS_functionImplementationForGeneration temp_2 = this ;
  const GGS_functionImplementationForGeneration temp_3 = this ;
  const GGS_functionImplementationForGeneration temp_4 = this ;
  const GGS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1024)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1024)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GGS_bool (false), GGS_bool (false), var_code_41839, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1023)) ;
  }
  const GGS_functionImplementationForGeneration temp_6 = this ;
  const GGS_functionImplementationForGeneration temp_7 = this ;
  const GGS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_41839, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1039)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1035))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1050)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1050))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1050)) ;
  GGS_string var_code_42751 ;
  {
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1052)), ioArgument_ioInclusionSet, GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), temp_2.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GGS_bool (true), GGS_bool (false), var_code_42751, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1051)) ;
  }
  const GGS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_42751, GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1067)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1063))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1076)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
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
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1086))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1086)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1096)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1096))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1096)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GGS_stringlist & ioArgument_ioObjcAppProductFileList,
                                                                       GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1108)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1108)).add_operation (GGS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1108))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1108)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1111)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1111)).add_operation (GGS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1111)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_2.readProperty_mObjcCocoaHeader (), GGS_string ("\n\n"), GGS_string ("\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1109)) ;
  }
  const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1121)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121)).add_operation (GGS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121)) ;
  const GGS_lexiqueDeclarationForGeneration temp_4 = this ;
  ioArgument_ioObjcAppProductFileList.addAssign_operation (GGS_string ("lexique-").add_operation (temp_4.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1122)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1122)).add_operation (GGS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1122))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1122)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_5 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_6 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_5.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1125)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1125)).add_operation (GGS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1125)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_6.readProperty_mObjcCocoaImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1123)) ;
  }
  const GGS_lexiqueDeclarationForGeneration temp_7 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_7.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1135)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1135)).add_operation (GGS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1135))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1135)) ;
  const GGS_lexiqueDeclarationForGeneration temp_8 = this ;
  ioArgument_ioSwiftAppProductFileList.addAssign_operation (GGS_string ("lexique-").add_operation (temp_8.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1136)).add_operation (GGS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1136))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1136)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_9 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_10 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_9.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1139)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1139)).add_operation (GGS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1139)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_10.readProperty_mSwiftCocoaImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1137)) ;
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
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1155)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1164)) ;
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
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1175)) ;
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
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1187)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1187))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1187)) ;
  UpEnumerator_wrapperFileMap enumerator_47835 (constinArgument_inFilewrapperFileMap) ;
  while (enumerator_47835.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1189)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1189))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1189)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_47835.current_mIsTextFile (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_47835.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1191))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1191)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_47835.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1193))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1193)) ;
    }
    enumerator_47835.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_48198 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_48198.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_48198.current_mRegularFileMap (HERE), enumerator_48198.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1197)) ;
    }
    enumerator_48198.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_regularFileIndexStringList_48729 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularBinaryContentIndexStringList_48779 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularTextContentIndexStringList_48838 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_directoryIndexStringList_48895 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_48729, var_directoryIndexStringList_48895, var_regularTextContentIndexStringList_48838, var_regularBinaryContentIndexStringList_48779, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1217)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_48729, var_directoryIndexStringList_48895, var_regularTextContentIndexStringList_48838, var_regularBinaryContentIndexStringList_48779, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1225))) ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  UpEnumerator_filewrapperTemplateListForGeneration enumerator_49546 (temp_3.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_49546.hasCurrentObject ()) {
    const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssign_operation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_49546.current_mFilewrapperTemplateName (HERE), enumerator_49546.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1234))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1234)) ;
    enumerator_49546.gotoNextObject () ;
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
  UpEnumerator_wrapperFileMap enumerator_50270 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_50270.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_50270.current_mIsTextFile (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_contents_50357 = GGS_string::class_func_stringWithContentsOfFile (enumerator_50270.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1254)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255)).add_operation (enumerator_50270.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1256)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_50270.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1257)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1257)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1258)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1259)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1259)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_50357.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1261)).objectCompare (GGS_uint (uint32_t (100U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_stringlist var_components_50809 = var_contents_50357.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1262)) ;
            GGS_string var_lastLine_50902 ;
            {
            var_components_50809.setter_popLast (var_lastLine_50902, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1263)) ;
            }
            UpEnumerator_stringlist enumerator_50925 (var_components_50809) ;
            const bool bool_2 = true ;
            if (enumerator_50925.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssign_operation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266)) ;
              while (enumerator_50925.hasCurrentObject () && bool_2) {
                GGS_string var_s_51021 = enumerator_50925.current_mValue (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1268)) ;
                ioArgument_ioImplementation.plusAssign_operation(var_s_51021.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1269)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)) ;
                enumerator_50925.gotoNextObject () ;
              }
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_50902.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1271)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                ioArgument_ioImplementation.plusAssign_operation(var_lastLine_50902.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1272)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1272)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          ioArgument_ioImplementation.plusAssign_operation(var_contents_50357.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1275)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1275)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1277)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_50270.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1278)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1278)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1279)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1280)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1280)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_50270.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1282)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_50270.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1284)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1284)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285)) ;
        ioArgument_ioImplementation.plusAssign_operation(var_contents_50357.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1286)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1286)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1287)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_50270.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1288)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1288)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1290)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1290)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1291)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_data var_contents_52199 = GGS_data::class_func_dataWithContentsOfFile (enumerator_50270.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293)) ;
      ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)).add_operation (enumerator_50270.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)).add_operation (enumerator_50270.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1296)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1296)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1296)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)).add_operation (var_contents_52199.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1297)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)).add_operation (var_contents_52199.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1298)).add_operation (GGS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1298)).add_operation (enumerator_50270.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1299)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1299)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1299)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1299)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1300)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1300)).add_operation (enumerator_50270.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1301)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)).add_operation (enumerator_50270.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1302)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1302)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)).add_operation (var_contents_52199.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1304)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1304)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)).add_operation (enumerator_50270.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1305)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1305)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)) ;
    }
    enumerator_50270.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_53206 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_53206.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_53206.current_lkey (HERE).readProperty_string (), enumerator_53206.current_mWrapperDirectoryIndex (HERE), enumerator_53206.current_mRegularFileMap (HERE), enumerator_53206.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)) ;
    }
    enumerator_53206.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (GGS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1323)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1323)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1323)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1323)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1323)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)) ;
  UpEnumerator_wrapperFileMap enumerator_53813 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_53813.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_53813.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1326)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1326)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)) ;
    enumerator_53813.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1328)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1328)) ;
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (GGS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1333)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1333)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)) ;
  UpEnumerator_wrapperDirectoryMap enumerator_54437 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_54437.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_54437.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)) ;
    enumerator_54437.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1338)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1338)) ;
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1341)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1341)).add_operation (GGS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1341)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1342)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1342)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1342)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1343)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1343)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1344)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1345)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1345)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1345)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1345)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1345)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1346)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1346)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1347)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1347)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1341)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)) ;
  GGS_string var_filewrapperImplementation_55795 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GGS_string::makeEmptyString (), GGS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_55795, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_55795 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368))) ;
  const GGS_filewrapperDeclarationForGeneration temp_5 = this ;
  UpEnumerator_filewrapperTemplateListForGeneration enumerator_56256 (temp_5.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_56256.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_56410 = GGS_string::makeEmptyString () ;
    GGS_uint var_temporaryVariableIndex_56461 = GGS_uint (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_56507 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_56507.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1378))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1378)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_56628 (enumerator_56256.current_mFilewrapperTemplateFormalInputParameters (HERE)) ;
    while (enumerator_56628.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_56507.addAssign_operation (enumerator_56628.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1380)) ;
      enumerator_56628.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_56759 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_56256.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_56410, ioArgument_ioInclusionSet, var_temporaryVariableIndex_56461, var_unusedVariableCppNameSet_56507, var_useColumnMarker_56759, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383)) ;
    }
    const GGS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssign_operation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_56256.current_mFilewrapperTemplateName (HERE), enumerator_56256.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_56507, var_useColumnMarker_56759, var_generatedCodeForInstructionList_56410 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1392))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1392)) ;
    enumerator_56256.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GGS_string & ioArgument_ioHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssign_operation(GGS_string ("class GGS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)) ;
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_58247 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1422)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_primitiveTypeForGeneration temp_4 = this ;
      result_result.plusAssign_operation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_58247.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1426)), var_selfTypeDefinition_58247.readProperty_classFunctionMap (), var_selfTypeDefinition_58247.readProperty_classMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_primitiveTypeForGeneration temp_5 = this ;
    result_result.plusAssign_operation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_58247.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)), var_selfTypeDefinition_58247.readProperty_isConcrete (), var_selfTypeDefinition_58247.readProperty_initializerMap (), var_selfTypeDefinition_58247.readProperty_classFunctionMap (), var_selfTypeDefinition_58247.readProperty_getterMap (), var_selfTypeDefinition_58247.readProperty_setterMap (), var_selfTypeDefinition_58247.readProperty_instanceMethodMap (), var_selfTypeDefinition_58247.readProperty_classMethodMap (), var_selfTypeDefinition_58247.readProperty_readSubscriptMap (), var_selfTypeDefinition_58247.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_58247.readProperty_features (), var_selfTypeDefinition_58247.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_58247.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_58247.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431)) ;
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
  GGS_string var_generatedCode_60075 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467))) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_60176 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_60176.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60176.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_60176.current_mDeclaration (HERE).ptr (), var_generatedCode_60075, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)) ;
      }
    }
    enumerator_60176.gotoNextObject () ;
  }
  var_generatedCode_60075.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_60393 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_60393.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60393.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_generatedCode_60075.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_60393.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)) ;
      }
    }
    enumerator_60393.gotoNextObject () ;
  }
  UpEnumerator_semanticDeclarationListForGeneration enumerator_60584 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_60584.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60584.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_stringset joker_60722 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_60748 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_60584.current_mDeclaration (HERE).ptr (), joker_60722, var_code_60748, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481)) ;
        var_generatedCode_60075.plusAssign_operation(var_code_60748, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)) ;
      }
    }
    enumerator_60584.gotoNextObject () ;
  }
  var_generatedCode_60075.plusAssign_operation(GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_60896 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_60896.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60896.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1487)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_stringset joker_61047 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__61073 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_60896.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_61047, var_headerString_32__61073, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1488)) ;
        var_generatedCode_60075.plusAssign_operation(var_headerString_32__61073, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489)) ;
      }
    }
    enumerator_60896.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1492)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1493)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1494)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.h"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_60075, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1495)) ;
      }
    }
  }
  var_generatedCode_60075 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1508))) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_61842 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_61842.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_61842.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1510)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_generatedCode_60075.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_61842.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)) ;
        GGS_stringset joker_62066 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_62092 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_61842.current_mDeclaration (HERE).ptr (), GGS_unifiedTypeMap::init (inCompiler COMMA_HERE), joker_62066, var_code_62092, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1512)) ;
        var_generatedCode_60075.plusAssign_operation(var_code_62092, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1513)) ;
      }
    }
    enumerator_61842.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1516)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1517)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1518)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.cpp"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_60075, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1519)) ;
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
    // cEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::Up) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_295_.increment () ;
      enumerator_295.gotoNextObject () ;
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
    // cEnumerator_stringlist enumerator_264 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::Up) ;
    while (enumerator_264.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_264.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_264_.increment () ;
      enumerator_264.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const GGS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                              const GGS_lstringlist constinArgument_inRootEntities,
                                              const GGS_string /* constinArgument_inProductDirectory */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 42)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringlist var_undefinedNodeList_2182 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 44)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_2182.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 45)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_s_2299 = GGS_string ("usefulness computation, ").add_operation (var_undefinedNodeList_2182.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 46)).getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 46)).add_operation (GGS_string (" undefined nodes:"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 46)) ;
            UpEnumerator_stringlist enumerator_2391 (var_undefinedNodeList_2182) ;
            while (enumerator_2391.hasCurrentObject ()) {
              var_s_2299.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_2391.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)) ;
              enumerator_2391.gotoNextObject () ;
            }
            TC_Array <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 50)), var_s_2299, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 50)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GGS_lstringlist var_usefullEntityList_2558 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 53)) ;
          GGS_stringset var_usefullEntitySet_2653 = GGS_stringset::class_func_setWithLStringList (var_usefullEntityList_2558  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 54)) ;
          GGS_stringset var_allEntitySet_2733 = GGS_stringset::class_func_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 55))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
          GGS_stringset var_unusedEntities_2822 = var_allEntitySet_2733.substract_operation (var_usefullEntitySet_2653, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)) ;
          GGS_uselessEntityLocationMap var_uselessEntityLocationMap_2907 = GGS_uselessEntityLocationMap::init (inCompiler COMMA_HERE) ;
          UpEnumerator_stringset enumerator_2949 (var_unusedEntities_2822) ;
          while (enumerator_2949.hasCurrentObject ()) {
            GGS_location var_l_2996 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2949.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 59)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_l_2996.objectCompare (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 60)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                TC_Array <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 61)), GGS_string ("unused entity, '").add_operation (enumerator_2949.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)).add_operation (GGS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)).add_operation (GGS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2907.getter_hasKey (var_l_2996.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 63)).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2907.setter_insertKey (var_l_2996.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 64)), enumerator_2949.current_key (HERE), var_l_2996, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)) ;
                  }
                }
              }
            }
            enumerator_2949.gotoNextObject () ;
          }
          UpEnumerator_uselessEntityLocationMap enumerator_3482 (var_uselessEntityLocationMap_2907) ;
          while (enumerator_3482.hasCurrentObject ()) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3482.current_mLocation (HERE), GGS_string ("unused '").add_operation (enumerator_3482.current_mUnusedEntityName (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string ("' entity, due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)) ;
            enumerator_3482.gotoNextObject () ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_getterNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inGetterName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)), constinArgument_inGetterName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_getterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_getterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterNameForUsefulEntitiesGraph ("getterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_getterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_getterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_setterNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inSetterName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)), constinArgument_inSetterName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_setterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_setterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterNameForUsefulEntitiesGraph ("setterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_setterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_setterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_methodNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inMethodName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_methodNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_methodNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_methodNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_methodNameForUsefulEntitiesGraph ("methodNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_methodNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_methodNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_initializerNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                            const GGS_string & constinArgument_inParameterSignature,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)).add_operation (constinArgument_inParameterSignature, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_initializerNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_initializerNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GGS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_initializerNameForUsefulEntitiesGraph (operand0,
                                                         operand1,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_initializerNameForUsefulEntitiesGraph ("initializerNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_initializerNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       2,
                                                                                       functionArgs_initializerNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'equatableNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_equatableNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 103)).add_operation (GGS_string (" equatable"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 103)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_equatableNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_equatableNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_equatableNameForUsefulEntitiesGraph (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_equatableNameForUsefulEntitiesGraph ("equatableNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_equatableNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_equatableNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inLexiqueName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 109)), constinArgument_inLexiqueName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_lexiqueNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_lexiqueNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_lexiqueNameForUsefulEntitiesGraph ("lexiqueNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_lexiqueNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_grammarNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inGrammarName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 115)), constinArgument_inGrammarName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_grammarNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_grammarNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_grammarNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_grammarNameForUsefulEntitiesGraph ("grammarNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_grammarNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_grammarNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_syntaxNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inSyntaxName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 121)), constinArgument_inSyntaxName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_syntaxNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxNameForUsefulEntitiesGraph ("syntaxNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_syntaxNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_optionNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inOptionName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 127)), constinArgument_inOptionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_optionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_optionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_optionNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_optionNameForUsefulEntitiesGraph ("optionNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_optionNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_optionNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFilewrapperName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 133)), constinArgument_inFilewrapperName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GGS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_filewrapperNameForUsefulEntitiesGraph (operand0,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperNameForUsefulEntitiesGraph ("filewrapperNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       1,
                                                                                       functionArgs_filewrapperNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFilewrapperName,
                                                                    const GGS_lstring & constinArgument_inTemplateName,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 140)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 140)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 140)), constinArgument_inTemplateName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                                           const GGS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_filewrapperTemplateNameForUsefulEntitiesGraph (operand0,
                                                                 operand1,
                                                                 inCompiler
                                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperTemplateNameForUsefulEntitiesGraph ("filewrapperTemplateNameForUsefulEntitiesGraph",
                                                                                               functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph,
                                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                                               2,
                                                                                               functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_functionNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFunctionName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 146)), constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_functionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_functionNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionNameForUsefulEntitiesGraph ("functionNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_functionNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_functionNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_procedureNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inProcName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 152)), constinArgument_inProcName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_procedureNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_procedureNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_procedureNameForUsefulEntitiesGraph (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_procedureNameForUsefulEntitiesGraph ("procedureNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_procedureNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_procedureNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_typeNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 158)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_typeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_typeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_typeNameForUsefulEntitiesGraph (operand0,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_typeNameForUsefulEntitiesGraph ("typeNameForUsefulEntitiesGraph",
                                                                                functionWithGenericHeader_typeNameForUsefulEntitiesGraph,
                                                                                & kTypeDescriptor_GALGAS_lstring,
                                                                                1,
                                                                                functionArgs_typeNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_afterNameForUsefulEntitiesGraph (const GGS_location & constinArgument_inLocation,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("after"), constinArgument_inLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_afterNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_afterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GGS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_location operand0 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_afterNameForUsefulEntitiesGraph (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_afterNameForUsefulEntitiesGraph ("afterNameForUsefulEntitiesGraph",
                                                                                 functionWithGenericHeader_afterNameForUsefulEntitiesGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_afterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_beforeNameForUsefulEntitiesGraph (const GGS_location & constinArgument_inLocation,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("before"), constinArgument_inLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_beforeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_beforeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_location operand0 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_beforeNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_beforeNameForUsefulEntitiesGraph ("beforeNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_beforeNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_beforeNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_rootRuleNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFileExtension,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("rule .").add_operation (constinArgument_inFileExtension.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 176)), constinArgument_inFileExtension.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_rootRuleNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_rootRuleNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_rootRuleNameForUsefulEntitiesGraph ("rootRuleNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_rootRuleNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 183)) ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 184)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8519 ;
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8519, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 199)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8878 ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8878, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 209)) ;
  GGS_unifiedTypeMapEntry var_leftType_8959 = var_leftExpression_8519.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_9006 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8519.ptr ())) ;
    if (nullptr == var_left_9006.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_9079 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_8878.ptr ())) ;
      if (nullptr == var_right_9079.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_9006.readProperty_mValue ().right_shift_operation (var_right_9079.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 225)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_9348 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8519.ptr ())) ;
      if (nullptr == var_left_9348.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_9421 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_8878.ptr ())) ;
        if (nullptr == var_right_9421.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_9348.readProperty_mValue ().right_shift_operation (var_right_9421.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_8959, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 234)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 234)) COMMA_SOURCE_FILE ("expression-additive.galgas", 234)).operator_not (SOURCE_FILE ("expression-additive.galgas", 234)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_rightShiftExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_8959, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 235)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_8959, temp_9.readProperty_mOperatorLocation (), var_leftExpression_8519, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas", 244)), var_rightExpression_8878, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 255)) ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 256)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_11347 ;
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11347, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 271)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_11706 ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_11706, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 281)) ;
  GGS_unifiedTypeMapEntry var_leftType_11787 = var_leftExpression_11347.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_11834 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11347.ptr ())) ;
    if (nullptr == var_left_11834.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_11907 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_11706.ptr ())) ;
      if (nullptr == var_right_11907.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_11834.readProperty_mValue ().left_shift_operation (var_right_11907.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 297)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_12176 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11347.ptr ())) ;
      if (nullptr == var_left_12176.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_12249 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_11706.ptr ())) ;
        if (nullptr == var_right_12249.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_12176.readProperty_mValue ().left_shift_operation (var_right_12249.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_11787, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 306)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 306)) COMMA_SOURCE_FILE ("expression-additive.galgas", 306)).operator_not (SOURCE_FILE ("expression-additive.galgas", 306)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_leftShiftExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_11787, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 307)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_11787, temp_9.readProperty_mOperatorLocation (), var_leftExpression_11347, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas", 316)), var_rightExpression_11706, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 327)) ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 328)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14182 ;
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14182, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 343)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14518 ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14182.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14518, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 353)) ;
  {
  const GGS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14182.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 364)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 364)) COMMA_SOURCE_FILE ("expression-additive.galgas", 364)), GGS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14182, var_rightExpression_14518, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 363)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_14824 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14182.ptr ())) ;
    if (nullptr == var_leftBigint_14824.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_14904 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14518.ptr ())) ;
      if (nullptr == var_rightBigint_14904.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_14824.readProperty_mValue ().add_operation (var_rightBigint_14904.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 376)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14182.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14182, GGS_binaryOperator::class_func_addNoOverflow (SOURCE_FILE ("expression-additive.galgas", 383)), var_rightExpression_14518, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 394)) ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 395)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16568 ;
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16568, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 409)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16904 ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16568.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16904, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 419)) ;
  {
  const GGS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16568.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 430)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("expression-additive.galgas", 430)) COMMA_SOURCE_FILE ("expression-additive.galgas", 430)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16568, var_rightExpression_16904, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 429)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_17204 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_16568.ptr ())) ;
    if (nullptr == var_leftBigint_17204.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_17284 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_16904.ptr ())) ;
      if (nullptr == var_rightBigint_17284.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17204.readProperty_mValue ().add_operation (var_rightBigint_17284.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 442)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16568.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_16568, GGS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas", 449)), var_rightExpression_16904, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 460)) ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 461)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_18958 ;
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_18958, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 476)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_19294 ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_18958.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19294, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 486)) ;
  {
  const GGS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_18958.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 497)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 497)) COMMA_SOURCE_FILE ("expression-additive.galgas", 497)), GGS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_18958, var_rightExpression_19294, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 496)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_19600 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_18958.ptr ())) ;
    if (nullptr == var_leftBigint_19600.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_19680 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19294.ptr ())) ;
      if (nullptr == var_rightBigint_19680.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_19600.readProperty_mValue ().substract_operation (var_rightBigint_19680.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 509)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_18958.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_18958, GGS_binaryOperator::class_func_subNoOverflow (SOURCE_FILE ("expression-additive.galgas", 516)), var_rightExpression_19294, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 527)) ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 528)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_21344 ;
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_21344, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 542)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_21680 ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_21344.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_21680, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 552)) ;
  {
  const GGS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_21344.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 563)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("expression-additive.galgas", 563)) COMMA_SOURCE_FILE ("expression-additive.galgas", 563)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_21344, var_rightExpression_21680, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 562)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_21980 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_21344.ptr ())) ;
    if (nullptr == var_leftBigint_21980.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_22060 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_21680.ptr ())) ;
      if (nullptr == var_rightBigint_22060.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_21980.readProperty_mValue ().substract_operation (var_rightBigint_22060.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 575)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_21344.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_21344, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas", 582)), var_rightExpression_21680, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperatorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 625)) ;
  GGS_string var_leftTemporaryOperand_23994 ;
  const GGS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_23994, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 627)) ;
  GGS_string var_rightTemporaryOperand_24176 ;
  const GGS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_24176, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 629)) ;
  GGS_string var_operatorString_24239 ;
  GGS_bool var_hasCompilerOption_24266 ;
  const GGS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GGS_binaryOperator::Enumeration::invalid:
    break ;
  case GGS_binaryOperator::Enumeration::enum_rightShift:
    {
      var_operatorString_24239 = GGS_string ("right_shift_operation") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_leftShift:
    {
      var_operatorString_24239 = GGS_string ("left_shift_operation") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_add:
    {
      var_operatorString_24239 = GGS_string ("add_operation") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_addNoOverflow:
    {
      var_operatorString_24239 = GGS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_sub:
    {
      var_operatorString_24239 = GGS_string ("substract_operation") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_subNoOverflow:
    {
      var_operatorString_24239 = GGS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_and:
    {
      var_operatorString_24239 = GGS_string ("operator_and") ;
      var_hasCompilerOption_24266 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_or:
    {
      var_operatorString_24239 = GGS_string ("operator_or") ;
      var_hasCompilerOption_24266 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_xor:
    {
      var_operatorString_24239 = GGS_string ("operator_xor") ;
      var_hasCompilerOption_24266 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24239 = GGS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation:
    {
      var_operatorString_24239 = GGS_string ("multiply_operation") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation:
    {
      var_operatorString_24239 = GGS_string ("divide_operation") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24239 = GGS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_modulo_5F_operation:
    {
      var_operatorString_24239 = GGS_string ("modulo_operation") ;
      var_hasCompilerOption_24266 = GGS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_23994.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)).add_operation (var_operatorString_24239, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)) ;
  outArgument_outCppExpression.plusAssign_operation(var_rightTemporaryOperand_24176, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 678)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_hasCompilerOption_24266.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outCppExpression.plusAssign_operation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 680)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) ;
      }
    }
  }
  const GGS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 683)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 683)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 103)) ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 104)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_5428 ;
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5428, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 118)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_5764 ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5428.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5764, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 128)) ;
  {
  const GGS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5428.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 139)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 139)) COMMA_SOURCE_FILE ("expression-and.galgas", 139)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5428, var_rightExpression_5764, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 138)) ;
  }
  const GGS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5428.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5428, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 150)), var_rightExpression_5764, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 160)) ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 161)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7430 ;
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7430, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 175)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_7766 ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7430.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7766, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 185)) ;
  {
  const GGS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7430.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 196)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 196)) COMMA_SOURCE_FILE ("expression-and.galgas", 196)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7430, var_rightExpression_7766, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 195)) ;
  }
  const GGS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7430.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7430, var_rightExpression_7766, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GGS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 227)) ;
  GGS_string var_leftTemporaryOperand_9229 ;
  const GGS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9229, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 229)) ;
  GGS_string var_testVar_9286 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_bool ").add_operation (var_testVar_9286, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (var_leftTemporaryOperand_9229, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_9286, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 241)) ;
  }
  GGS_string var_rightTemporaryOperand_9767 ;
  const GGS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9767, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_9286.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (var_rightTemporaryOperand_9767, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 251)) ;
  outArgument_outCppExpression = var_testVar_9286 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 144)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_5948 ;
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 162)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5948, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 159)) ;
  const GGS_testDynamicClassInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_5997 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 169)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5948.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 171)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 171)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_6248 = var_castType_5997 ;
      GGS_bool var_found_6275 = GGS_bool (ComparisonKind::equal, var_t_6248.objectCompare (var_expression_5948.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).isValid ()) {
        uint32_t variant_6315 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).uintValue () ;
        bool loop_6315 = true ;
        while (loop_6315) {
          loop_6315 = var_found_6275.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6248, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).isValid () ;
          if (loop_6315) {
            loop_6315 = var_found_6275.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6248, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).boolValue () ;
          }
          if (loop_6315 && (0 == variant_6315)) {
            loop_6315 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 175)) ;
          }
          if (loop_6315) {
            variant_6315 -- ;
            var_t_6248 = extensionGetter_definition (var_t_6248, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 177)).readProperty_superType () ;
            var_found_6275 = GGS_bool (ComparisonKind::equal, var_t_6248.objectCompare (var_expression_5948.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_6275.operator_not (SOURCE_FILE ("expression-is-as.galgas", 180)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_testDynamicClassInExpressionAST temp_4 = this ;
          const GGS_testDynamicClassInExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (extensionGetter_definition (var_expression_5948.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 181)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    TC_Array <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5948.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5948.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)) ;
  }
  const GGS_testDynamicClassInExpressionAST temp_8 = this ;
  const GGS_testDynamicClassInExpressionAST temp_9 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5948, temp_9.readProperty_mTypeComparisonKind (), var_castType_5997, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 202)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_8244 ;
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 220)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8244, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 217)) ;
  const GGS_castInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_8294 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 227)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_8244.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 229)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 229)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_8541 = var_type_8294 ;
      GGS_bool var_found_8564 = GGS_bool (ComparisonKind::equal, var_t_8541.objectCompare (var_expression_8244.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).isValid ()) {
        uint32_t variant_8604 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).uintValue () ;
        bool loop_8604 = true ;
        while (loop_8604) {
          loop_8604 = var_found_8564.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8541, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).isValid () ;
          if (loop_8604) {
            loop_8604 = var_found_8564.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8541, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).boolValue () ;
          }
          if (loop_8604 && (0 == variant_8604)) {
            loop_8604 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 233)) ;
          }
          if (loop_8604) {
            variant_8604 -- ;
            var_t_8541 = extensionGetter_definition (var_t_8541, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 235)).readProperty_superType () ;
            var_found_8564 = GGS_bool (ComparisonKind::equal, var_t_8541.objectCompare (var_expression_8244.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_8564.operator_not (SOURCE_FILE ("expression-is-as.galgas", 238)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_castInExpressionAST temp_4 = this ;
          const GGS_castInExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (extensionGetter_definition (var_expression_8244.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 239)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_8244.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 243)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("object"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_8244.readProperty_mLocation (), GGS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_8244.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 245)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas", 244)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_8244.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 249)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("object"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_castInExpressionAST temp_10 = this ;
      const GGS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GGS_extractObjectInExpressionForGeneration::init_21__21__21__21_ (var_type_8294, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_8244, temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_castInExpressionAST temp_12 = this ;
    const GGS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GGS_castInExpressionForGeneration::init_21__21__21__21__21_ (var_type_8294, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_8244, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_8294, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GGS_string var_typeNameRepresentation_10544 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 284)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 284)) ;
  GGS_string var_receiverExpression_10837 ;
  const GGS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 286)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 294)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mTypeComparisonKind ().enumValue ()) {
  case GGS_dynamicTypeComparisonKind::Enumeration::invalid:
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_equal:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_receiverExpression_10837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (GGS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (var_typeNameRepresentation_10544, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 298)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 299)) ;
    }
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_inherited:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_10544, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 301)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 302)).add_operation (var_receiverExpression_10837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)).add_operation (GGS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)) ;
    }
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_strictlyInherited:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool ((").add_operation (var_receiverExpression_10837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (GGS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (var_typeNameRepresentation_10544, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 306)).add_operation (GGS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (var_typeNameRepresentation_10544, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 308)).add_operation (var_receiverExpression_10837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)).add_operation (GGS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 322)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 323)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 324)) ;
  GGS_string var_receiverExpression_12307 ;
  const GGS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_12307, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 326)) ;
  const GGS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (var_receiverExpression_12307, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 337)) ;
  }
  const GGS_castInExpressionForGeneration temp_3 = this ;
  const GGS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)).add_operation (var_receiverExpression_12307, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (var_receiverExpression_12307, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)).add_operation (GGS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 339)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 346)) ;
  }
  const GGS_castInExpressionForGeneration temp_5 = this ;
  const GGS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GGS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 349)).add_operation (var_receiverExpression_12307, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GGS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 347)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 352)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 354)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 355)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 356)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 374)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)) ;
  GGS_string var_receiverExpression_14237 ;
  const GGS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_14237, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 377)) ;
  const GGS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GGS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (GGS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (var_receiverExpression_14237, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 181)) ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8777 ;
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8777, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 197)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9117 ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8777.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9117, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 207)) ;
  GGS_bool var_isEquatable_9163 = extensionGetter_definition (var_leftExpression_8777.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 217)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("expression-comparison.galgas", 217)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 217)) ;
  GGS_bool var_isComparable_9255 = extensionGetter_definition (var_leftExpression_8777.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 218)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("expression-comparison.galgas", 218)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 218)) ;
  GGS_bool var_isReferenceEquatable_9349 = extensionGetter_definition (var_leftExpression_8777.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 219)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("expression-comparison.galgas", 219)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 219)) ;
  GGS_bool var_operatorIsAvailable_9465 ;
  GGS_string var_operatorName_9499 ;
  const GGS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
    {
      var_operatorName_9499 = GGS_string ("==") ;
      var_operatorIsAvailable_9465 = var_isEquatable_9163 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
    {
      var_operatorName_9499 = GGS_string ("!=") ;
      var_operatorIsAvailable_9465 = var_isEquatable_9163 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_9499 = GGS_string ("<=") ;
      var_operatorIsAvailable_9465 = var_isComparable_9255 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_9499 = GGS_string ("<") ;
      var_operatorIsAvailable_9465 = var_isComparable_9255 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_9499 = GGS_string (">=") ;
      var_operatorIsAvailable_9465 = var_isComparable_9255 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_9499 = GGS_string (">") ;
      var_operatorIsAvailable_9465 = var_isComparable_9255 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_9499 = GGS_string ("===") ;
      var_operatorIsAvailable_9465 = var_isReferenceEquatable_9349 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_9499 = GGS_string ("!==") ;
      var_operatorIsAvailable_9465 = var_isReferenceEquatable_9349 ;
    }
    break ;
  }
  {
  const GGS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (var_operatorIsAvailable_9465, var_operatorName_9499, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8777, var_rightExpression_9117, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 249)) ;
  }
  const GGS_comparisonExpressionAST temp_4 = this ;
  const GGS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8777, temp_5.readProperty_mComparison (), var_rightExpression_9117, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 285)) ;
  GGS_string var_leftTemporaryOperand_11707 ;
  const GGS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11707, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 287)) ;
  GGS_string var_rightTemporaryOperand_11913 ;
  const GGS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_11913, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 295)) ;
  GGS_string var_operatorName_11973 ;
  const GGS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_11973 = GGS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_11973 = GGS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_11973 = GGS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_11973 = GGS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_11973 = GGS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_11973 = GGS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_operatorName_11973, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (var_leftTemporaryOperand_11707, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (var_rightTemporaryOperand_11913, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_4509 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_4509.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4509.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)) ;
    enumerator_4509.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_5152 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 125)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5152 COMMA_SOURCE_FILE ("expression-function-call.galgas", 126)) ;
  }
  GGS_functionSignature var_functionSignature_5453 ;
  GGS_unifiedTypeMapEntry var_resultType_5501 ;
  GGS_bool var_isInternal_5527 ;
  const GGS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_5453, var_resultType_5501, var_isInternal_5527, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 128)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_5527.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_functionCallExpressionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_5592 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_functionCallExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)).objectCompare (var_procDeclarationLocation_5592.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_functionCallExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_5592.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_functionCallExpressionAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_5453.getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_functionCallExpressionAST temp_10 = this ;
      const GGS_functionCallExpressionAST temp_11 = this ;
      const GGS_functionCallExpressionAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (var_functionSignature_5453.getter_count (SOURCE_FILE ("expression-function-call.galgas", 144)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 145)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 145)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 145)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 143)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_6315 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_functionCallExpressionAST temp_14 = this ;
    UpEnumerator_functionSignature enumerator_6414 (var_functionSignature_5453) ;
    UpEnumerator_actualOutputArgumentList enumerator_6451 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_6414.hasCurrentObject () && enumerator_6451.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_6790 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6451.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6414.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6790, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 151)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_6414.current (HERE).readProperty_mFormalArgumentType (), var_expression_6790.readProperty_mResultType (), enumerator_6451.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6790, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 160)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_6414.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_6451.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_6414.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_6414.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 168)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_7106 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 167)) ;
          TC_Array <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_7106) ;
          inCompiler->emitSemanticError (enumerator_6451.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_7106, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)) ;
        }
      }
      var_semanticExpressionListForGeneration_6315.addAssign_operation (var_expression_6790  COMMA_SOURCE_FILE ("expression-function-call.galgas", 174)) ;
      enumerator_6414.gotoNextObject () ;
      enumerator_6451.gotoNextObject () ;
    }
    const GGS_functionCallExpressionAST temp_19 = this ;
    const GGS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_5501, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_6315, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 201)) ;
  const GGS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 203))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 203)) ;
  GGS_stringlist var_parameterList_8681 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_functionCallExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_8721 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_8721.hasCurrentObject ()) {
    GGS_string var_parameter_8892 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8721.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_8892, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 207)) ;
    var_parameterList_8681.addAssign_operation (var_parameter_8892  COMMA_SOURCE_FILE ("expression-function-call.galgas", 208)) ;
    enumerator_8721.gotoNextObject () ;
  }
  const GGS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 210)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 210)) ;
  UpEnumerator_stringlist enumerator_9044 (var_parameterList_8681) ;
  while (enumerator_9044.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_9044.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 212)) ;
    enumerator_9044.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 214)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 214)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)) ;
  const GGS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 63)) ;
  const GGS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 64)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_getterCallExpressionAST temp_1 = this ;
    test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiver ().ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_getterCallExpressionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 79)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_4289 ;
  const GGS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 85)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4289, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 82)) ;
  GGS_unifiedTypeMapEntry var_receiverType_4343 = var_receiverExpression_4289.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_getterCallExpressionAST temp_5 = this ;
    const GGS_getterMap_2E_element var_aGetter_4457 = extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 93)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 93)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_bool test_7 = GGS_bool (ComparisonKind::notEqual, var_aGetter_4457.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())) ;
        if (GalgasBool::boolTrue == test_7.boolEnum ()) {
          test_7 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_6 = test_7.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_getterCallExpressionAST temp_8 = this ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_aGetter_4457.readProperty_mGetterNameThatObsoletesInvokationName ()) ;
          inCompiler->emitSemanticError (temp_8.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray9  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 95)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_getterCallExpressionAST temp_11 = this ;
        GGS_bool test_12 = temp_11.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (GalgasBool::boolTrue == test_12.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_13 = this ;
          test_12 = extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)).readProperty_propertyMap ().getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)) ;
        }
        GGS_bool test_14 = test_12 ;
        if (GalgasBool::boolTrue == test_14.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_15 = this ;
          test_14 = GGS_bool (ComparisonKind::equal, temp_15.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 101)).objectCompare (GGS_uint (uint32_t (0U)))) ;
        }
        test_10 = test_14.boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_getterCallExpressionAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mExpressionLocation (), GGS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray17  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 102)) ;
        }
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_getterCallExpressionAST temp_19 = this ;
        test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 105)).objectCompare (var_aGetter_4457.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 105)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_getterCallExpressionAST temp_20 = this ;
          const GGS_getterCallExpressionAST temp_21 = this ;
          const GGS_getterCallExpressionAST temp_22 = this ;
          TC_Array <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_21.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (var_aGetter_4457.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 108)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)).add_operation (temp_22.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 109)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 109)), fixItArray23  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5604 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
        const GGS_getterCallExpressionAST temp_24 = this ;
        UpEnumerator_actualOutputArgumentList enumerator_5685 (temp_24.readProperty_mActualArgumentList ()) ;
        UpEnumerator_functionSignature enumerator_5790 (var_aGetter_4457.readProperty_mArgumentTypeList ()) ;
        while (enumerator_5685.hasCurrentObject () && enumerator_5790.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_exp_6157 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5685.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5790.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_6157, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 114)) ;
          GalgasBool test_25 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_25) {
            test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_5790.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5685.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_25) {
              GGS_string temp_26 ;
              const GalgasBool test_27 = GGS_bool (ComparisonKind::notEqual, enumerator_5790.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_27) {
                temp_26 = enumerator_5790.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
              }else if (GalgasBool::boolFalse == test_27) {
                temp_26 = GGS_string::makeEmptyString () ;
              }
              GGS_string var_s_6264 = GGS_string ("!").add_operation (temp_26, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
              TC_Array <FixItDescription> fixItArray28 ;
              appendFixItActions (fixItArray28, kFixItReplace, var_s_6264) ;
              inCompiler->emitSemanticError (enumerator_5685.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_6264, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)), fixItArray28  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5790.current_mFormalArgumentType (HERE), var_exp_6157.readProperty_mResultType (), enumerator_5685.current_mEndOfExpressionLocation (HERE), var_exp_6157, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)) ;
          }
          var_constructorEffectiveParameterList_5604.addAssign_operation (var_exp_6157  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 128)) ;
          enumerator_5685.gotoNextObject () ;
          enumerator_5790.gotoNextObject () ;
        }
        const GGS_getterCallExpressionAST temp_29 = this ;
        GGS_string temp_30 ;
        const GalgasBool test_31 = GGS_bool (ComparisonKind::equal, var_aGetter_4457.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          const GGS_getterCallExpressionAST temp_32 = this ;
          temp_30 = temp_32.readProperty_mGetterName ().readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_31) {
          temp_30 = var_aGetter_4457.readProperty_mGetterNameThatObsoletesInvokationName () ;
        }
        outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_aGetter_4457.readProperty_mReturnedType (), temp_29.readProperty_mGetterName ().readProperty_location (), var_aGetter_4457.readProperty_mKind (), var_receiverExpression_4289, GGS_stringlist::init (inCompiler COMMA_HERE), temp_30, var_constructorEffectiveParameterList_5604, var_aGetter_4457.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        GalgasBool test_33 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_33) {
          GGS_bool test_34 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_galgas_34_ () ;
          if (GalgasBool::boolTrue == test_34.boolEnum ()) {
            const GGS_getterCallExpressionAST temp_35 = this ;
            test_34 = GGS_bool (ComparisonKind::equal, temp_35.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 141)).objectCompare (GGS_uint (uint32_t (0U)))) ;
          }
          GGS_bool test_36 = test_34 ;
          if (GalgasBool::boolTrue == test_36.boolEnum ()) {
            test_36 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument.readProperty_value ()) ;
          }
          test_33 = test_36.boolEnum () ;
          if (GalgasBool::boolTrue == test_33) {
            const GGS_getterCallExpressionAST temp_37 = this ;
            TC_Array <FixItDescription> fixItArray38 ;
            fixItArray38.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GGS_string ("getter with no argument, remove parenthesis"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)) ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_39 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_39) {
      const GGS_getterCallExpressionAST temp_40 = this ;
      test_39 = GGS_bool (ComparisonKind::equal, temp_40.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 147)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_39) {
        const GGS_getterCallExpressionAST temp_41 = this ;
        const GGS_propertyMap_2E_element var_prop_7553 = extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)).readProperty_propertyMap ().readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)).readProperty_propertyMap ().readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_39 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_39) {
          const GGS_getterCallExpressionAST temp_42 = this ;
          extensionMethod_checkGetAccess (var_prop_7553.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_42.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)) ;
          const GGS_getterCallExpressionAST temp_43 = this ;
          const GGS_getterCallExpressionAST temp_44 = this ;
          outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_7553.readProperty_mPropertyType (), temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4289, temp_44.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
          GalgasBool test_45 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_45) {
            const GGS_getterCallExpressionAST temp_46 = this ;
            test_45 = temp_46.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (GalgasBool::boolTrue == test_45) {
              const GGS_getterCallExpressionAST temp_47 = this ;
              TC_Array <FixItDescription> fixItArray48 ;
              inCompiler->emitSemanticError (temp_47.readProperty_mExpressionLocation (), GGS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray48  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 156)) ;
            }
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_39) {
      GGS_uint var_matchingReaderCount_8256 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_49 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_49) {
        test_49 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 161)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas", 161)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_49) {
          GGS_functionSignature var_getterFormalArgumentTypeList_8375 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          GGS_bool var_hasCompilerArgument_8422 = GGS_bool (true) ;
          GGS_unifiedTypeMapEntry var_returnedType_8461 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 164)) ;
          GGS_methodKind var_kind_8514 = GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 165)) ;
          GGS_stringlist var_fieldList_8576 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_obsoletedByGetter_8604 = GGS_string::makeEmptyString () ;
          UpEnumerator_typedPropertyList enumerator_8672 (extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 168)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_8672.hasCurrentObject ()) {
            GGS_unifiedTypeMapEntry var_propertyType_8746 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (extensionGetter_definition (enumerator_8672.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 169)).readProperty_typeName ().readProperty_string (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 169)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 169)) ;
            GGS_getterMap var_aMap_8866 = extensionGetter_definition (var_propertyType_8746, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 170)).readProperty_getterMap () ;
            const GGS_getterCallExpressionAST temp_50 = this ;
            const cMapElement_getterMap * objectArray_8919 = (const cMapElement_getterMap *) var_aMap_8866.readAccessForWithInstruction (temp_50.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_8919) {
                macroValidSharedObject (objectArray_8919, cMapElement_getterMap) ;
              GalgasBool test_51 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_51) {
                test_51 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_propertyType_8746, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 172)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_8672.current_name (HERE).readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_51) {
                  var_matchingReaderCount_8256.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 173)) ;
                  var_getterFormalArgumentTypeList_8375 = objectArray_8919->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_8422 = objectArray_8919->mProperty_mHasCompilerArgument ;
                  var_returnedType_8461 = objectArray_8919->mProperty_mReturnedType ;
                  const GGS_getterCallExpressionAST temp_52 = this ;
                  var_receiverExpression_4289 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_8461, temp_52.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4289, enumerator_8672.current_name (HERE).readProperty_string (), inCompiler COMMA_HERE) ;
                  var_kind_8514 = objectArray_8919->mProperty_mKind ;
                  var_obsoletedByGetter_8604 = objectArray_8919->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
            }
            enumerator_8672.gotoNextObject () ;
          }
          GalgasBool test_53 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_53) {
            test_53 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_8256.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_53) {
              const GGS_getterCallExpressionAST temp_54 = this ;
              const GGS_getterCallExpressionAST temp_55 = this ;
              TC_Array <FixItDescription> fixItArray56 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).add_operation (GGS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)), fixItArray56  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)) ;
              var_getterFormalArgumentTypeList_8375.drop () ; // Release error dropped variable
              var_hasCompilerArgument_8422.drop () ; // Release error dropped variable
              var_returnedType_8461.drop () ; // Release error dropped variable
              var_kind_8514.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_53) {
            GalgasBool test_57 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_57) {
              test_57 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_8256.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_57) {
                GGS_string var_s_10035 = GGS_string::makeEmptyString () ;
                UpEnumerator_stringlist enumerator_10057 (var_fieldList_8576) ;
                while (enumerator_10057.hasCurrentObject ()) {
                  var_s_10035.plusAssign_operation(enumerator_10057.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 196)) ;
                  if (enumerator_10057.hasNextObject ()) {
                    var_s_10035.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 197)) ;
                  }
                  enumerator_10057.gotoNextObject () ;
                }
                const GGS_getterCallExpressionAST temp_58 = this ;
                const GGS_getterCallExpressionAST temp_59 = this ;
                TC_Array <FixItDescription> fixItArray60 ;
                inCompiler->emitSemanticError (temp_58.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (temp_59.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (GGS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (var_s_10035, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 201)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 201)), fixItArray60  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)) ;
                var_getterFormalArgumentTypeList_8375.drop () ; // Release error dropped variable
                var_hasCompilerArgument_8422.drop () ; // Release error dropped variable
                var_returnedType_8461.drop () ; // Release error dropped variable
                var_kind_8514.drop () ; // Release error dropped variable
              }
            }
          }
          GalgasBool test_61 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_61) {
            const GGS_getterCallExpressionAST temp_62 = this ;
            test_61 = GGS_bool (ComparisonKind::notEqual, temp_62.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 205)).objectCompare (var_getterFormalArgumentTypeList_8375.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 205)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_61) {
              const GGS_getterCallExpressionAST temp_63 = this ;
              const GGS_getterCallExpressionAST temp_64 = this ;
              const GGS_getterCallExpressionAST temp_65 = this ;
              TC_Array <FixItDescription> fixItArray66 ;
              inCompiler->emitSemanticError (temp_63.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_64.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (var_getterFormalArgumentTypeList_8375.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 208)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (temp_65.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 209)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)), fixItArray66  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_61) {
            GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11043 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
            const GGS_getterCallExpressionAST temp_67 = this ;
            UpEnumerator_actualOutputArgumentList enumerator_11126 (temp_67.readProperty_mActualArgumentList ()) ;
            UpEnumerator_functionSignature enumerator_11233 (var_getterFormalArgumentTypeList_8375) ;
            while (enumerator_11126.hasCurrentObject () && enumerator_11233.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_exp_11619 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11126.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11233.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11619, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 214)) ;
              GalgasBool test_68 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_68) {
                test_68 = GGS_bool (ComparisonKind::notEqual, enumerator_11233.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11126.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_68) {
                  GGS_string temp_69 ;
                  const GalgasBool test_70 = GGS_bool (ComparisonKind::notEqual, enumerator_11233.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_70) {
                    temp_69 = enumerator_11233.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 224)) ;
                  }else if (GalgasBool::boolFalse == test_70) {
                    temp_69 = GGS_string::makeEmptyString () ;
                  }
                  GGS_string var_s_11732 = GGS_string ("!").add_operation (temp_69, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 224)) ;
                  TC_Array <FixItDescription> fixItArray71 ;
                  appendFixItActions (fixItArray71, kFixItReplace, var_s_11732) ;
                  inCompiler->emitSemanticError (enumerator_11126.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11732, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)), fixItArray71  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11233.current_mFormalArgumentType (HERE), var_exp_11619.readProperty_mResultType (), enumerator_11126.current_mEndOfExpressionLocation (HERE), var_exp_11619, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 227)) ;
              }
              var_constructorEffectiveParameterList_11043.addAssign_operation (var_exp_11619  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)) ;
              enumerator_11126.gotoNextObject () ;
              enumerator_11233.gotoNextObject () ;
            }
            GalgasBool test_72 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_72) {
              GGS_bool test_73 = GGS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_8604.objectCompare (GGS_string::makeEmptyString ())) ;
              if (GalgasBool::boolTrue == test_73.boolEnum ()) {
                test_73 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
              }
              test_72 = test_73.boolEnum () ;
              if (GalgasBool::boolTrue == test_72) {
                const GGS_getterCallExpressionAST temp_74 = this ;
                TC_Array <FixItDescription> fixItArray75 ;
                appendFixItActions (fixItArray75, kFixItReplace, var_obsoletedByGetter_8604) ;
                inCompiler->emitSemanticError (temp_74.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray75  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 231)) ;
              }
            }
            const GGS_getterCallExpressionAST temp_76 = this ;
            GGS_string temp_77 ;
            const GalgasBool test_78 = GGS_bool (ComparisonKind::equal, var_obsoletedByGetter_8604.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_78) {
              const GGS_getterCallExpressionAST temp_79 = this ;
              temp_77 = temp_79.readProperty_mGetterName ().readProperty_string () ;
            }else if (GalgasBool::boolFalse == test_78) {
              temp_77 = var_obsoletedByGetter_8604 ;
            }
            outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_8461, temp_76.readProperty_mGetterName ().readProperty_location (), var_kind_8514, var_receiverExpression_4289, var_fieldList_8576, temp_77, var_constructorEffectiveParameterList_11043, var_hasCompilerArgument_8422, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_49) {
        GalgasBool test_80 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_80) {
          test_80 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 244)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_80) {
            const GGS_getterCallExpressionAST temp_81 = this ;
            TC_Array <FixItDescription> fixItArray82 ;
            inCompiler->emitSemanticError (temp_81.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)).add_operation (GGS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)), fixItArray82  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 245)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_80) {
          const GGS_getterCallExpressionAST temp_83 = this ;
          const GGS_getterCallExpressionAST temp_84 = this ;
          TC_Array <FixItDescription> fixItArray85 ;
          appendFixItActions (fixItArray85, kFixItReplace, extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)).readProperty_getterMap ().getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 252))) ;
          inCompiler->emitSemanticError (temp_83.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4343, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).add_operation (temp_84.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).add_operation (GGS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)), fixItArray85  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 249)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 283)) ;
  GGS_string var_receiverCppName_14537 ;
  const GGS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_14537, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 285)) ;
  GGS_stringlist var_getterArgumentCppNameList_14603 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_getterCallExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_14644 (temp_2.readProperty_mActualArgumentList ()) ;
  while (enumerator_14644.hasCurrentObject ()) {
    GGS_string var_argumentCppName_14862 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14644.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_14862, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 295)) ;
    var_getterArgumentCppNameList_14603.addAssign_operation (var_argumentCppName_14862  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 302)) ;
    enumerator_14644.gotoNextObject () ;
  }
  const GGS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_getterCallExpressionForGeneration temp_4 = this ;
      GGS_unifiedTypeMapEntry var_baseType_15058 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_15058, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 308)) ;
      GGS_bool var_searching_15173 = GGS_bool (true) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 310)).isValid ()) {
        uint32_t variant_15196 = GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 310)).uintValue () ;
        bool loop_15196 = true ;
        while (loop_15196) {
          loop_15196 = var_searching_15173.isValid () ;
          if (loop_15196) {
            loop_15196 = var_searching_15173.boolValue () ;
          }
          if (loop_15196 && (0 == variant_15196)) {
            loop_15196 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 310)) ;
          }
          if (loop_15196) {
            variant_15196 -- ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_15058, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 311)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 311)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 311)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  const GGS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_15058, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 312)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 312)).readProperty_getterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 312)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    var_baseType_15058 = extensionGetter_definition (var_baseType_15058, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 313)).readProperty_superType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  var_searching_15173 = GGS_bool (false) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              var_searching_15173 = GGS_bool (false) ;
            }
          }
        }
      }
      const GGS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_15058, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_14537 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)) ;
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 323)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionForGeneration temp_11 = this ;
          const GGS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GGS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 324)).add_operation (GGS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 324)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (var_receiverCppName_14537, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        const GGS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)) ;
        const GGS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GGS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).add_operation (var_receiverCppName_14537, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_14537 ;
      const GGS_getterCallExpressionForGeneration temp_15 = this ;
      UpEnumerator_stringlist enumerator_16410 (temp_15.readProperty_mFieldList ()) ;
      while (enumerator_16410.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GGS_string (".readProperty_").add_operation (enumerator_16410.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)) ;
        enumerator_16410.gotoNextObject () ;
      }
      const GGS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 335)) ;
      const GGS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssign_operation(GGS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_16707 (var_getterArgumentCppNameList_14603) ;
  while (enumerator_16707.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_16707.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)) ;
    if (enumerator_16707.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)) ;
    }
    enumerator_16707.gotoNextObject () ;
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::equal, var_getterArgumentCppNameList_14603.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 342)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 345)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 345)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_18) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_getterCallExpressionForGeneration temp_22 = this ;
      test_21 = temp_22.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 348)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 348)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)) ;
    }
  }
  const GGS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_initializerCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_initializerCallAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_7685 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_7685, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 198)) ;
      }
    }
  }
  const GGS_initializerCallAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 200)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_instanciedType_8593 ;
  GGS_lstring var_initializerName_8628 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8692 ;
  {
  const GGS_initializerCallAST temp_0 = this ;
  const GGS_initializerCallAST temp_1 = this ;
  const GGS_initializerCallAST temp_2 = this ;
  routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mExpressions (), temp_2.readProperty_mEndOfExpressions (), var_instanciedType_8593, var_initializerName_8628, var_constructorEffectiveParameterList_8692, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 213)) ;
  }
  GGS_lstring var_typeUsefulnessName_8769 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_instanciedType_8593, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 228)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 228)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_8769 COMMA_SOURCE_FILE ("expression-initializer.galgas", 229)) ;
  }
  const GGS_initializerCallAST temp_3 = this ;
  outArgument_outExpression = GGS_initializerCallForGeneration::init_21__21__21__21_ (var_instanciedType_8593, temp_3.readProperty_mEndOfExpressions (), var_initializerName_8628.readProperty_string (), var_constructorEffectiveParameterList_8692, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerInvocation?&??&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                           const GGS_lstring constinArgument_inTypeName,
                                                                                           const GGS_actualOutputArgumentList constinArgument_inInvocationArguments,
                                                                                           const GGS_location constinArgument_inEndOfExpressions,
                                                                                           GGS_unifiedTypeMapEntry & outArgument_outInstanciedType,
                                                                                           GGS_lstring & outArgument_outInitializerName,
                                                                                           GGS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanciedType.drop () ; // Release 'out' argument
  outArgument_outInitializerName.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outInstanciedType = constinArgument_inType ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstanciedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 259)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outInstanciedType.getter_isNull (SOURCE_FILE ("expression-initializer.galgas", 261)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-initializer.galgas", 262)) ;
      outArgument_outInstanciedType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outInitializerName.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_unifiedTypeDefinition var_instanciedTypeDefinition_10427 = extensionGetter_definition (outArgument_outInstanciedType, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 266)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_instanciedTypeDefinition_10427.readProperty_isConcrete ().operator_not (SOURCE_FILE ("expression-initializer.galgas", 267)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot instanciate an abstract class"), fixItArray4  COMMA_SOURCE_FILE ("expression-initializer.galgas", 268)) ;
        outArgument_outInstanciedType.drop () ; // Release error dropped variable
        outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
        outArgument_outInitializerName.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_lstring var_nameForUsefulness_10741 = function_initializerNameForUsefulEntitiesGraph (var_instanciedTypeDefinition_10427.readProperty_typeName (), extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 273)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_10741 COMMA_SOURCE_FILE ("expression-initializer.galgas", 277)) ;
      }
      outArgument_outInitializerName = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 279)), constinArgument_inEndOfExpressions, inCompiler COMMA_HERE) ;
      GGS_initializerMap var_initializerMap_11130 = var_instanciedTypeDefinition_10427.readProperty_initializerMap () ;
      GGS_functionSignature var_formalSignature_11216 ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_initializerMap_11130.getter_hasKey (outArgument_outInitializerName.readProperty_string () COMMA_SOURCE_FILE ("expression-initializer.galgas", 282)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_initializerMap_11130.method_searchKey (outArgument_outInitializerName, var_formalSignature_11216, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 283)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GGS_string var_s_11385 = GGS_string ("@").add_operation (var_instanciedTypeDefinition_10427.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 285)).add_operation (GGS_string ("init ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 285)) ;
        UpEnumerator_actualOutputArgumentList enumerator_11465 (constinArgument_inInvocationArguments) ;
        while (enumerator_11465.hasCurrentObject ()) {
          var_s_11385.plusAssign_operation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 288)) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_11465.current (HERE).readProperty_mActualSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_s_11385.plusAssign_operation(enumerator_11465.current (HERE).readProperty_mActualSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 290)) ;
            }
          }
          if (enumerator_11465.hasNextObject ()) {
            var_s_11385.plusAssign_operation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 293)) ;
          }
          enumerator_11465.gotoNextObject () ;
        }
        var_s_11385.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 295)) ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (outArgument_outInitializerName.readProperty_location (), GGS_string ("the ").add_operation (var_s_11385, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 297)).add_operation (GGS_string (" initializer is not declared"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 297)), fixItArray7  COMMA_SOURCE_FILE ("expression-initializer.galgas", 296)) ;
        var_formalSignature_11216.drop () ; // Release error dropped variable
      }
      outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      UpEnumerator_actualOutputArgumentList enumerator_11941 (constinArgument_inInvocationArguments) ;
      UpEnumerator_functionSignature enumerator_11987 (var_formalSignature_11216) ;
      while (enumerator_11941.hasCurrentObject () && enumerator_11987.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_exp_12351 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11941.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11987.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_12351, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 304)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11987.current (HERE).readProperty_mFormalArgumentType (), var_exp_12351.readProperty_mResultType (), enumerator_11941.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_12351, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 313)) ;
        }
        outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_12351  COMMA_SOURCE_FILE ("expression-initializer.galgas", 319)) ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_11987.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11941.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_11987.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = enumerator_11987.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 322)) ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_12735 = GGS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 321)) ;
            TC_Array <FixItDescription> fixItArray11 ;
            appendFixItActions (fixItArray11, kFixItReplace, var_s_12735) ;
            inCompiler->emitSemanticError (enumerator_11941.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_12735, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 326)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 326)), fixItArray11  COMMA_SOURCE_FILE ("expression-initializer.galgas", 325)) ;
          }
        }
        enumerator_11941.gotoNextObject () ;
        enumerator_11987.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerCallForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 348)) ;
  GGS_stringlist var_parameterList_13956 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_initializerCallForGeneration temp_1 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_13985 (temp_1.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_13985.hasCurrentObject ()) {
    GGS_string var_parameter_14215 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_13985.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14215, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 351)) ;
    var_parameterList_13956.addAssign_operation (var_parameter_14215  COMMA_SOURCE_FILE ("expression-initializer.galgas", 358)) ;
    enumerator_13985.gotoNextObject () ;
  }
  const GGS_initializerCallForGeneration temp_2 = this ;
  const GGS_initializerCallForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 360)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 360)).add_operation (temp_3.readProperty_initializerName ().getter_identifierRepresentation (SOURCE_FILE ("expression-initializer.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 361)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 361)) ;
  UpEnumerator_stringlist enumerator_14467 (var_parameterList_13956) ;
  while (enumerator_14467.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_14467.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 364)) ;
    enumerator_14467.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 366)) COMMA_SOURCE_FILE ("expression-initializer.galgas", 366)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 367)) ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" COMMA_HERE)"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 368)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpressionGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_exprGeneration_5838 ;
  const GGS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exprGeneration_5838, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 149)) ;
  GGS_unifiedTypeMapEntry var_expressionType_5928 = var_exprGeneration_5838.readProperty_mResultType () ;
  GGS_propertyMap var_propertyMap_5980 = extensionGetter_definition (var_expressionType_5928, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 160)).readProperty_propertyMap () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_structPropertyAccessExpressionAST temp_2 = this ;
    const GGS_propertyMap_2E_element var_prop_6045 = var_propertyMap_5980.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_propertyMap_5980.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionForGeneration *> (var_exprGeneration_5838.ptr ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          const GGS_structPropertyAccessExpressionAST temp_4 = this ;
          const GGS_structPropertyAccessExpressionAST temp_5 = this ;
          GGS_unifiedTypeMapEntry joker_6270_3 ; // Joker input parameter
          GGS_string joker_6270_2 ; // Joker input parameter
          GGS_string joker_6270_1 ; // Joker input parameter
          extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_4.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 164)), temp_5.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_6270_3, joker_6270_2, joker_6270_1, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 163)) ;
          }
        }
      }
      const GGS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_prop_6045.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_6.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 168)) ;
      const GGS_structPropertyAccessExpressionAST temp_7 = this ;
      const GGS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpressionGeneration = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_6045.readProperty_mPropertyType (), temp_7.readProperty_operatorLocation (), var_exprGeneration_5838, temp_8.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_6639 = extensionGetter_definition (var_expressionType_5928, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 177)).readProperty_getterMap () ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_structPropertyAccessExpressionAST temp_10 = this ;
      const GGS_getterMap_2E_element var_theGetter_6702 = var_getterMap_6639.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_getterMap_6639.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_9 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_9) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_theGetter_6702.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 179)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_structPropertyAccessExpressionAST temp_12 = this ;
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_propertyName ().readProperty_location (), GGS_string ("for being called as a property read, the getter should have no formal argument (has ").add_operation (var_theGetter_6702.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 182)).getter_string (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 181)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 182)), fixItArray13  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 180)) ;
            outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          const GGS_structPropertyAccessExpressionAST temp_14 = this ;
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::equal, var_theGetter_6702.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_propertyName ().readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = var_theGetter_6702.readProperty_mGetterNameThatObsoletesInvokationName () ;
          }
          outArgument_outExpressionGeneration = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_theGetter_6702.readProperty_mReturnedType (), temp_14.readProperty_propertyName ().readProperty_location (), var_theGetter_6702.readProperty_mKind (), var_exprGeneration_5838, GGS_stringlist::init (inCompiler COMMA_HERE), temp_15, GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_theGetter_6702.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GGS_string var_s_7577 = GGS_string ("undefined property, undefined getter") ;
      UpEnumerator_propertyMap enumerator_7644 (var_propertyMap_5980) ;
      while (enumerator_7644.hasCurrentObject ()) {
        var_s_7577.plusAssign_operation(GGS_string ("\n  -- property: ").add_operation (enumerator_7644.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 202)) ;
        enumerator_7644.gotoNextObject () ;
      }
      UpEnumerator_getterMap enumerator_7745 (var_getterMap_6639) ;
      while (enumerator_7745.hasCurrentObject ()) {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_7745.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 205)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_s_7577.plusAssign_operation(GGS_string ("\n  -- getter: ").add_operation (enumerator_7745.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 206)) ;
          }
        }
        enumerator_7745.gotoNextObject () ;
      }
      const GGS_structPropertyAccessExpressionAST temp_19 = this ;
      TC_Array <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_propertyName ().readProperty_location (), var_s_7577, fixItArray20  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 209)) ;
      outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@propertyAccessExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_propertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 231)) ;
  GGS_string var_operand_9047 ;
  const GGS_propertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_9047, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 233)) ;
  outArgument_outCppExpression = var_operand_9047.add_operation (GGS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 241)) ;
  const GGS_propertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression.plusAssign_operation(temp_2.readProperty_structFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 242)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 242)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subscriptReadAccessExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subscriptReadAccessExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_9969 (temp_0.readProperty_actualArgumentList ()) ;
  while (enumerator_9969.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_9969.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 262)) ;
    enumerator_9969.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subscriptReadAccessExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_11089 ;
  const GGS_subscriptReadAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 280)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11089, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 277)) ;
  GGS_unifiedTypeMapEntry var_expressionType_11135 = var_expression_11089.readProperty_mResultType () ;
  const GGS_subscriptReadAccessExpressionAST temp_1 = this ;
  GGS_string var_invocationSignature_11222 = extensionGetter_subscriptSignature (temp_1.readProperty_actualArgumentList (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 288)) ;
  GGS_subscriptMap var_subscriptMap_11334 = extensionGetter_definition (var_expressionType_11135, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 290)).readProperty_readSubscriptMap () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_subscriptMap_2E_element var_aSubscript_11405 = var_subscriptMap_11334.readSubscript__3F_ (var_invocationSignature_11222, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_subscriptMap_11334.readSubscript__3F_ (var_invocationSignature_11222, inCompiler COMMA_HERE).isValuated ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_11509 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_subscriptReadAccessExpressionAST temp_3 = this ;
      UpEnumerator_functionSignature enumerator_11621 (var_aSubscript_11405.readProperty_argumentTypeList ()) ;
      UpEnumerator_actualOutputArgumentList enumerator_11657 (temp_3.readProperty_actualArgumentList ()) ;
      while (enumerator_11621.hasCurrentObject () && enumerator_11657.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_12015 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11657.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11621.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12015, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 295)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11621.current (HERE).readProperty_mFormalArgumentType (), var_expression_12015.readProperty_mResultType (), enumerator_11657.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_12015, inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 304)) ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_11621.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11657.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_string temp_5 ;
            const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_11621.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              temp_5 = enumerator_11621.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 312)) ;
            }else if (GalgasBool::boolFalse == test_6) {
              temp_5 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_12349 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 311)) ;
            TC_Array <FixItDescription> fixItArray7 ;
            appendFixItActions (fixItArray7, kFixItReplace, var_s_12349) ;
            inCompiler->emitSemanticError (enumerator_11657.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_12349, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 315)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 315)), fixItArray7  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 315)) ;
          }
        }
        var_semanticExpressionListForGeneration_11509.addAssign_operation (var_expression_12015  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 318)) ;
        enumerator_11621.gotoNextObject () ;
        enumerator_11657.gotoNextObject () ;
      }
      const GGS_subscriptReadAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GGS_subscriptReadAccessExpressionForGeneration::init_21__21__21__21__21_ (var_aSubscript_11405.readProperty_valueType (), temp_8.readProperty_endOfArgsLocation (), var_expression_11089, var_invocationSignature_11222, var_semanticExpressionListForGeneration_11509, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_subscriptReadAccessExpressionAST temp_9 = this ;
    TC_Array <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_endOfArgsLocation (), GGS_string ("unknown subscript signature"), fixItArray10  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 329)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subscriptReadAccessExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subscriptReadAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 351)) ;
  GGS_string var_operand_14240 ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_14240, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 353)) ;
  GGS__5B_string_5D_ var_subscriptArgumentList_14298 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_14352 (temp_2.readProperty_actualExpressionList ()) ;
  while (enumerator_14352.hasCurrentObject ()) {
    GGS_string var_actualArgOperand_14568 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14352.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_actualArgOperand_14568, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 363)) ;
    {
    var_subscriptArgumentList_14298.setter_append (var_actualArgOperand_14568, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 370)) ;
    }
    enumerator_14352.gotoNextObject () ;
  }
  outArgument_outCppExpression = var_operand_14240.add_operation (GGS_string (".readSubscript_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 373)) ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(temp_3.readProperty_subscriptInvocationName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 374)) ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 375)) ;
  UpEnumerator__5B_string_5D_ enumerator_14854 (var_subscriptArgumentList_14298) ;
  while (enumerator_14854.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_14854.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 377)) ;
    enumerator_14854.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 379)) COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 379)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 380)).add_operation (GGS_string (" COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 380)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classFuncExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_typeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_classFuncExpressionAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_5167 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_5167, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 137)) ;
      }
    }
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 139)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedType_6224 ;
  GGS_unifiedTypeMapEntry var_classFuncType_6269 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_6331 ;
  GGS_bool var_hasCompilerArgument_6382 ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_6436 ;
  {
  const GGS_classFuncExpressionAST temp_0 = this ;
  const GGS_classFuncExpressionAST temp_1 = this ;
  const GGS_classFuncExpressionAST temp_2 = this ;
  const GGS_classFuncExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_6224, var_classFuncType_6269, var_constructorEffectiveParameterList_6331, var_hasCompilerArgument_6382, var_requiredTypes_6436, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 152)) ;
  }
  const GGS_classFuncExpressionAST temp_4 = this ;
  GGS_lstring var_constructorTypeUsefulnessName_6464 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_6269, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 169)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 169)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_6464 COMMA_SOURCE_FILE ("expression-class-func.galgas", 170)) ;
  }
  const GGS_classFuncExpressionAST temp_5 = this ;
  GGS_lstring var_returnedTypeUsefulnessName_6699 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_6224, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 171)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 171)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_6699 COMMA_SOURCE_FILE ("expression-class-func.galgas", 172)) ;
  }
  const GGS_classFuncExpressionAST temp_6 = this ;
  const GGS_classFuncExpressionAST temp_7 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_6224, temp_6.readProperty_classFuncName ().readProperty_location (), var_classFuncType_6269, temp_7.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_6331, var_hasCompilerArgument_6382, var_requiredTypes_6436, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       const GGS_lstring constinArgument_inTypeName,
                                                                                                       const GGS_lstring constinArgument_inConstructorName,
                                                                                                       const GGS_actualOutputArgumentList constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                       const GGS_location constinArgument_inLocationForOldStyleCollectionInitializerError,
                                                                                                       GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                       GGS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                       GGS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                                       GGS_bool & outArgument_outHasCompilerArgument,
                                                                                                       GGS__5B_unifiedTypeMapEntry_5D_ & outArgument_outRequiredTypes,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outRequiredTypes.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  outArgument_outRequiredTypes = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 209)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-class-func.galgas", 211)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas", 212)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_classFunctionMap var_classFunctionMap_8816 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 217)).readProperty_classFunctionMap () ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_bool test_4 = GGS_bool (ComparisonKind::equal, constinArgument_inConstructorName.readProperty_string ().objectCompare (GGS_string ("new"))) ;
      if (GalgasBool::boolTrue == test_4.boolEnum ()) {
        test_4 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 219)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-class-func.galgas", 219)))) ;
      }
      test_3 = test_4.boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_initializerSignature_9030 = extensionGetter_initializerSignature (constinArgument_inInitializerEffectiveParameterExpressions, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 220)) ;
        GGS_initializerMap var_initializerMap_9129 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 221)).readProperty_initializerMap () ;
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = var_initializerMap_9129.getter_hasKey (var_initializerSignature_9030 COMMA_SOURCE_FILE ("expression-class-func.galgas", 222)).operator_not (SOURCE_FILE ("expression-class-func.galgas", 222)).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (constinArgument_inConstructorName.readProperty_location (), GGS_string ("initializer @").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 224)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 224)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 224)).add_operation (var_initializerSignature_9030, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 225)).add_operation (GGS_string (" does not exist"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 225)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas", 223)) ;
          }
        }
      }
    }
    GGS_functionSignature var_constructorFormalArgumentTypeList_9488 ;
    const cMapElement_classFunctionMap * objectArray_9526 = (const cMapElement_classFunctionMap *) var_classFunctionMap_8816.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (nullptr != objectArray_9526) {
        macroValidSharedObject (objectArray_9526, cMapElement_classFunctionMap) ;
      var_constructorFormalArgumentTypeList_9488 = objectArray_9526->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_9526->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_9526->mProperty_mReturnedType ;
    }else{
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_8816.getter_count (SOURCE_FILE ("expression-class-func.galgas", 235)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 237)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 237)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 237)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas", 236)) ;
          var_constructorFormalArgumentTypeList_9488.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        TC_Array <FixItDescription> fixItArray9 ;
        appendFixItActions (fixItArray9, kFixItReplace, var_classFunctionMap_8816.getter_keyList (SOURCE_FILE ("expression-class-func.galgas", 245))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 243)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 243)), fixItArray9  COMMA_SOURCE_FILE ("expression-class-func.galgas", 241)) ;
        var_constructorFormalArgumentTypeList_9488.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 249)).objectCompare (var_constructorFormalArgumentTypeList_9488.getter_count (SOURCE_FILE ("expression-class-func.galgas", 249)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 251)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 251)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 252)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 251)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 252)).add_operation (var_constructorFormalArgumentTypeList_9488.getter_count (SOURCE_FILE ("expression-class-func.galgas", 253)).getter_string (SOURCE_FILE ("expression-class-func.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 252)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 253)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 254)).getter_string (SOURCE_FILE ("expression-class-func.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 253)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 254)), fixItArray11  COMMA_SOURCE_FILE ("expression-class-func.galgas", 250)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    UpEnumerator_actualOutputArgumentList enumerator_10941 (constinArgument_inInitializerEffectiveParameterExpressions) ;
    UpEnumerator_functionSignature enumerator_11006 (var_constructorFormalArgumentTypeList_9488) ;
    while (enumerator_10941.hasCurrentObject () && enumerator_11006.hasCurrentObject ()) {
      {
      outArgument_outRequiredTypes.setter_append (enumerator_11006.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 259)) ;
      }
      GGS_semanticExpressionForGeneration var_exp_11437 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10941.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11006.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11437, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 260)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11006.current (HERE).readProperty_mFormalArgumentType (), var_exp_11437.readProperty_mResultType (), enumerator_10941.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11437, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 269)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_11437  COMMA_SOURCE_FILE ("expression-class-func.galgas", 275)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, enumerator_11006.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10941.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GGS_string temp_13 ;
          const GalgasBool test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_11006.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            temp_13 = enumerator_11006.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 278)) ;
          }else if (GalgasBool::boolFalse == test_14) {
            temp_13 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11801 = GGS_string ("!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 277)) ;
          TC_Array <FixItDescription> fixItArray15 ;
          appendFixItActions (fixItArray15, kFixItReplace, var_s_11801) ;
          inCompiler->emitSemanticError (enumerator_10941.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11801, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 282)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 282)), fixItArray15  COMMA_SOURCE_FILE ("expression-class-func.galgas", 281)) ;
        }
      }
      enumerator_10941.gotoNextObject () ;
      enumerator_11006.gotoNextObject () ;
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    GGS_bool test_17 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (GalgasBool::boolTrue == test_17.boolEnum ()) {
      test_17 = GGS_bool (ComparisonKind::equal, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 288)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
    test_16 = test_17.boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      GGS_stringset temp_18 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      temp_18.enterElement (GGS_string ("emptyList"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      temp_18.enterElement (GGS_string ("emptyMap"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      temp_18.enterElement (GGS_string ("emptySortedList"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      temp_18.enterElement (GGS_string ("emptyDict"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      GGS_stringset var_oldCollectionInitializers_12237 = temp_18 ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = var_oldCollectionInitializers_12237.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-class-func.galgas", 290)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          TC_Array <FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, GGS_string (" ()")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GGS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray20  COMMA_SOURCE_FILE ("expression-class-func.galgas", 291)) ;
        }
      }
    }
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorUsingNewInsteadOfInit.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      GGS_stringset temp_22 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 297)) ;
      temp_22.enterElement (GGS_string ("emptyGraph"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 297)) ;
      temp_22.enterElement (GGS_string ("new"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 297)) ;
      GGS_stringset var_oldInitializers_12697 = temp_22 ;
      GalgasBool test_23 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_23) {
        test_23 = var_oldInitializers_12697.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-class-func.galgas", 298)).boolEnum () ;
        if (GalgasBool::boolTrue == test_23) {
          TC_Array <FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("old style constructor, use initializer '@(...)'"), fixItArray24  COMMA_SOURCE_FILE ("expression-class-func.galgas", 299)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GGS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 322)) ;
  const GGS_classFuncExpressionForGeneration temp_1 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_13984 (temp_1.readProperty_requiredTypes ()) ;
  while (enumerator_13984.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13984.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 324)) ;
    enumerator_13984.gotoNextObject () ;
  }
  GGS_stringlist var_parameterList_14077 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_classFuncExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_14106 (temp_2.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_14106.hasCurrentObject ()) {
    GGS_string var_parameter_14336 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14106.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14336, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 328)) ;
    var_parameterList_14077.addAssign_operation (var_parameter_14336  COMMA_SOURCE_FILE ("expression-class-func.galgas", 335)) ;
    enumerator_14106.gotoNextObject () ;
  }
  const GGS_classFuncExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_classFuncType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 337)) ;
  const GGS_classFuncExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string ("::class_func_").add_operation (temp_4.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 338)) ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 339)) ;
  UpEnumerator_stringlist enumerator_14602 (var_parameterList_14077) ;
  while (enumerator_14602.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_14602.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 341)) ;
    if (enumerator_14602.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 342)) ;
    }
    enumerator_14602.gotoNextObject () ;
  }
  GGS_bool var_needsComma_14724 = GGS_bool (ComparisonKind::greaterThan, var_parameterList_14077.getter_count (SOURCE_FILE ("expression-class-func.galgas", 344)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_classFuncExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_needsComma_14724.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          outArgument_outCppExpression.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 347)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 349)) COMMA_SOURCE_FILE ("expression-class-func.galgas", 349)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 350)) ;
      var_needsComma_14724 = GGS_bool (true) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_needsComma_14724.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_classFuncExpressionForGeneration temp_9 = this ;
      outArgument_outCppExpression.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 354)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 354)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_classFuncExpressionForGeneration temp_10 = this ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_10.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 356)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 356)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 73)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4062 ;
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-bang.galgas", 91)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4062, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 88)) ;
  GGS_unifiedTypeMapEntry var_type_4138 = var_expression_4062.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_weakReferenceType var_weakRef_4177 = extensionGetter_definition (var_type_4138, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 99)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-primary-bang.galgas", 99)).unwrappedValue () ;
    if (!extensionGetter_definition (var_type_4138, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 99)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-primary-bang.galgas", 99)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      const GGS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_bangExpressionForGeneration::init_21__21__21__21_ (var_weakRef_4177.readProperty_referenceType (), temp_2.readProperty_mOperatorLocation (), var_expression_4062, extensionGetter_definition (var_type_4138, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 104)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_bangExpressionAST temp_3 = this ;
    TC_Array <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4138, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 108)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 108)).add_operation (GGS_string ("' and does not support the 'bang' operator"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 108)), fixItArray4  COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 107)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 129)) ;
  GGS_string var_operand_5799 ;
  const GGS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5799, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 131)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 139)) COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 139)) ;
  }
  const GGS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5799.add_operation (GGS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 140)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-bang.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 140)) ;
  const GGS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_collectionValueAST temp_0 = this ;
  UpEnumerator_collectionValueElementList enumerator_4206 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_4206.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4206.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 112)) ;
    enumerator_4206.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_4870 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_collectionValueAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_targetType_4870 = constinArgument_inType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_collectionValueAST temp_2 = this ;
    var_targetType_4870 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 131)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_targetType_4870.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-collection-value.galgas", 134)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_collectionValueAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 135)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4870, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 136)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas", 136)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_collectionValueAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4870, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 138)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 138)).add_operation (GGS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 138)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 137)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_initializerMap var_initializerMap_5372 = extensionGetter_definition (var_targetType_4870, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 141)).readProperty_initializerMap () ;
      GGS_functionSignature var_emptyArgumentList_5457 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_initializerMap_5372.getter_hasKey (extensionGetter_initializerSignature (var_emptyArgumentList_5457, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 143)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 143)).operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas", 143)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_collectionValueAST temp_10 = this ;
          const GGS_collectionValueAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 144)).add_operation (GGS_string (" has no @() initializer"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 144)), fixItArray12  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 144)) ;
        }
      }
      GGS_lstring var_nameForUsefulness_5700 = function_initializerNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4870, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 148)).readProperty_typeName (), extensionGetter_initializerSignature (var_emptyArgumentList_5457, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 147)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_5700 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 151)) ;
      }
      GGS_unifiedTypeMapEntry var_elementType_5969 = extensionGetter_definition (var_targetType_4870, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 153)).readProperty_typeForEnumeratedElement () ;
      GGS_collectionValueElementListForGeneration var_expressionListForGeneration_6083 = GGS_collectionValueElementListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_collectionValueAST temp_13 = this ;
      UpEnumerator_collectionValueElementList enumerator_6139 (temp_13.readProperty_mExpressionList ()) ;
      while (enumerator_6139.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expressionForGeneration_6454 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6139.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_5969, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_6454, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 156)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_5969, var_expressionForGeneration_6454.readProperty_mResultType (), enumerator_6139.current_location (HERE), var_expressionForGeneration_6454, inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 166)) ;
        }
        var_expressionListForGeneration_6083.addAssign_operation (var_expressionForGeneration_6454, enumerator_6139.current_location (HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 172)) ;
        enumerator_6139.gotoNextObject () ;
      }
      const GGS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GGS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4870, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_6083, inCompiler COMMA_HERE) ;
      GGS_lstring var_typeUsefulnessName_7009 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4870, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 180)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_7009 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 181)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 209)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-collection-value.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 211)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 212)) ;
  const GGS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)) ;
  const GGS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" = GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 215)) ;
  const GGS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("::init (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 217)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 217)) ;
  }
  const GGS_expressionCollectionForGeneration temp_4 = this ;
  UpEnumerator_collectionValueElementListForGeneration enumerator_8886 (temp_4.readProperty_expressionList ()) ;
  while (enumerator_8886.hasCurrentObject ()) {
    GGS_string var_argumentCppName_9095 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8886.current_expression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_9095, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 220)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GGS_string (".enterElement ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 227)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(var_argumentCppName_9095.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 228)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 229)).add_operation (extensionGetter_commaSourceFile (enumerator_8886.current_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 229)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 229)) ;
    enumerator_8886.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_5422 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5422 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 143)) ;
  }
  GGS_lstring var_filewrapperPath_5745 ;
  GGS_bool var_isInternal_5784 ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GGS_lstringlist joker_5765_4 ; // Joker input parameter
  GGS_wrapperFileMap joker_5765_3 ; // Joker input parameter
  GGS_wrapperDirectoryMap joker_5765_2 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_5765_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_5745, joker_5765_4, joker_5765_3, joker_5765_2, joker_5765_1, var_isInternal_5784, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 145)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_5784.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GGS_location var_filewrapperDeclarationLocation_5849 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 153)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 154)).objectCompare (var_filewrapperDeclarationLocation_5849.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 154)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5849.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 155)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 155)), fixItArray7  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 155)) ;
        }
      }
    }
  }
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GGS_filewrapperInExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 160)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_5745.readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_6707 (temp_0.readProperty_mExpressions ()) ;
  while (enumerator_6707.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_6707.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 172)) ;
    enumerator_6707.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GGS_lstring var_usefulnessName_7356 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7356 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 188)) ;
  }
  GGS_filewrapperTemplateMap var_filewrapperTemplateMap_7697 ;
  GGS_bool var_isInternal_7736 ;
  const GGS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GGS_lstring joker_7659_4 ; // Joker input parameter
  GGS_lstringlist joker_7659_3 ; // Joker input parameter
  GGS_wrapperFileMap joker_7659_2 ; // Joker input parameter
  GGS_wrapperDirectoryMap joker_7659_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_7659_4, joker_7659_3, joker_7659_2, joker_7659_1, var_filewrapperTemplateMap_7697, var_isInternal_7736, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 190)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_isInternal_7736.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GGS_location var_filewrapperDeclarationLocation_7802 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 198)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GGS_bool (ComparisonKind::notEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 199)).objectCompare (var_filewrapperDeclarationLocation_7802.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 199)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_filewrapperTemplateInExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_7802.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 200)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 200)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 200)) ;
        }
      }
    }
  }
  GGS_functionSignature var_templateSignature_8257 ;
  const GGS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GGS_lstring joker_8275 ; // Joker input parameter
  var_filewrapperTemplateMap_7697.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_8257, joker_8275, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 204)) ;
  GGS_semanticExpressionListForGeneration var_effectiveParameterList_8347 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 207)).objectCompare (var_templateSignature_8257.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 207)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (GGS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (GGS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (var_templateSignature_8257.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 210)).getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 210)).add_operation (temp_15.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 211)).getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 210)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 211)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 208)) ;
      var_effectiveParameterList_8347.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    var_effectiveParameterList_8347 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperTemplateInExpressionAST temp_17 = this ;
    UpEnumerator_actualOutputArgumentList enumerator_8847 (temp_17.readProperty_mExpressions ()) ;
    UpEnumerator_functionSignature enumerator_8933 (var_templateSignature_8257) ;
    while (enumerator_8847.hasCurrentObject () && enumerator_8933.hasCurrentObject ()) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_8933.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8847.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_8933.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_8933.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 217)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_9043 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 217)) ;
          TC_Array <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_9043) ;
          inCompiler->emitSemanticError (enumerator_8847.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9043, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 218)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 218)), fixItArray21  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 218)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_9530 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8847.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8933.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9530, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 220)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8933.current_mFormalArgumentType (HERE), var_exp_9530.readProperty_mResultType (), enumerator_8847.current_mEndOfExpressionLocation (HERE), var_exp_9530, inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 229)) ;
      }
      var_effectiveParameterList_8347.addAssign_operation (var_exp_9530  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 230)) ;
      enumerator_8847.gotoNextObject () ;
      enumerator_8933.gotoNextObject () ;
    }
  }
  const GGS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GGS_filewrapperTemplateInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_8347, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_10748 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10748 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 261)) ;
  }
  GGS_stringlist var_directoryList_10957 ;
  GGS_string var_fileName_10985 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 265)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_filewrapperInExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 266)) ;
      var_directoryList_10957.drop () ; // Release error dropped variable
      var_fileName_10985.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-primary-filewrapper.galgas", 267)).objectCompare (GGS_char (TO_UNICODE (47)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_filewrapperInExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 268)) ;
        var_directoryList_10957.drop () ; // Release error dropped variable
        var_fileName_10985.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_10957 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("/") COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 270)) ;
      {
      var_directoryList_10957.setter_popLast (var_fileName_10985, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 271)) ;
      }
    }
  }
  GGS_wrapperFileMap var_filewrapperFileMap_11566 ;
  GGS_wrapperDirectoryMap var_filewrapperDirectoryMap_11615 ;
  GGS_bool var_isInternal_11661 ;
  const GGS_filewrapperInExpressionAST temp_10 = this ;
  GGS_lstring joker_11531 ; // Joker input parameter
  GGS_lstringlist joker_11538 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_11643 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_11531, joker_11538, var_filewrapperFileMap_11566, var_filewrapperDirectoryMap_11615, joker_11643, var_isInternal_11661, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 274)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_isInternal_11661.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_filewrapperInExpressionAST temp_12 = this ;
      GGS_location var_filewrapperDeclarationLocation_11726 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 285)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 286)).objectCompare (var_filewrapperDeclarationLocation_11726.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 286)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_filewrapperInExpressionAST temp_15 = this ;
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_11726.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 287)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 287)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 287)) ;
        }
      }
    }
  }
  GGS_string var_builtPath_12120 = GGS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_11615.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)).isValid ()) {
    uint32_t variant_12137 = var_filewrapperDirectoryMap_11615.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)).uintValue () ;
    bool loop_12137 = true ;
    while (loop_12137) {
      loop_12137 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_10957.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 293)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_12137) {
        loop_12137 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_10957.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 293)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_12137 && (0 == variant_12137)) {
        loop_12137 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)) ;
      }
      if (loop_12137) {
        variant_12137 -- ;
        GGS_string var_directoryName_12252 ;
        {
        var_directoryList_10957.setter_popFirst (var_directoryName_12252, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 294)) ;
        }
        var_builtPath_12120.plusAssign_operation(var_directoryName_12252.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 295)) ;
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_11615.getter_hasKey (var_directoryName_12252 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 296)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GGS_uint joker_12525 ; // Joker input parameter
            var_filewrapperDirectoryMap_11615.method_searchKey (GGS_lstring::init_21__21_ (var_directoryName_12252, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 298)), inCompiler COMMA_HERE), var_filewrapperFileMap_11566, var_filewrapperDirectoryMap_11615, joker_12525, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 297)) ;
          }
        }
        if (GalgasBool::boolFalse == test_17) {
          const GGS_filewrapperInExpressionAST temp_18 = this ;
          const GGS_filewrapperInExpressionAST temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_builtPath_12120, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)).add_operation (GGS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)), fixItArray20  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)) ;
          var_filewrapperFileMap_11566.drop () ; // Release error dropped variable
          var_directoryList_10957 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  GGS_uint var_fileIndex_12784 ;
  GGS_bool var_isTextFile_12806 ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = var_filewrapperFileMap_11566.getter_hasKey (var_fileName_10985 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 310)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      GGS_string joker_12937 ; // Joker input parameter
      GGS_uint joker_12952 ; // Joker input parameter
      var_filewrapperFileMap_11566.method_searchKey (GGS_lstring::init_21__21_ (var_fileName_10985, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 311)), inCompiler COMMA_HERE), joker_12937, var_isTextFile_12806, joker_12952, var_fileIndex_12784, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 311)) ;
    }
  }
  if (GalgasBool::boolFalse == test_21) {
    const GGS_filewrapperInExpressionAST temp_22 = this ;
    const GGS_filewrapperInExpressionAST temp_23 = this ;
    TC_Array <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_fileName_10985, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (GGS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (var_builtPath_12120, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (GGS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)), fixItArray24  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 313)) ;
    var_fileIndex_12784.drop () ; // Release error dropped variable
    var_isTextFile_12806.drop () ; // Release error dropped variable
  }
  GGS_unifiedTypeMapEntry temp_25 ;
  const GalgasBool test_26 = var_isTextFile_12806.boolEnum () ;
  if (GalgasBool::boolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (GalgasBool::boolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("data"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 321)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 321)) ;
  }
  const GGS_filewrapperInExpressionAST temp_27 = this ;
  const GGS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GGS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21_ (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12784, var_isTextFile_12806, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 346))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 346)) ;
  const GGS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 347)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 347)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 367))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 367)) ;
  GGS_stringlist var_parameterList_15208 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_15246 (temp_1.readProperty_mActualOutputParameterList ()) ;
  while (enumerator_15246.hasCurrentObject ()) {
    GGS_string var_parameter_15459 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15246.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15459, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 370)) ;
    var_parameterList_15208.addAssign_operation (var_parameter_15459  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 377)) ;
    enumerator_15246.gotoNextObject () ;
  }
  const GGS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GGS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 380)) ;
  UpEnumerator_stringlist enumerator_15738 (var_parameterList_15208) ;
  while (enumerator_15738.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GGS_string (", ").add_operation (enumerator_15738.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 382)) ;
    enumerator_15738.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 384)) COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 384)) ;
  }
  const GGS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 385)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 385)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GGS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 405))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 405)) ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_1 = this ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("GGS_string") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string ("GGS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_4 = this ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 115)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 116)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 117)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_if_5F_expression_5267 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5267, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 132)) ;
  GGS_semanticExpressionForGeneration var_then_5F_expression_5553 ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5553, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 142)) ;
  GGS_semanticExpressionForGeneration var_else_5F_expression_5841 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5841, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 152)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_if_5F_expression_5267.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 162)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ifExpressionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GGS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5267.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 164)).add_operation (GGS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 164)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 163)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_then_5F_expression_5553.readProperty_mResultType ().objectCompare (var_else_5F_expression_5841.readProperty_mResultType ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5553.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).add_operation (GGS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).add_operation (extensionGetter_definition (var_else_5F_expression_5841.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).add_operation (GGS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 167)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GGS_ifExpressionForGeneration::init_21__21__21__21__21_ (var_then_5F_expression_5553.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5267, var_then_5F_expression_5553, var_else_5F_expression_5841, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GGS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_ifExpression_7687 ;
  const GGS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7687, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 202)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 210)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 211)) ;
  const GGS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)) ;
  GGS_string var_testVar_7953 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 213)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 214)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("const GalgasBool ").add_operation (var_testVar_7953, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)).add_operation (var_ifExpression_7687, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_7953, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 216)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 216)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 218)) ;
  }
  GGS_string var_thenExpression_8429 ;
  const GGS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8429, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 219)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 226)).add_operation (var_thenExpression_8429, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 226)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}else if (GalgasBool::boolFalse == ").add_operation (var_testVar_7953, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 229)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 230)) ;
  }
  GGS_string var_elseExpression_8862 ;
  const GGS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_8862, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 231)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 238)).add_operation (var_elseExpression_8862, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 240)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3784 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3784 COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 92)) ;
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GGS_bool joker_4103_7 ; // Joker input parameter
  GGS_terminalMap joker_4103_6 ; // Joker input parameter
  GGS_indexingListAST joker_4103_5 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_4103_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_4103_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_4103_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_4103_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_4103_7, joker_4103_6, joker_4103_5, joker_4103_4, joker_4103_3, joker_4103_2, joker_4103_1, inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 94)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GGS_string ("symbols"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GGS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 100)) ;
    }
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_lexiqueIntrospectionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-primary-lexique.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 104)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 128))  COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 128)) ;
  const GGS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 129)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 129)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 129)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 130)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 131)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                      GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionAST temp_0 = this ;
  const GGS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (TO_UNICODE (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-primary-literal-char.galgas", 103)).getter_string (SOURCE_FILE ("expression-primary-literal-char.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 103)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 103)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionAST temp_0 = this ;
  const GGS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_double (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_double (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-double.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas", 105)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas", 105)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionAST temp_0 = this ;
  const GGS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 195)).add_operation (GGS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 195)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 212)).add_operation (GGS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 212)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 229)).add_operation (GGS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 229)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 246)).add_operation (GGS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 246)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 263)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 263)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 264)) COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 264)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 265)) ;
  const GGS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 266)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 266)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3894 = GGS_string::makeEmptyString () ;
  const GGS_literalStringExpressionAST temp_0 = this ;
  UpEnumerator_stringlist enumerator_3908 (temp_0.readProperty_mStringSequence ()) ;
  while (enumerator_3908.hasCurrentObject ()) {
    var_s_3894.plusAssign_operation(enumerator_3908.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 93)) ;
    enumerator_3908.gotoNextObject () ;
  }
  const GGS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3894, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mString ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCppExpression = GGS_string ("GGS_string::makeEmptyString ()") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GGS_string ("GGS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-primary-literal-string.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 117)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 117)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_literalTypeInExpressionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_3111 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_3111, inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 69)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalTypeInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3674 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 83)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3674 COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 84)) ;
  }
  const GGS_literalTypeInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_3841 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 86)) ;
  const GGS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_literalTypeInExpressionForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("type"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 88)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 88)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_3841, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalTypeInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 111)) ;
  const GGS_literalTypeInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_type (& kTypeDescriptor_GALGAS_").add_operation (extensionGetter_definition (temp_1.readProperty_mLiteralType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 113)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-literal-type.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 112)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 113)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_3484 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas", 80)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas", 80)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_selfCppName_3571 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      const GGS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GGS_selfInExpressionForGeneration::init_21__21__21_ (var_selfAvailable_3484.readProperty_type (), temp_1.readProperty_mSelfLocation (), var_selfCppName_3571, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfInExpressionAST temp_2 = this ;
    TC_Array <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary-self.galgas", 84)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-self.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas", 104)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas", 105)) ;
  const GGS_selfInExpressionForGeneration temp_0 = this ;
  const GGS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas", 106)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas", 106)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas", 106)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas", 106)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas", 106)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas", 106)) ;
  {
  const GGS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-primary-self.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nilExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nilExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                              GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                              const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                              GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                              GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inType.getter_isNull (SOURCE_FILE ("expression-primary-nil.galgas", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nilExpressionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 73)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_unwrappedType_3388 = extensionGetter_definition (constinArgument_inType, inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 75)).readProperty_unwrappedType () ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_unwrappedType_3388.getter_isNull (SOURCE_FILE ("expression-primary-nil.galgas", 76)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_nilExpressionAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mLocation (), GGS_string ("the inferred type @").add_operation (extensionGetter_typeName (var_unwrappedType_3388, inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 77)).add_operation (GGS_string (" is not an optional type"), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 77)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 77)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_nilExpressionAST temp_6 = this ;
      outArgument_outExpression = GGS_nilExpressionForGeneration::init_21__21_ (constinArgument_inType, temp_6.readProperty_mLocation (), inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nilExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nilExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 102)).add_operation (GGS_string ("::init_nil ()"), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_4825 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 121)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4825 COMMA_SOURCE_FILE ("expression-primary-option.galgas", 122)) ;
  }
  GGS_bool var_optionComponentIsPredefined_5124 ;
  GGS_commandLineOptionMap var_boolOptionMap_5183 ;
  GGS_commandLineOptionMap var_uintOptionMap_5228 ;
  GGS_commandLineOptionMap var_stringOptionMap_5273 ;
  GGS_commandLineOptionMap var_stringListOptionMap_5320 ;
  const GGS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_5124, var_boolOptionMap_5183, var_uintOptionMap_5228, var_stringOptionMap_5273, var_stringListOptionMap_5320, inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 124)) ;
  const GGS_optionExpressionAST temp_2 = this ;
  GGS_bool var_found_5356 = var_boolOptionMap_5183.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas", 132)) ;
  GGS_unifiedTypeMapEntry var_returnedType_5444 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_5356.operator_not (SOURCE_FILE ("expression-primary-option.galgas", 134)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_optionExpressionAST temp_4 = this ;
      var_found_5356 = var_uintOptionMap_5228.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas", 135)) ;
      var_returnedType_5444 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType () ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_found_5356.operator_not (SOURCE_FILE ("expression-primary-option.galgas", 138)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_optionExpressionAST temp_6 = this ;
      var_found_5356 = var_stringOptionMap_5273.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas", 139)) ;
      var_returnedType_5444 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_found_5356.operator_not (SOURCE_FILE ("expression-primary-option.galgas", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_optionExpressionAST temp_8 = this ;
      var_found_5356 = var_stringListOptionMap_5320.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas", 143)) ;
      var_returnedType_5444 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType () ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_found_5356.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_optionExpressionAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_optionExpressionAST temp_12 = this ;
          const GGS_optionExpressionAST temp_13 = this ;
          const GGS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_5444, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5124, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_optionExpressionAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("char"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_optionExpressionAST temp_17 = this ;
            const GGS_optionExpressionAST temp_18 = this ;
            const GGS_optionExpressionAST temp_19 = this ;
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5124, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_15) {
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            const GGS_optionExpressionAST temp_21 = this ;
            test_20 = GGS_bool (ComparisonKind::equal, temp_21.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              const GGS_optionExpressionAST temp_22 = this ;
              const GGS_optionExpressionAST temp_23 = this ;
              const GGS_optionExpressionAST temp_24 = this ;
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5124, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            GalgasBool test_25 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_25) {
              const GGS_optionExpressionAST temp_26 = this ;
              test_25 = GGS_bool (ComparisonKind::equal, temp_26.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("comment"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_25) {
                const GGS_optionExpressionAST temp_27 = this ;
                const GGS_optionExpressionAST temp_28 = this ;
                const GGS_optionExpressionAST temp_29 = this ;
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5124, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_25) {
              const GGS_optionExpressionAST temp_30 = this ;
              TC_Array <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 176)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_stringlist var_s_7474 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    UpEnumerator_commandLineOptionMap enumerator_7502 (var_boolOptionMap_5183) ;
    while (enumerator_7502.hasCurrentObject ()) {
      var_s_7474.addAssign_operation (enumerator_7502.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 181)) ;
      enumerator_7502.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_7570 (var_uintOptionMap_5228) ;
    while (enumerator_7570.hasCurrentObject ()) {
      var_s_7474.addAssign_operation (enumerator_7570.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 184)) ;
      enumerator_7570.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_7638 (var_stringOptionMap_5273) ;
    while (enumerator_7638.hasCurrentObject ()) {
      var_s_7474.addAssign_operation (enumerator_7638.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 187)) ;
      enumerator_7638.gotoNextObject () ;
    }
    const GGS_optionExpressionAST temp_32 = this ;
    const GGS_optionExpressionAST temp_33 = this ;
    const GGS_optionExpressionAST temp_34 = this ;
    TC_Array <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_7474) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GGS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 190)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 190)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 190)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 190)), fixItArray35  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 189)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas", 214)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 215))  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 215)) ;
    }
  }
  const GGS_optionValueExpressionForGeneration temp_3 = this ;
  const GGS_optionValueExpressionForGeneration temp_4 = this ;
  const GGS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)).add_operation (GGS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 218)).add_operation (GGS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 218)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 238))  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 238)) ;
    }
  }
  const GGS_optionCharExpressionForGeneration temp_3 = this ;
  const GGS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 240)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 240)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 241)).add_operation (GGS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 241)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                          GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas", 260)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 261))  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 261)) ;
    }
  }
  const GGS_optionStringExpressionForGeneration temp_3 = this ;
  const GGS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 263)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 263)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 264)).add_operation (GGS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 264)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas", 275)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 276))  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 276)) ;
    }
  }
  const GGS_optionCommentExpressionForGeneration temp_3 = this ;
  const GGS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 278)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 278)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 279)).add_operation (GGS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 279)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                  GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                  GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (true)") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (false)") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_3345 ;
  GGS_string var_sourceVariableCppName_3369 ;
  GGS_string var_nameForCheckingFormalParameterUsing_3410 ;
  {
  const GGS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_3345, var_sourceVariableCppName_3369, var_nameForCheckingFormalParameterUsing_3410, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas", 72)) ;
  }
  const GGS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_3345, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_3369, var_nameForCheckingFormalParameterUsing_3410, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas", 106)) ;
  const GGS_varInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = temp_1.readProperty_mCppVarName () ;
  {
  const GGS_varInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-primary-var.galgas", 108)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 163)) ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7879 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7879, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8215 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7879.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8215, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 188)) ;
  {
  const GGS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7879.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 199)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 199)), GGS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7879, var_rightExpression_8215, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 198)) ;
  }
  const GGS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7879.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7879, GGS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 210)), var_rightExpression_8215, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 221)) ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 222)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_localVarManager & ioArgument_ioVariableMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9914 ;
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9914, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 236)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10250 ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9914.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10250, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 246)) ;
  {
  const GGS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9914.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 257)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas", 257)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 257)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9914, var_rightExpression_10250, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 256)) ;
  }
  const GGS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_9914.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9914, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 268)), var_rightExpression_10250, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 278)) ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 279)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_11942 ;
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11942, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 293)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12278 ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11942.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12278, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 303)) ;
  {
  const GGS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11942.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 314)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 314)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 314)), GGS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11942, var_rightExpression_12278, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 313)) ;
  }
  const GGS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_11942.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11942, GGS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 325)), var_rightExpression_12278, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 335)) ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 336)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_13961 ;
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13961, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 350)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14297 ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_13961.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14297, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 360)) ;
  {
  const GGS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_13961.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 371)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas", 371)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 371)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_13961, var_rightExpression_14297, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 370)) ;
  }
  const GGS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_13961.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_13961, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 382)), var_rightExpression_14297, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 392)) ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 393)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_15963 ;
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_15963, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 407)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16299 ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_15963.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16299, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 417)) ;
  {
  const GGS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15963.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 428)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 428)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 428)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15963, var_rightExpression_16299, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 427)) ;
  }
  const GGS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_15963.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15963, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 439)), var_rightExpression_16299, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4013 ;
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4013, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4089 = var_expression_4013.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (var_expression_4013.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (var_expression_4013.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4089, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 101)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 101)) COMMA_SOURCE_FILE ("expression-not.galgas", 101)).operator_not (SOURCE_FILE ("expression-not.galgas", 101)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_notExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4089, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_4089, temp_8.readProperty_mOperatorLocation (), var_expression_4013, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 131)) ;
  GGS_string var_operand_5769 ;
  const GGS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5769, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)) ;
  const GGS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5769.add_operation (GGS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 163)) ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7787 ;
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7787, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8124 ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7787.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8124, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 188)) ;
  {
  const GGS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7787.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 199)) COMMA_SOURCE_FILE ("expression-or.galgas", 199)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7787, var_rightExpression_8124, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 198)) ;
  }
  const GGS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7787.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7787, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 209)), var_rightExpression_8124, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 219)) ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 220)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9761 ;
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9761, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 234)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10098 ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9761.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10098, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 244)) ;
  {
  const GGS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9761.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 255)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 255)) COMMA_SOURCE_FILE ("expression-or.galgas", 255)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9761, var_rightExpression_10098, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 254)) ;
  }
  const GGS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_orShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_9761.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9761, var_rightExpression_10098, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 274)) ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 275)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_11725 ;
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11725, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 289)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12062 ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11725.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12062, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 299)) ;
  {
  const GGS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11725.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 310)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 310)) COMMA_SOURCE_FILE ("expression-or.galgas", 310)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11725, var_rightExpression_12062, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 309)) ;
  }
  const GGS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_11725.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11725, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 321)), var_rightExpression_12062, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 331)) ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 332)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_13770 ;
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13770, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 347)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14128 ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14128, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 357)) ;
  GGS_unifiedTypeMapEntry var_leftType_14209 = var_leftExpression_13770.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_leftType_14209, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 368)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_13770.readProperty_mLocation (), GGS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 369)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightType_14431 = var_rightExpression_14128.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_14431, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 372)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_14128.readProperty_mLocation (), GGS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 373)) ;
    }
  }
  const GGS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_closedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_13770.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 377)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_13770, var_rightExpression_14128, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 389)) ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 390)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16360 ;
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16360, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 404)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16718 ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16718, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 414)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_leftExpression_16360.readProperty_mResultType (), var_leftExpression_16360.readProperty_mLocation (), var_leftExpression_16360, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 424)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_rightExpression_16718.readProperty_mResultType (), var_rightExpression_16718.readProperty_mLocation (), var_rightExpression_16718, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 434)) ;
  }
  const GGS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_openedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_16360.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 446)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16360, var_rightExpression_16718, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GGS_string & outArgument_outCppExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 484)) ;
  GGS_string var_leftTemporaryOperand_19472 ;
  const GGS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19472, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 486)) ;
  GGS_string var_testVar_19529 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 494)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 495)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_bool ").add_operation (var_testVar_19529, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (var_leftTemporaryOperand_19472, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 496)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (GalgasBool::boolTrue != ").add_operation (var_testVar_19529, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 497)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 499)) ;
  }
  GGS_string var_rightTemporaryOperand_20010 ;
  const GGS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20010, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_19529.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)).add_operation (var_rightTemporaryOperand_20010, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 507)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 509)) ;
  outArgument_outCppExpression = var_testVar_19529 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 521)) ;
  GGS_string var_leftTemporaryOperand_20791 ;
  const GGS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20791, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 523)) ;
  GGS_string var_rightTemporaryOperand_20996 ;
  const GGS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20996, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 531)) ;
  const GGS_closedSliceExpressionForGeneration temp_3 = this ;
  const GGS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_20791, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (var_rightTemporaryOperand_20996, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (GGS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (var_leftTemporaryOperand_20791, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string (").add_operation (GGS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 553)) ;
  GGS_string var_leftTemporaryOperand_21945 ;
  const GGS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_21945, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)) ;
  GGS_string var_rightTemporaryOperand_22150 ;
  const GGS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22150, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 563)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 571)) COMMA_SOURCE_FILE ("expression-or.galgas", 571)) ;
  }
  const GGS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_21945, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (var_rightTemporaryOperand_22150, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (GGS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (var_leftTemporaryOperand_21945, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 575)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 66)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3805 ;
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3805, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 81)) ;
  GGS_unifiedTypeMapEntry var_type_3887 = var_expression_3805.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3928 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3805.ptr ())) ;
    if (nullptr == var_exp_3928.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3928.readProperty_mResultType (), var_exp_3928.readProperty_mLocation (), var_exp_3928.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 96)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3887, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 98)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 98)) COMMA_SOURCE_FILE ("expression-tilde.galgas", 98)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 98)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_tildeExpressionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3887, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 100)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 100)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 100)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 99)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_3887, temp_5.readProperty_mOperatorLocation (), var_expression_3805, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 133)) ;
  GGS_string var_operand_5566 ;
  const GGS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5566, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 135)) ;
  const GGS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5566.add_operation (GGS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 137)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 137)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 137)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4048 ;
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4048, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 87)) ;
  GGS_unifiedTypeMapEntry var_type_4124 = var_expression_4048.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_4163 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_4048.ptr ())) ;
    if (nullptr == var_exp_4163.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_4163.readProperty_mResultType (), var_exp_4163.readProperty_mLocation (), var_exp_4163.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 102)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_4124, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 104)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas", 104)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 104)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas", 104)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unaryMinusExpressionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4124, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 105)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_4124, temp_5.readProperty_mOperatorLocation (), var_expression_4048, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 133)) ;
  GGS_string var_operand_5969 ;
  const GGS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5969, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 135)) ;
  const GGS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5969.add_operation (GGS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 144)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 144)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-plus.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4065 = outArgument_outExpression.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4065, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas", 97)) COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryPlusExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4065, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)).add_operation (GGS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4086 ;
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4086, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4162 = var_expression_4086.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4162, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)) COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryWrappingMinusExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4162, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4162, temp_4.readProperty_mOperatorLocation (), var_expression_4086, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 126)) ;
  GGS_string var_operand_5569 ;
  const GGS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5569, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 128)) ;
  outArgument_outCppExpression = var_operand_5569.add_operation (GGS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 136)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes_3F__3F__3F_ (const GGS_unifiedTypeMapEntry constinArgument_inTargetType,
                                               const GGS_unifiedTypeMapEntry constinArgument_inSourceType,
                                               const GGS_location constinArgument_inErrorLocation,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_sourceType_3401 = constinArgument_inSourceType ;
  GGS_bool var_ok_3439 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_3401)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).isValid ()) {
    uint32_t variant_3473 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).uintValue () ;
    bool loop_3473 = true ;
    while (loop_3473) {
      loop_3473 = var_ok_3439.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).operator_and (extensionGetter_definition (var_sourceType_3401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).isValid () ;
      if (loop_3473) {
        loop_3473 = var_ok_3439.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).operator_and (extensionGetter_definition (var_sourceType_3401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).boolValue () ;
      }
      if (loop_3473 && (0 == variant_3473)) {
        loop_3473 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) ;
      }
      if (loop_3473) {
        variant_3473 -- ;
        var_sourceType_3401 = extensionGetter_definition (var_sourceType_3401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)).readProperty_superType () ;
        var_ok_3439 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_3401)) ;
      }
    }
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_ok_3439.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_typeKindEnum_2E_weakReferenceType var_weakRefType_3669 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).unwrappedValue () ;
      if (!extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        var_sourceType_3401 = constinArgument_inSourceType ;
        var_ok_3439 = GGS_bool (ComparisonKind::equal, var_weakRefType_3669.readProperty_referenceType ().objectCompare (var_sourceType_3401)) ;
        if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).isValid ()) {
          uint32_t variant_3829 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).uintValue () ;
          bool loop_3829 = true ;
          while (loop_3829) {
            loop_3829 = var_ok_3439.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).operator_and (extensionGetter_definition (var_sourceType_3401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).isValid () ;
            if (loop_3829) {
              loop_3829 = var_ok_3439.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).operator_and (extensionGetter_definition (var_sourceType_3401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).boolValue () ;
            }
            if (loop_3829 && (0 == variant_3829)) {
              loop_3829 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) ;
            }
            if (loop_3829) {
              variant_3829 -- ;
              var_sourceType_3401 = extensionGetter_definition (var_sourceType_3401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)).readProperty_superType () ;
              var_ok_3439 = GGS_bool (ComparisonKind::equal, var_weakRefType_3669.readProperty_referenceType ().objectCompare (var_sourceType_3401)) ;
            }
          }
        }
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_ok_3439.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).add_operation (GGS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 95)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const GGS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inSourceType,
                                                                        const GGS_location constinArgument_inErrorLocation,
                                                                        GGS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition var_targetTypeDef_4867 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)) ;
  GGS_unifiedTypeMapEntry temp_0 ;
  const GalgasBool test_1 = var_targetTypeDef_4867.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = var_targetTypeDef_4867.readProperty_unwrappedType () ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = constinArgument_inTargetType ;
  }
  GGS_unifiedTypeMapEntry var_targetTypeForBigIntAssignment_4915 = temp_0 ;
  GGS_bool var_handled_5096 = GGS_bool (false) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_bigIntSource_5121 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (nullptr == var_bigIntSource_5121.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4915, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 117)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_bigint var_bigIntValue_5266 = var_bigIntSource_5121.readProperty_mValue () ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5266.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5266.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5266.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) ;
            }
          }
          ioArgument_ioExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4915, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5266.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)), inCompiler COMMA_HERE) ;
          var_handled_5096 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4915, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 128)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_bigint var_bigIntValue_5734 = var_bigIntSource_5121.readProperty_mValue () ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5734.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5734.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                TC_Array <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5734.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)) ;
              }
            }
            ioArgument_ioExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4915, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5734.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 136)), inCompiler COMMA_HERE) ;
            var_handled_5096 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4915, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 139)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_bigint var_bigIntValue_6213 = var_bigIntSource_5121.readProperty_mValue () ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_6213.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6213.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  TC_Array <FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_6213.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)) ;
                }
              }
              ioArgument_ioExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4915, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6213.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)), inCompiler COMMA_HERE) ;
              var_handled_5096 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4915, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GGS_bigint var_bigIntValue_6689 = var_bigIntSource_5121.readProperty_mValue () ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_6689.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6689.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    TC_Array <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_6689.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)) ;
                  }
                }
                ioArgument_ioExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4915, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6689.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)), inCompiler COMMA_HERE) ;
                var_handled_5096 = GGS_bool (true) ;
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = var_handled_5096.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 164)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_targetTypeDef_4867.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 164)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_unifiedTypeMapEntry var_targetUnwrappedType_7299 = var_targetTypeDef_4867.readProperty_unwrappedType () ;
          GGS_unifiedTypeMapEntry var_sourceUnwrappedType_7357 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 168)).readProperty_unwrappedType () ;
          var_handled_5096 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetUnwrappedType_7299, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 169)).objectCompare (extensionGetter_typeName (var_sourceUnwrappedType_7357, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 169)))) ;
        }
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = var_handled_5096.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 172)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 172)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)).readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          var_handled_5096 = GGS_bool (true) ;
        }
      }
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_handled_5096.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_unifiedTypeMapEntry var_sourceType_7742 = constinArgument_inSourceType ;
      GGS_bool var_ok_7776 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 180)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 180)))) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).isValid ()) {
        uint32_t variant_7836 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).uintValue () ;
        bool loop_7836 = true ;
        while (loop_7836) {
          loop_7836 = var_ok_7776.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).operator_and (extensionGetter_definition (var_sourceType_7742, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).isValid () ;
          if (loop_7836) {
            loop_7836 = var_ok_7776.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).operator_and (extensionGetter_definition (var_sourceType_7742, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).boolValue () ;
          }
          if (loop_7836 && (0 == variant_7836)) {
            loop_7836 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)) ;
          }
          if (loop_7836) {
            variant_7836 -- ;
            var_sourceType_7742 = extensionGetter_definition (var_sourceType_7742, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).readProperty_superType () ;
            var_ok_7776 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_7742)) ;
          }
        }
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_ok_7776.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_typeKindEnum_2E_weakReferenceType var_targetWeakRef_8040 = var_targetTypeDef_4867.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)).unwrappedValue () ;
          if (!var_targetTypeDef_4867.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)).isValuated ()) {
            test_18 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_18) {
            var_sourceType_7742 = constinArgument_inSourceType ;
            var_ok_7776 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_8040.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 187)).objectCompare (extensionGetter_typeName (var_sourceType_7742, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 187)))) ;
            if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).isValid ()) {
              uint32_t variant_8220 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).uintValue () ;
              bool loop_8220 = true ;
              while (loop_8220) {
                loop_8220 = var_ok_7776.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).operator_and (extensionGetter_definition (var_sourceType_7742, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).isValid () ;
                if (loop_8220) {
                  loop_8220 = var_ok_7776.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).operator_and (extensionGetter_definition (var_sourceType_7742, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).boolValue () ;
                }
                if (loop_8220 && (0 == variant_8220)) {
                  loop_8220 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)) ;
                }
                if (loop_8220) {
                  variant_8220 -- ;
                  var_sourceType_7742 = extensionGetter_definition (var_sourceType_7742, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).readProperty_superType () ;
                  var_ok_7776 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_8040.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)).objectCompare (extensionGetter_typeName (var_sourceType_7742, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)))) ;
                }
              }
            }
          }
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = var_ok_7776.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          const GGS_propertyMap_2E_element var_prop_8545 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_4867.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
          if (!extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_4867.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
            test_19 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_19) {
            extensionMethod_checkSetAccess (var_prop_8545.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)) ;
            GGS_propertyAccessExpressionForGeneration var_conversionExpression_8705 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_8545.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioExpression, var_targetTypeDef_4867.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8705 ;
            var_ok_7776 = GGS_bool (ComparisonKind::equal, var_prop_8545.readProperty_mPropertyType ().objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_19) {
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_bool test_21 = var_ok_7776.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)) ;
          if (GalgasBool::boolTrue == test_21.boolEnum ()) {
            test_21 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)).readProperty_getterMap ().getter_hasKey (var_targetTypeDef_4867.readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)) ;
          }
          test_20 = test_21.boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GGS_methodKind var_kind_9180 ;
            GGS_functionSignature var_argumentTypeList_9217 ;
            GGS_bool var_hasCompilerArgument_9258 ;
            GGS_unifiedTypeMapEntry var_returnedType_9291 ;
            GGS_location joker_9242 ; // Joker input parameter
            GGS_methodQualifier joker_9312_2 ; // Joker input parameter
            GGS_string joker_9312_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)).readProperty_getterMap ().method_searchKey (var_targetTypeDef_4867.readProperty_typeName (), var_kind_9180, var_argumentTypeList_9217, joker_9242, var_hasCompilerArgument_9258, var_returnedType_9291, joker_9312_2, joker_9312_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)) ;
            var_ok_7776 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_9217.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_9291.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214)) ;
            GGS_getterCallExpressionForGeneration var_conversionExpression_9445 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_9180, ioArgument_ioExpression, GGS_stringlist::init (inCompiler COMMA_HERE), var_targetTypeDef_4867.readProperty_typeName ().readProperty_string (), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_9258, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_9445 ;
          }
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        test_22 = var_ok_7776.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 228)).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          TC_Array <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is '@").add_operation (var_targetTypeDef_4867.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)).add_operation (GGS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 231)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 231)).add_operation (GGS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 231)).add_operation (var_targetTypeDef_4867.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 232)).add_operation (GGS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 233)).add_operation (var_targetTypeDef_4867.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 234)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 235)), fixItArray23  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 229)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator?operatorIsHandled??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (const GGS_bool constinArgument_inOperandIsHandled,
                                                                       const GGS_string constinArgument_inOperatorNameForErrorMessage,
                                                                       const GGS_location constinArgument_inErrorLocation,
                                                                       GGS_semanticExpressionForGeneration & ioArgument_ioLeftExpression,
                                                                       GGS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftResultType_10615 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightResultType_10668 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 249)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).add_operation (GGS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).add_operation (GGS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 252)).add_operation (extensionGetter_definition (var_rightResultType_10668, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 253)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 253)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 253)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 250)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_rightType_11055 = var_rightResultType_10668 ;
    GGS_bool var_ok_11097 = GGS_bool (ComparisonKind::equal, var_leftResultType_10615.objectCompare (var_rightType_11055)) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).isValid ()) {
      uint32_t variant_11134 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).uintValue () ;
      bool loop_11134 = true ;
      while (loop_11134) {
        loop_11134 = var_ok_11097.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).operator_and (extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).isValid () ;
        if (loop_11134) {
          loop_11134 = var_ok_11097.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).operator_and (extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).boolValue () ;
        }
        if (loop_11134 && (0 == variant_11134)) {
          loop_11134 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)) ;
        }
        if (loop_11134) {
          variant_11134 -- ;
          var_rightType_11055 = extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 258)).readProperty_superType () ;
          var_ok_11097 = GGS_bool (ComparisonKind::equal, var_leftResultType_10615.objectCompare (var_rightType_11055)) ;
        }
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_ok_11097.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 262)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_11367 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_11367.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 263)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_bigint var_bigIntValue_11519 = var_bigIntSource_11367.readProperty_mValue () ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11519.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 265)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11519.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 265)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 265)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  TC_Array <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11519.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)) ;
                }
              }
              ioArgument_ioRightExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10615, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11519.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 268)), inCompiler COMMA_HERE) ;
              var_ok_11097 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 270)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                GGS_bigint var_bigIntValue_11962 = var_bigIntSource_11367.readProperty_mValue () ;
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11962.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 272)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11962.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 272)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 272)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11962.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)) ;
                  }
                }
                ioArgument_ioRightExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10615, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11962.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 275)), inCompiler COMMA_HERE) ;
                var_ok_11097 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_6) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 277)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_bigint var_bigIntValue_12416 = var_bigIntSource_11367.readProperty_mValue () ;
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12416.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 279)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12416.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 279)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 279)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      TC_Array <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12416.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10615, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12416.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 282)), inCompiler COMMA_HERE) ;
                  var_ok_11097 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 284)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_bigint var_bigIntValue_12867 = var_bigIntSource_11367.readProperty_mValue () ;
                    GalgasBool test_13 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_13) {
                      test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12867.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 286)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12867.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 286)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 286)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_13) {
                        TC_Array <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12867.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 287)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 287)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 287)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10615, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12867.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 289)), inCompiler COMMA_HERE) ;
                    var_ok_11097 = GGS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_ok_11097.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 294)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_13316 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_13316.ptr ()) {
          test_15 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_15) {
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 295)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GGS_bigint var_bigIntValue_13462 = var_bigIntSource_13316.readProperty_mValue () ;
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                test_17 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13462.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13462.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  TC_Array <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13462.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)) ;
                }
              }
              ioArgument_ioLeftExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_11055, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13462.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 300)), inCompiler COMMA_HERE) ;
              var_ok_11097 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 302)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_bigint var_bigIntValue_13892 = var_bigIntSource_13316.readProperty_mValue () ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13892.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 304)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13892.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 304)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 304)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    TC_Array <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13892.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 305)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 305)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 305)) ;
                  }
                }
                ioArgument_ioLeftExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_11055, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13892.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 307)), inCompiler COMMA_HERE) ;
                var_ok_11097 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                test_22 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 309)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  GGS_bigint var_bigIntValue_14333 = var_bigIntSource_13316.readProperty_mValue () ;
                  GalgasBool test_23 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_23) {
                    test_23 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14333.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 311)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14333.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 311)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 311)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_23) {
                      TC_Array <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14333.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 312)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 312)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 312)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_11055, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14333.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 314)), inCompiler COMMA_HERE) ;
                  var_ok_11097 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_22) {
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 316)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    GGS_bigint var_bigIntValue_14771 = var_bigIntSource_13316.readProperty_mValue () ;
                    GalgasBool test_26 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_26) {
                      test_26 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14771.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 318)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14771.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 318)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 318)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_26) {
                        TC_Array <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14771.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 319)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 319)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 319)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_11055, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14771.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 321)), inCompiler COMMA_HERE) ;
                    var_ok_11097 = GGS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_ok_11097.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_propertyMap_2E_element var_prop_15252 = extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_28 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_28) {
          extensionMethod_checkSetAccess (var_prop_15252.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)) ;
          GGS_propertyAccessExpressionForGeneration var_conversionExpression_15416 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_15252.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 332)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15416 ;
          var_ok_11097 = GGS_bool (ComparisonKind::equal, var_prop_15252.readProperty_mPropertyType ().objectCompare (var_leftResultType_10615)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_28) {
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        GGS_bool test_30 = var_ok_11097.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 336)) ;
        if (GalgasBool::boolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 336)).readProperty_getterMap ().getter_hasKey (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 336)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 336)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_methodKind var_kind_15939 ;
          GGS_functionSignature var_argumentTypeList_15976 ;
          GGS_bool var_hasCompilerArgument_16017 ;
          GGS_unifiedTypeMapEntry var_returnedType_16050 ;
          GGS_location joker_16001 ; // Joker input parameter
          GGS_methodQualifier joker_16071_2 ; // Joker input parameter
          GGS_string joker_16071_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 337)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 338)).readProperty_typeName (), var_kind_15939, var_argumentTypeList_15976, joker_16001, var_hasCompilerArgument_16017, var_returnedType_16050, joker_16071_2, joker_16071_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 337)) ;
          var_ok_11097 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_15976.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 346)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_16050.objectCompare (var_leftResultType_10615)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 346)) ;
          GGS_getterCallExpressionForGeneration var_conversionExpression_16206 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_10615, constinArgument_inErrorLocation, var_kind_15939, ioArgument_ioRightExpression, GGS_stringlist::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 354)).readProperty_typeName ().readProperty_string (), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_16017, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_16206 ;
        }
      }
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_ok_11097.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 360)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        TC_Array <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).add_operation (GGS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).add_operation (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).add_operation (GGS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).add_operation (extensionGetter_definition (var_rightType_11055, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 363)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 363)).add_operation (GGS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 363)).add_operation (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364)).add_operation (GGS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)).add_operation (extensionGetter_definition (var_leftResultType_10615, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 361)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 172)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 180)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverType_7239 ;
  {
  const GGS_assignmentInstructionAST temp_0 = this ;
  GGS_string joker_7256 ; // Joker input parameter
  GGS_string joker_7263 ; // Joker input parameter
  extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_0.readProperty_mTargetVariableName (), var_receiverType_7239, joker_7256, joker_7263, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 196)) ;
  }
  GGS_unifiedTypeMapEntry var_targetType_7276 = var_receiverType_7239 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_assignmentInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyMap var_propertyMap_7356 = extensionGetter_definition (var_targetType_7276, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 204)).readProperty_propertyMap () ;
      GGS_AccessControl var_accessControl_7462 ;
      GGS_bool var_isConstant_7481 ;
      const GGS_assignmentInstructionAST temp_3 = this ;
      var_propertyMap_7356.method_searchKey (temp_3.readProperty_mOptionalProperty (), var_accessControl_7462, var_isConstant_7481, var_targetType_7276, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 205)) ;
      const GGS_assignmentInstructionAST temp_4 = this ;
      extensionMethod_checkSetAccess (var_accessControl_7462, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_4.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 206)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isConstant_7481.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_assignmentInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOptionalProperty ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 208)) ;
        }
      }
    }
  }
  GGS_semanticExpressionForGeneration var_expression_8017 ;
  const GGS_assignmentInstructionAST temp_8 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_8.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_7276, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8017, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 212)) ;
  {
  const GGS_assignmentInstructionAST temp_9 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_7276, var_expression_8017.readProperty_mResultType (), temp_9.readProperty_mInstructionLocation (), var_expression_8017, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 222)) ;
  }
  GGS_string var_targetVariableCppName_8256 ;
  GGS_string var_nameForCheckingFormalParameterUsing_8292 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_assignmentInstructionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      {
      const GGS_assignmentInstructionAST temp_12 = this ;
      GGS_unifiedTypeMapEntry joker_8454 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_12.readProperty_mTargetVariableName (), joker_8454, var_targetVariableCppName_8256, var_nameForCheckingFormalParameterUsing_8292, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 232)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_assignmentInstructionAST temp_13 = this ;
    GGS_unifiedTypeMapEntry joker_8626 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mTargetVariableName (), joker_8626, var_targetVariableCppName_8256, var_nameForCheckingFormalParameterUsing_8292, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 239)) ;
    }
  }
  const GGS_assignmentInstructionAST temp_14 = this ;
  const GGS_assignmentInstructionAST temp_15 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_receiverType_7239, var_targetType_7276, var_targetVariableCppName_8256, var_nameForCheckingFormalParameterUsing_8292, temp_14.readProperty_mOptionalProperty ().readProperty_string (), var_expression_8017, temp_15.readProperty_mTargetVariableName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 247)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_9603 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas", 267)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas", 267)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_propertiesAreMutable (var_selfAvailable_9603.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 268)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
        }
      }
      GGS_propertyMap var_propertyMap_9844 = extensionGetter_definition (var_selfAvailable_9603.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271)).readProperty_propertyMap () ;
      GGS_bool var_isConstant_9967 ;
      GGS_unifiedTypeMapEntry var_targetType_9983 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GGS_AccessControl joker_9959 ; // Joker input parameter
      var_propertyMap_9844.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_9959, var_isConstant_9967, var_targetType_9983, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isConstant_9967.operator_and (var_selfAvailable_9603.readProperty_selfMutability ().getter_isInitializer (SOURCE_FILE ("instruction-assignment.galgas", 273)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 273)) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 273)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 274)) ;
        }
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GGS_string var_targetVariableCppName_10169 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 277)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_selfPropertyAssignmentInstructionAST temp_10 = this ;
        test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_propertyMap var_propertyMap_10428 = extensionGetter_definition (var_targetType_9983, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 280)).readProperty_propertyMap () ;
          GGS_AccessControl var_accessControl_10536 ;
          GGS_bool var_isConstant_10555 ;
          const GGS_selfPropertyAssignmentInstructionAST temp_11 = this ;
          var_propertyMap_10428.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_accessControl_10536, var_isConstant_10555, var_targetType_9983, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
          const GGS_selfPropertyAssignmentInstructionAST temp_12 = this ;
          extensionMethod_checkSetAccess (var_accessControl_10536, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_12.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = var_isConstant_10555.boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_selfPropertyAssignmentInstructionAST temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mOptionalProperty ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 284)) ;
            }
          }
        }
      }
      GGS_semanticExpressionForGeneration var_expression_11128 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_16.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9983, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11128, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 288)) ;
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      GGS_unifiedTypeMapEntry joker_11276_3 ; // Joker input parameter
      GGS_string joker_11276_2 ; // Joker input parameter
      GGS_string joker_11276_1 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_17.readProperty_mTargetSelfPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 299)), temp_18.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_11276_3, joker_11276_2, joker_11276_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 298)) ;
      }
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_9983, var_expression_11128.readProperty_mResultType (), temp_19.readProperty_mInstructionLocation (), var_expression_11128, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 302)) ;
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_20 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_21 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_9603.readProperty_type (), var_targetType_9983, var_targetVariableCppName_10169, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), temp_20.readProperty_mOptionalProperty ().readProperty_string (), var_expression_11128, temp_21.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 304)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPropertyAssignmentInstructionAST temp_22 = this ;
    TC_Array <FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 314)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_13158 ;
  const GGS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13158, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 338)) ;
  {
  const GGS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 345)) ;
  }
  const GGS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 347)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_assignmentInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mOptionalProperty ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_assignmentInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.readProperty_mTargetCppName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)).add_operation (var_sourceVar_13158, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_assignmentInstructionForGeneration temp_7 = this ;
      test_6 = extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 350)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-assignment.galgas", 350)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_bool var_isReference_13596 ;
        const GGS_assignmentInstructionForGeneration temp_8 = this ;
        extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 351)).readProperty_typeKind ().method_extractClassType (var_isReference_13596, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 351)) ;
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_isReference_13596.boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_assignmentInstructionForGeneration temp_10 = this ;
            ioArgument_ioGeneratedCode.plusAssign_operation(temp_10.readProperty_mTargetCppName ().add_operation (GGS_string (".setProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)) ;
            const GGS_assignmentInstructionForGeneration temp_11 = this ;
            ioArgument_ioGeneratedCode.plusAssign_operation(temp_11.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)) ;
            ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" (").add_operation (var_sourceVar_13158, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)) ;
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          const GGS_assignmentInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_12.readProperty_mTargetCppName ().add_operation (GGS_string (".setter_setProperty_5F_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
          const GGS_assignmentInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 358)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" (").add_operation (var_sourceVar_13158, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)).add_operation (GGS_string (" COMMA_HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_assignmentInstructionForGeneration temp_14 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_14.readProperty_mTargetCppName ().add_operation (GGS_string (".mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)) ;
      const GGS_assignmentInstructionForGeneration temp_15 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" = ").add_operation (var_sourceVar_13158, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 365)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 365)) ;
    }
  }
  {
  const GGS_assignmentInstructionForGeneration temp_16 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_16.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 367)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 139)) ;
  const GGS_structuredCastInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mElseInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 140)) ;
  const GGS_structuredCastInstructionAST temp_2 = this ;
  UpEnumerator_castInstructionBranchListAST enumerator_5743 (temp_2.readProperty_mCastInstructionBranchList ()) ;
  while (enumerator_5743.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5743.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 142)) ;
    enumerator_5743.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_castExpression_6727 ;
  const GGS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-cast.galgas", 161)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_castExpression_6727, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 158)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 168)) ;
  }
  GGS_castInstructionBranchListForGeneration var_castBranchList_6869 = GGS_castInstructionBranchListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_structuredCastInstructionAST temp_1 = this ;
  UpEnumerator_castInstructionBranchListAST enumerator_7000 (temp_1.readProperty_mCastInstructionBranchList ()) ;
  while (enumerator_7000.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_7089 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7000.current_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 173)) ;
    GGS_unifiedTypeMapEntry var_t_7226 = var_type_7089 ;
    GGS_bool var_found_7249 = GGS_bool (ComparisonKind::equal, var_t_7226.objectCompare (var_castExpression_6727.readProperty_mResultType ())) ;
    if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 177)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 177)).isValid ()) {
      uint32_t variant_7293 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 177)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 177)).uintValue () ;
      bool loop_7293 = true ;
      while (loop_7293) {
        loop_7293 = var_found_7249.operator_not (SOURCE_FILE ("instruction-cast.galgas", 178)).operator_and (extensionGetter_definition (var_t_7226, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 178)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 178)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).isValid () ;
        if (loop_7293) {
          loop_7293 = var_found_7249.operator_not (SOURCE_FILE ("instruction-cast.galgas", 178)).operator_and (extensionGetter_definition (var_t_7226, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 178)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 178)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).boolValue () ;
        }
        if (loop_7293 && (0 == variant_7293)) {
          loop_7293 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 177)) ;
        }
        if (loop_7293) {
          variant_7293 -- ;
          var_t_7226 = extensionGetter_definition (var_t_7226, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 179)).readProperty_superType () ;
          var_found_7249 = GGS_bool (ComparisonKind::equal, var_t_7226.objectCompare (var_castExpression_6727.readProperty_mResultType ())) ;
        }
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_found_7249.operator_not (SOURCE_FILE ("instruction-cast.galgas", 182)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_7000.current_mTypeName (HERE).readProperty_location (), GGS_string ("the '@").add_operation (enumerator_7000.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)).add_operation (extensionGetter_definition (var_castExpression_6727.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 183)) ;
      }
    }
    GGS_string var_localConstantName_7735 ;
    GGS_localConstantList var_localConstantList_7761 = GGS_localConstantList::init (inCompiler COMMA_HERE) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_7000.current_mConstantVarName (HERE).readProperty_string ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 189)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_localConstantName_7735 = GGS_string ("cast_").add_operation (enumerator_7000.current_mConstantVarName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 190)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 190)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 190)).add_operation (enumerator_7000.current_mConstantVarName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 190)) ;
        var_localConstantList_7761.addAssign_operation (var_type_7089, enumerator_7000.current_mConstantVarName (HERE), GGS_bool (true), var_localConstantName_7735  COMMA_SOURCE_FILE ("instruction-cast.galgas", 191)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      var_localConstantName_7735 = GGS_string::makeEmptyString () ;
    }
    GGS_semanticInstructionListForGeneration var_instructionList_8564 ;
    {
    routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_7761, GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), enumerator_7000.current_mInstructionList (HERE), enumerator_7000.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_8564, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 200)) ;
    }
    var_castBranchList_6869.addAssign_operation (enumerator_7000.current_mTypeComparisonKind (HERE), var_type_7089, var_localConstantName_7735, var_instructionList_8564  COMMA_SOURCE_FILE ("instruction-cast.galgas", 213)) ;
    enumerator_7000.gotoNextObject () ;
  }
  GGS_semanticInstructionListForGeneration var_else_5F_instructionList_9076 ;
  {
  const GGS_structuredCastInstructionAST temp_5 = this ;
  const GGS_structuredCastInstructionAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_5.readProperty_mElseInstructionList (), temp_6.readProperty_mEndOfCastInstruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_9076, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 216)) ;
  }
  {
  const GGS_structuredCastInstructionAST temp_7 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_7.readProperty_mEndOfCastInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 230)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_structuredCastInstructionForGeneration::init_21__21__21_ (var_castExpression_6727, var_castBranchList_6869, var_else_5F_instructionList_9076, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-cast.galgas", 232)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_castCppVarName_10923 ;
  const GGS_structuredCastInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_10923, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 268)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (").add_operation (var_castCppVarName_10923, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)) ;
  }
  const GGS_structuredCastInstructionForGeneration temp_1 = this ;
  UpEnumerator_castInstructionBranchListForGeneration enumerator_11105 (temp_1.readProperty_mCastBranchList ()) ;
  while (enumerator_11105.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11105.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 279)) ;
    switch (enumerator_11105.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GGS_dynamicTypeComparisonKind::Enumeration::invalid:
      break ;
    case GGS_dynamicTypeComparisonKind::Enumeration::enum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (").add_operation (var_castCppVarName_10923, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GGS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (extensionGetter_identifierRepresentation (enumerator_11105.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)) ;
      }
      break ;
    case GGS_dynamicTypeComparisonKind::Enumeration::enum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (extensionGetter_identifierRepresentation (enumerator_11105.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 286)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 287)).add_operation (var_castCppVarName_10923, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 286)) ;
      }
      break ;
    case GGS_dynamicTypeComparisonKind::Enumeration::enum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if ((").add_operation (var_castCppVarName_10923, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)).add_operation (GGS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)).add_operation (extensionGetter_identifierRepresentation (enumerator_11105.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 291)).add_operation (GGS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)).add_operation (extensionGetter_identifierRepresentation (enumerator_11105.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)).add_operation (var_castCppVarName_10923, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 294)).add_operation (GGS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)) ;
      }
      break ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_11105.current_mCastedVarCppName (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 296)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11105.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)).add_operation (enumerator_11105.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (extensionGetter_identifierRepresentation (enumerator_11105.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (var_castCppVarName_10923, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)).add_operation (GGS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)) ;
      }
    }
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11105.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 302)) ;
    }
    if (enumerator_11105.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310)) ;
    }
    enumerator_11105.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_structuredCastInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 313)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 314)) ;
      {
      const GGS_structuredCastInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 315)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 325)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 326)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 327)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opAssignExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_opAssignExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 397)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opAssignExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_14727 ;
  GGS_string var_targetVariableCppName_14754 ;
  GGS_string var_nameForCheckingFormalParameterUsing_14792 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_opAssignExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_14874 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 414)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 414)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = extensionGetter_propertiesAreMutable (var_selfAvailable_14874.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 415)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 415)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              const GGS_opAssignExpressionInstructionAST temp_4 = this ;
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GGS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 416)) ;
            }
          }
          GGS_propertyMap var_propertyMap_15288 = extensionGetter_definition (var_selfAvailable_14874.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 421)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_15405 ;
          const GGS_opAssignExpressionInstructionAST temp_6 = this ;
          GGS_AccessControl joker_15397 ; // Joker input parameter
          var_propertyMap_15288.method_searchKey (temp_6.readProperty_mReceiverName (), joker_15397, var_isConstant_15405, var_targetType_14727, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 422)) ;
          var_nameForCheckingFormalParameterUsing_14792 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_opAssignExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_14754 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 424)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 425)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_15405.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_opAssignExpressionInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 427)) ;
            }
          }
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfAvailable_14874.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 429)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 429)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_opAssignExpressionInstructionAST temp_12 = this ;
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 430)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_opAssignExpressionInstructionAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 433)) ;
        var_targetType_14727.drop () ; // Release error dropped variable
        var_targetVariableCppName_14754.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_14792.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_opAssignExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_14727, var_targetVariableCppName_14754, var_nameForCheckingFormalParameterUsing_14792, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 437)) ;
    }
  }
  const GGS_opAssignExpressionInstructionAST temp_17 = this ;
  UpEnumerator_lstringlist enumerator_16383 (temp_17.readProperty_mStructAttributeList ()) ;
  while (enumerator_16383.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_16432 = extensionGetter_definition (var_targetType_14727, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 446)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_16523 ;
    GGS_bool var_isConstant_16542 ;
    var_propertyMap_16432.method_searchKey (enumerator_16383.current_mValue (HERE), var_accessControl_16523, var_isConstant_16542, var_targetType_14727, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 447)) ;
    extensionMethod_checkSetAccess (var_accessControl_16523, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_16383.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 448)) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_isConstant_16542.boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_opAssignExpressionInstructionAST temp_19 = this ;
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray20  COMMA_SOURCE_FILE ("instruction-concat.galgas", 450)) ;
      }
    }
    enumerator_16383.gotoNextObject () ;
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_opAssignExpressionInstructionAST temp_22 = this ;
    test_21 = extensionGetter_definition (var_targetType_14727, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)).readProperty_features ().getter_contains (extensionGetter_features (temp_22.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 454)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_opAssignExpressionInstructionAST temp_23 = this ;
      const GGS_opAssignExpressionInstructionAST temp_24 = this ;
      TC_Array <FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_14727, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 456)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 456)).add_operation (GGS_string ("' type, but this type does not support the '"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 456)).add_operation (extensionGetter_string (temp_24.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)).add_operation (GGS_string ("' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 455)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_17458 ;
  const GGS_opAssignExpressionInstructionAST temp_26 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_14727, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_17458, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 460)) ;
  {
  const GGS_opAssignExpressionInstructionAST temp_27 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_14727, var_expression_17458.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_17458, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 470)) ;
  }
  const GGS_opAssignExpressionInstructionAST temp_28 = this ;
  const GGS_opAssignExpressionInstructionAST temp_29 = this ;
  const GGS_opAssignExpressionInstructionAST temp_30 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetType_14727, var_targetVariableCppName_14754, var_nameForCheckingFormalParameterUsing_14792, temp_29.readProperty_mStructAttributeList (), var_expression_17458, extensionGetter_cppFunctionName (temp_30.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 479)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 498)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_19313 ;
  GGS_string var_targetVariableCppName_19340 ;
  GGS_string var_nameForCheckingFormalParameterUsing_19378 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_19460 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 515)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 515)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GGS_propertyMap var_propertyMap_19543 = extensionGetter_definition (var_selfAvailable_19460.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 516)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_19660 ;
          const GGS_plusEqualElementsInstructionAST temp_3 = this ;
          GGS_AccessControl joker_19652 ; // Joker input parameter
          var_propertyMap_19543.method_searchKey (temp_3.readProperty_mReceiverName (), joker_19652, var_isConstant_19660, var_targetType_19313, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 517)) ;
          var_nameForCheckingFormalParameterUsing_19378 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_plusEqualElementsInstructionAST temp_4 = this ;
          var_targetVariableCppName_19340 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 519)).add_operation (temp_4.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 520)) ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_isConstant_19660.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_plusEqualElementsInstructionAST temp_6 = this ;
              TC_Array <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 522)) ;
            }
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = extensionGetter_propertiesAreMutable (var_selfAvailable_19460.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 524)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 524)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_plusEqualElementsInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property cannot be mutated in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 525)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_plusEqualElementsInstructionAST temp_11 = this ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas", 528)) ;
        var_targetType_19313.drop () ; // Release error dropped variable
        var_targetVariableCppName_19340.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_19378.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_plusEqualElementsInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_19313, var_targetVariableCppName_19340, var_nameForCheckingFormalParameterUsing_19378, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 532)) ;
    }
  }
  const GGS_plusEqualElementsInstructionAST temp_14 = this ;
  UpEnumerator_lstringlist enumerator_20641 (temp_14.readProperty_mStructAttributeList ()) ;
  while (enumerator_20641.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_20690 = extensionGetter_definition (var_targetType_19313, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_20825 ;
    GGS_bool var_isConstant_20844 ;
    var_propertyMap_20690.method_searchKey (enumerator_20641.current_mValue (HERE), var_accessControl_20825, var_isConstant_20844, var_targetType_19313, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 543)) ;
    extensionMethod_checkSetAccess (var_accessControl_20825, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_20641.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 544)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_isConstant_20844.boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_20641.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 556)) ;
      }
    }
    enumerator_20641.gotoNextObject () ;
  }
  GGS_functionSignature var_addAssignOperatorArguments_21519 = extensionGetter_definition (var_targetType_19313, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 560)).readProperty_addAssignOperatorArguments () ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_21519.getter_count (SOURCE_FILE ("instruction-concat.galgas", 561)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_plusEqualElementsInstructionAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_19313, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 562)) ;
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_plusEqualElementsInstructionAST temp_21 = this ;
      test_20 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 565)).objectCompare (var_addAssignOperatorArguments_21519.getter_count (SOURCE_FILE ("instruction-concat.galgas", 565)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_plusEqualElementsInstructionAST temp_22 = this ;
        const GGS_plusEqualElementsInstructionAST temp_23 = this ;
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GGS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_19313, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).add_operation (GGS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).add_operation (var_addAssignOperatorArguments_21519.getter_count (SOURCE_FILE ("instruction-concat.galgas", 568)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).add_operation (GGS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 568)).add_operation (temp_23.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 569)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 568)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 569)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 566)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      GGS_semanticExpressionListForGeneration var_effectiveParameterList_22352 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_plusEqualElementsInstructionAST temp_25 = this ;
      UpEnumerator_actualOutputArgumentList enumerator_22420 (temp_25.readProperty_mExpressions ()) ;
      UpEnumerator_functionSignature enumerator_22506 (var_addAssignOperatorArguments_21519) ;
      while (enumerator_22420.hasCurrentObject () && enumerator_22506.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_22858 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_22420.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22506.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_22858, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 573)) ;
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::notEqual, enumerator_22506.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22420.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            GGS_string temp_27 ;
            const GalgasBool test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_22506.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_28) {
              temp_27 = enumerator_22506.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)) ;
            }else if (GalgasBool::boolFalse == test_28) {
              temp_27 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_22966 = GGS_string ("!").add_operation (temp_27, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)) ;
            TC_Array <FixItDescription> fixItArray29 ;
            appendFixItActions (fixItArray29, kFixItReplace, var_s_22966) ;
            inCompiler->emitSemanticError (enumerator_22420.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_22966, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 584)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 584)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 584)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_22506.current_mFormalArgumentType (HERE), var_expression_22858.readProperty_mResultType (), enumerator_22420.current_mEndOfExpressionLocation (HERE), var_expression_22858, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 588)) ;
        }
        var_effectiveParameterList_22352.addAssign_operation (var_expression_22858  COMMA_SOURCE_FILE ("instruction-concat.galgas", 589)) ;
        enumerator_22420.gotoNextObject () ;
        enumerator_22506.gotoNextObject () ;
      }
      const GGS_plusEqualElementsInstructionAST temp_30 = this ;
      const GGS_plusEqualElementsInstructionAST temp_31 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_plusEqualnstructionForGeneration::init_21__21__21__21__21__21_ (var_targetVariableCppName_19340, var_targetType_19313, var_nameForCheckingFormalParameterUsing_19378, temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mStructAttributeList (), var_effectiveParameterList_22352, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 592)) ;
    }
  }
}
