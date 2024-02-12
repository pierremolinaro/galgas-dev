#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1080)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1091)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1088))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1098)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1108)), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1109)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1106))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_44267 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1118)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_selfTypeDefinition_44267.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas", 1119)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_semanticTypeForGeneration temp_2 = this ;
    result_result = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_44267.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124)), var_selfTypeDefinition_44267.readProperty_mSuperType () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1122))) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1138)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1138))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1138)) ;
  GALGAS_string var_code_45415 ;
  {
  const GALGAS_functionImplementationForGeneration temp_1 = this ;
  const GALGAS_functionImplementationForGeneration temp_2 = this ;
  const GALGAS_functionImplementationForGeneration temp_3 = this ;
  const GALGAS_functionImplementationForGeneration temp_4 = this ;
  const GALGAS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1140)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1140)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GALGAS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_45415, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1139)) ;
  }
  const GALGAS_functionImplementationForGeneration temp_6 = this ;
  const GALGAS_functionImplementationForGeneration temp_7 = this ;
  const GALGAS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_45415, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1155)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1151))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1166)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1166))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1166)) ;
  GALGAS_string var_code_46326 ;
  {
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1168)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1168)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1170)), temp_2.readProperty_mFunctionInstructionList (), GALGAS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GALGAS_bool (true), GALGAS_bool (false), var_code_46326, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1167)) ;
  }
  const GALGAS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_46326, GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1182)), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1183)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1179))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1192)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1202)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1202))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1202)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1212)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1212))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1212)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                       GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1223)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1226)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1226)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1226)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_2.readProperty_mObjcCocoaHeader (), GALGAS_string ("\n\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1224)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1236)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1236)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1236))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1236)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_4 = this ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_4.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1237)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1237)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1237))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1237)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_5 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_6 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_5.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1240)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1240)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1240)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_6.readProperty_mObjcCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1238)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_7 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_7.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1250)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1250)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1250))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1250)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_8 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_9 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_8.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1253)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_9.readProperty_mSwiftCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1251)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1269)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1278)) ;
  const GALGAS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1289)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1301)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1301))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)) ;
  cEnumerator_wrapperFileMap enumerator_51229 (constinArgument_inFilewrapperFileMap, kENUMERATION_UP) ;
  while (enumerator_51229.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1303)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1303))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_51229.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_51229.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1305))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_51229.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1307))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1307)) ;
    }
    enumerator_51229.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_51592 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_51592.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_51592.current_mRegularFileMap (HERE), enumerator_51592.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)) ;
    }
    enumerator_51592.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_regularFileIndexStringList_52123 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1327)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_52173 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1328)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_52232 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1329)) ;
  GALGAS_stringlist var_directoryIndexStringList_52289 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1330)) ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_52123, var_directoryIndexStringList_52289, var_regularTextContentIndexStringList_52232, var_regularBinaryContentIndexStringList_52173, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_52123, var_directoryIndexStringList_52289, var_regularTextContentIndexStringList_52232, var_regularBinaryContentIndexStringList_52173, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_52939 (temp_3.readProperty_mFilewrapperTemplateListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_52939.hasCurrentObject ()) {
    const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_52939.current_mFilewrapperTemplateName (HERE), enumerator_52939.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)) ;
    enumerator_52939.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GALGAS_string constinArgument_inFilewrapperName,
                                                              const GALGAS_string constinArgument_inFilewrapperDirectory,
                                                              const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                                              const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GALGAS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_53662 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_53662.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_53662.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_contents_53749 = GALGAS_string::class_func_stringWithContentsOfFile (enumerator_53662.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)).add_operation (enumerator_53662.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1370)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53662.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1371)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1373)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1373)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, var_contents_53749.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1375)).objectCompare (GALGAS_uint (uint32_t (100U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_stringlist var_components_54202 = var_contents_53749.getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1376)) ;
            GALGAS_string var_lastLine_54295 ;
            {
            var_components_54202.setter_popLast (var_lastLine_54295, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1377)) ;
            }
            cEnumerator_stringlist enumerator_54318 (var_components_54202, kENUMERATION_UP) ;
            const bool bool_2 = true ;
            if (enumerator_54318.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1380)) ;
              while (enumerator_54318.hasCurrentObject () && bool_2) {
                GALGAS_string var_s_54414 = enumerator_54318.current_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1382)) ;
                ioArgument_ioImplementation.plusAssign_operation(var_s_54414.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1383)).add_operation (GALGAS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383)) ;
                enumerator_54318.gotoNextObject () ;
              }
            }
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsStrictSup, var_lastLine_54295.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1385)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                ioArgument_ioImplementation.plusAssign_operation(var_lastLine_54295.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1386)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1386)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          ioArgument_ioImplementation.plusAssign_operation(var_contents_53749.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1389)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1389)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1391)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53662.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1392)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1392)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1393)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1394)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1394)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1395)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53662.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1396)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1396)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1397)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53662.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1398)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1398)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1398)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1399)) ;
        ioArgument_ioImplementation.plusAssign_operation(var_contents_53749.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1400)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1400)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1400)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1401)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53662.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1402)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1404)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1405)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_data var_contents_55593 = GALGAS_data::class_func_dataWithContentsOfFile (enumerator_53662.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (enumerator_53662.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (enumerator_53662.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (var_contents_55593.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1411)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (var_contents_55593.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (enumerator_53662.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1414)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)).add_operation (enumerator_53662.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1415)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (enumerator_53662.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1416)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1416)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (var_contents_55593.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1418)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (enumerator_53662.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)) ;
    }
    enumerator_53662.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_56599 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_56599.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_56599.current_lkey (HERE).readProperty_string (), enumerator_56599.current_mWrapperDirectoryIndex (HERE), enumerator_56599.current_mRegularFileMap (HERE), enumerator_56599.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)) ;
    }
    enumerator_56599.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1437)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1437)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1438)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1438)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)) ;
  cEnumerator_wrapperFileMap enumerator_57205 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_57205.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_57205.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)) ;
    enumerator_57205.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  nullptr\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1447)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1446)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1447)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1448)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1448)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)) ;
  cEnumerator_wrapperDirectoryMap enumerator_57828 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_57828.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_57828.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)) ;
    enumerator_57828.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  nullptr\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1458)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1459)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1461)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472)) ;
  GALGAS_string var_filewrapperImplementation_59185 = GALGAS_string::makeEmptyString () ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GALGAS_string::makeEmptyString (), GALGAS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_59185, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_59185 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_5 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_59645 (temp_5.readProperty_mFilewrapperTemplateListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_59645.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_59798 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_59849 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_stringset var_unusedVariableCppNameSet_59895 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1491)) ;
    var_unusedVariableCppNameSet_59895.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1492))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1492)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_60015 (enumerator_59645.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_60015.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_59895.addAssign_operation (enumerator_60015.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1494)) ;
      enumerator_60015.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_60146 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_59645.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_59798, ioArgument_ioInclusionSet, var_temporaryVariableIndex_59849, var_unusedVariableCppNameSet_59895, var_useColumnMarker_60146, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1497)) ;
    }
    const GALGAS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_59645.current_mFilewrapperTemplateName (HERE), enumerator_59645.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_59895, var_useColumnMarker_60146, var_generatedCodeForInstructionList_59798 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)) ;
    enumerator_59645.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n#include \"cCollectionElement.h\"\n#include \"cSortedListElement.h\"\n#include \"capSortedListElement.h\"\n#include \"Compiler.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement::cMapElement (const GALGAS_lstring & inLKey\n                          COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmProperty_lkey (inLKey) {\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"String-class.h\"\n#include \"Timer.h\"\n#include \"AC_GALGAS_root.h\"\n#include \"C_galgas_type_descriptor.h\"\n#include \"typeComparisonResult.h\"\n#include \"cGenericAbstractEnumerator.h\"\n#include \"cEnumerator_range.h\"\n#include \"AC_GALGAS_list.h\"\n#include \"AC_GALGAS_sortedlist.h\"\n#include \"AC_GALGAS_map.h\"\n#include \"AC_GALGAS_reference_class.h\"\n#include \"AC_GALGAS_value_class.h\"\n#include \"AC_GALGAS_enumAssociatedValues.h\"\n#include \"AC_GALGAS_graph.h\"\n#include \"acStrongPtr_class.h\"\n#include \"cPtr_weakReference_proxy.h\"\n#include \"AC_GALGAS_weak_reference.h\"\n#include \"C_BoolCommandLineOption.h\"\n#include \"C_UIntCommandLineOption.h\"\n#include \"C_StringCommandLineOption.h\"\n#include \"C_StringListCommandLineOption.h\"\n#include \"PrologueEpilogue.h\"\n#include \"BigSigned.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass Compiler ;\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"cCollectionElement.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement : public cCollectionElement {\n//--- Attribut\n  public: GALGAS_lstring mProperty_lkey ;\n\n//--- Default constructor\n  public: cMapElement (const GALGAS_lstring & inLKey\n                        COMMA_LOCATION_ARGS) ;\n\n//--- No copy\n  private: cMapElement (const cMapElement &) ;\n  private: cMapElement & operator = (const cMapElement &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"cSortedListElement.h\"\n#include \"capSortedListElement.h\"\n#include \"C_galgas_function_descriptor.h\"\n#include \"cObjectArray.h\"\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @sint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint (const int32_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @sint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mSInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @object type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_object ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_object : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: cPtr_object * mSharedObject ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_object (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n                          COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_object (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_object (const GALGAS_object & inSource) ;\n  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n\n//--------------------------------- Embedded Object\n  public: const AC_GALGAS_root * embeddedObject (void) const ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @uint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue ++ ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_uint (const uint32_t inValue) ;\n  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//  @uint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mUInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("@bool type").stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bool : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: enumGalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_bool (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_bool (const bool inValue) ; // Is built\n  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GALGAS_bool (const typeComparisonKind inComparisonKind,\n                        const typeComparisonResult inComparisonResult) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n// @binaryset type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"C_BDD.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_binaryset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: C_BDD mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline C_BDD bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_binaryset (const C_BDD & inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @function type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass C_galgas_function_descriptor ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_function : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mFunctionDescriptor ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = nullptr ; }\n  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_function (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_function (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_function (const GALGAS_function & inSource) ;\n  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @type type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_type : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return nullptr != mTypeDescriptor ; }\n  public: inline void drop (void) override { mTypeDescriptor = nullptr ; }\n  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_type (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_type (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_type (const GALGAS_type & inSource) ;\n  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @location type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"LocationInSource.h\"\n#include \"SourceTextInString.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_location : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: class InternalLocation * mInternalLocation ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: LocationInSource startLocation (void) const ;\n  public: LocationInSource endLocation (void) const ;\n  public: SourceTextInString sourceText (void) const ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_location (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_location (const GALGAS_location & inSource) ;\n  public: GALGAS_location & operator = (const GALGAS_location & inSource) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_location (const LocationInSource & inStartLocationInSource,\n                           const LocationInSource & inEndLocationInSource,\n                           const SourceTextInString & inSourceText) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @data type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_data : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: U8Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline U8Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_data (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_data (const U8Data & inData) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @char type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_char : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_char (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_char (const utf32 inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//  @double type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_double : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mDoubleValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double doubleValue (void) const { return mDoubleValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_double (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_double (const double inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @string type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_string : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_string (void) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GALGAS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_string (const String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @stringset type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_stringset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: class cSharedStringsetRoot * mSharedRoot ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedRoot != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_stringset (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_stringset (void) ;\n\n//--------------------------------- In debug mode : check method\n  protected: void checkStringset (LOCATION_ARGS) const ;\n\n//--------------------------------- Insulate\n  protected: void insulate (LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @filewrapper type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_filewrapper : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("@application package").stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_application final {\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @bigint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bigint : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: BigSigned mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline BigSigned bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GALGAS_bigint (const BigSigned & inValue) ;\n  public: GALGAS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_bigint (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @timer type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_timer : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_timer (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_timerPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1574))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_charPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1578))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_doublePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1582))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1586))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_locationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1590))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1594))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1598))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GALGAS_string & ioArgument_ioHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1613)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1613)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1613)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mCppDeclarationString () ;
  const GALGAS_primitiveTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_64440 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1620)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_primitiveTypeForGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_64440.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1624)), var_selfTypeDefinition_64440.readProperty_mClassFunctionMap (), var_selfTypeDefinition_64440.readProperty_mClassMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1622))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1622)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_primitiveTypeForGeneration temp_5 = this ;
    result_result.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_64440.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1631)), var_selfTypeDefinition_64440.readProperty_mIsConcrete (), var_selfTypeDefinition_64440.readProperty_mClassFunctionMap (), var_selfTypeDefinition_64440.readProperty_mGetterMap (), var_selfTypeDefinition_64440.readProperty_mSetterMap (), var_selfTypeDefinition_64440.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_64440.readProperty_mClassMethodMap (), var_selfTypeDefinition_64440.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_64440.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_64440.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_64440.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_64440.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const GALGAS_string constinArgument_inDirectory,
                                                              const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                                              GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                              GALGAS_stringlist & ioArgument_ioToolCppFileList,
                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_generatedCode_66199 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1663))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_66300 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_66300.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_66300.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1665)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_66300.current_mDeclaration (HERE).ptr (), var_generatedCode_66199, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1666)) ;
      }
    }
    enumerator_66300.gotoNextObject () ;
  }
  var_generatedCode_66199.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1669)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_66517 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_66517.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_66517.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1671)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_66199.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_66517.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1672)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1672)) ;
      }
    }
    enumerator_66517.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_66708 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_66708.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_66708.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1676)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_66846 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1677)) ;
        GALGAS_string var_code_66863 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_66708.current_mDeclaration (HERE).ptr (), joker_66846, var_code_66863, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1677)) ;
        var_generatedCode_66199.plusAssign_operation(var_code_66863, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1678)) ;
      }
    }
    enumerator_66708.gotoNextObject () ;
  }
  var_generatedCode_66199.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_67011 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_67011.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_67011.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_stringset joker_67162 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1684)) ;
        GALGAS_string var_headerString_32__67179 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_67011.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_67162, var_headerString_32__67179, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684)) ;
        var_generatedCode_66199.plusAssign_operation(var_headerString_32__67179, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1685)) ;
      }
    }
    enumerator_67011.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1688)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1689)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1690)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_66199, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1691)) ;
      }
    }
  }
  var_generatedCode_66199 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1704))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_67945 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_67945.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_67945.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1706)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_66199.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_67945.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1707)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1707)) ;
        GALGAS_stringset joker_68174 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1708)) ;
        GALGAS_string var_code_68191 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_67945.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::class_func_emptyMap (SOURCE_FILE ("semanticGeneration.galgas", 1708)), joker_68174, var_code_68191, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1708)) ;
        var_generatedCode_66199.plusAssign_operation(var_code_68191, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1709)) ;
      }
    }
    enumerator_67945.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1712)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1713)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1714)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_66199, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1715)) ;
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

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (Compiler * /* inCompiler */,
                                                                                     const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                     const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_295_.increment () ;
      enumerator_295.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (Compiler * /* inCompiler */,
                                                                                             const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"Compiler.h\"\n#include \"C_galgas_io.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_256_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_256 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_256.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_256.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_256_.increment () ;
      enumerator_256.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const GALGAS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                              const GALGAS_lstringlist constinArgument_inRootEntities,
                                              const GALGAS_string /* constinArgument_inProductDirectory */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 43)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringlist var_undefinedNodeList_2079 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 45)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, var_undefinedNodeList_2079.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string var_s_2196 = GALGAS_string ("usefulness computation, undefined nodes:") ;
            cEnumerator_stringlist enumerator_2254 (var_undefinedNodeList_2079, kENUMERATION_UP) ;
            while (enumerator_2254.hasCurrentObject ()) {
              var_s_2196.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_2254.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)) ;
              enumerator_2254.gotoNextObject () ;
            }
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 51)), var_s_2196, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 51)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_lstringlist var_usefullEntityList_2420 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("useful-entities-computation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 54)) ;
          GALGAS_stringset var_usefullEntitySet_2514 = GALGAS_stringset::class_func_setWithLStringList (var_usefullEntityList_2420  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
          GALGAS_stringset var_allEntitySet_2594 = GALGAS_stringset::class_func_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 56))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)) ;
          GALGAS_stringset var_unusedEntities_2683 = var_allEntitySet_2594.substract_operation (var_usefullEntitySet_2514, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)) ;
          GALGAS_uselessEntityLocationMap var_uselessEntityLocationMap_2768 = GALGAS_uselessEntityLocationMap::class_func_emptyMap (SOURCE_FILE ("useful-entities-computation.galgas", 58)) ;
          cEnumerator_stringset enumerator_2809 (var_unusedEntities_2683, kENUMERATION_UP) ;
          while (enumerator_2809.hasCurrentObject ()) {
            GALGAS_location var_l_2856 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2809.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 60)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, var_l_2856.objectCompare (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 61)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 62)), GALGAS_string ("unused entity, '").add_operation (enumerator_2809.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2768.getter_hasKey (var_l_2856.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 64)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2768.setter_insertKey (var_l_2856.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 65)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 65)), var_l_2856, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 65)) ;
                  }
                }
              }
            }
            enumerator_2809.gotoNextObject () ;
          }
          cEnumerator_uselessEntityLocationMap enumerator_3311 (var_uselessEntityLocationMap_2768, kENUMERATION_UP) ;
          while (enumerator_3311.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3311.current_mLocation (HERE), GALGAS_string ("unused entity, due to option --").add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)) ;
            enumerator_3311.gotoNextObject () ;
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

GALGAS_lstring function_getterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inGetterName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)), constinArgument_inGetterName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)) ;
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

static GALGAS_object functionWithGenericHeader_getterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GALGAS_lstring function_setterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inSetterName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)), constinArgument_inSetterName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)) ;
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

static GALGAS_object functionWithGenericHeader_setterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GALGAS_lstring function_methodNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inMethodName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)), constinArgument_inMethodName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)) ;
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

static GALGAS_object functionWithGenericHeader_methodNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inLexiqueName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 96)), constinArgument_inLexiqueName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 96)) ;
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

static GALGAS_object functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_grammarNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inGrammarName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 102)), constinArgument_inGrammarName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 102)) ;
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

static GALGAS_object functionWithGenericHeader_grammarNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_syntaxNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inSyntaxName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 108)), constinArgument_inSyntaxName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 108)) ;
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

static GALGAS_object functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_optionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inOptionName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 114)), constinArgument_inOptionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 114)) ;
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

static GALGAS_object functionWithGenericHeader_optionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)), constinArgument_inFilewrapperName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)) ;
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

static GALGAS_object functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                                      const GALGAS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                                       const GALGAS_lstring & constinArgument_inTemplateName,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 127)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 127)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 127)), constinArgument_inTemplateName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 127)) ;
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

static GALGAS_object functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                                              const GALGAS_location & /* inErrorLocation */
                                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GALGAS_lstring function_functionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFunctionName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 133)), constinArgument_inFunctionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 133)) ;
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

static GALGAS_object functionWithGenericHeader_functionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_procedureNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inProcName,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 139)), constinArgument_inProcName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 139)) ;
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

static GALGAS_object functionWithGenericHeader_procedureNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_typeNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 145)), constinArgument_inTypeName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 145)) ;
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

static GALGAS_object functionWithGenericHeader_typeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_afterNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("after"), constinArgument_inLocation, inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 151)) ;
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

static GALGAS_object functionWithGenericHeader_afterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_beforeNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("before"), constinArgument_inLocation, inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 157)) ;
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

static GALGAS_object functionWithGenericHeader_beforeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_lstring function_rootRuleNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFileExtension,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("rule .").add_operation (constinArgument_inFileExtension.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 163)), constinArgument_inFileExtension.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 163)) ;
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

static GALGAS_object functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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
//Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 114)) ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_5047 ;
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5047, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 130)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_5332 ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5332, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 140)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_5619 ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5619, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 150)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_if_5F_expression_5047.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 160)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ifExpressionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GALGAS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5047.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)), fixItArray5  COMMA_SOURCE_FILE ("expression-if.galgas", 161)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, var_then_5F_expression_5332.readProperty_mResultType ().objectCompare (var_else_5F_expression_5619.readProperty_mResultType ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_ifExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5332.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)).add_operation (extensionGetter_definition (var_else_5F_expression_5619.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)), fixItArray8  COMMA_SOURCE_FILE ("expression-if.galgas", 165)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::class_func_new (var_then_5F_expression_5332.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5047, var_then_5F_expression_5332, var_else_5F_expression_5619  COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GALGAS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_ifExpression_7494 ;
  const GALGAS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7494, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 200)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 208)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 209)) ;
  const GALGAS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 210)) ;
  GALGAS_string var_testVar_7762 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 211)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 212)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_7762, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 213)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 213)).add_operation (var_ifExpression_7494, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 213)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 213)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_7762, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 214)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 214)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 216)) ;
  }
  GALGAS_string var_thenExpression_8230 ;
  const GALGAS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8230, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 217)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 224)).add_operation (var_thenExpression_8230, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 224)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 224)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 225)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_7762, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 227)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 227)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 228)) ;
  }
  GALGAS_string var_elseExpression_8651 ;
  const GALGAS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_8651, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 229)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 236)).add_operation (var_elseExpression_8651, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 236)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 236)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 237)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 238)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 70)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-plus.galgas", 87)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 84)) ;
  GALGAS_unifiedTypeMapEntry var_type_3928 = outArgument_outExpression.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_3928, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 95)).readProperty_mHandledOperatorFlags ().getter_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas", 95)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas", 95)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryPlusExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3928, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 96)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 70)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3912 ;
  const GALGAS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas", 88)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3912, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 85)) ;
  GALGAS_unifiedTypeMapEntry var_type_3987 = var_expression_3912.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_4026 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3912.ptr ())) ;
    if (nullptr == var_exp_4026.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (var_exp_4026.readProperty_mResultType (), var_exp_4026.readProperty_mLocation (), var_exp_4026.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 100))  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 97)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3987, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 102)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas", 102)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas", 102)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_unaryMinusExpressionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3987, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 104)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 104)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 104)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 103)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::class_func_new (var_type_3987, temp_5.readProperty_mOperatorLocation (), var_expression_3912  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 108)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 131)) ;
  GALGAS_string var_operand_5865 ;
  const GALGAS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5865, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 133)) ;
  const GALGAS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5865.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 141)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 141)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 141)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 141)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 142)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 142)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_3392 ;
  GALGAS_string var_sourceVariableCppName_3416 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_3457 ;
  {
  const GALGAS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_3392, var_sourceVariableCppName_3416, var_nameForCheckingFormalParameterUsing_3457, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 71)) ;
  }
  const GALGAS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::class_func_new (var_type_3392, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_3416, var_nameForCheckingFormalParameterUsing_3457  COMMA_SOURCE_FILE ("expression-var.galgas", 77)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 105)) ;
  const GALGAS_varInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = temp_1.readProperty_mCppVarName () ;
  {
  const GALGAS_varInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-var.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-true-false.galgas", 98)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-true-false.galgas", 119)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (true)") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (false)") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_3772 = GALGAS_string::makeEmptyString () ;
  const GALGAS_literalStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_3786 (temp_0.readProperty_mStringSequence (), kENUMERATION_UP) ;
  while (enumerator_3786.hasCurrentObject ()) {
    var_s_3772.plusAssign_operation(enumerator_3786.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 91)) ;
    enumerator_3786.gotoNextObject () ;
  }
  const GALGAS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3772  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 93)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mString ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_string::makeEmptyString ()") ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-literal-string.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 115)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 115)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalCharExpressionAST temp_0 = this ;
  const GALGAS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char ()  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 78)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-literal-char.galgas", 101)).getter_string (SOURCE_FILE ("expression-literal-char.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 101)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 101)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalDoubleExpressionAST temp_0 = this ;
  const GALGAS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_double ()  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 78)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-double.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 102)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBigIntExpressionAST temp_0 = this ;
  const GALGAS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 170)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 193)).add_operation (GALGAS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 193)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 210)).add_operation (GALGAS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 210)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 227)).add_operation (GALGAS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 227)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 244)).add_operation (GALGAS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 244)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 261)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 261)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 262)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 262)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 263)) ;
  const GALGAS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 264)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 264)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 179)) ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 180)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8401 ;
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8401, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 195)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8740 ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8401.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8740, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 205)) ;
  GALGAS_bool var_isComparable_8785 = extensionGetter_definition (var_leftExpression_8401.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 215)).readProperty_mHandledOperatorFlags ().getter_isComparable (SOURCE_FILE ("expression-comparison.galgas", 215)) ;
  GALGAS_bool var_isReferenceEquatable_8883 = extensionGetter_definition (var_leftExpression_8401.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 216)).readProperty_mHandledOperatorFlags ().getter_isReferenceEquatable (SOURCE_FILE ("expression-comparison.galgas", 216)) ;
  GALGAS_bool var_operatorIsAvailable_9003 ;
  GALGAS_string var_operatorName_9037 ;
  const GALGAS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
    {
      var_operatorName_9037 = GALGAS_string ("==") ;
      var_operatorIsAvailable_9003 = var_isComparable_8785 ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
    {
      var_operatorName_9037 = GALGAS_string ("!=") ;
      var_operatorIsAvailable_9003 = var_isComparable_8785 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_9037 = GALGAS_string ("<=") ;
      var_operatorIsAvailable_9003 = var_isComparable_8785 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_9037 = GALGAS_string ("<") ;
      var_operatorIsAvailable_9003 = var_isComparable_8785 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_9037 = GALGAS_string (">=") ;
      var_operatorIsAvailable_9003 = var_isComparable_8785 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_9037 = GALGAS_string (">") ;
      var_operatorIsAvailable_9003 = var_isComparable_8785 ;
    }
    break ;
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_9037 = GALGAS_string ("===") ;
      var_operatorIsAvailable_9003 = var_isReferenceEquatable_8883 ;
    }
    break ;
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_9037 = GALGAS_string ("!==") ;
      var_operatorIsAvailable_9003 = var_isReferenceEquatable_8883 ;
    }
    break ;
  }
  {
  const GALGAS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (var_operatorIsAvailable_9003, var_operatorName_9037, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8401, var_rightExpression_8740, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 246)) ;
  }
  const GALGAS_comparisonExpressionAST temp_4 = this ;
  const GALGAS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8401, temp_5.readProperty_mComparison (), var_rightExpression_8740  COMMA_SOURCE_FILE ("expression-comparison.galgas", 254)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 282)) ;
  GALGAS_string var_leftTemporaryOperand_11252 ;
  const GALGAS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11252, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 284)) ;
  GALGAS_string var_rightTemporaryOperand_11457 ;
  const GALGAS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_11457, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 292)) ;
  GALGAS_string var_operatorName_11516 ;
  const GALGAS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_11516 = GALGAS_string ("kIsEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_11516 = GALGAS_string ("kIsNotEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_11516 = GALGAS_string ("kIsInfOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_11516 = GALGAS_string ("kIsStrictInf") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_11516 = GALGAS_string ("kIsSupOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_11516 = GALGAS_string ("kIsStrictSup") ;
    }
    break ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_operatorName_11516, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 310)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 310)).add_operation (var_leftTemporaryOperand_11252, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 310)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 310)).add_operation (var_rightTemporaryOperand_11457, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 310)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 310)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 181)) ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 182)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8320 ;
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8320, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 197)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8679 ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8679, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 207)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_8759 = var_leftExpression_8320.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_8806 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8320.ptr ())) ;
    if (nullptr == var_left_8806.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_8879 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_8679.ptr ())) ;
      if (nullptr == var_right_8879.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_8806.readProperty_mValue ().right_shift_operation (var_right_8879.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 223))  COMMA_SOURCE_FILE ("expression-additive.galgas", 220)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_9153 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8320.ptr ())) ;
      if (nullptr == var_left_9153.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_9226 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_8679.ptr ())) ;
        if (nullptr == var_right_9226.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_9153.readProperty_mValue ().right_shift_operation (var_right_9226.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 230))  COMMA_SOURCE_FILE ("expression-additive.galgas", 227)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_8759, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 232)).operator_not (SOURCE_FILE ("expression-additive.galgas", 232)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_rightShiftExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_8759, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 234)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 234)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 234)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 233)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftType_8759, temp_9.readProperty_mOperatorLocation (), var_leftExpression_8320, GALGAS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas", 242)), var_rightExpression_8679  COMMA_SOURCE_FILE ("expression-additive.galgas", 238)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 253)) ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 254)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_11182 ;
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11182, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 269)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_11541 ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_11541, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 279)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_11621 = var_leftExpression_11182.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_11668 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11182.ptr ())) ;
    if (nullptr == var_left_11668.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_11741 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_11541.ptr ())) ;
      if (nullptr == var_right_11741.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_11668.readProperty_mValue ().left_shift_operation (var_right_11741.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 295))  COMMA_SOURCE_FILE ("expression-additive.galgas", 292)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_12015 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11182.ptr ())) ;
      if (nullptr == var_left_12015.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_12088 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_11541.ptr ())) ;
        if (nullptr == var_right_12088.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_12015.readProperty_mValue ().left_shift_operation (var_right_12088.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 302))  COMMA_SOURCE_FILE ("expression-additive.galgas", 299)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_11621, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 304)).operator_not (SOURCE_FILE ("expression-additive.galgas", 304)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_leftShiftExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_11621, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 306)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 306)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 306)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 305)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftType_11621, temp_9.readProperty_mOperatorLocation (), var_leftExpression_11182, GALGAS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas", 314)), var_rightExpression_11541  COMMA_SOURCE_FILE ("expression-additive.galgas", 310)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 325)) ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 326)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14051 ;
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14051, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 341)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14386 ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14051.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14386, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 351)) ;
  {
  const GALGAS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14051.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 362)).readProperty_mHandledOperatorFlags ().getter_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 362)), GALGAS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14051, var_rightExpression_14386, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 361)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_14673 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14051.ptr ())) ;
    if (nullptr == var_leftBigint_14673.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_14753 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14386.ptr ())) ;
      if (nullptr == var_rightBigint_14753.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_14673.readProperty_mValue ().add_operation (var_rightBigint_14753.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 374))  COMMA_SOURCE_FILE ("expression-additive.galgas", 371)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_14051.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14051, GALGAS_binaryOperator::class_func_addNoOverflow (SOURCE_FILE ("expression-additive.galgas", 381)), var_rightExpression_14386  COMMA_SOURCE_FILE ("expression-additive.galgas", 377)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 392)) ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 393)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16445 ;
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16445, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 407)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16780 ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16445.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16780, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 417)) ;
  {
  const GALGAS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16445.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 428)).readProperty_mHandledOperatorFlags ().getter_infixAddOperator (SOURCE_FILE ("expression-additive.galgas", 428)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16445, var_rightExpression_16780, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 427)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_17061 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_16445.ptr ())) ;
    if (nullptr == var_leftBigint_17061.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_17141 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_16780.ptr ())) ;
      if (nullptr == var_rightBigint_17141.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17061.readProperty_mValue ().add_operation (var_rightBigint_17141.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 440))  COMMA_SOURCE_FILE ("expression-additive.galgas", 437)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_16445.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_16445, GALGAS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas", 447)), var_rightExpression_16780  COMMA_SOURCE_FILE ("expression-additive.galgas", 443)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 458)) ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 459)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_18843 ;
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_18843, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 474)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_19178 ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_18843.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19178, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 484)) ;
  {
  const GALGAS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_18843.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 495)).readProperty_mHandledOperatorFlags ().getter_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 495)), GALGAS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_18843, var_rightExpression_19178, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 494)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_19465 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_18843.ptr ())) ;
    if (nullptr == var_leftBigint_19465.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_19545 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19178.ptr ())) ;
      if (nullptr == var_rightBigint_19545.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_19465.readProperty_mValue ().substract_operation (var_rightBigint_19545.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 507))  COMMA_SOURCE_FILE ("expression-additive.galgas", 504)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_18843.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_18843, GALGAS_binaryOperator::class_func_subNoOverflow (SOURCE_FILE ("expression-additive.galgas", 514)), var_rightExpression_19178  COMMA_SOURCE_FILE ("expression-additive.galgas", 510)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 525)) ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 526)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_21237 ;
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_21237, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 540)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_21572 ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_21237.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_21572, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 550)) ;
  {
  const GALGAS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_21237.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 561)).readProperty_mHandledOperatorFlags ().getter_infixSubOperator (SOURCE_FILE ("expression-additive.galgas", 561)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_21237, var_rightExpression_21572, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 560)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_21853 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_21237.ptr ())) ;
    if (nullptr == var_leftBigint_21853.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_21933 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_21572.ptr ())) ;
      if (nullptr == var_rightBigint_21933.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_21853.readProperty_mValue ().substract_operation (var_rightBigint_21933.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 573))  COMMA_SOURCE_FILE ("expression-additive.galgas", 570)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_21237.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_21237, GALGAS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas", 580)), var_rightExpression_21572  COMMA_SOURCE_FILE ("expression-additive.galgas", 576)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperatorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 623)) ;
  GALGAS_string var_leftTemporaryOperand_23917 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_23917, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 625)) ;
  GALGAS_string var_rightTemporaryOperand_24098 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_24098, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 627)) ;
  GALGAS_string var_operatorString_24160 ;
  GALGAS_bool var_hasCompilerOption_24187 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GALGAS_binaryOperator::kNotBuilt:
    break ;
  case GALGAS_binaryOperator::kEnum_rightShift:
    {
      var_operatorString_24160 = GALGAS_string ("right_shift_operation") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_leftShift:
    {
      var_operatorString_24160 = GALGAS_string ("left_shift_operation") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_add:
    {
      var_operatorString_24160 = GALGAS_string ("add_operation") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_addNoOverflow:
    {
      var_operatorString_24160 = GALGAS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_sub:
    {
      var_operatorString_24160 = GALGAS_string ("substract_operation") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_subNoOverflow:
    {
      var_operatorString_24160 = GALGAS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_and:
    {
      var_operatorString_24160 = GALGAS_string ("operator_and") ;
      var_hasCompilerOption_24187 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_or:
    {
      var_operatorString_24160 = GALGAS_string ("operator_or") ;
      var_hasCompilerOption_24187 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_xor:
    {
      var_operatorString_24160 = GALGAS_string ("operator_xor") ;
      var_hasCompilerOption_24187 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24160 = GALGAS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation:
    {
      var_operatorString_24160 = GALGAS_string ("multiply_operation") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation:
    {
      var_operatorString_24160 = GALGAS_string ("divide_operation") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24160 = GALGAS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_modulo_5F_operation:
    {
      var_operatorString_24160 = GALGAS_string ("modulo_operation") ;
      var_hasCompilerOption_24187 = GALGAS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_23917.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 675)).add_operation (var_operatorString_24160, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 675)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 675)) ;
  outArgument_outCppExpression.plusAssign_operation(var_rightTemporaryOperand_24098, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 676)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_hasCompilerOption_24187.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 678)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 678)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 679)) COMMA_SOURCE_FILE ("expression-additive.galgas", 679)) ;
      }
    }
  }
  const GALGAS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 681)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 161)) ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 162)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7708 ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7708, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 176)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8043 ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7708.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8043, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 186)) ;
  {
  const GALGAS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7708.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 197)).readProperty_mHandledOperatorFlags ().getter_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 197)), GALGAS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7708, var_rightExpression_8043, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 196)) ;
  }
  const GALGAS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_7708.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7708, GALGAS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 208)), var_rightExpression_8043  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 204)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 219)) ;
  const GALGAS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 220)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_9745 ;
  const GALGAS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9745, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 234)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10080 ;
  const GALGAS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9745.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10080, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 244)) ;
  {
  const GALGAS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9745.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 255)).readProperty_mHandledOperatorFlags ().getter_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas", 255)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9745, var_rightExpression_10080, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 254)) ;
  }
  const GALGAS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_9745.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9745, GALGAS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 266)), var_rightExpression_10080  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 262)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 276)) ;
  const GALGAS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 277)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_11776 ;
  const GALGAS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11776, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 291)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12111 ;
  const GALGAS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11776.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12111, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 301)) ;
  {
  const GALGAS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11776.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 312)).readProperty_mHandledOperatorFlags ().getter_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 312)), GALGAS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11776, var_rightExpression_12111, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 311)) ;
  }
  const GALGAS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_11776.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11776, GALGAS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 323)), var_rightExpression_12111  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 319)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 333)) ;
  const GALGAS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 334)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_13798 ;
  const GALGAS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13798, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 348)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14133 ;
  const GALGAS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_13798.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14133, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 358)) ;
  {
  const GALGAS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_13798.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 369)).readProperty_mHandledOperatorFlags ().getter_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas", 369)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_13798, var_rightExpression_14133, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 368)) ;
  }
  const GALGAS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_13798.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_13798, GALGAS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 380)), var_rightExpression_14133  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 376)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 390)) ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 391)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_15803 ;
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_15803, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 405)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16138 ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_15803.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16138, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 415)) ;
  {
  const GALGAS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15803.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 426)).readProperty_mHandledOperatorFlags ().getter_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 426)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15803, var_rightExpression_16138, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 425)) ;
  }
  const GALGAS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_15803.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15803, GALGAS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 437)), var_rightExpression_16138  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 433)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 151)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_5843 ;
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 169)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5843, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 166)) ;
  const GALGAS_testDynamicClassInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_5891 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5843.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 178)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 178)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_6145 = var_castType_5891 ;
      GALGAS_bool var_found_6172 = GALGAS_bool (kIsEqual, var_t_6145.objectCompare (var_expression_5843.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).isValid ()) {
        uint32_t variant_6212 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).uintValue () ;
        bool loop_6212 = true ;
        while (loop_6212) {
          loop_6212 = var_found_6172.operator_not (SOURCE_FILE ("expression-is-as.galgas", 183)).operator_and (extensionGetter_definition (var_t_6145, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 183)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 183)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 183)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 183)).isValid () ;
          if (loop_6212) {
            loop_6212 = var_found_6172.operator_not (SOURCE_FILE ("expression-is-as.galgas", 183)).operator_and (extensionGetter_definition (var_t_6145, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 183)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 183)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 183)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 183)).boolValue () ;
          }
          if (loop_6212 && (0 == variant_6212)) {
            loop_6212 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 182)) ;
          }
          if (loop_6212) {
            variant_6212 -- ;
            var_t_6145 = extensionGetter_definition (var_t_6145, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 184)).readProperty_mSuperType () ;
            var_found_6172 = GALGAS_bool (kIsEqual, var_t_6145.objectCompare (var_expression_5843.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_6172.operator_not (SOURCE_FILE ("expression-is-as.galgas", 187)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_testDynamicClassInExpressionAST temp_4 = this ;
          const GALGAS_testDynamicClassInExpressionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 189)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 189)).add_operation (extensionGetter_definition (var_expression_5843.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 189)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 189)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 189)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 188)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5843.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5843.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 193)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 192)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 193)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas", 192)) ;
  }
  const GALGAS_testDynamicClassInExpressionAST temp_8 = this ;
  const GALGAS_testDynamicClassInExpressionAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5843, temp_9.readProperty_mTypeComparisonKind (), var_castType_5891  COMMA_SOURCE_FILE ("expression-is-as.galgas", 196)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 209)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_8168 ;
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 227)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8168, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 224)) ;
  const GALGAS_castInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_8217 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_8168.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 236)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 236)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_8467 = var_type_8217 ;
      GALGAS_bool var_found_8490 = GALGAS_bool (kIsEqual, var_t_8467.objectCompare (var_expression_8168.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).isValid ()) {
        uint32_t variant_8530 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).uintValue () ;
        bool loop_8530 = true ;
        while (loop_8530) {
          loop_8530 = var_found_8490.operator_not (SOURCE_FILE ("expression-is-as.galgas", 241)).operator_and (extensionGetter_definition (var_t_8467, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 241)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 241)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).isValid () ;
          if (loop_8530) {
            loop_8530 = var_found_8490.operator_not (SOURCE_FILE ("expression-is-as.galgas", 241)).operator_and (extensionGetter_definition (var_t_8467, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 241)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 241)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).boolValue () ;
          }
          if (loop_8530 && (0 == variant_8530)) {
            loop_8530 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 240)) ;
          }
          if (loop_8530) {
            variant_8530 -- ;
            var_t_8467 = extensionGetter_definition (var_t_8467, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 242)).readProperty_mSuperType () ;
            var_found_8490 = GALGAS_bool (kIsEqual, var_t_8467.objectCompare (var_expression_8168.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_8490.operator_not (SOURCE_FILE ("expression-is-as.galgas", 245)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_castInExpressionAST temp_4 = this ;
          const GALGAS_castInExpressionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 247)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 247)).add_operation (extensionGetter_definition (var_expression_8168.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 248)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 247)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 248)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_8168.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 250)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_8168.readProperty_mLocation (), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_8168.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 253)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 252)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 253)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas", 251)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_expression_8168.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 256)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_castInExpressionAST temp_10 = this ;
      const GALGAS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::class_func_new (var_type_8217, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_8168, temp_11.readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-is-as.galgas", 257)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_castInExpressionAST temp_12 = this ;
    const GALGAS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::class_func_new (var_type_8217, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_8168, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_8217  COMMA_SOURCE_FILE ("expression-is-as.galgas", 263)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GALGAS_string var_typeNameRepresentation_10505 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 291)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 291)) ;
  GALGAS_string var_receiverExpression_10798 ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10798, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 293)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 301)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mTypeComparisonKind ().enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression_10798, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 304)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 304)).add_operation (var_typeNameRepresentation_10505, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 306)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_10505, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 308)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)).add_operation (var_receiverExpression_10798, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 310)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 310)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression_10798, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 312)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 312)).add_operation (var_typeNameRepresentation_10505, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 313)).add_operation (GALGAS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 314)).add_operation (var_typeNameRepresentation_10505, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 314)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 315)).add_operation (var_receiverExpression_10798, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 316)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 316)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 329)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 330)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 331)) ;
  GALGAS_string var_receiverExpression_12275 ;
  const GALGAS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_12275, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 333)) ;
  const GALGAS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (var_receiverExpression_12275, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_3 = this ;
  const GALGAS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 347)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (var_receiverExpression_12275, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 349)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 349)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 349)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (var_receiverExpression_12275, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 346)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_5 = this ;
  const GALGAS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 355)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 355)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 355)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 356)).add_operation (var_receiverExpression_12275, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 357)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 357)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 357)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 354)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 359)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 360)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 360)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 361)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 362)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 363)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 381)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 382)) ;
  GALGAS_string var_receiverExpression_14228 ;
  const GALGAS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_14228, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 384)) ;
  const GALGAS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GALGAS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 392)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 392)).add_operation (var_receiverExpression_14228, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 393)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 393)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 394)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 394)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 395)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 396)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 396)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_4589 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 116)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4589 COMMA_SOURCE_FILE ("expression-option.galgas", 117)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_4888 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_4947 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_4992 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_5037 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_5084 ;
  const GALGAS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_4888, var_boolOptionMap_4947, var_uintOptionMap_4992, var_stringOptionMap_5037, var_stringListOptionMap_5084, inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 119)) ;
  const GALGAS_optionExpressionAST temp_2 = this ;
  GALGAS_bool var_found_5120 = var_boolOptionMap_4947.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 127)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_5208 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_5120.operator_not (SOURCE_FILE ("expression-option.galgas", 129)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_optionExpressionAST temp_4 = this ;
      var_found_5120 = var_uintOptionMap_4992.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 130)) ;
      var_returnedType_5208 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_5120.operator_not (SOURCE_FILE ("expression-option.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_optionExpressionAST temp_6 = this ;
      var_found_5120 = var_stringOptionMap_5037.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 134)) ;
      var_returnedType_5208 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_5120.operator_not (SOURCE_FILE ("expression-option.galgas", 137)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_optionExpressionAST temp_8 = this ;
      var_found_5120 = var_stringListOptionMap_5084.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 138)) ;
      var_returnedType_5208 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_5120.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_optionExpressionAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_optionExpressionAST temp_12 = this ;
          const GALGAS_optionExpressionAST temp_13 = this ;
          const GALGAS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::class_func_new (var_returnedType_5208, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4888, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 143)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_optionExpressionAST temp_16 = this ;
          test_15 = GALGAS_bool (kIsEqual, temp_16.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_optionExpressionAST temp_17 = this ;
            const GALGAS_optionExpressionAST temp_18 = this ;
            const GALGAS_optionExpressionAST temp_19 = this ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4888, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 150)) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_optionExpressionAST temp_21 = this ;
            test_20 = GALGAS_bool (kIsEqual, temp_21.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_optionExpressionAST temp_22 = this ;
              const GALGAS_optionExpressionAST temp_23 = this ;
              const GALGAS_optionExpressionAST temp_24 = this ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4888, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 157)) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_optionExpressionAST temp_26 = this ;
              test_25 = GALGAS_bool (kIsEqual, temp_26.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_optionExpressionAST temp_27 = this ;
                const GALGAS_optionExpressionAST temp_28 = this ;
                const GALGAS_optionExpressionAST temp_29 = this ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4888, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 164)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_optionExpressionAST temp_30 = this ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-option.galgas", 171)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringlist var_s_7261 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-option.galgas", 174)) ;
    cEnumerator_commandLineOptionMap enumerator_7288 (var_boolOptionMap_4947, kENUMERATION_UP) ;
    while (enumerator_7288.hasCurrentObject ()) {
      var_s_7261.addAssign_operation (enumerator_7288.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 176)) ;
      enumerator_7288.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_7356 (var_uintOptionMap_4992, kENUMERATION_UP) ;
    while (enumerator_7356.hasCurrentObject ()) {
      var_s_7261.addAssign_operation (enumerator_7356.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 179)) ;
      enumerator_7356.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_7424 (var_stringOptionMap_5037, kENUMERATION_UP) ;
    while (enumerator_7424.hasCurrentObject ()) {
      var_s_7261.addAssign_operation (enumerator_7424.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 182)) ;
      enumerator_7424.gotoNextObject () ;
    }
    const GALGAS_optionExpressionAST temp_32 = this ;
    const GALGAS_optionExpressionAST temp_33 = this ;
    const GALGAS_optionExpressionAST temp_34 = this ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_7261) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 185)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 185)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 185)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 185)), fixItArray35  COMMA_SOURCE_FILE ("expression-option.galgas", 184)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 209)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 210))  COMMA_SOURCE_FILE ("expression-option.galgas", 210)) ;
    }
  }
  const GALGAS_optionValueExpressionForGeneration temp_3 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_4 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 212)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 212)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 212)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 212)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 213)).add_operation (GALGAS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 213)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 232)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 233))  COMMA_SOURCE_FILE ("expression-option.galgas", 233)) ;
    }
  }
  const GALGAS_optionCharExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 235)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 235)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 236)).add_operation (GALGAS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 236)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 255)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 256))  COMMA_SOURCE_FILE ("expression-option.galgas", 256)) ;
    }
  }
  const GALGAS_optionStringExpressionForGeneration temp_3 = this ;
  const GALGAS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 258)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 258)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 259)).add_operation (GALGAS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 259)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 270)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 271))  COMMA_SOURCE_FILE ("expression-option.galgas", 271)) ;
    }
  }
  const GALGAS_optionCommentExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 273)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 273)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 274)).add_operation (GALGAS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 274)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3664 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 89)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3664 COMMA_SOURCE_FILE ("expression-lexique.galgas", 90)) ;
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GALGAS_bool joker_3983_7 ; // Joker input parameter
  GALGAS_terminalMap joker_3983_6 ; // Joker input parameter
  GALGAS_indexingListAST joker_3983_5 ; // Joker input parameter
  GALGAS_terminalDeclarationListAST joker_3983_4 ; // Joker input parameter
  GALGAS_lexicalAttributeListAST joker_3983_3 ; // Joker input parameter
  GALGAS_lexicalStyleListAST joker_3983_2 ; // Joker input parameter
  GALGAS_lexicalListDeclarationListAST joker_3983_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_3983_7, joker_3983_6, joker_3983_5, joker_3983_4, joker_3983_3, joker_3983_2, joker_3983_1, inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 92)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GALGAS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-lexique.galgas", 98)) ;
    }
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-lexique.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 102)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-lexique.galgas", 101)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-lexique.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 126))  COMMA_SOURCE_FILE ("expression-lexique.galgas", 126)) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 127)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 127)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 127)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 128)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_5310 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 140)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5310 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)) ;
  }
  GALGAS_lstring var_filewrapperPath_5633 ;
  GALGAS_bool var_isInternal_5672 ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GALGAS_lstringlist joker_5653_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_5653_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_5653_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_5653_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_5633, joker_5653_4, joker_5653_3, joker_5653_2, joker_5653_1, var_isInternal_5672, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 143)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_5672.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_5736 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 151)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 152)).objectCompare (var_filewrapperDeclarationLocation_5736.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 152)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5736.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)) ;
        }
      }
    }
  }
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 158)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_5633.readProperty_string ()  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 157)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  cEnumerator_actualOutputExpressionList enumerator_6602 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_6602.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_6602.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 170)) ;
    enumerator_6602.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GALGAS_lstring var_usefulnessName_7271 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 185)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7271 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 186)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_7612 ;
  GALGAS_bool var_isInternal_7651 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GALGAS_lstring joker_7574_4 ; // Joker input parameter
  GALGAS_lstringlist joker_7574_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_7574_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_7574_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_7574_4, joker_7574_3, joker_7574_2, joker_7574_1, var_filewrapperTemplateMap_7612, var_isInternal_7651, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 188)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_7651.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_7716 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 196)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 197)).objectCompare (var_filewrapperDeclarationLocation_7716.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 197)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_filewrapperTemplateInExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_7716.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_8171 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GALGAS_lstring joker_8189 ; // Joker input parameter
  var_filewrapperTemplateMap_7612.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_8171, joker_8189, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 202)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_8260 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 205)).objectCompare (var_templateSignature_8171.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 205)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_15 = this ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 207)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 207)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 207)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 207)).add_operation (var_templateSignature_8171.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 208)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 207)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 208)).add_operation (temp_15.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 209)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 208)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 206)) ;
      var_effectiveParameterList_8260.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_8260 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 212)) ;
    const GALGAS_filewrapperTemplateInExpressionAST temp_17 = this ;
    cEnumerator_actualOutputExpressionList enumerator_8759 (temp_17.readProperty_mExpressions (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_8844 (var_templateSignature_8171, kENUMERATION_UP) ;
    while (enumerator_8759.hasCurrentObject () && enumerator_8844.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (kIsNotEqual, enumerator_8844.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8759.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_8844.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_8844.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 215)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_8954 = GALGAS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 215)) ;
          TC_Array <C_FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_8954) ;
          inCompiler->emitSemanticError (enumerator_8759.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8954, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 216)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 216)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 216)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_9441 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8759.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8844.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9441, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8844.current_mFormalArgumentType (HERE), var_exp_9441.readProperty_mResultType (), enumerator_8759.current_mEndOfExpressionLocation (HERE), var_exp_9441, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 227)) ;
      }
      var_effectiveParameterList_8260.addAssign_operation (var_exp_9441  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 228)) ;
      enumerator_8759.gotoNextObject () ;
      enumerator_8844.gotoNextObject () ;
    }
  }
  const GALGAS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_8260  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 232)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_10683 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10683 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 259)) ;
  }
  GALGAS_stringlist var_directoryList_10891 ;
  GALGAS_string var_fileName_10919 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 263)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_filewrapperInExpressionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 264)) ;
      var_directoryList_10891.drop () ; // Release error dropped variable
      var_fileName_10919.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 265)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperInExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)) ;
        var_directoryList_10891.drop () ; // Release error dropped variable
        var_fileName_10919.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_10891 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 268)) ;
      {
      var_directoryList_10891.setter_popLast (var_fileName_10919, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 269)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_11500 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_11549 ;
  GALGAS_bool var_isInternal_11595 ;
  const GALGAS_filewrapperInExpressionAST temp_10 = this ;
  GALGAS_lstring joker_11465 ; // Joker input parameter
  GALGAS_lstringlist joker_11472 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_11577 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_11465, joker_11472, var_filewrapperFileMap_11500, var_filewrapperDirectoryMap_11549, joker_11577, var_isInternal_11595, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 272)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_11595.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_filewrapperInExpressionAST temp_12 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_11659 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 283)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 284)).objectCompare (var_filewrapperDeclarationLocation_11659.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 284)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_filewrapperInExpressionAST temp_15 = this ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_11659.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_12053 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_11549.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 290)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 290)).isValid ()) {
    uint32_t variant_12070 = var_filewrapperDirectoryMap_11549.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 290)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 290)).uintValue () ;
    bool loop_12070 = true ;
    while (loop_12070) {
      loop_12070 = GALGAS_bool (kIsStrictSup, var_directoryList_10891.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 291)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_12070) {
        loop_12070 = GALGAS_bool (kIsStrictSup, var_directoryList_10891.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 291)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_12070 && (0 == variant_12070)) {
        loop_12070 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 290)) ;
      }
      if (loop_12070) {
        variant_12070 -- ;
        GALGAS_string var_directoryName_12185 ;
        {
        var_directoryList_10891.setter_popFirst (var_directoryName_12185, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)) ;
        }
        var_builtPath_12053.plusAssign_operation(var_directoryName_12185.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_11549.getter_hasKey (var_directoryName_12185 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_uint joker_12462 ; // Joker input parameter
            var_filewrapperDirectoryMap_11549.method_searchKey (GALGAS_lstring::class_func_new (var_directoryName_12185, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)), var_filewrapperFileMap_11500, var_filewrapperDirectoryMap_11549, joker_12462, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_filewrapperInExpressionAST temp_18 = this ;
          const GALGAS_filewrapperInExpressionAST temp_19 = this ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_builtPath_12053, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 302)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 302)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 302)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 302)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 302)) ;
          var_filewrapperFileMap_11500.drop () ; // Release error dropped variable
          var_directoryList_10891 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 303)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_12720 ;
  GALGAS_bool var_isTextFile_12742 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_11500.getter_hasKey (var_fileName_10919 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 308)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string joker_12877 ; // Joker input parameter
      GALGAS_uint joker_12892 ; // Joker input parameter
      var_filewrapperFileMap_11500.method_searchKey (GALGAS_lstring::class_func_new (var_fileName_10919, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 309)), joker_12877, var_isTextFile_12742, joker_12892, var_fileIndex_12720, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 309)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GALGAS_filewrapperInExpressionAST temp_22 = this ;
    const GALGAS_filewrapperInExpressionAST temp_23 = this ;
    TC_Array <C_FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_fileName_10919, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 312)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 312)).add_operation (var_builtPath_12053, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 312)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 312)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 312)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 312)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)) ;
    var_fileIndex_12720.drop () ; // Release error dropped variable
    var_isTextFile_12742.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMapEntry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_12742.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  }else if (kBoolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("data"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 319)) ;
  }
  const GALGAS_filewrapperInExpressionAST temp_27 = this ;
  const GALGAS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::class_func_new (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12720, var_isTextFile_12742  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 316)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 344))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 344)) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 345)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 345)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 365))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 365)) ;
  GALGAS_stringlist var_parameterList_15203 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 366)) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15241 (temp_1.readProperty_mActualOutputParameterList (), kENUMERATION_UP) ;
  while (enumerator_15241.hasCurrentObject ()) {
    GALGAS_string var_parameter_15454 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15241.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15454, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 368)) ;
    var_parameterList_15203.addAssign_operation (var_parameter_15454  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 375)) ;
    enumerator_15241.gotoNextObject () ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 377)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 377)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 377)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 377)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 378)) ;
  cEnumerator_stringlist enumerator_15736 (var_parameterList_15203, kENUMERATION_UP) ;
  while (enumerator_15736.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_15736.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)) ;
    enumerator_15736.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)) ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 383)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 383)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 403))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 403)) ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_4 = this ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 62)) ;
  const GALGAS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 63)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4060 ;
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 79)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4060, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 76)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_4114 = var_receiverExpression_4060.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_getterCallExpressionAST temp_2 = this ;
    GALGAS_methodKind var_kind_4322 ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4340 ;
    GALGAS_location var_unused_0_4378 ;
    GALGAS_bool var_hasCompilerArgument_4399 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_4453 ;
    GALGAS_methodQualifier var_unused_0_4475 ;
    GALGAS_string var_replacementGetter_4490 ;
    const bool optionalResult4266 = extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 87)).readProperty_mGetterMap ().optional_searchKey (temp_2.readProperty_mGetterName ().readProperty_string (), var_kind_4322, var_getterFormalArgumentTypeList_4340, var_unused_0_4378, var_hasCompilerArgument_4399, var_returnedType_4453, var_unused_0_4475, var_replacementGetter_4490) ;
    if (!optionalResult4266) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        GALGAS_bool test_4 = GALGAS_bool (kIsNotEqual, var_replacementGetter_4490.objectCompare (GALGAS_string::makeEmptyString ())) ;
        if (kBoolTrue == test_4.boolEnum ()) {
          test_4 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_3 = test_4.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_getterCallExpressionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          appendFixItActions (fixItArray6, kFixItReplace, var_replacementGetter_4490) ;
          inCompiler->emitSemanticError (temp_5.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray6  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 97)) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_getterCallExpressionAST temp_8 = this ;
        GALGAS_bool test_9 = temp_8.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (kBoolTrue == test_9.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_10 = this ;
          test_9 = extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)).readProperty_mPropertyMap ().getter_hasKey (temp_10.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)) ;
        }
        GALGAS_bool test_11 = test_9 ;
        if (kBoolTrue == test_11.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_12 = this ;
          test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 101)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        }
        test_7 = test_11.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_getterCallExpressionAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray14  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 102)) ;
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        const GALGAS_getterCallExpressionAST temp_16 = this ;
        test_15 = GALGAS_bool (kIsNotEqual, temp_16.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 105)).objectCompare (var_getterFormalArgumentTypeList_4340.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 105)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_getterCallExpressionAST temp_17 = this ;
          const GALGAS_getterCallExpressionAST temp_18 = this ;
          const GALGAS_getterCallExpressionAST temp_19 = this ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_18.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (var_getterFormalArgumentTypeList_4340.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 107)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 108)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)), fixItArray20  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_15) {
        GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5512 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 110)) ;
        const GALGAS_getterCallExpressionAST temp_21 = this ;
        cEnumerator_actualOutputExpressionList enumerator_5592 (temp_21.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
        cEnumerator_functionSignature enumerator_5696 (var_getterFormalArgumentTypeList_4340, kENUMERATION_UP) ;
        while (enumerator_5592.hasCurrentObject () && enumerator_5696.hasCurrentObject ()) {
          GALGAS_semanticExpressionForGeneration var_exp_6066 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5592.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5696.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_6066, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 113)) ;
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsNotEqual, enumerator_5696.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5592.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_22) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_5696.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_5696.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 123)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_6173 = GALGAS_string ("!").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 123)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_6173) ;
              inCompiler->emitSemanticError (enumerator_5592.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_6173, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)), fixItArray25  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5696.current_mFormalArgumentType (HERE), var_exp_6066.readProperty_mResultType (), enumerator_5592.current_mEndOfExpressionLocation (HERE), var_exp_6066, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)) ;
          }
          var_constructorEffectiveParameterList_5512.addAssign_operation (var_exp_6066  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)) ;
          enumerator_5592.gotoNextObject () ;
          enumerator_5696.gotoNextObject () ;
        }
        const GALGAS_getterCallExpressionAST temp_26 = this ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = GALGAS_bool (kIsEqual, var_replacementGetter_4490.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_28) {
          const GALGAS_getterCallExpressionAST temp_29 = this ;
          temp_27 = temp_29.readProperty_mGetterName ().readProperty_string () ;
        }else if (kBoolFalse == test_28) {
          temp_27 = var_replacementGetter_4490 ;
        }
        outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::class_func_new (var_returnedType_4453, temp_26.readProperty_mGetterName ().readProperty_location (), var_kind_4322, var_receiverExpression_4060, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 134)), temp_27, var_constructorEffectiveParameterList_5512, var_hasCompilerArgument_4399  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 129)) ;
        enumGalgasBool test_30 = kBoolTrue ;
        if (kBoolTrue == test_30) {
          GALGAS_bool test_31 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_galgas_34_ () ;
          if (kBoolTrue == test_31.boolEnum ()) {
            const GALGAS_getterCallExpressionAST temp_32 = this ;
            test_31 = GALGAS_bool (kIsEqual, temp_32.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 140)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
          }
          GALGAS_bool test_33 = test_31 ;
          if (kBoolTrue == test_33.boolEnum ()) {
            test_33 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument.readProperty_value ()) ;
          }
          test_30 = test_33.boolEnum () ;
          if (kBoolTrue == test_30) {
            const GALGAS_getterCallExpressionAST temp_34 = this ;
            TC_Array <C_FixItDescription> fixItArray35 ;
            fixItArray35.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_34.readProperty_mExpressionLocation (), GALGAS_string ("getter with no argument, remove parenthesis"), fixItArray35  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 142)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      const GALGAS_getterCallExpressionAST temp_37 = this ;
      test_36 = GALGAS_bool (kIsEqual, temp_37.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 146)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_36) {
        const GALGAS_getterCallExpressionAST temp_38 = this ;
        GALGAS_AccessControl var_accessControl_7461 ;
        GALGAS_bool var_unused_0_7476 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_7483 ;
        const bool optionalResult7421 = extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 146)).readProperty_mPropertyMap ().optional_searchKey (temp_38.readProperty_mGetterName ().readProperty_string (), var_accessControl_7461, var_unused_0_7476, var_propertyType_7483) ;
        if (!optionalResult7421) {
          test_36 = kBoolFalse ;
        }
        if (kBoolTrue == test_36) {
          const GALGAS_getterCallExpressionAST temp_39 = this ;
          extensionMethod_checkGetAccess (var_accessControl_7461, constinArgument_inAnalysisContext.readProperty_selfType (), temp_39.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)) ;
          const GALGAS_getterCallExpressionAST temp_40 = this ;
          const GALGAS_getterCallExpressionAST temp_41 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_propertyType_7483, temp_40.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4060, temp_41.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 151)) ;
          enumGalgasBool test_42 = kBoolTrue ;
          if (kBoolTrue == test_42) {
            const GALGAS_getterCallExpressionAST temp_43 = this ;
            test_42 = temp_43.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (kBoolTrue == test_42) {
              const GALGAS_getterCallExpressionAST temp_44 = this ;
              TC_Array <C_FixItDescription> fixItArray45 ;
              inCompiler->emitSemanticError (temp_44.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray45  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 158)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_36) {
      GALGAS_uint var_matchingReaderCount_8255 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_46 = kBoolTrue ;
      if (kBoolTrue == test_46) {
        test_46 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 163)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas", 163)))).boolEnum () ;
        if (kBoolTrue == test_46) {
          GALGAS_functionSignature var_getterFormalArgumentTypeList_8379 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 164)) ;
          GALGAS_bool var_hasCompilerArgument_8425 = GALGAS_bool (true) ;
          GALGAS_unifiedTypeMapEntry var_returnedType_8464 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 166)) ;
          GALGAS_methodKind var_kind_8517 = GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 167)) ;
          GALGAS_stringlist var_fieldList_8579 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 168)) ;
          GALGAS_string var_obsoletedByGetter_8606 = GALGAS_string::makeEmptyString () ;
          cEnumerator_typedPropertyList enumerator_8674 (extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 170)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
          while (enumerator_8674.hasCurrentObject ()) {
            GALGAS_unifiedTypeMapEntry var_propertyType_8749 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (extensionGetter_definition (enumerator_8674.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 171)).readProperty_mTypeName ().readProperty_string (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 171)) ;
            GALGAS_getterMap var_aMap_8874 = extensionGetter_definition (var_propertyType_8749, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 172)).readProperty_mGetterMap () ;
            const GALGAS_getterCallExpressionAST temp_47 = this ;
            const cMapElement_getterMap * objectArray_8928 = (const cMapElement_getterMap *) var_aMap_8874.readAccessForWithInstruction (temp_47.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_8928) {
                macroValidSharedObject (objectArray_8928, cMapElement_getterMap) ;
              enumGalgasBool test_48 = kBoolTrue ;
              if (kBoolTrue == test_48) {
                test_48 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_propertyType_8749, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 174)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_8674.current_mPropertyName (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_48) {
                  var_matchingReaderCount_8255.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 175)) ;
                  var_getterFormalArgumentTypeList_8379 = objectArray_8928->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_8425 = objectArray_8928->mProperty_mHasCompilerArgument ;
                  var_returnedType_8464 = objectArray_8928->mProperty_mReturnedType ;
                  const GALGAS_getterCallExpressionAST temp_49 = this ;
                  var_receiverExpression_4060 = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_returnedType_8464, temp_49.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4060, enumerator_8674.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 179)) ;
                  var_kind_8517 = objectArray_8928->mProperty_mKind ;
                  var_obsoletedByGetter_8606 = objectArray_8928->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
            }
            enumerator_8674.gotoNextObject () ;
          }
          enumGalgasBool test_50 = kBoolTrue ;
          if (kBoolTrue == test_50) {
            test_50 = GALGAS_bool (kIsEqual, var_matchingReaderCount_8255.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_50) {
              const GALGAS_getterCallExpressionAST temp_51 = this ;
              const GALGAS_getterCallExpressionAST temp_52 = this ;
              TC_Array <C_FixItDescription> fixItArray53 ;
              inCompiler->emitSemanticError (temp_51.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 192)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 192)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 192)).add_operation (temp_52.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 192)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 192)), fixItArray53  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 191)) ;
              var_getterFormalArgumentTypeList_8379.drop () ; // Release error dropped variable
              var_hasCompilerArgument_8425.drop () ; // Release error dropped variable
              var_returnedType_8464.drop () ; // Release error dropped variable
              var_kind_8517.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_50) {
            enumGalgasBool test_54 = kBoolTrue ;
            if (kBoolTrue == test_54) {
              test_54 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_8255.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_54) {
                GALGAS_string var_s_10056 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_10078 (var_fieldList_8579, kENUMERATION_UP) ;
                while (enumerator_10078.hasCurrentObject ()) {
                  var_s_10056.plusAssign_operation(enumerator_10078.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 198)) ;
                  if (enumerator_10078.hasNextObject ()) {
                    var_s_10056.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)) ;
                  }
                  enumerator_10078.gotoNextObject () ;
                }
                const GALGAS_getterCallExpressionAST temp_55 = this ;
                const GALGAS_getterCallExpressionAST temp_56 = this ;
                TC_Array <C_FixItDescription> fixItArray57 ;
                inCompiler->emitSemanticError (temp_55.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)).add_operation (temp_56.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)).add_operation (var_s_10056, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 203)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 203)), fixItArray57  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 201)) ;
                var_getterFormalArgumentTypeList_8379.drop () ; // Release error dropped variable
                var_hasCompilerArgument_8425.drop () ; // Release error dropped variable
                var_returnedType_8464.drop () ; // Release error dropped variable
                var_kind_8517.drop () ; // Release error dropped variable
              }
            }
          }
          enumGalgasBool test_58 = kBoolTrue ;
          if (kBoolTrue == test_58) {
            const GALGAS_getterCallExpressionAST temp_59 = this ;
            test_58 = GALGAS_bool (kIsNotEqual, temp_59.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 207)).objectCompare (var_getterFormalArgumentTypeList_8379.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 207)))).boolEnum () ;
            if (kBoolTrue == test_58) {
              const GALGAS_getterCallExpressionAST temp_60 = this ;
              const GALGAS_getterCallExpressionAST temp_61 = this ;
              const GALGAS_getterCallExpressionAST temp_62 = this ;
              TC_Array <C_FixItDescription> fixItArray63 ;
              inCompiler->emitSemanticError (temp_60.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_61.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (var_getterFormalArgumentTypeList_8379.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 209)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (temp_62.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 210)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 210)), fixItArray63  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_58) {
            GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11054 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 212)) ;
            const GALGAS_getterCallExpressionAST temp_64 = this ;
            cEnumerator_actualOutputExpressionList enumerator_11136 (temp_64.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
            cEnumerator_functionSignature enumerator_11242 (var_getterFormalArgumentTypeList_8379, kENUMERATION_UP) ;
            while (enumerator_11136.hasCurrentObject () && enumerator_11242.hasCurrentObject ()) {
              GALGAS_semanticExpressionForGeneration var_exp_11628 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11136.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11242.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11628, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 215)) ;
              enumGalgasBool test_65 = kBoolTrue ;
              if (kBoolTrue == test_65) {
                test_65 = GALGAS_bool (kIsNotEqual, enumerator_11242.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11136.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_65) {
                  GALGAS_string temp_66 ;
                  const enumGalgasBool test_67 = GALGAS_bool (kIsNotEqual, enumerator_11242.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_67) {
                    temp_66 = enumerator_11242.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)) ;
                  }else if (kBoolFalse == test_67) {
                    temp_66 = GALGAS_string::makeEmptyString () ;
                  }
                  GALGAS_string var_s_11741 = GALGAS_string ("!").add_operation (temp_66, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)) ;
                  TC_Array <C_FixItDescription> fixItArray68 ;
                  appendFixItActions (fixItArray68, kFixItReplace, var_s_11741) ;
                  inCompiler->emitSemanticError (enumerator_11136.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11741, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 226)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 226)), fixItArray68  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 226)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11242.current_mFormalArgumentType (HERE), var_exp_11628.readProperty_mResultType (), enumerator_11136.current_mEndOfExpressionLocation (HERE), var_exp_11628, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)) ;
              }
              var_constructorEffectiveParameterList_11054.addAssign_operation (var_exp_11628  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)) ;
              enumerator_11136.gotoNextObject () ;
              enumerator_11242.gotoNextObject () ;
            }
            enumGalgasBool test_69 = kBoolTrue ;
            if (kBoolTrue == test_69) {
              GALGAS_bool test_70 = GALGAS_bool (kIsNotEqual, var_obsoletedByGetter_8606.objectCompare (GALGAS_string::makeEmptyString ())) ;
              if (kBoolTrue == test_70.boolEnum ()) {
                test_70 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
              }
              test_69 = test_70.boolEnum () ;
              if (kBoolTrue == test_69) {
                const GALGAS_getterCallExpressionAST temp_71 = this ;
                TC_Array <C_FixItDescription> fixItArray72 ;
                appendFixItActions (fixItArray72, kFixItReplace, var_obsoletedByGetter_8606) ;
                inCompiler->emitSemanticError (temp_71.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 232)) ;
              }
            }
            const GALGAS_getterCallExpressionAST temp_73 = this ;
            GALGAS_string temp_74 ;
            const enumGalgasBool test_75 = GALGAS_bool (kIsEqual, var_obsoletedByGetter_8606.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_75) {
              const GALGAS_getterCallExpressionAST temp_76 = this ;
              temp_74 = temp_76.readProperty_mGetterName ().readProperty_string () ;
            }else if (kBoolFalse == test_75) {
              temp_74 = var_obsoletedByGetter_8606 ;
            }
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::class_func_new (var_returnedType_8464, temp_73.readProperty_mGetterName ().readProperty_location (), var_kind_8517, var_receiverExpression_4060, var_fieldList_8579, temp_74, var_constructorEffectiveParameterList_11054, var_hasCompilerArgument_8425  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 234)) ;
          }
        }
      }
      if (kBoolFalse == test_46) {
        enumGalgasBool test_77 = kBoolTrue ;
        if (kBoolTrue == test_77) {
          test_77 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 245)).readProperty_mGetterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 245)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_77) {
            const GALGAS_getterCallExpressionAST temp_78 = this ;
            TC_Array <C_FixItDescription> fixItArray79 ;
            inCompiler->emitSemanticError (temp_78.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 247)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 247)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 247)), fixItArray79  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_77) {
          const GALGAS_getterCallExpressionAST temp_80 = this ;
          const GALGAS_getterCallExpressionAST temp_81 = this ;
          TC_Array <C_FixItDescription> fixItArray82 ;
          appendFixItActions (fixItArray82, kFixItReplace, extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 253)).readProperty_mGetterMap ().getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 253))) ;
          inCompiler->emitSemanticError (temp_80.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4114, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 251)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 251)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 251)).add_operation (temp_81.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 251)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 251)), fixItArray82  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)) ;
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

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 284)) ;
  GALGAS_string var_receiverCppName_14554 ;
  const GALGAS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_14554, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 286)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_14619 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 294)) ;
  const GALGAS_getterCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14659 (temp_2.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_14659.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_14877 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14659.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_14877, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 296)) ;
    var_getterArgumentCppNameList_14619.addAssign_operation (var_argumentCppName_14877  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 303)) ;
    enumerator_14659.gotoNextObject () ;
  }
  const GALGAS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_getterCallExpressionForGeneration temp_4 = this ;
      GALGAS_unifiedTypeMapEntry var_baseType_15072 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_15072, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 309)) ;
      GALGAS_bool var_searching_15187 = GALGAS_bool (true) ;
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 311)).isValid ()) {
        uint32_t variant_15210 = GALGAS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 311)).uintValue () ;
        bool loop_15210 = true ;
        while (loop_15210) {
          loop_15210 = var_searching_15187.isValid () ;
          if (loop_15210) {
            loop_15210 = var_searching_15187.boolValue () ;
          }
          if (loop_15210 && (0 == variant_15210)) {
            loop_15210 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 311)) ;
          }
          if (loop_15210) {
            variant_15210 -- ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_15072, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 312)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 312)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 312)).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  const GALGAS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_15072, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 313)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 313)).readProperty_mGetterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 313)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_baseType_15072 = extensionGetter_definition (var_baseType_15072, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 314)).readProperty_mSuperType () ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_searching_15187 = GALGAS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              var_searching_15187 = GALGAS_bool (false) ;
            }
          }
        }
      }
      const GALGAS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_15072, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_14554 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 324)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 324)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_getterCallExpressionForGeneration temp_11 = this ;
          const GALGAS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).add_operation (var_receiverCppName_14554, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)) ;
        }
      }
      if (kBoolFalse == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)) ;
        const GALGAS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).add_operation (var_receiverCppName_14554, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_14554 ;
      const GALGAS_getterCallExpressionForGeneration temp_15 = this ;
      cEnumerator_stringlist enumerator_16434 (temp_15.readProperty_mFieldList (), kENUMERATION_UP) ;
      while (enumerator_16434.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".readProperty_").add_operation (enumerator_16434.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 334)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 334)) ;
        enumerator_16434.gotoNextObject () ;
      }
      const GALGAS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)) ;
      const GALGAS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_16731 (var_getterArgumentCppNameList_14619, kENUMERATION_UP) ;
  while (enumerator_16731.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_16731.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)) ;
    if (enumerator_16731.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 341)) ;
    }
    enumerator_16731.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsEqual, var_getterArgumentCppNameList_14619.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 343)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 345)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 345)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 346)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 346)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_18) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      const GALGAS_getterCallExpressionForGeneration temp_22 = this ;
      test_21 = temp_22.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (kBoolTrue == test_21) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 350)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 350)) ;
      }
    }
    if (kBoolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 352)) ;
    }
  }
  const GALGAS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 354)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 354)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_constructorExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_constructorExpressionAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_5997 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_5997, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 174)) ;
      }
    }
  }
  const GALGAS_constructorExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 176)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   const GALGAS_lstring constinArgument_inTypeName,
                                                                                                   const GALGAS_lstring constinArgument_inConstructorName,
                                                                                                   const GALGAS_actualOutputExpressionList constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                   const GALGAS_location constinArgument_inLocationForOldStyleCollectionInitializerError,
                                                                                                   GALGAS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                   GALGAS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                   GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                                   GALGAS_bool & outArgument_outHasCompilerArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 199)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 201)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor.galgas", 202)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_classFunctionMap var_classFunctionMap_7293 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 207)).readProperty_mClassFunctionMap () ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_7414 ;
    const cMapElement_classFunctionMap * objectArray_7452 = (const cMapElement_classFunctionMap *) var_classFunctionMap_7293.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (nullptr != objectArray_7452) {
        macroValidSharedObject (objectArray_7452, cMapElement_classFunctionMap) ;
      var_constructorFormalArgumentTypeList_7414 = objectArray_7452->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_7452->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_7452->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_classFunctionMap_7293.getter_count (SOURCE_FILE ("expression-constructor.galgas", 215)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 217)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 217)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 217)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor.galgas", 216)) ;
          var_constructorFormalArgumentTypeList_7414.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, var_classFunctionMap_7293.getter_keyList (SOURCE_FILE ("expression-constructor.galgas", 223))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)) ;
        var_constructorFormalArgumentTypeList_7414.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 227)).objectCompare (var_constructorFormalArgumentTypeList_7414.getter_count (SOURCE_FILE ("expression-constructor.galgas", 227)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 229)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 229)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 229)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 229)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 229)).add_operation (var_constructorFormalArgumentTypeList_7414.getter_count (SOURCE_FILE ("expression-constructor.galgas", 230)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 229)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 230)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 231)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 230)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 231)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor.galgas", 228)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-constructor.galgas", 233)) ;
    cEnumerator_actualOutputExpressionList enumerator_8852 (constinArgument_inInitializerEffectiveParameterExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_8970 (var_constructorFormalArgumentTypeList_7414, kENUMERATION_UP) ;
    while (enumerator_8852.hasCurrentObject () && enumerator_8970.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_9313 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8852.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8970.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9313, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 236)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8970.current_mFormalArgumentType (HERE), var_exp_9313.readProperty_mResultType (), enumerator_8852.current_mEndOfExpressionLocation (HERE), var_exp_9313, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 245)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_9313  COMMA_SOURCE_FILE ("expression-constructor.galgas", 246)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, enumerator_8970.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8852.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string temp_9 ;
          const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_8970.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            temp_9 = enumerator_8970.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 248)) ;
          }else if (kBoolFalse == test_10) {
            temp_9 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_9579 = GALGAS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 248)) ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_s_9579) ;
          inCompiler->emitSemanticError (enumerator_8852.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9579, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 249)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 249)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 249)) ;
        }
      }
      enumerator_8852.gotoNextObject () ;
      enumerator_8970.gotoNextObject () ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    GALGAS_bool test_13 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (kBoolTrue == test_13.boolEnum ()) {
      test_13 = GALGAS_bool (kIsEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 254)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    test_12 = test_13.boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_stringset temp_14 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("expression-constructor.galgas", 255)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 255)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyMap")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 255)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptySortedList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 255)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyDict")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 255)) ;
      GALGAS_stringset var_oldInitializers_9933 = temp_14 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_oldInitializers_9933.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-constructor.galgas", 256)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string (" {}")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GALGAS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray16  COMMA_SOURCE_FILE ("expression-constructor.galgas", 257)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedType_11169 ;
  GALGAS_unifiedTypeMapEntry var_constructorType_11212 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11274 ;
  GALGAS_bool var_hasCompilerArgument_11323 ;
  {
  const GALGAS_constructorExpressionAST temp_0 = this ;
  const GALGAS_constructorExpressionAST temp_1 = this ;
  const GALGAS_constructorExpressionAST temp_2 = this ;
  const GALGAS_constructorExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mConstructorName (), temp_2.readProperty_mExpressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_11169, var_constructorType_11212, var_constructorEffectiveParameterList_11274, var_hasCompilerArgument_11323, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 275)) ;
  }
  const GALGAS_constructorExpressionAST temp_4 = this ;
  GALGAS_lstring var_constructorTypeUsefulnessName_11353 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (extensionGetter_definition (var_constructorType_11212, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 291)).readProperty_mTypeName ().readProperty_string (), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 291)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_11353 COMMA_SOURCE_FILE ("expression-constructor.galgas", 292)) ;
  }
  const GALGAS_constructorExpressionAST temp_5 = this ;
  GALGAS_lstring var_returnedTypeUsefulnessName_11591 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (extensionGetter_definition (var_returnedType_11169, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 293)).readProperty_mTypeName ().readProperty_string (), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 293)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_11591 COMMA_SOURCE_FILE ("expression-constructor.galgas", 294)) ;
  }
  const GALGAS_constructorExpressionAST temp_6 = this ;
  const GALGAS_constructorExpressionAST temp_7 = this ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::class_func_new (var_returnedType_11169, temp_6.readProperty_mConstructorName ().readProperty_location (), var_constructorType_11212, temp_7.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_11274, var_hasCompilerArgument_11323  COMMA_SOURCE_FILE ("expression-constructor.galgas", 296)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_constructorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 326)) ;
  GALGAS_stringlist var_parameterList_12999 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-constructor.galgas", 327)) ;
  const GALGAS_constructorExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_13025 (temp_1.readProperty_mEffectiveParameterList (), kENUMERATION_UP) ;
  while (enumerator_13025.hasCurrentObject ()) {
    GALGAS_string var_parameter_13243 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_13025.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13243, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 329)) ;
    var_parameterList_12999.addAssign_operation (var_parameter_13243  COMMA_SOURCE_FILE ("expression-constructor.galgas", 336)) ;
    enumerator_13025.gotoNextObject () ;
  }
  const GALGAS_constructorExpressionForGeneration temp_2 = this ;
  const GALGAS_constructorExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mConstructorType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 338)).add_operation (GALGAS_string ("::class_func_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 338)).add_operation (temp_3.readProperty_mConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 339)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 339)) ;
  cEnumerator_stringlist enumerator_13501 (var_parameterList_12999, kENUMERATION_UP) ;
  while (enumerator_13501.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_13501.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 342)) ;
    if (enumerator_13501.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 343)) ;
    }
    enumerator_13501.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_13615 = GALGAS_bool (kIsStrictSup, var_parameterList_12999.getter_count (SOURCE_FILE ("expression-constructor.galgas", 345)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_constructorExpressionForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needsComma_13615.boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 348)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 350)) COMMA_SOURCE_FILE ("expression-constructor.galgas", 350)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 351)) ;
      var_needsComma_13615 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_needsComma_13615.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_constructorExpressionForGeneration temp_8 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 355)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 355)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_constructorExpressionForGeneration temp_9 = this ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 357)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 357)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_defaultConstructorExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_defaultConstructorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 377)) ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_1 = this ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 379)).add_operation (GALGAS_string ("::class_func_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 379)).add_operation (temp_2.readProperty_mConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 380)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_defaultConstructorExpressionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_defaultConstructorExpressionForGeneration temp_5 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_defaultConstructorExpressionForGeneration temp_6 = this ;
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (extensionGetter_sourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 385)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 385)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  cEnumerator_actualOutputExpressionList enumerator_3217 (temp_0.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_3217.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3217.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 76)) ;
    enumerator_3217.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3880 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3880 COMMA_SOURCE_FILE ("expression-function-call.galgas", 92)) ;
  }
  GALGAS_functionSignature var_functionSignature_4181 ;
  GALGAS_unifiedTypeMapEntry var_resultType_4229 ;
  GALGAS_bool var_isInternal_4255 ;
  const GALGAS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_4181, var_resultType_4229, var_isInternal_4255, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_4255.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionCallExpressionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_4319 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 102)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_functionCallExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 103)).objectCompare (var_procDeclarationLocation_4319.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 103)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_functionCallExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_4319.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 104)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 104)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 104)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_functionCallExpressionAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_4181.getter_count (SOURCE_FILE ("expression-function-call.galgas", 108)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 108)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_functionCallExpressionAST temp_10 = this ;
      const GALGAS_functionCallExpressionAST temp_11 = this ;
      const GALGAS_functionCallExpressionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)).add_operation (var_functionSignature_4181.getter_count (SOURCE_FILE ("expression-function-call.galgas", 110)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 111)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 111)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 111)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 109)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_5042 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-function-call.galgas", 115)) ;
    const GALGAS_functionCallExpressionAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_5165 (var_functionSignature_4181, kENUMERATION_UP) ;
    cEnumerator_actualOutputExpressionList enumerator_5219 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_5165.hasCurrentObject () && enumerator_5219.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_5572 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5219.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5165.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5572, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 117)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5165.current_mFormalArgumentType (HERE), var_expression_5572.readProperty_mResultType (), enumerator_5219.current_mEndOfExpressionLocation (HERE), var_expression_5572, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 126)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_5165.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5219.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_5165.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_5165.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 133)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_5848 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 133)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_5848) ;
          inCompiler->emitSemanticError (enumerator_5219.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_5848, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 134)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 134)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 134)) ;
        }
      }
      var_semanticExpressionListForGeneration_5042.addAssign_operation (var_expression_5572  COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)) ;
      enumerator_5165.gotoNextObject () ;
      enumerator_5219.gotoNextObject () ;
    }
    const GALGAS_functionCallExpressionAST temp_19 = this ;
    const GALGAS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::class_func_new (var_resultType_4229, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_5042  COMMA_SOURCE_FILE ("expression-function-call.galgas", 139)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 165)) ;
  const GALGAS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 167))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 167)) ;
  GALGAS_stringlist var_parameterList_7266 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-function-call.galgas", 169)) ;
  const GALGAS_functionCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_7304 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_7304.hasCurrentObject ()) {
    GALGAS_string var_parameter_7473 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_7304.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_7473, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)) ;
    var_parameterList_7266.addAssign_operation (var_parameter_7473  COMMA_SOURCE_FILE ("expression-function-call.galgas", 172)) ;
    enumerator_7304.gotoNextObject () ;
  }
  const GALGAS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 174)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 174)) ;
  cEnumerator_stringlist enumerator_7617 (var_parameterList_7266, kENUMERATION_UP) ;
  while (enumerator_7617.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_7617.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 176)) ;
    enumerator_7617.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 178)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 178)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 179)) ;
  const GALGAS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 180)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 180)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_2898 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_2898, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 67)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3481 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 81)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3481 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 82)) ;
  }
  const GALGAS_literalTypeInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_3647 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 84)) ;
  const GALGAS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("type"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 86)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_3647  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 85)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 109)) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (extensionGetter_definition (temp_1.readProperty_mLiteralType (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 111)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-literal-type.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 110)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_collectionValueAST temp_0 = this ;
  cEnumerator_collectionValueElementList enumerator_6578 (temp_0.readProperty_mElementList (), kENUMERATION_UP) ;
  while (enumerator_6578.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractCollectionValueElement *) enumerator_6578.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 172)) ;
    enumerator_6578.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_7249 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_collectionValueAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_7249 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_collectionValueAST temp_2 = this ;
    var_targetType_7249 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 191)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_targetType_7249.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-collection-value.galgas", 194)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_collectionValueAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 195)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_7249, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 196)).readProperty_mSupportCollectionValue ().operator_not (SOURCE_FILE ("expression-collection-value.galgas", 196)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_collectionValueAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (extensionGetter_definition (var_targetType_7249, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 198)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 198)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 198)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 197)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_classFunctionMap var_classFunctionMap_7720 = extensionGetter_definition (var_targetType_7249, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 200)).readProperty_mClassFunctionMap () ;
      GALGAS_bool var_hasCompilerArgument_7795 = GALGAS_bool (false) ;
      GALGAS_string var_constructorName_7839 = GALGAS_string::makeEmptyString () ;
      GALGAS_bool var_found_7868 = GALGAS_bool (false) ;
      cEnumerator_classFunctionMap enumerator_7895 (var_classFunctionMap_7720, kENUMERATION_UP) ;
      bool bool_9 = var_found_7868.operator_not (SOURCE_FILE ("expression-collection-value.galgas", 204)).isValidAndTrue () ;
      if (enumerator_7895.hasCurrentObject () && bool_9) {
        while (enumerator_7895.hasCurrentObject () && bool_9) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            GALGAS_bool test_11 = GALGAS_bool (kIsEqual, enumerator_7895.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-collection-value.galgas", 205)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
            if (kBoolTrue == test_11.boolEnum ()) {
              test_11 = GALGAS_bool (kIsEqual, enumerator_7895.current (HERE).readProperty_mReturnedType ().objectCompare (var_targetType_7249)) ;
            }
            test_10 = test_11.boolEnum () ;
            if (kBoolTrue == test_10) {
              var_hasCompilerArgument_7795 = enumerator_7895.current (HERE).readProperty_mHasCompilerArgument () ;
              var_constructorName_7839 = enumerator_7895.current (HERE).readProperty_lkey ().readProperty_string () ;
              var_found_7868 = GALGAS_bool (true) ;
            }
          }
          enumerator_7895.gotoNextObject () ;
          if (enumerator_7895.hasCurrentObject ()) {
            bool_9 = var_found_7868.operator_not (SOURCE_FILE ("expression-collection-value.galgas", 204)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_found_7868.operator_not (SOURCE_FILE ("expression-collection-value.galgas", 211)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_collectionValueAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_targetType_7249, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 213)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 213)).add_operation (GALGAS_string ("' has no initializer without argument"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 213)), fixItArray14  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 212)) ;
        }
      }
      const GALGAS_collectionValueAST temp_15 = this ;
      GALGAS_lstring var_usefulnessName_8308 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (extensionGetter_definition (var_targetType_7249, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 216)).readProperty_mTypeName ().readProperty_string (), temp_15.readProperty_mEndOfCollectionValue (), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 215)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_8308 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 219)) ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_collectionValueAST temp_17 = this ;
        test_16 = GALGAS_bool (kIsEqual, temp_17.readProperty_mElementList ().getter_count (SOURCE_FILE ("expression-collection-value.galgas", 220)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_collectionValueAST temp_18 = this ;
          outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::class_func_new (var_targetType_7249, temp_18.readProperty_mTypeName ().readProperty_location (), var_constructorName_7839, var_hasCompilerArgument_7795  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 221)) ;
        }
      }
      if (kBoolFalse == test_16) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_8827 = GALGAS_collectionValueElementListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 228)) ;
        const GALGAS_collectionValueAST temp_19 = this ;
        cEnumerator_collectionValueElementList enumerator_8883 (temp_19.readProperty_mElementList (), kENUMERATION_UP) ;
        while (enumerator_8883.hasCurrentObject ()) {
          callExtensionMethod_analyze ((cPtr_abstractCollectionValueElement *) enumerator_8883.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_targetType_7249, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_8827, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 230)) ;
          enumerator_8883.gotoNextObject () ;
        }
        const GALGAS_collectionValueAST temp_20 = this ;
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::class_func_new (var_targetType_7249, temp_20.readProperty_mEndOfCollectionValue (), var_collectionValueElementListForGeneration_8827  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 240)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionCollectionValue temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 257)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionListCollectionValue temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 263)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::method_analyze (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inElementType,
                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                     GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_11407 ;
  const GALGAS_expressionCollectionValue temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11407, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 288)) ;
  {
  const GALGAS_expressionCollectionValue temp_1 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inElementType, var_expression_11407.readProperty_mResultType (), temp_1.readProperty_mExpressionLocation (), var_expression_11407, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 298)) ;
  }
  const GALGAS_expressionCollectionValue temp_2 = this ;
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::class_func_new (temp_2.readProperty_mExpressionLocation (), var_expression_11407  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 300))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 300)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::method_analyze (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GALGAS_unifiedTypeMapEntry constinArgument_inElementType,
                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                         GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionSignature var_formalParameterTypeList_12267 = extensionGetter_definition (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 313)).readProperty_mAddAssignOperatorArguments () ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_12391 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_expressionListCollectionValue temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_12267.getter_count (SOURCE_FILE ("expression-collection-value.galgas", 315)).objectCompare (temp_1.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-collection-value.galgas", 315)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_expressionListCollectionValue temp_2 = this ;
      const GALGAS_expressionListCollectionValue temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpressionLocation (), GALGAS_string ("element of of '@").add_operation (extensionGetter_definition (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 316)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 316)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 316)).add_operation (var_formalParameterTypeList_12267.getter_count (SOURCE_FILE ("expression-collection-value.galgas", 317)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 316)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 317)).add_operation (temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-collection-value.galgas", 318)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 317)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 318)), fixItArray4  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 316)) ;
      var_semanticExpressionListForGeneration_12391.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_12391 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 320)) ;
    const GALGAS_expressionListCollectionValue temp_5 = this ;
    cEnumerator_actualOutputExpressionList enumerator_12906 (temp_5.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_12960 (var_formalParameterTypeList_12267, kENUMERATION_UP) ;
    while (enumerator_12906.hasCurrentObject () && enumerator_12960.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_13304 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_12906.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_12960.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_13304, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 322)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_12960.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12906.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_12960.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_12960.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 332)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_13410 = GALGAS_string ("!").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 332)) ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_13410) ;
          inCompiler->emitSemanticError (enumerator_12906.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_13410, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 333)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 333)), fixItArray9  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 333)) ;
        }
      }
      {
      const GALGAS_expressionListCollectionValue temp_10 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12960.current_mFormalArgumentType (HERE), var_exp_13304.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_exp_13304, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 337)) ;
      }
      var_semanticExpressionListForGeneration_12391.addAssign_operation (var_exp_13304  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 338)) ;
      enumerator_12906.gotoNextObject () ;
      enumerator_12960.gotoNextObject () ;
    }
    const GALGAS_expressionListCollectionValue temp_11 = this ;
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::class_func_new (temp_11.readProperty_mEndOfExpressionLocation (), var_semanticExpressionListForGeneration_12391  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValueForGeneration::method_generateCollectionElementCode (const GALGAS_unifiedTypeMapEntry /* constinArgument_inTargetType */,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        const GALGAS_string constinArgument_inCppTargetVar,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_15946 ;
  const GALGAS_expressionCollectionValueForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_15946, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 385)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 392)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_15946, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 393)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 394)) ;
  const GALGAS_expressionCollectionValueForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 395)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 395)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 396)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 396)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionForGeneration::method_generateCollectionElementCode (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_string constinArgument_inCppTargetVar,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_parameterList_16949 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 415)) ;
  const GALGAS_expressionListCollectionForGeneration temp_0 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_16987 (temp_0.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_16987.hasCurrentObject ()) {
    GALGAS_string var_parameter_17197 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_16987.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_17197, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 417)) ;
    var_parameterList_16949.addAssign_operation (var_parameter_17197  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)) ;
    enumerator_16987.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 427)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 429)) ;
  cEnumerator_stringlist enumerator_17389 (var_parameterList_16949, kENUMERATION_UP) ;
  while (enumerator_17389.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17389.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 431)) ;
    if (enumerator_17389.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 432)) ;
    }
    enumerator_17389.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 434)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("expression-collection-value.galgas", 434)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 435)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 436)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 436)) ;
      }
    }
  }
  const GALGAS_expressionListCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 438)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 438)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 438)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 456)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 458)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 459)) ;
  const GALGAS_expressionCollectionForGeneration temp_1 = this ;
  const GALGAS_expressionCollectionForGeneration temp_2 = this ;
  const GALGAS_expressionCollectionForGeneration temp_3 = this ;
  const GALGAS_expressionCollectionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 461)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 461)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 461)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 461)).add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)).add_operation (GALGAS_string ("::class_func_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)).add_operation (extensionGetter_definition (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)).readProperty_defaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-collection-value.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)).add_operation (extensionGetter_sourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 461)) ;
  const GALGAS_expressionCollectionForGeneration temp_5 = this ;
  cEnumerator_collectionValueElementListForGeneration enumerator_18997 (temp_5.readProperty_mElementList (), kENUMERATION_UP) ;
  while (enumerator_18997.hasCurrentObject ()) {
    const GALGAS_expressionCollectionForGeneration temp_6 = this ;
    callExtensionMethod_generateCollectionElementCode ((cPtr_abstractCollectionValueElementForGeneration *) enumerator_18997.current_mElement (HERE).ptr (), temp_6.readProperty_mResultType (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 465)) ;
    enumerator_18997.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_3413 ;
    GALGAS_bool var_unused_0_3424 ;
    GALGAS_bool var_unused_1_3424 ;
    const bool optionalResult3392 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3413, var_unused_0_3424, var_unused_1_3424) ;
    if (!optionalResult3392) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_string var_selfCppName_3448 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
      const GALGAS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GALGAS_selfInExpressionForGeneration::class_func_new (var_selfType_3413, temp_1.readProperty_mSelfLocation (), var_selfCppName_3448  COMMA_SOURCE_FILE ("expression-self.galgas", 80)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfInExpressionAST temp_2 = this ;
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-self.galgas", 82)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 102)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 103)) ;
  const GALGAS_selfInExpressionForGeneration temp_0 = this ;
  const GALGAS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 104)) ;
  {
  const GALGAS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-self.galgas", 105)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4762 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-property-access.galgas", 109)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4762, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 106)) ;
  GALGAS_unifiedTypeMapEntry var_expressionType_4841 = var_expression_4762.readProperty_mResultType () ;
  GALGAS_propertyMap var_propertyMap_4887 = extensionGetter_definition (var_expressionType_4841, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 117)).readProperty_mPropertyMap () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structPropertyAccessExpressionAST temp_2 = this ;
    GALGAS_AccessControl var_accessControl_4999 ;
    GALGAS_bool var_unused_0_5014 ;
    GALGAS_unifiedTypeMapEntry var_type_5021 ;
    const bool optionalResult4964 = var_propertyMap_4887.optional_searchKey (temp_2.readProperty_mPropertyName ().readProperty_string (), var_accessControl_4999, var_unused_0_5014, var_type_5021) ;
    if (!optionalResult4964) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = extensionGetter_definition (var_expressionType_4841, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 119)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 119)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 119)).operator_and (extensionGetter_definition (var_expressionType_4841, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 119)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 119)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 119)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 119)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_structPropertyAccessExpressionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray5  COMMA_SOURCE_FILE ("expression-property-access.galgas", 120)) ;
        }
      }
      const GALGAS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_accessControl_4999, constinArgument_inAnalysisContext.readProperty_selfType (), temp_6.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 122)) ;
      const GALGAS_structPropertyAccessExpressionAST temp_7 = this ;
      const GALGAS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_type_5021, temp_7.readProperty_mOperatorLocation (), var_expression_4762, temp_8.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-property-access.galgas", 129)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_5818 = extensionGetter_definition (var_expressionType_4841, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 136)).readProperty_mGetterMap () ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_structPropertyAccessExpressionAST temp_10 = this ;
      GALGAS_methodKind var_kind_5942 ;
      GALGAS_functionSignature var_getterFormalArgumentTypeList_5960 ;
      GALGAS_location var_unused_0_5998 ;
      GALGAS_bool var_hasCompilerArgument_6013 ;
      GALGAS_unifiedTypeMapEntry var_returnedType_6046 ;
      GALGAS_methodQualifier var_unused_0_6068 ;
      GALGAS_string var_actualGetterNameString_6083 ;
      const bool optionalResult5891 = var_getterMap_5818.optional_searchKey (temp_10.readProperty_mPropertyName ().readProperty_string (), var_kind_5942, var_getterFormalArgumentTypeList_5960, var_unused_0_5998, var_hasCompilerArgument_6013, var_returnedType_6046, var_unused_0_6068, var_actualGetterNameString_6083) ;
      if (!optionalResult5891) {
        test_9 = kBoolFalse ;
      }
      if (kBoolTrue == test_9) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GALGAS_bool (kIsNotEqual, var_getterFormalArgumentTypeList_5960.getter_count (SOURCE_FILE ("expression-property-access.galgas", 147)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            const GALGAS_structPropertyAccessExpressionAST temp_12 = this ;
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("for being called as a property read, the getter should have no formal argument (has ").add_operation (var_getterFormalArgumentTypeList_5960.getter_count (SOURCE_FILE ("expression-property-access.galgas", 150)).getter_string (SOURCE_FILE ("expression-property-access.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 149)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 150)), fixItArray13  COMMA_SOURCE_FILE ("expression-property-access.galgas", 148)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_11) {
          const GALGAS_structPropertyAccessExpressionAST temp_14 = this ;
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, var_actualGetterNameString_6083.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_mPropertyName ().readProperty_string () ;
          }else if (kBoolFalse == test_16) {
            temp_15 = var_actualGetterNameString_6083 ;
          }
          outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::class_func_new (var_returnedType_6046, temp_14.readProperty_mPropertyName ().readProperty_location (), var_kind_5942, var_expression_4762, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-property-access.galgas", 158)), temp_15, GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-property-access.galgas", 160)), var_hasCompilerArgument_6013  COMMA_SOURCE_FILE ("expression-property-access.galgas", 153)) ;
        }
      }
    }
    if (kBoolFalse == test_9) {
      const GALGAS_structPropertyAccessExpressionAST temp_18 = this ;
      TC_Array <C_FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("undefined property, undefined getter"), fixItArray19  COMMA_SOURCE_FILE ("expression-property-access.galgas", 165)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structPropertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 406)) ;
  GALGAS_string var_operand_19477 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_19477, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 408)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_19477.add_operation (GALGAS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 416)).add_operation (temp_2.readProperty_mStructFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 416)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 416)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 70)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3876 ;
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas", 87)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3876, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 84)) ;
  GALGAS_unifiedTypeMapEntry var_type_3951 = var_expression_3876.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_3876.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 96)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_3876.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 98)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_3951, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)).readProperty_mHandledOperatorFlags ().getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 99)).operator_not (SOURCE_FILE ("expression-not.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3951, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 101)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 101)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 101)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 100)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::class_func_new (var_type_3951, temp_8.readProperty_mOperatorLocation (), var_expression_3876  COMMA_SOURCE_FILE ("expression-not.galgas", 105)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 129)) ;
  GALGAS_string var_operand_5668 ;
  const GALGAS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5668, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 131)) ;
  const GALGAS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5668.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 70)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3915 ;
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-tilde.galgas", 88)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3915, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)) ;
  GALGAS_unifiedTypeMapEntry var_type_3990 = var_expression_3915.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_4029 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3915.ptr ())) ;
    if (nullptr == var_exp_4029.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (var_exp_4029.readProperty_mResultType (), var_exp_4029.readProperty_mLocation (), var_exp_4029.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 100))  COMMA_SOURCE_FILE ("expression-tilde.galgas", 97)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3990, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 102)).readProperty_mHandledOperatorFlags ().getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 102)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 102)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3990, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 104)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 104)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 104)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 103)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::class_func_new (var_type_3990, temp_5.readProperty_mOperatorLocation (), var_expression_3915  COMMA_SOURCE_FILE ("expression-tilde.galgas", 108)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 132)) ;
  GALGAS_string var_operand_5552 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5552, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 134)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5552.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 136)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 136)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 136)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 74)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3952 ;
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-bang.galgas", 92)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3952, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 89)) ;
  GALGAS_unifiedTypeMapEntry var_type_4027 = var_expression_3952.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMapEntry var_classIndex_4137 ;
    const bool optionalResult4099 = extensionGetter_definition (var_type_4027, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 100)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classIndex_4137) ;
    if (!optionalResult4099) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::class_func_new (var_classIndex_4137, temp_2.readProperty_mOperatorLocation (), var_expression_3952, extensionGetter_definition (var_type_4027, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 105)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-bang.galgas", 101)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = this ;
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4027, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 109)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 109)).add_operation (GALGAS_string ("' and does not support the '°' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 109)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 108)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 130)) ;
  GALGAS_string var_operand_5724 ;
  const GALGAS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5724, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 132)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 140)) COMMA_SOURCE_FILE ("expression-bang.galgas", 140)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5724.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 141)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 141)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 142)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 70)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3949 ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 87)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3949, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 84)) ;
  GALGAS_unifiedTypeMapEntry var_type_4024 = var_expression_3949.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4024, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 95)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 95)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 95)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryWrappingMinusExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4024, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 96)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionForGeneration::class_func_new (var_type_4024, temp_4.readProperty_mOperatorLocation (), var_expression_3949  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 101)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 124)) ;
  GALGAS_string var_operand_5458 ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5458, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 126)) ;
  outArgument_outCppExpression = var_operand_5458.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 134)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 161)) ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 162)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7588 ;
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7588, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 176)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7924 ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7588.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7924, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 186)) ;
  {
  const GALGAS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7588.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 197)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 197)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7588, var_rightExpression_7924, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 196)) ;
  }
  const GALGAS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_7588.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7588, GALGAS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 207)), var_rightExpression_7924  COMMA_SOURCE_FILE ("expression-or.galgas", 203)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 217)) ;
  const GALGAS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 218)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_9566 ;
  const GALGAS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9566, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 232)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_9902 ;
  const GALGAS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9566.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9902, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 242)) ;
  {
  const GALGAS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9566.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 253)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 253)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9566, var_rightExpression_9902, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 252)) ;
  }
  const GALGAS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::class_func_new (var_leftExpression_9566.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9566, var_rightExpression_9902  COMMA_SOURCE_FILE ("expression-or.galgas", 260)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 272)) ;
  const GALGAS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 273)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_11533 ;
  const GALGAS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11533, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 287)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_11869 ;
  const GALGAS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11533.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_11869, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 297)) ;
  {
  const GALGAS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11533.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 308)).readProperty_mHandledOperatorFlags ().getter_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 308)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11533, var_rightExpression_11869, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 307)) ;
  }
  const GALGAS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_11533.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11533, GALGAS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 319)), var_rightExpression_11869  COMMA_SOURCE_FILE ("expression-or.galgas", 315)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 329)) ;
  const GALGAS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 330)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_13582 ;
  const GALGAS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13582, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 345)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13940 ;
  const GALGAS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_13940, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 355)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_14020 = var_leftExpression_13582.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_leftType_14020, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 366)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_13582.readProperty_mLocation (), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 367)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_rightType_14243 = var_rightExpression_13940.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_14243, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 370)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_13940.readProperty_mLocation (), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 371)) ;
    }
  }
  const GALGAS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("range"), var_leftExpression_13582.readProperty_mLocation (), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 375)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_13582, var_rightExpression_13940  COMMA_SOURCE_FILE ("expression-or.galgas", 374)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 387)) ;
  const GALGAS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 388)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16200 ;
  const GALGAS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16200, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 402)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16558 ;
  const GALGAS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16558, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 412)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_leftExpression_16200.readProperty_mResultType (), var_leftExpression_16200.readProperty_mLocation (), var_leftExpression_16200, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 422)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_rightExpression_16558.readProperty_mResultType (), var_rightExpression_16558.readProperty_mLocation (), var_rightExpression_16558, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 432)) ;
  }
  const GALGAS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("range"), var_leftExpression_16200.readProperty_mLocation (), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 444)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16200, var_rightExpression_16558  COMMA_SOURCE_FILE ("expression-or.galgas", 443)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 482)) ;
  GALGAS_string var_leftTemporaryOperand_19379 ;
  const GALGAS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19379, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 484)) ;
  GALGAS_string var_testVar_19435 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 492)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 493)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_19435, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 494)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 494)).add_operation (var_leftTemporaryOperand_19379, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 494)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 494)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_19435, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 495)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 495)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)) ;
  }
  GALGAS_string var_rightTemporaryOperand_19907 ;
  const GALGAS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_19907, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 498)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_19435.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 505)).add_operation (var_rightTemporaryOperand_19907, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 505)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 505)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 506)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 507)) ;
  outArgument_outCppExpression = var_testVar_19435 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 519)) ;
  GALGAS_string var_leftTemporaryOperand_20707 ;
  const GALGAS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20707, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 521)) ;
  GALGAS_string var_rightTemporaryOperand_20911 ;
  const GALGAS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20911, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 529)) ;
  const GALGAS_closedSliceExpressionForGeneration temp_3 = this ;
  const GALGAS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_20707, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 538)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 538)).add_operation (var_rightTemporaryOperand_20911, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 538)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)).add_operation (var_leftTemporaryOperand_20707, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 539)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 551)) ;
  GALGAS_string var_leftTemporaryOperand_21884 ;
  const GALGAS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_21884, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 553)) ;
  GALGAS_string var_rightTemporaryOperand_22088 ;
  const GALGAS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22088, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 561)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 569)) COMMA_SOURCE_FILE ("expression-or.galgas", 569)) ;
  }
  const GALGAS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_21884, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 571)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 571)).add_operation (var_rightTemporaryOperand_22088, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 571)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 572)).add_operation (var_leftTemporaryOperand_21884, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 572)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 572)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 572)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 572)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 101)) ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_5238 ;
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5238, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 116)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_5573 ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5238.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5573, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 126)) ;
  {
  const GALGAS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5238.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 137)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 137)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5238, var_rightExpression_5573, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 136)) ;
  }
  const GALGAS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_5238.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5238, GALGAS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 148)), var_rightExpression_5573  COMMA_SOURCE_FILE ("expression-and.galgas", 144)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 158)) ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 159)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7243 ;
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7243, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 173)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7578 ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7243.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7578, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 183)) ;
  {
  const GALGAS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7243.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 194)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 194)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7243, var_rightExpression_7578, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 193)) ;
  }
  const GALGAS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::class_func_new (var_leftExpression_7243.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7243, var_rightExpression_7578  COMMA_SOURCE_FILE ("expression-and.galgas", 201)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 225)) ;
  GALGAS_string var_leftTemporaryOperand_9047 ;
  const GALGAS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9047, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 227)) ;
  GALGAS_string var_testVar_9103 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 235)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 235)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_9103, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 236)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 236)).add_operation (var_leftTemporaryOperand_9047, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 236)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 236)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_9103, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 237)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)) ;
  }
  GALGAS_string var_rightTemporaryOperand_9575 ;
  const GALGAS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9575, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 240)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_9103.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 247)).add_operation (var_rightTemporaryOperand_9575, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 247)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 247)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 248)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 249)) ;
  outArgument_outCppExpression = var_testVar_9103 ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes_3F__3F__3F_ (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                               const GALGAS_unifiedTypeMapEntry constinArgument_inSourceType,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_sourceType_2352 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_2390 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2352)) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).isValid ()) {
    uint32_t variant_2424 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).uintValue () ;
    bool loop_2424 = true ;
    while (loop_2424) {
      loop_2424 = var_ok_2390.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).operator_and (extensionGetter_definition (var_sourceType_2352, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).isValid () ;
      if (loop_2424) {
        loop_2424 = var_ok_2390.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).operator_and (extensionGetter_definition (var_sourceType_2352, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).boolValue () ;
      }
      if (loop_2424 && (0 == variant_2424)) {
        loop_2424 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) ;
      }
      if (loop_2424) {
        variant_2424 -- ;
        var_sourceType_2352 = extensionGetter_definition (var_sourceType_2352, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 55)).readProperty_mSuperType () ;
        var_ok_2390 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2352)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_2390.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 58)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapEntry var_targetType_2701 ;
      const bool optionalResult2663 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 58)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_targetType_2701) ;
      if (!optionalResult2663) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_2352 = constinArgument_inSourceType ;
        var_ok_2390 = GALGAS_bool (kIsEqual, var_targetType_2701.objectCompare (var_sourceType_2352)) ;
        if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).isValid ()) {
          uint32_t variant_2786 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).uintValue () ;
          bool loop_2786 = true ;
          while (loop_2786) {
            loop_2786 = var_ok_2390.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).operator_and (extensionGetter_definition (var_sourceType_2352, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).isValid () ;
            if (loop_2786) {
              loop_2786 = var_ok_2390.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).operator_and (extensionGetter_definition (var_sourceType_2352, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).boolValue () ;
            }
            if (loop_2786 && (0 == variant_2786)) {
              loop_2786 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)) ;
            }
            if (loop_2786) {
              variant_2786 -- ;
              var_sourceType_2352 = extensionGetter_definition (var_sourceType_2352, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 62)).readProperty_mSuperType () ;
              var_ok_2390 = GALGAS_bool (kIsEqual, var_targetType_2701.objectCompare (var_sourceType_2352)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_2390.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 66)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 68)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 68)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 68)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 68)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 68)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 68)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 67)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inSourceType,
                                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                                        GALGAS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_handled_3662 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_3687 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (nullptr == var_bigIntSource_3687.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("uint").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_bigint var_bigIntValue_3829 = var_bigIntSource_3687.readProperty_mValue () ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsStrictInf, var_bigIntValue_3829.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_3829.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_3829.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)) ;
            }
          }
          ioArgument_ioExpression = GALGAS_literalUIntExpressionForGeneration::class_func_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_3829.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 85))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 85)) ;
          var_handled_3662 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("sint").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_bigint var_bigIntValue_4249 = var_bigIntSource_3687.readProperty_mValue () ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsStrictInf, var_bigIntValue_4249.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_4249.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_4249.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)) ;
              }
            }
            ioArgument_ioExpression = GALGAS_literalSIntExpressionForGeneration::class_func_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4249.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)) ;
            var_handled_3662 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_bigint var_bigIntValue_4680 = var_bigIntSource_3687.readProperty_mValue () ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsStrictInf, var_bigIntValue_4680.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_4680.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  TC_Array <C_FixItDescription> fixItArray9 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_4680.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)) ;
                }
              }
              ioArgument_ioExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::class_func_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4680.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) ;
              var_handled_3662 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 101)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_10) {
                GALGAS_bigint var_bigIntValue_5108 = var_bigIntSource_3687.readProperty_mValue () ;
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = GALGAS_bool (kIsStrictInf, var_bigIntValue_5108.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 103)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_5108.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 103)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 103)).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_5108.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 104)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 104)), fixItArray12  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 104)) ;
                  }
                }
                ioArgument_ioExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::class_func_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5108.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)) ;
                var_handled_3662 = GALGAS_bool (true) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_handled_3662.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_unifiedTypeMapEntry var_sourceType_5537 = constinArgument_inSourceType ;
      GALGAS_bool var_ok_5577 = GALGAS_bool (kIsEqual, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)))) ;
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).isValid ()) {
        uint32_t variant_5637 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).uintValue () ;
        bool loop_5637 = true ;
        while (loop_5637) {
          loop_5637 = var_ok_5577.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).operator_and (extensionGetter_definition (var_sourceType_5537, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).isValid () ;
          if (loop_5637) {
            loop_5637 = var_ok_5577.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).operator_and (extensionGetter_definition (var_sourceType_5537, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).boolValue () ;
          }
          if (loop_5637 && (0 == variant_5637)) {
            loop_5637 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)) ;
          }
          if (loop_5637) {
            variant_5637 -- ;
            var_sourceType_5537 = extensionGetter_definition (var_sourceType_5537, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 114)).readProperty_mSuperType () ;
            var_ok_5577 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_5537)) ;
          }
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_ok_5577.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 117)).boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_unifiedTypeMapEntry var_targetType_5922 ;
          const bool optionalResult5884 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 117)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_targetType_5922) ;
          if (!optionalResult5884) {
            test_14 = kBoolFalse ;
          }
          if (kBoolTrue == test_14) {
            var_sourceType_5537 = constinArgument_inSourceType ;
            var_ok_5577 = GALGAS_bool (kIsEqual, extensionGetter_typeName (var_targetType_5922, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)).objectCompare (extensionGetter_typeName (var_sourceType_5537, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)))) ;
            if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).isValid ()) {
              uint32_t variant_6035 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).uintValue () ;
              bool loop_6035 = true ;
              while (loop_6035) {
                loop_6035 = var_ok_5577.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).operator_and (extensionGetter_definition (var_sourceType_5537, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).isValid () ;
                if (loop_6035) {
                  loop_6035 = var_ok_5577.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).operator_and (extensionGetter_definition (var_sourceType_5537, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).boolValue () ;
                }
                if (loop_6035 && (0 == variant_6035)) {
                  loop_6035 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) ;
                }
                if (loop_6035) {
                  variant_6035 -- ;
                  var_sourceType_5537 = extensionGetter_definition (var_sourceType_5537, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 121)).readProperty_mSuperType () ;
                  var_ok_5577 = GALGAS_bool (kIsEqual, extensionGetter_typeName (var_targetType_5922, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 122)).objectCompare (extensionGetter_typeName (var_sourceType_5537, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 122)))) ;
                }
              }
            }
          }
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_ok_5577.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_AccessControl var_accessControl_6443 ;
          GALGAS_bool var_unused_0_6458 ;
          GALGAS_unifiedTypeMapEntry var_propertyType_6465 ;
          const bool optionalResult6384 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).readProperty_mPropertyMap ().optional_searchKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).readProperty_mTypeName ().readProperty_string (), var_accessControl_6443, var_unused_0_6458, var_propertyType_6465) ;
          if (!optionalResult6384) {
            test_15 = kBoolFalse ;
          }
          if (kBoolTrue == test_15) {
            extensionMethod_checkSetAccess (var_accessControl_6443, GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)) ;
            GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_6685 = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_propertyType_6465, constinArgument_inErrorLocation, ioArgument_ioExpression, extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 135)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)) ;
            ioArgument_ioExpression = var_conversionExpression_6685 ;
            var_ok_5577 = GALGAS_bool (kIsEqual, var_propertyType_6465.objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          GALGAS_bool test_17 = var_ok_5577.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 139)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 139)).readProperty_mGetterMap ().getter_hasKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 139)).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 139)) ;
          }
          test_16 = test_17.boolEnum () ;
          if (kBoolTrue == test_16) {
            GALGAS_methodKind var_kind_7199 ;
            GALGAS_functionSignature var_argumentTypeList_7236 ;
            GALGAS_bool var_hasCompilerArgument_7277 ;
            GALGAS_unifiedTypeMapEntry var_returnedType_7310 ;
            GALGAS_location joker_7261 ; // Joker input parameter
            GALGAS_methodQualifier joker_7331_2 ; // Joker input parameter
            GALGAS_string joker_7331_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)).readProperty_mGetterMap ().method_searchKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)).readProperty_mTypeName (), var_kind_7199, var_argumentTypeList_7236, joker_7261, var_hasCompilerArgument_7277, var_returnedType_7310, joker_7331_2, joker_7331_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)) ;
            var_ok_5577 = GALGAS_bool (kIsEqual, var_argumentTypeList_7236.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_7310.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)) ;
            GALGAS_getterCallExpressionForGeneration var_conversionExpression_7463 = GALGAS_getterCallExpressionForGeneration::class_func_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_7199, ioArgument_ioExpression, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)), extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 157)).readProperty_mTypeName ().readProperty_string (), GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)), var_hasCompilerArgument_7277  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 151)) ;
            ioArgument_ioExpression = var_conversionExpression_7463 ;
          }
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_5577.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 163)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 167)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 167)).add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 167)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 167)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 167)), fixItArray19  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 164)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F__3F__3F__26__26_ (const GALGAS_bool constinArgument_inOperandIsHandled,
                                                      const GALGAS_string constinArgument_inOperatorNameForErrorMessage,
                                                      const GALGAS_location constinArgument_inErrorLocation,
                                                      GALGAS_semanticExpressionForGeneration & ioArgument_ioLeftExpression,
                                                      GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_leftType_8647 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_8694 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)).add_operation (extensionGetter_definition (var_rightType_8694, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapEntry var_rightType_9065 = var_rightType_8694 ;
    GALGAS_bool var_ok_9101 = GALGAS_bool (kIsEqual, var_leftType_8647.objectCompare (var_rightType_9065)) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).isValid ()) {
      uint32_t variant_9132 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).uintValue () ;
      bool loop_9132 = true ;
      while (loop_9132) {
        loop_9132 = var_ok_9101.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).operator_and (extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).isValid () ;
        if (loop_9132) {
          loop_9132 = var_ok_9101.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).operator_and (extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).boolValue () ;
        }
        if (loop_9132 && (0 == variant_9132)) {
          loop_9132 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)) ;
        }
        if (loop_9132) {
          variant_9132 -- ;
          var_rightType_9065 = extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)).readProperty_mSuperType () ;
          var_ok_9101 = GALGAS_bool (kIsEqual, var_leftType_8647.objectCompare (var_rightType_9065)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_ok_9101.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_9361 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_9361.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("uint").objectCompare (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_bigint var_bigIntValue_9508 = var_bigIntSource_9361.readProperty_mValue () ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsStrictInf, var_bigIntValue_9508.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_9508.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <C_FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_9508.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 198)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 198)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 198)) ;
                }
              }
              ioArgument_ioRightExpression = GALGAS_literalUIntExpressionForGeneration::class_func_new (var_leftType_8647, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_9508.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 200))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 200)) ;
              var_ok_9101 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("sint").objectCompare (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 202)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_6) {
                GALGAS_bigint var_bigIntValue_9944 = var_bigIntSource_9361.readProperty_mValue () ;
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  test_7 = GALGAS_bool (kIsStrictInf, var_bigIntValue_9944.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_9944.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    TC_Array <C_FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_9944.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)) ;
                  }
                }
                ioArgument_ioRightExpression = GALGAS_literalSIntExpressionForGeneration::class_func_new (var_leftType_8647, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_9944.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 207))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 207)) ;
                var_ok_9101 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_6) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 209)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_bigint var_bigIntValue_10391 = var_bigIntSource_9361.readProperty_mValue () ;
                  enumGalgasBool test_10 = kBoolTrue ;
                  if (kBoolTrue == test_10) {
                    test_10 = GALGAS_bool (kIsStrictInf, var_bigIntValue_10391.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 211)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_10391.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 211)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 211)).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      TC_Array <C_FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_10391.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::class_func_new (var_leftType_8647, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10391.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214)) ;
                  var_ok_9101 = GALGAS_bool (true) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsEqual, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 216)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    GALGAS_bigint var_bigIntValue_10835 = var_bigIntSource_9361.readProperty_mValue () ;
                    enumGalgasBool test_13 = kBoolTrue ;
                    if (kBoolTrue == test_13) {
                      test_13 = GALGAS_bool (kIsStrictInf, var_bigIntValue_10835.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 218)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_10835.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 218)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 218)).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        TC_Array <C_FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_10835.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::class_func_new (var_leftType_8647, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10835.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 221))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 221)) ;
                    var_ok_9101 = GALGAS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_ok_9101.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 226)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_11282 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_11282.ptr ()) {
          test_15 = kBoolFalse ;
        }
        if (kBoolTrue == test_15) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (kIsEqual, GALGAS_string ("uint").objectCompare (extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 227)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_bigint var_bigIntValue_11429 = var_bigIntSource_11282.readProperty_mValue () ;
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                test_17 = GALGAS_bool (kIsStrictInf, var_bigIntValue_11429.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 229)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_11429.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 229)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 229)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  TC_Array <C_FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_11429.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)) ;
                }
              }
              ioArgument_ioLeftExpression = GALGAS_literalUIntExpressionForGeneration::class_func_new (var_rightType_9065, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_11429.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 232))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 232)) ;
              var_ok_9101 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_16) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GALGAS_bool (kIsEqual, GALGAS_string ("sint").objectCompare (extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 234)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                GALGAS_bigint var_bigIntValue_11864 = var_bigIntSource_11282.readProperty_mValue () ;
                enumGalgasBool test_20 = kBoolTrue ;
                if (kBoolTrue == test_20) {
                  test_20 = GALGAS_bool (kIsStrictInf, var_bigIntValue_11864.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 236)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_11864.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 236)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 236)).boolEnum () ;
                  if (kBoolTrue == test_20) {
                    TC_Array <C_FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_11864.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)) ;
                  }
                }
                ioArgument_ioLeftExpression = GALGAS_literalSIntExpressionForGeneration::class_func_new (var_rightType_9065, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_11864.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 239))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 239)) ;
                var_ok_9101 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_19) {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                test_22 = GALGAS_bool (kIsEqual, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 241)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_22) {
                  GALGAS_bigint var_bigIntValue_12310 = var_bigIntSource_11282.readProperty_mValue () ;
                  enumGalgasBool test_23 = kBoolTrue ;
                  if (kBoolTrue == test_23) {
                    test_23 = GALGAS_bool (kIsStrictInf, var_bigIntValue_12310.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 243)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_12310.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 243)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 243)).boolEnum () ;
                    if (kBoolTrue == test_23) {
                      TC_Array <C_FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_12310.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::class_func_new (var_rightType_9065, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12310.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 246))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 246)) ;
                  var_ok_9101 = GALGAS_bool (true) ;
                }
              }
              if (kBoolFalse == test_22) {
                enumGalgasBool test_25 = kBoolTrue ;
                if (kBoolTrue == test_25) {
                  test_25 = GALGAS_bool (kIsEqual, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 248)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_25) {
                    GALGAS_bigint var_bigIntValue_12753 = var_bigIntSource_11282.readProperty_mValue () ;
                    enumGalgasBool test_26 = kBoolTrue ;
                    if (kBoolTrue == test_26) {
                      test_26 = GALGAS_bool (kIsStrictInf, var_bigIntValue_12753.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 250)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_12753.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 250)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 250)).boolEnum () ;
                      if (kBoolTrue == test_26) {
                        TC_Array <C_FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_12753.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::class_func_new (var_rightType_9065, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12753.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 253))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 253)) ;
                    var_ok_9101 = GALGAS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_ok_9101.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 258)).boolEnum () ;
      if (kBoolTrue == test_28) {
        GALGAS_AccessControl var_accessControl_13329 ;
        GALGAS_bool var_unused_0_13344 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_13351 ;
        const bool optionalResult13274 = extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 258)).readProperty_mPropertyMap ().optional_searchKey (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 258)).readProperty_mTypeName ().readProperty_string (), var_accessControl_13329, var_unused_0_13344, var_propertyType_13351) ;
        if (!optionalResult13274) {
          test_28 = kBoolFalse ;
        }
        if (kBoolTrue == test_28) {
          extensionMethod_checkSetAccess (var_accessControl_13329, GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 259)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 259)) ;
          GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_13571 = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_propertyType_13351, constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 267)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 263)) ;
          ioArgument_ioRightExpression = var_conversionExpression_13571 ;
          var_ok_9101 = GALGAS_bool (kIsEqual, var_propertyType_13351.objectCompare (var_leftType_8647)) ;
        }
      }
    }
    if (kBoolFalse == test_28) {
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        GALGAS_bool test_30 = var_ok_9101.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 271)) ;
        if (kBoolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 271)).readProperty_mGetterMap ().getter_hasKey (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 271)).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 271)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (kBoolTrue == test_29) {
          GALGAS_methodKind var_kind_14073 ;
          GALGAS_functionSignature var_argumentTypeList_14110 ;
          GALGAS_bool var_hasCompilerArgument_14151 ;
          GALGAS_unifiedTypeMapEntry var_returnedType_14184 ;
          GALGAS_location joker_14135 ; // Joker input parameter
          GALGAS_methodQualifier joker_14205_2 ; // Joker input parameter
          GALGAS_string joker_14205_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 272)).readProperty_mGetterMap ().method_searchKey (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)).readProperty_mTypeName (), var_kind_14073, var_argumentTypeList_14110, joker_14135, var_hasCompilerArgument_14151, var_returnedType_14184, joker_14205_2, joker_14205_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 272)) ;
          var_ok_9101 = GALGAS_bool (kIsEqual, var_argumentTypeList_14110.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 281)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_14184.objectCompare (var_leftType_8647)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 281)) ;
          GALGAS_getterCallExpressionForGeneration var_conversionExpression_14333 = GALGAS_getterCallExpressionForGeneration::class_func_new (var_leftType_8647, constinArgument_inErrorLocation, var_kind_14073, ioArgument_ioRightExpression, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 288)), extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 289)).readProperty_mTypeName ().readProperty_string (), GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 290)), var_hasCompilerArgument_14151  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 283)) ;
          ioArgument_ioRightExpression = var_conversionExpression_14333 ;
        }
      }
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = var_ok_9101.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 295)).boolEnum () ;
      if (kBoolTrue == test_31) {
        TC_Array <C_FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)).add_operation (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)).add_operation (extensionGetter_definition (var_rightType_9065, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)).add_operation (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 300)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 299)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 300)).add_operation (extensionGetter_definition (var_leftType_8647, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 300)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 300)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 300)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 296)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 155)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_6557 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_assignmentInstructionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_assignmentInstructionAST temp_2 = this ;
      GALGAS_string joker_6705 ; // Joker input parameter
      GALGAS_string joker_6714 ; // Joker input parameter
      extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_2.readProperty_mTargetVariableName (), var_targetType_6557, joker_6705, joker_6714, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 181)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_assignmentInstructionAST temp_3 = this ;
    GALGAS_string joker_6821 ; // Joker input parameter
    GALGAS_string joker_6830 ; // Joker input parameter
    extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_3.readProperty_mTargetVariableName (), var_targetType_6557, joker_6821, joker_6830, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 188)) ;
    }
    GALGAS_propertyMap var_propertyMap_6887 = extensionGetter_definition (var_targetType_6557, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 195)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_6994 ;
    GALGAS_bool var_isConstant_7013 ;
    const GALGAS_assignmentInstructionAST temp_4 = this ;
    var_propertyMap_6887.method_searchKey (temp_4.readProperty_mOptionalProperty (), var_accessControl_6994, var_isConstant_7013, var_targetType_6557, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 196)) ;
    const GALGAS_assignmentInstructionAST temp_5 = this ;
    extensionMethod_checkSetAccess (var_accessControl_6994, constinArgument_inAnalysisContext.readProperty_selfType (), temp_5.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 197)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_isConstant_7013.boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_assignmentInstructionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray8  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 209)) ;
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_7943 ;
  const GALGAS_assignmentInstructionAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6557, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7943, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 213)) ;
  {
  const GALGAS_assignmentInstructionAST temp_10 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_6557, var_expression_7943.readProperty_mResultType (), temp_10.readProperty_mInstructionLocation (), var_expression_7943, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 223)) ;
  }
  GALGAS_string var_targetVariableCppName_8180 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_8216 ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_assignmentInstructionAST temp_12 = this ;
    test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      {
      const GALGAS_assignmentInstructionAST temp_13 = this ;
      GALGAS_unifiedTypeMapEntry joker_8378 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mTargetVariableName (), joker_8378, var_targetVariableCppName_8180, var_nameForCheckingFormalParameterUsing_8216, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 233)) ;
      }
    }
  }
  if (kBoolFalse == test_11) {
    {
    const GALGAS_assignmentInstructionAST temp_14 = this ;
    GALGAS_unifiedTypeMapEntry joker_8550 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mTargetVariableName (), joker_8550, var_targetVariableCppName_8180, var_nameForCheckingFormalParameterUsing_8216, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 240)) ;
    }
  }
  const GALGAS_assignmentInstructionAST temp_15 = this ;
  const GALGAS_assignmentInstructionAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::class_func_new (var_targetType_6557, var_targetVariableCppName_8180, var_nameForCheckingFormalParameterUsing_8216, temp_15.readProperty_mOptionalProperty ().readProperty_string (), var_expression_7943, temp_16.readProperty_mTargetVariableName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 248))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 248)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_9459 ;
    GALGAS_bool var_unused_0_9478 ;
    GALGAS_bool var_mutableProperties_9504 ;
    const bool optionalResult9438 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9459, var_unused_0_9478, var_mutableProperties_9504) ;
    if (!optionalResult9438) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_mutableProperties_9504.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 269)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 270)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_9664 = extensionGetter_definition (var_selfType_9459, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)).readProperty_mPropertyMap () ;
      GALGAS_bool var_isConstant_9778 ;
      GALGAS_unifiedTypeMapEntry var_targetType_9794 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GALGAS_AccessControl joker_9770 ; // Joker input parameter
      var_propertyMap_9664.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_9770, var_isConstant_9778, var_targetType_9794, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 273)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_9778.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 275)) ;
        }
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GALGAS_string var_targetVariableCppName_9929 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 277)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 278)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_selfPropertyAssignmentInstructionAST temp_10 = this ;
        test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_propertyMap var_propertyMap_10186 = extensionGetter_definition (var_targetType_9794, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)).readProperty_mPropertyMap () ;
          GALGAS_AccessControl var_accessControl_10295 ;
          GALGAS_bool var_isConstant_10314 ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_11 = this ;
          var_propertyMap_10186.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_accessControl_10295, var_isConstant_10314, var_targetType_9794, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_12 = this ;
          extensionMethod_checkSetAccess (var_accessControl_10295, constinArgument_inAnalysisContext.readProperty_selfType (), temp_12.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)) ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = var_isConstant_10314.boolEnum () ;
            if (kBoolTrue == test_13) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_14 = this ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 288)) ;
            }
          }
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_11016 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_16.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9794, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11016, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 292)) ;
      {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_9794, var_expression_11016.readProperty_mResultType (), temp_17.readProperty_mInstructionLocation (), var_expression_11016, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 302)) ;
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::class_func_new (var_targetType_9794, var_targetVariableCppName_9929, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), temp_18.readProperty_mOptionalProperty ().readProperty_string (), var_expression_11016, temp_19.readProperty_mTargetSelfPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 304))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 304)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPropertyAssignmentInstructionAST temp_20 = this ;
    TC_Array <C_FixItDescription> fixItArray21 ;
    inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 313)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_12835 ;
  const GALGAS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12835, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 341)) ;
  {
  const GALGAS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)) ;
  }
  const GALGAS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 350)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mOptionalProperty ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_assignmentInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.readProperty_mTargetCppName ().add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)).add_operation (var_sourceVar_12835, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.readProperty_mTargetCppName ().add_operation (GALGAS_string (".setter_set"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)) ;
    const GALGAS_assignmentInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_7.readProperty_mOptionalProperty ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 355)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)) ;
    const GALGAS_assignmentInstructionForGeneration temp_8 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (var_sourceVar_12835, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)).add_operation (extensionGetter_sourceFile (temp_8.readProperty_mSourceLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)) ;
  }
  {
  const GALGAS_assignmentInstructionForGeneration temp_9 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_9.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 137)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mElseInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 138)) ;
  const GALGAS_structuredCastInstructionAST temp_2 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_5408 (temp_2.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_5408.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5408.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 140)) ;
    enumerator_5408.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_castExpression_6390 ;
  const GALGAS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-cast.galgas", 159)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_castExpression_6390, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 156)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 166)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_6530 = GALGAS_castInstructionBranchListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-cast.galgas", 168)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_6661 (temp_1.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_6661.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_6749 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6661.current_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 171)) ;
    GALGAS_unifiedTypeMapEntry var_t_6885 = var_type_6749 ;
    GALGAS_bool var_found_6908 = GALGAS_bool (kIsEqual, var_t_6885.objectCompare (var_castExpression_6390.readProperty_mResultType ())) ;
    if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).isValid ()) {
      uint32_t variant_6952 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).uintValue () ;
      bool loop_6952 = true ;
      while (loop_6952) {
        loop_6952 = var_found_6908.operator_not (SOURCE_FILE ("instruction-cast.galgas", 176)).operator_and (extensionGetter_definition (var_t_6885, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 176)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 176)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)).isValid () ;
        if (loop_6952) {
          loop_6952 = var_found_6908.operator_not (SOURCE_FILE ("instruction-cast.galgas", 176)).operator_and (extensionGetter_definition (var_t_6885, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 176)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 176)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)).boolValue () ;
        }
        if (loop_6952 && (0 == variant_6952)) {
          loop_6952 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 175)) ;
        }
        if (loop_6952) {
          variant_6952 -- ;
          var_t_6885 = extensionGetter_definition (var_t_6885, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 177)).readProperty_mSuperType () ;
          var_found_6908 = GALGAS_bool (kIsEqual, var_t_6885.objectCompare (var_castExpression_6390.readProperty_mResultType ())) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_6908.operator_not (SOURCE_FILE ("instruction-cast.galgas", 180)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6661.current_mTypeName (HERE).readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_6661.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 182)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 182)).add_operation (extensionGetter_definition (var_castExpression_6390.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 182)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 182)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 182)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 181)) ;
      }
    }
    GALGAS_string var_localConstantName_7396 ;
    GALGAS_localConstantList var_localConstantList_7422 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-cast.galgas", 186)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_6661.current_mConstantVarName (HERE).readProperty_string ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 187)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_7396 = GALGAS_string ("cast_").add_operation (enumerator_6661.current_mConstantVarName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 188)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 188)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 188)).add_operation (enumerator_6661.current_mConstantVarName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 188)) ;
        var_localConstantList_7422.addAssign_operation (var_type_6749, enumerator_6661.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_7396  COMMA_SOURCE_FILE ("instruction-cast.galgas", 189)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_7396 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8220 ;
    {
    routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_7422, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-cast.galgas", 204)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-cast.galgas", 205)), enumerator_6661.current_mInstructionList (HERE), enumerator_6661.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_8220, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 198)) ;
    }
    var_castBranchList_6530.addAssign_operation (enumerator_6661.current_mTypeComparisonKind (HERE), var_type_6749, var_localConstantName_7396, var_instructionList_8220  COMMA_SOURCE_FILE ("instruction-cast.galgas", 211)) ;
    enumerator_6661.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_8728 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = this ;
  const GALGAS_structuredCastInstructionAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-cast.galgas", 219)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-cast.galgas", 220)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-cast.galgas", 221)), temp_5.readProperty_mElseInstructionList (), temp_6.readProperty_mEndOfCastInstruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_8728, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 214)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_7.readProperty_mEndOfCastInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 228)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::class_func_new (var_castExpression_6390, var_castBranchList_6530, var_else_5F_instructionList_8728  COMMA_SOURCE_FILE ("instruction-cast.galgas", 230))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 230)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_castCppVarName_10596 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_10596, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_10596, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = this ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_10777 (temp_1.readProperty_mCastBranchList (), kENUMERATION_UP) ;
  while (enumerator_10777.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10777.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)) ;
    switch (enumerator_10777.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_10596, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)).add_operation (extensionGetter_identifierRepresentation (enumerator_10777.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (extensionGetter_identifierRepresentation (enumerator_10777.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 284)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)).add_operation (var_castCppVarName_10596, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 286)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 284)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_10596, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)).add_operation (extensionGetter_identifierRepresentation (enumerator_10777.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 289)).add_operation (GALGAS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)).add_operation (extensionGetter_identifierRepresentation (enumerator_10777.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 291)).add_operation (var_castCppVarName_10596, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_10777.current_mCastedVarCppName (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 294)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_10777.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 296)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 296)).add_operation (enumerator_10777.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)).add_operation (extensionGetter_identifierRepresentation (enumerator_10777.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)).add_operation (var_castCppVarName_10596, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 295)) ;
      }
    }
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_10777.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)) ;
    }
    if (enumerator_10777.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 308)) ;
    }
    enumerator_10777.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_structuredCastInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 311)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 312)) ;
      {
      const GALGAS_structuredCastInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 313)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 323)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 324)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 325)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 297)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_minusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 309)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 315)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 321)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_12836 ;
  GALGAS_string var_targetVariableCppName_12861 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_12897 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_13024 ;
        GALGAS_bool var_unused_0_13035 ;
        GALGAS_bool var_mutableProperties_13061 ;
        const bool optionalResult13003 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_13024, var_unused_0_13035, var_mutableProperties_13061) ;
        if (!optionalResult13003) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_13061.operator_not (SOURCE_FILE ("instruction-concat.galgas", 342)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 343)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_13222 = extensionGetter_definition (var_selfType_13024, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 345)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_13328 ;
          const GALGAS_plusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_13320 ; // Joker input parameter
          var_propertyMap_13222.method_searchKey (temp_6.readProperty_mReceiverName (), joker_13320, var_isConstant_13328, var_targetType_12836, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 346)) ;
          var_nameForCheckingFormalParameterUsing_12897 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_12861 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 348)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 349)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_13328.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 351)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_13061.operator_not (SOURCE_FILE ("instruction-concat.galgas", 353)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 354)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 357)) ;
        var_targetType_12836.drop () ; // Release error dropped variable
        var_targetVariableCppName_12861.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_12897.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_12836, var_targetVariableCppName_12861, var_nameForCheckingFormalParameterUsing_12897, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 361)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_14200 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_14200.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_14247 = extensionGetter_definition (var_targetType_12836, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 369)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_14337 ;
    GALGAS_bool var_isConstant_14356 ;
    var_propertyMap_14247.method_searchKey (enumerator_14200.current_mValue (HERE), var_accessControl_14337, var_isConstant_14356, var_targetType_12836, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 370)) ;
    extensionMethod_checkSetAccess (var_accessControl_14337, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_14200.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 371)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_14356.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_14200.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 376)) ;
      }
    }
    enumerator_14200.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_12836, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 380)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 380)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 380)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_plusEqualExpressionInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_12836, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 382)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 382)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 382)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15302 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_23 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_23.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_12836, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_15302, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_24 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_12836, var_expression_15302.readProperty_mResultType (), temp_24.readProperty_mInstructionLocation (), var_expression_15302, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 395)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_25 = this ;
  const GALGAS_plusEqualExpressionInstructionAST temp_26 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_25.readProperty_mInstructionLocation (), var_targetType_12836, var_targetVariableCppName_12861, var_nameForCheckingFormalParameterUsing_12897, temp_26.readProperty_mStructAttributeList (), var_expression_15302, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 397))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 397)) ;
}
