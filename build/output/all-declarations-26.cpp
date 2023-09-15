#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_routinePrototypeDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1074)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routinePrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.readProperty_mRoutineName (), temp_1.readProperty_mFormalArgumentList () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1082))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1093)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1104)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1101))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1111)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1121)), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1122)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1119))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_46197 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1131)) ;
  const GALGAS_semanticTypeForGeneration temp_1 = this ;
  result_result = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_46197.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1134)), var_selfTypeDefinition_46197.readProperty_mSuperType (), var_selfTypeDefinition_46197.readProperty_mHandledOperatorFlags () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1132))) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasHeader ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_2.readProperty_mRoutineName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1150)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1150))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1150)) ;
    }
  }
  GALGAS_string var_code_47487 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = this ;
  const GALGAS_routineImplementationForGeneration temp_4 = this ;
  const GALGAS_routineImplementationForGeneration temp_5 = this ;
  const GALGAS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure (temp_3.readProperty_mGenerateStatic (), GALGAS_string ("routine_").add_operation (temp_4.readProperty_mRoutineName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1154)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1154)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_47487, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1152)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_mRoutineName (), var_code_47487 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1165))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1177)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1177))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1177)) ;
  GALGAS_string var_code_48325 ;
  {
  const GALGAS_functionImplementationForGeneration temp_1 = this ;
  const GALGAS_functionImplementationForGeneration temp_2 = this ;
  const GALGAS_functionImplementationForGeneration temp_3 = this ;
  const GALGAS_functionImplementationForGeneration temp_4 = this ;
  const GALGAS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction (GALGAS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1179)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GALGAS_string ("C_Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_48325, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1178)) ;
  }
  const GALGAS_functionImplementationForGeneration temp_6 = this ;
  const GALGAS_functionImplementationForGeneration temp_7 = this ;
  const GALGAS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_48325, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1194)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1190))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1205)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1205))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1205)) ;
  GALGAS_string var_code_49261 ;
  {
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1207)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1207)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1209)), temp_2.readProperty_mFunctionInstructionList (), GALGAS_string ("C_Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GALGAS_bool (true), GALGAS_bool (false), var_code_49261, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1206)) ;
  }
  const GALGAS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_49261, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1221)), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1222)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1218))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1231)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1241)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1241))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1241)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1251)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1251))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1251)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                       GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1262)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1262)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1262))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1262)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_2.readProperty_mObjcCocoaHeader (), GALGAS_string ("\n\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1263)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1275)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1275)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1275))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1275)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_4 = this ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_4.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1276)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1276))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1276)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_5 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_6 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_5.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1279)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1279)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1279)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_6.readProperty_mObjcCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1277)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_7 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_7.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1289)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_8 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_9 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_8.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1292)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_9.readProperty_mSwiftCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1290)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_programComponentForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1308)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1317)) ;
  const GALGAS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1328)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                             GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1340)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1340))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1340)) ;
  cEnumerator_wrapperFileMap enumerator_54421 (constinArgument_inFilewrapperFileMap, kENUMERATION_UP) ;
  while (enumerator_54421.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1342)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1342))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1342)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_54421.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_54421.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1344))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_54421.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1346))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)) ;
    }
    enumerator_54421.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_54769 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_54769.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile (enumerator_54769.current_mRegularFileMap (HERE), enumerator_54769.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1350)) ;
    }
    enumerator_54769.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_regularFileIndexStringList_55347 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1366)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_55406 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1367)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_55463 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1368)) ;
  GALGAS_stringlist var_directoryIndexStringList_55511 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1369)) ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_55347, var_directoryIndexStringList_55511, var_regularTextContentIndexStringList_55463, var_regularBinaryContentIndexStringList_55406, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1370)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_55347, var_directoryIndexStringList_55511, var_regularTextContentIndexStringList_55463, var_regularBinaryContentIndexStringList_55406, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1378))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_56139 (temp_3.readProperty_mFilewrapperTemplateListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_56139.hasCurrentObject ()) {
    const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_56139.current_mFilewrapperTemplateName (HERE), enumerator_56139.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1387))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1387)) ;
    enumerator_56139.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateWrapperContents (const GALGAS_string constinArgument_inFilewrapperName,
                                      const GALGAS_string constinArgument_inFilewrapperDirectory,
                                      const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                      const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                      const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                      GALGAS_string & ioArgument_ioImplementation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_56900 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_56900.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_56900.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_contents_56986 = GALGAS_string::constructor_stringWithContentsOfFile (enumerator_56900.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (enumerator_56900.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("const char * gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (enumerator_56900.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (var_contents_56986.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (enumerator_56900.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1414)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)).add_operation (enumerator_56900.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1415)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (enumerator_56900.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1416)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1416)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string ("  true, // Text file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (var_contents_56986.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1418)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string (", // Text length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string ("  gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (enumerator_56900.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_data var_contents_57910 = GALGAS_data::constructor_dataWithContentsOfFile (enumerator_56900.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1422)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)).add_operation (enumerator_56900.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)).add_operation (enumerator_56900.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1425)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1426)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1426)).add_operation (var_contents_57910.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1426)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1426)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1426)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1426)).add_operation (var_contents_57910.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1427)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1426)).add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (enumerator_56900.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1428)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1429)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)).add_operation (enumerator_56900.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1430)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)).add_operation (enumerator_56900.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1431)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1431)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)).add_operation (var_contents_57910.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1433)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1433)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)).add_operation (enumerator_56900.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1434)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1434)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)) ;
    }
    enumerator_56900.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_58932 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_58932.hasCurrentObject ()) {
    {
    routine_generateWrapperContents (constinArgument_inFilewrapperName, enumerator_58932.current_lkey (HERE).readProperty_string (), enumerator_58932.current_mWrapperDirectoryIndex (HERE), enumerator_58932.current_mRegularFileMap (HERE), enumerator_58932.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)) ;
    }
    enumerator_58932.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1453)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1453)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1453)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1453)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1453)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)) ;
  cEnumerator_wrapperFileMap enumerator_59533 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_59533.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_59533.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)) ;
    enumerator_59533.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1463)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1463)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1463)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1463)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1463)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)) ;
  cEnumerator_wrapperDirectoryMap enumerator_60160 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_60160.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_60160.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)) ;
    enumerator_60160.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1471)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1472)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1473)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1474)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1475)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1475)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1476)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1487))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1487)) ;
  GALGAS_string var_filewrapperImplementation_61541 = GALGAS_string::makeEmptyString () ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents (temp_1.readProperty_mFilewrapperName (), GALGAS_string::makeEmptyString (), GALGAS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_61541, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_61541 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1497))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_5 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_62013 (temp_5.readProperty_mFilewrapperTemplateListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_62013.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_62160 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_62202 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_stringset var_unusedVariableCppNameSet_62250 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1506)) ;
    var_unusedVariableCppNameSet_62250.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1507))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1507)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_62347 (enumerator_62013.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_62347.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_62250.addAssign_operation (enumerator_62347.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1509)) ;
      enumerator_62347.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_62492 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_62013.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_62160, ioArgument_ioInclusionSet, var_temporaryVariableIndex_62202, var_unusedVariableCppNameSet_62250, var_useColumnMarker_62492, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1512)) ;
    }
    const GALGAS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_62013.current_mFilewrapperTemplateName (HERE), enumerator_62013.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_62250, var_useColumnMarker_62492, var_generatedCodeForInstructionList_62160 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1521))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1521)) ;
    enumerator_62013.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n#include \"galgas2/cCollectionElement.h\"\n#include \"galgas2/cSortedListElement.h\"\n#include \"galgas2/capSortedListElement.h\"\n#include \"galgas2/C_Compiler.h\"\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncMapElement::cMapElement (const GALGAS_lstring & inLKey\n                          COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmProperty_lkey (inLKey) {\n}\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n#pragma once\n\n//----------------------------------------------------------------------------------------------------------------------\n\n#include \"strings/C_String.h\"\n#include \"time/C_Timer.h\"\n#include \"galgas2/AC_GALGAS_root.h\"\n#include \"galgas2/C_galgas_type_descriptor.h\"\n#include \"galgas2/typeComparisonResult.h\"\n#include \"galgas2/cGenericAbstractEnumerator.h\"\n#include \"galgas2/cEnumerator_range.h\"\n#include \"galgas2/AC_GALGAS_list.h\"\n#include \"galgas2/AC_GALGAS_sortedlist.h\"\n#include \"galgas2/AC_GALGAS_map.h\"\n#include \"galgas2/AC_GALGAS_reference_class.h\"\n#include \"galgas2/AC_GALGAS_value_class.h\"\n#include \"galgas2/AC_GALGAS_enumAssociatedValues.h\"\n#include \"galgas2/AC_GALGAS_graph.h\"\n#include \"galgas2/acStrongPtr_class.h\"\n#include \"galgas2/cPtr_weakReference_proxy.h\"\n#include \"galgas2/AC_GALGAS_weak_reference.h\"\n#include \"command_line_interface/C_BoolCommandLineOption.h\"\n#include \"command_line_interface/C_UIntCommandLineOption.h\"\n#include \"command_line_interface/C_StringCommandLineOption.h\"\n#include \"command_line_interface/C_StringListCommandLineOption.h\"\n#include \"utilities/C_PrologueEpilogue.h\"\n#include \"utilities/C_BigInt.h\"\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass C_Compiler ;\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n\n#include \"galgas2/cCollectionElement.h\"\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass cMapElement : public cCollectionElement {\n//--- Attribut\n  public: GALGAS_lstring mProperty_lkey ;\n\n//--- Default constructor\n  public: cMapElement (const GALGAS_lstring & inLKey\n                        COMMA_LOCATION_ARGS) ;\n\n//--- No copy\n  private: cMapElement (const cMapElement &) ;\n  private: cMapElement & operator = (const cMapElement &) ;\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\n#include \"galgas2/cSortedListElement.h\"\n#include \"galgas2/capSortedListElement.h\"\n#include \"galgas2/C_galgas_function_descriptor.h\"\n#include \"galgas2/cObjectArray.h\"\n\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @sint type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint (void) ;\n\n//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_sint constructor_default (LOCATION_ARGS) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint (const int32_t inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @sint64 type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mSInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint_36__34_ (void) ;\n\n//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_sint_36__34_ constructor_default (LOCATION_ARGS) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @object type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass cPtr_object ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_object : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: cPtr_object * mSharedObject ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != NULL ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_object (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n                          COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_object (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_object (const GALGAS_object & inSource) ;\n  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n\n//--------------------------------- Embedded Object\n  public: const AC_GALGAS_root * embeddedObject (void) const ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @uint type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue ++ ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint (void) ;\n\n//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_uint constructor_default (LOCATION_ARGS) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_uint (const uint32_t inValue) ;\n  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//  @uint64 type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mUInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint_36__34_ (void) ;\n\n//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_uint_36__34_ constructor_default (LOCATION_ARGS) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string ("@bool type").stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\ntypedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_bool : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: enumGalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_bool (void) ;\n\n//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_bool constructor_default (LOCATION_ARGS) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_bool (const bool inValue) ; // Is built\n  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GALGAS_bool (const typeComparisonKind inComparisonKind,\n                        const typeComparisonResult inComparisonResult) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n// @binaryset type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\n#include \"bdd/C_BDD.h\"\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_binaryset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: C_BDD mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline C_BDD bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_binaryset (const C_BDD & inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @function type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass C_galgas_function_descriptor ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_function : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return NULL != mFunctionDescriptor ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = NULL ; }\n  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_function (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_function (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_function (const GALGAS_function & inSource) ;\n  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @type type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_type : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return NULL != mTypeDescriptor ; }\n  public: inline void drop (void) override { mTypeDescriptor = NULL ; }\n  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_type (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_type (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_type (const GALGAS_type & inSource) ;\n  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @location type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\n#include \"galgas2/C_LocationInSource.h\"\n#include \"galgas2/C_SourceTextInString.h\"\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_location : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: C_LocationInSource mStartLocationInSource ;\n  private: C_LocationInSource mEndLocationInSource ;\n  private: C_SourceTextInString mSourceText ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: C_LocationInSource startLocation (void) const { return mStartLocationInSource ; }\n  public: C_LocationInSource endLocation (void) const { return mEndLocationInSource ; }\n  public: C_SourceTextInString sourceText (void) const { return mSourceText ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_location (const C_LocationInSource & inStartLocationInSource,\n                            const C_LocationInSource & inEndLocationInSource,\n                            const C_SourceTextInString & inSourceText) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @data type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_data : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: C_Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline C_Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_data (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_data (const C_Data & inData) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @char type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_char : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_char (void) ;\n\n//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_char constructor_default (LOCATION_ARGS) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_char (const utf32 inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//  @double type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_double : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mDoubleValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double doubleValue (void) const { return mDoubleValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_double (void) ;\n\n//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_double constructor_default (LOCATION_ARGS) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_double (const double inValue) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @string type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nAC_OutputStream & operator << (AC_OutputStream & inStream,\n                               const GALGAS_string & inString) ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nAC_OutputStream & operator << (AC_OutputStream & inStream,\n                               const GALGAS_lstring & inString) ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_string : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: C_String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline C_String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_string (void) ;\n\n//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_string constructor_default (LOCATION_ARGS) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GALGAS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_string (const C_String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @stringset type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_stringset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: class cSharedStringsetRoot * mSharedRoot ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedRoot != NULL ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_stringset (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_stringset (void) ;\n\n//--------------------------------- In debug mode : check method\n  protected: void checkStringset (LOCATION_ARGS) const ;\n\n//--------------------------------- Insulate\n  protected: void insulate (LOCATION_ARGS) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @filewrapper type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_filewrapper : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: C_String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return NULL != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = NULL ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string ("@application type").stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_application : public AC_GALGAS_root {\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return false ; }\n  public: inline void drop (void) override { }\n\n//--------------------------------- Default constructor\n  public: GALGAS_application (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_application (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_application (const GALGAS_application & inSource) ;\n  public: GALGAS_application & operator = (const GALGAS_application & inSource) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @bigint type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_bigint : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: C_BigInt mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline C_BigInt bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GALGAS_bigint (const C_BigInt & inValue) ;\n  public: GALGAS_bigint (const char * inDecimalString, C_Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_bigint (void) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//   @timer type\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_timer : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: C_Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_timer (void) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outHeader ; // Returned variable
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1591))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1593))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1595))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1597))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1599))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1601))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1603))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1605))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1607))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1609))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1611))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1613))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1615))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1617))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1619))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1621))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1623))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1625))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1627))) ;
    }
    break ;
  }
  const GALGAS_primitiveTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_67189 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)) ;
  const GALGAS_primitiveTypeForGeneration temp_2 = this ;
  result_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_67189.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1632)), var_selfTypeDefinition_67189.readProperty_mIsConcrete (), var_selfTypeDefinition_67189.readProperty_mConstructorMap (), var_selfTypeDefinition_67189.readProperty_mGetterMap (), var_selfTypeDefinition_67189.readProperty_mSetterMap (), var_selfTypeDefinition_67189.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_67189.readProperty_mClassMethodMap (), var_selfTypeDefinition_67189.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_67189.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_67189.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_67189.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_67189.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1630))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1630)) ;
//---
  return result_outHeader ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GALGAS_string & ioArgument_ioHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1651)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1651)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1651)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles (const GALGAS_string constinArgument_inDirectory,
                                          const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                          GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                          GALGAS_stringlist & ioArgument_ioToolCppFileList,
                                          GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_generatedCode_68844 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1666))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_68944 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_68944.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_68944.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1668)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_68944.current_mDeclaration (HERE).ptr (), var_generatedCode_68844, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1669)) ;
      }
    }
    enumerator_68944.gotoNextObject () ;
  }
  var_generatedCode_68844.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1672)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_69161 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69161.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69161.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1674)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_68844.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_69161.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675)) ;
      }
    }
    enumerator_69161.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_69352 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69352.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69352.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1679)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_69480 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1680)) ;
        GALGAS_string var_code_69499 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_69352.current_mDeclaration (HERE).ptr (), joker_69480, var_code_69499, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1680)) ;
        var_generatedCode_68844.plusAssign_operation(var_code_69499, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681)) ;
      }
    }
    enumerator_69352.gotoNextObject () ;
  }
  var_generatedCode_68844.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_69655 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69655.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69655.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1686)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_stringset joker_69796 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1687)) ;
        GALGAS_string var_headerString_32__69824 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_69655.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_69796, var_headerString_32__69824, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1687)) ;
        var_generatedCode_68844.plusAssign_operation(var_headerString_32__69824, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1688)) ;
      }
    }
    enumerator_69655.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1691)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1692)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1693)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_68844, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1694)) ;
      }
    }
  }
  var_generatedCode_68844 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1707))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_70589 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_70589.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_70589.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1709)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_68844.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_70589.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1710)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1710)) ;
        GALGAS_stringset joker_70808 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1711)) ;
        GALGAS_string var_code_70827 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_70589.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::constructor_emptyMap (SOURCE_FILE ("semanticGeneration.galgas", 1711)), joker_70808, var_code_70827, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)) ;
        var_generatedCode_68844.plusAssign_operation(var_code_70827, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1712)) ;
      }
    }
    enumerator_70589.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1715)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1716)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1717)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_68844, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1718)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticFileGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (C_Compiler * /* inCompiler */,
                                                                                     const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                     const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#pragma once\n\n//----------------------------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//----------------------------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_336_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_336 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_336.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_336.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_336_.increment () ;
      enumerator_336.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (C_Compiler * /* inCompiler */,
                                                                                             const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#include \"galgas2/C_Compiler.h\"\n#include \"galgas2/C_galgas_io.h\"\n#include \"galgas2/C_galgas_CLI_Options.h\"\n#include \"utilities/C_PrologueEpilogue.h\"\n\n//----------------------------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_315_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_315 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_315.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_315.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_315_.increment () ;
      enumerator_315.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          const GALGAS_string constinArgument_inElementTypeName,
                                          GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_1318 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 23)) ;
  var_attributeList_1318.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 27))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 27)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 28)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 29)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 30))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 24)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 33)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 33))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 33)), var_attributeList_1318  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 36)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                    GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_2050 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 45)) ;
  var_attributeList_2050.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 48))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 48)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 49))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 49)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 50)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 51)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 52))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 46)) ;
  var_attributeList_2050.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 55))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 55)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 56))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 56)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 57)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 58)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 59))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 53)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 63))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 63)), var_attributeList_2050  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 61))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 61)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 66)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2LStringListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_LStringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                     GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_2982 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 75)) ;
  var_attributeList_2982.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 78))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 78)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 79))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 79)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 80)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 81)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 82))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 76)) ;
  var_attributeList_2982.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 85))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 85)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 86))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 86)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 87)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 88)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 89))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 83)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 92))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 92)), var_attributeList_2982  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 90))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 90)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2lstringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 95)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                 const GALGAS_string constinArgument_inElementTypeName,
                                                 GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_3891 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 105)) ;
  var_attributeList_3891.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 108))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 108)), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 109))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 109)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 110)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 111)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 112))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 106)) ;
  var_attributeList_3891.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 115))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 115)), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 116))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 116)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 117)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 118)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 119))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 113)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 122)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 122))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 122)), var_attributeList_3891, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 120))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 120)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 126)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_4863 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 135)) ;
  var_attributeList_4863.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 138))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 138)), GALGAS_lstring::constructor_new (GALGAS_string ("start"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 139))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 139)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 140)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 141)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 142))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 136)) ;
  var_attributeList_4863.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 145))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 145)), GALGAS_lstring::constructor_new (GALGAS_string ("length"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 146))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 146)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 147)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 148)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 149))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 143)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("range"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 152))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 152)), var_attributeList_4863, GALGAS_string ("uint")  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 150))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 150)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("range"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 156)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                         const GALGAS_string constinArgument_inTypeName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeUsefulnessName_5693 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (constinArgument_inTypeName, GALGAS_location::constructor_nowhere (SOURCE_FILE ("predefinedTypes.galgas", 162))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 162)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_typeUsefulnessName_5693  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 163)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                        GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_applicationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("application"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (SOURCE_FILE ("predefinedTypes.galgas", 172))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 172))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 172)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("application"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 173)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_bigintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bigint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (SOURCE_FILE ("predefinedTypes.galgas", 174))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 174))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 174)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 175)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_binarysetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("binaryset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (SOURCE_FILE ("predefinedTypes.galgas", 176))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 176))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 176)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("binaryset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 177)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_boolPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bool"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (SOURCE_FILE ("predefinedTypes.galgas", 178))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 178))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 178)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 179)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_charPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("char"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (SOURCE_FILE ("predefinedTypes.galgas", 180))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 180))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 180)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 181)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_dataPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("data"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (SOURCE_FILE ("predefinedTypes.galgas", 182))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 182))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 182)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("data"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 183)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_doublePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("double"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (SOURCE_FILE ("predefinedTypes.galgas", 184))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 184))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 184)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("double"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 185)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_filewrapperPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (SOURCE_FILE ("predefinedTypes.galgas", 186))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 186))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 186)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("filewrapper"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 187)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_functionPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("function"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (SOURCE_FILE ("predefinedTypes.galgas", 188))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 188))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 188)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("function"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 189)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_locationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("location"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (SOURCE_FILE ("predefinedTypes.galgas", 190))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 190))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 190)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("location"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 191)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_objectPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("object"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (SOURCE_FILE ("predefinedTypes.galgas", 192))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 192))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 192)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("object"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 193)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (SOURCE_FILE ("predefinedTypes.galgas", 194))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 194))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 194)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 195)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 196))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 196))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 196)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 197)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("string"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (SOURCE_FILE ("predefinedTypes.galgas", 198))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 198))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 198)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 199)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringsetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("stringset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (SOURCE_FILE ("predefinedTypes.galgas", 200))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 200))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 200)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("stringset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 201)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_timerPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("timer"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (SOURCE_FILE ("predefinedTypes.galgas", 202))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 202))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 202)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("timer"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 203)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_typePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("type"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (SOURCE_FILE ("predefinedTypes.galgas", 204))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 204))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 204)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("type"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 205)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (SOURCE_FILE ("predefinedTypes.galgas", 206))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 206))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 206)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 207)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 208))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 208))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 208)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 209)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 211)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 212)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 213)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 214)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 215)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 216)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 217)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 218)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 219)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 220)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 222)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 223)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 224)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 225)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 226)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 227)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 228)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 229)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 230)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 232)) ;
  }
  {
  routine_appendPredefined_32_LStringListTypeAST (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 233)) ;
  }
  {
  routine_appendStructASTForRangeType (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 235)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_key_12038 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 249)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 249))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 249)) ;
  {
  const GALGAS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_12038, temp_1, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 250)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_12838 ;
  const GALGAS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getOptionalMethodMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_optionalMethodMap_12838, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 263)) ;
  GALGAS_constructorMap var_constructorMap_12913 ;
  const GALGAS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getConstructorMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_constructorMap_12913, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 264)) ;
  GALGAS_getterMap var_getterMap_12973 ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_getterMap_12973, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 265)) ;
  GALGAS_setterMap var_setterMap_13033 ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_setterMap_13033, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 266)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13117 ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_13117, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)) ;
  GALGAS_classMethodMap var_classMethodMap_13192 ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_classMethodMap_13192, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 268)) ;
  GALGAS_functionSignature var_addAssignArgumentList_13284 ;
  const GALGAS_predefinedTypeAST temp_6 = this ;
  callExtensionMethod_getAddAssignArgumentList ((cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioTypeMap, var_addAssignArgumentList_13284, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 269)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_13380 ;
  GALGAS_string var_enumeratedTypeName_13416 ;
  const GALGAS_predefinedTypeAST temp_7 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_7.ptr (), ioArgument_ioTypeMap, var_enumerationList_13380, var_enumeratedTypeName_13416, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 270)) ;
  {
  const GALGAS_predefinedTypeAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry joker_13491 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_8.readProperty_mPredefinedTypeName (), joker_13491, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 275)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedTypeEntry_13600 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_enumeratedTypeName_13416.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_enumeratedTypeEntry_13600 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("predefinedTypes.galgas", 282)) ;
    }
  }
  if (kBoolFalse == test_9) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_13416, var_enumeratedTypeEntry_13600, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 284)) ;
    }
  }
  {
  const GALGAS_predefinedTypeAST temp_10 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_10.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 293))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 293)), GALGAS_bool (false), var_getterMap_12973, var_setterMap_13033, var_instanceMethodMap_13117, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 287)) ;
  }
  const GALGAS_predefinedTypeAST temp_11 = this ;
  const GALGAS_predefinedTypeAST temp_12 = this ;
  const GALGAS_predefinedTypeAST temp_13 = this ;
  const GALGAS_predefinedTypeAST temp_14 = this ;
  const GALGAS_predefinedTypeAST temp_15 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14181 = GALGAS_unifiedTypeDefinition::constructor_new (GALGAS_lstring::constructor_new (temp_11.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 302))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 302)), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("predefinedTypes.galgas", 305)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("predefinedTypes.galgas", 306)), GALGAS_bool (kIsEqual, temp_13.readProperty_mPredefinedTypeName ().objectCompare (GALGAS_string ("stringset"))), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 308)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 309)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 310)), var_constructorMap_12913, var_getterMap_12973, var_setterMap_13033, var_instanceMethodMap_13117, var_classMethodMap_13192, var_optionalMethodMap_12838, var_enumerationList_13380, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_14.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 318)), var_addAssignArgumentList_13284, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 320)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 321)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 322)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 323)), GALGAS_bool (false), var_enumeratedTypeEntry_13600, extensionGetter_defaultConstructorName (temp_15.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 326)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("predefinedTypes.galgas", 328))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 301)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14181.readProperty_mTypeName (), var_typeDefinition_14181, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                      const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_15682 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_0.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15682, var_nameForUsefulness_15682, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 346)) ;
  }
  const GALGAS_predefinedTypeAST temp_1 = this ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (temp_1.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 349)), GALGAS_primitiveTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_2.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)), temp_3.readProperty_mPredefinedTypeName (), temp_4.readProperty_mKind ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 350))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities (const GALGAS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                  const GALGAS_lstringlist constinArgument_inRootEntities,
                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 36)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringlist var_undefinedNodeList_1881 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 38)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, var_undefinedNodeList_1881.getter_length (SOURCE_FILE ("useful-entities-computation.galgas", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string var_s_1983 = GALGAS_string ("usefulness computation, undefined nodes:") ;
            cEnumerator_stringlist enumerator_2044 (var_undefinedNodeList_1881, kENUMERATION_UP) ;
            while (enumerator_2044.hasCurrentObject ()) {
              var_s_1983.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_2044.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 42)) ;
              enumerator_2044.gotoNextObject () ;
            }
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 44)), var_s_1983, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 44)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_lstringlist var_usefullEntityList_2223 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("useful-entities-computation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 47)) ;
          GALGAS_stringset var_usefullEntitySet_2316 = GALGAS_stringset::constructor_setWithLStringList (var_usefullEntityList_2223  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)) ;
          GALGAS_stringset var_allEntitySet_2392 = GALGAS_stringset::constructor_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 49))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)) ;
          GALGAS_stringset var_unusedEntities_2483 = var_allEntitySet_2392.substract_operation (var_usefullEntitySet_2316, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 50)) ;
          GALGAS_uselessEntityLocationMap var_uselessEntityLocationMap_2578 = GALGAS_uselessEntityLocationMap::constructor_emptyMap (SOURCE_FILE ("useful-entities-computation.galgas", 51)) ;
          cEnumerator_stringset enumerator_2607 (var_unusedEntities_2483, kENUMERATION_UP) ;
          while (enumerator_2607.hasCurrentObject ()) {
            GALGAS_location var_l_2643 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2607.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 53)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, var_l_2643.objectCompare (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 54)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 55)), GALGAS_string ("unused entity, '").add_operation (enumerator_2607.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)).add_operation (GALGAS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)).add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2578.getter_hasKey (var_l_2643.getter_locationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 57)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2578.setter_insertKey (var_l_2643.getter_locationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 58)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 58)), var_l_2643, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 58)) ;
                  }
                }
              }
            }
            enumerator_2607.gotoNextObject () ;
          }
          cEnumerator_uselessEntityLocationMap enumerator_3090 (var_uselessEntityLocationMap_2578, kENUMERATION_UP) ;
          while (enumerator_3090.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3090.current_mLocation (HERE), GALGAS_string ("unused entity, due to option --").add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)) ;
            enumerator_3090.gotoNextObject () ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_getterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inGetterName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)), constinArgument_inGetterName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_getterNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterNameForUsefulEntitiesGraph ("getterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_getterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_getterNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_setterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inSetterName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)), constinArgument_inSetterName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_setterNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterNameForUsefulEntitiesGraph ("setterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_setterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_setterNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_methodNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inMethodName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)), constinArgument_inMethodName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_methodNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_methodNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_methodNameForUsefulEntitiesGraph ("methodNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_methodNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_methodNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inLexiqueName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 89)), constinArgument_inLexiqueName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 89)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_lexiqueNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_lexiqueNameForUsefulEntitiesGraph ("lexiqueNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_lexiqueNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_grammarNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inGrammarName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 95)), constinArgument_inGrammarName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 95)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_grammarNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_grammarNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_grammarNameForUsefulEntitiesGraph ("grammarNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_grammarNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_grammarNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_syntaxNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inSyntaxName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 101)), constinArgument_inSyntaxName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 101)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxNameForUsefulEntitiesGraph ("syntaxNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_syntaxNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_optionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inOptionName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 107)), constinArgument_inOptionName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 107)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_optionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_optionNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_optionNameForUsefulEntitiesGraph ("optionNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_optionNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_optionNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 113)), constinArgument_inFilewrapperName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 113)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperNameForUsefulEntitiesGraph ("filewrapperNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       1,
                                                                                       functionArgs_filewrapperNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                                       const GALGAS_lstring & constinArgument_inTemplateName,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)), constinArgument_inTemplateName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperTemplateNameForUsefulEntitiesGraph ("filewrapperTemplateNameForUsefulEntitiesGraph",
                                                                                               functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph,
                                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                                               2,
                                                                                               functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_functionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFunctionName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)), constinArgument_inFunctionName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_functionNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionNameForUsefulEntitiesGraph ("functionNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_functionNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_functionNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_procedureNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inProcName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 132)), constinArgument_inProcName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 132)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_procedureNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_procedureNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_procedureNameForUsefulEntitiesGraph ("procedureNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_procedureNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_procedureNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_typeNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inTypeName,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 138)), constinArgument_inTypeName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 138)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_typeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_typeNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_typeNameForUsefulEntitiesGraph ("typeNameForUsefulEntitiesGraph",
                                                                                functionWithGenericHeader_typeNameForUsefulEntitiesGraph,
                                                                                & kTypeDescriptor_GALGAS_lstring,
                                                                                1,
                                                                                functionArgs_typeNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_afterNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                         C_Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("after"), constinArgument_inLocation  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 144)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_afterNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_afterNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_afterNameForUsefulEntitiesGraph ("afterNameForUsefulEntitiesGraph",
                                                                                 functionWithGenericHeader_afterNameForUsefulEntitiesGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_afterNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_beforeNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                          C_Compiler *
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("before"), constinArgument_inLocation  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 150)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_beforeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_beforeNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_beforeNameForUsefulEntitiesGraph ("beforeNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_beforeNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_beforeNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_rootRuleNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFileExtension,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("rule .").add_operation (constinArgument_inFileExtension.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 156)), constinArgument_inFileExtension.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 156)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_rootRuleNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_rootRuleNameForUsefulEntitiesGraph ("rootRuleNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_rootRuleNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 96)) ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 97)) ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 98)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_4199 ;
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_4199, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_4458 ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_4458, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 123)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_4717 ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_4717, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 133)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_if_5F_expression_4199.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 143)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ifExpressionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GALGAS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_4199.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)), fixItArray5  COMMA_SOURCE_FILE ("expression-if.galgas", 144)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, var_then_5F_expression_4458.readProperty_mResultType ().objectCompare (var_else_5F_expression_4717.readProperty_mResultType ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_ifExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_4458.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 149)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 149)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 149)).add_operation (extensionGetter_definition (var_else_5F_expression_4717.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 149)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 149)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 149)), fixItArray8  COMMA_SOURCE_FILE ("expression-if.galgas", 148)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression_4458.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_4199, var_then_5F_expression_4458, var_else_5F_expression_4717  COMMA_SOURCE_FILE ("expression-if.galgas", 153)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GALGAS_string & outArgument_outCppExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_ifExpression_6633 ;
  const GALGAS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_6633, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 183)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 191)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 192)) ;
  const GALGAS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 193)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 193)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 193)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 193)) ;
  GALGAS_string var_testVar_6896 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 194)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_6896, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 196)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 196)).add_operation (var_ifExpression_6633, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 196)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_6896, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 197)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 199)) ;
  }
  GALGAS_string var_thenExpression_7371 ;
  const GALGAS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_7371, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 200)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 207)).add_operation (var_thenExpression_7371, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 207)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 207)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 208)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_6896, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 210)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 211)) ;
  }
  GALGAS_string var_elseExpression_7792 ;
  const GALGAS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_7792, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 219)).add_operation (var_elseExpression_7792, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 219)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 219)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 220)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 221)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-unary-plus.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 67)) ;
  GALGAS_unifiedTypeMapEntry var_type_3049 = outArgument_outExpression.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_3049, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 78)).readProperty_mHandledOperatorFlags ().getter_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas", 78)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryPlusExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3049, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 80)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 80)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 79)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3039 ;
  const GALGAS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-unary-minus.galgas", 71)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3039, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 68)) ;
  GALGAS_unifiedTypeMapEntry var_type_3108 = var_expression_3039.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_3146 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3039.ptr ())) ;
    if (NULL == var_exp_3146.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_3146.readProperty_mResultType (), var_exp_3146.readProperty_mLocation (), var_exp_3146.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 83))  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 80)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3108, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 85)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas", 85)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas", 85)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_unaryMinusExpressionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3108, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 87)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 87)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 87)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 86)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_3108, temp_5.readProperty_mOperatorLocation (), var_expression_3039  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 91)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 114)) ;
  GALGAS_string var_operand_5033 ;
  const GALGAS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5033, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 116)) ;
  const GALGAS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5033.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 124)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 124)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 124)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 124)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 125)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 125)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_2620 ;
  GALGAS_string var_sourceVariableCppName_2659 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_2712 ;
  {
  const GALGAS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_2620, var_sourceVariableCppName_2659, var_nameForCheckingFormalParameterUsing_2712, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 61)) ;
  }
  const GALGAS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_2620, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_2659, var_nameForCheckingFormalParameterUsing_2712  COMMA_SOURCE_FILE ("expression-var.galgas", 67)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 93)) ;
  const GALGAS_varInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = temp_1.readProperty_mCppVarName () ;
  {
  const GALGAS_varInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-var.galgas", 95)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-true-false.galgas", 81)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-true-false.galgas", 102)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (true)") ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (false)") ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpressionForGeneration isTrueExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (C_Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_2922 = GALGAS_string::makeEmptyString () ;
  const GALGAS_literalStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_2941 (temp_0.readProperty_mStringSequence (), kENUMERATION_UP) ;
  while (enumerator_2941.hasCurrentObject ()) {
    var_s_2922.plusAssign_operation(enumerator_2941.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 74)) ;
    enumerator_2941.gotoNextObject () ;
  }
  const GALGAS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_2922  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 76)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
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
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-literal-string.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 98)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 98)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalCharExpressionAST temp_0 = this ;
  const GALGAS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char ()  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 61)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-literal-char.galgas", 84)).getter_string (SOURCE_FILE ("expression-literal-char.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 84)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 84)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalDoubleExpressionAST temp_0 = this ;
  const GALGAS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_double ()  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 61)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-double.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 85)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 85)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBigIntExpressionAST temp_0 = this ;
  const GALGAS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 153)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 176)).add_operation (GALGAS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 176)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 193)).add_operation (GALGAS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 193)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 210)).add_operation (GALGAS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 210)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 227)).add_operation (GALGAS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 227)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 244)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 244)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 245)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 245)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 246)) ;
  const GALGAS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 247)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 247)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 162)) ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 163)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7562 ;
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7562, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 178)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7875 ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7562.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7875, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 188)) ;
  GALGAS_bool var_isComparable_7917 = extensionGetter_definition (var_leftExpression_7562.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 198)).readProperty_mHandledOperatorFlags ().getter_isComparable (SOURCE_FILE ("expression-comparison.galgas", 198)) ;
  GALGAS_bool var_isReferenceEquatable_8023 = extensionGetter_definition (var_leftExpression_7562.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 199)).readProperty_mHandledOperatorFlags ().getter_isReferenceEquatable (SOURCE_FILE ("expression-comparison.galgas", 199)) ;
  GALGAS_bool var_operatorIsAvailable_8142 ;
  GALGAS_string var_operatorName_8169 ;
  const GALGAS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
    {
      var_operatorName_8169 = GALGAS_string ("==") ;
      var_operatorIsAvailable_8142 = var_isComparable_7917 ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
    {
      var_operatorName_8169 = GALGAS_string ("!=") ;
      var_operatorIsAvailable_8142 = var_isComparable_7917 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_8169 = GALGAS_string ("<=") ;
      var_operatorIsAvailable_8142 = var_isComparable_7917 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_8169 = GALGAS_string ("<") ;
      var_operatorIsAvailable_8142 = var_isComparable_7917 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_8169 = GALGAS_string (">=") ;
      var_operatorIsAvailable_8142 = var_isComparable_7917 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_8169 = GALGAS_string (">") ;
      var_operatorIsAvailable_8142 = var_isComparable_7917 ;
    }
    break ;
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_8169 = GALGAS_string ("===") ;
      var_operatorIsAvailable_8142 = var_isReferenceEquatable_8023 ;
    }
    break ;
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_8169 = GALGAS_string ("!==") ;
      var_operatorIsAvailable_8142 = var_isReferenceEquatable_8023 ;
    }
    break ;
  }
  {
  const GALGAS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator (var_operatorIsAvailable_8142, var_operatorName_8169, temp_3.readProperty_mOperatorLocation (), var_leftExpression_7562, var_rightExpression_7875, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 229)) ;
  }
  const GALGAS_comparisonExpressionAST temp_4 = this ;
  const GALGAS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_7562, temp_5.readProperty_mComparison (), var_rightExpression_7875  COMMA_SOURCE_FILE ("expression-comparison.galgas", 237)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 265)) ;
  GALGAS_string var_leftTemporaryOperand_10438 ;
  const GALGAS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_10438, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 267)) ;
  GALGAS_string var_rightTemporaryOperand_10645 ;
  const GALGAS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_10645, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 275)) ;
  GALGAS_string var_operatorName_10695 ;
  const GALGAS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_10695 = GALGAS_string ("kIsEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_10695 = GALGAS_string ("kIsNotEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_10695 = GALGAS_string ("kIsInfOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_10695 = GALGAS_string ("kIsStrictInf") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_10695 = GALGAS_string ("kIsSupOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_10695 = GALGAS_string ("kIsStrictSup") ;
    }
    break ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_operatorName_10695, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 293)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 293)).add_operation (var_leftTemporaryOperand_10438, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 293)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 293)).add_operation (var_rightTemporaryOperand_10645, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 293)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 293)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 164)) ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 165)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7455 ;
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7455, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 180)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7787 ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7787, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 190)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_7860 = var_leftExpression_7455.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_7903 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_7455.ptr ())) ;
    if (NULL == var_left_7903.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_7977 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_7787.ptr ())) ;
      if (NULL == var_right_7977.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_7903.readProperty_mValue ().right_shift_operation (var_right_7977.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 206))  COMMA_SOURCE_FILE ("expression-additive.galgas", 203)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_8250 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_7455.ptr ())) ;
      if (NULL == var_left_8250.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_8324 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_7787.ptr ())) ;
        if (NULL == var_right_8324.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_8250.readProperty_mValue ().right_shift_operation (var_right_8324.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 213))  COMMA_SOURCE_FILE ("expression-additive.galgas", 210)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_7860, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 215)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 215)).operator_not (SOURCE_FILE ("expression-additive.galgas", 215)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_rightShiftExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_7860, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 217)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 217)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 217)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 216)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_7860, temp_9.readProperty_mOperatorLocation (), var_leftExpression_7455, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("expression-additive.galgas", 225)), var_rightExpression_7787  COMMA_SOURCE_FILE ("expression-additive.galgas", 221)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)) ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 237)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_10255 ;
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10255, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 252)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10587 ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10587, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 262)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_10660 = var_leftExpression_10255.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_10703 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_10255.ptr ())) ;
    if (NULL == var_left_10703.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_10777 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_10587.ptr ())) ;
      if (NULL == var_right_10777.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_10703.readProperty_mValue ().left_shift_operation (var_right_10777.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 278))  COMMA_SOURCE_FILE ("expression-additive.galgas", 275)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_11050 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_10255.ptr ())) ;
      if (NULL == var_left_11050.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_11124 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_10587.ptr ())) ;
        if (NULL == var_right_11124.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_11050.readProperty_mValue ().left_shift_operation (var_right_11124.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 285))  COMMA_SOURCE_FILE ("expression-additive.galgas", 282)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_10660, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 287)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 287)).operator_not (SOURCE_FILE ("expression-additive.galgas", 287)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_leftShiftExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_10660, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 289)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 289)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 289)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 288)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_10660, temp_9.readProperty_mOperatorLocation (), var_leftExpression_10255, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("expression-additive.galgas", 297)), var_rightExpression_10587  COMMA_SOURCE_FILE ("expression-additive.galgas", 293)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)) ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 309)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_13062 ;
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13062, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 324)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13370 ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_13062.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_13370, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 334)) ;
  {
  const GALGAS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_13062.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 345)).readProperty_mHandledOperatorFlags ().getter_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 345)), GALGAS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_13062, var_rightExpression_13370, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 344)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_13654 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_13062.ptr ())) ;
    if (NULL == var_leftBigint_13654.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_13735 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_13370.ptr ())) ;
      if (NULL == var_rightBigint_13735.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_13654.readProperty_mValue ().add_operation (var_rightBigint_13735.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 357))  COMMA_SOURCE_FILE ("expression-additive.galgas", 354)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_13062.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_13062, GALGAS_binaryOperator::constructor_addNoOverflow (SOURCE_FILE ("expression-additive.galgas", 364)), var_rightExpression_13370  COMMA_SOURCE_FILE ("expression-additive.galgas", 360)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 375)) ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 376)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_15396 ;
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_15396, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 390)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15704 ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_15396.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_15704, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 400)) ;
  {
  const GALGAS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_15396.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 411)).readProperty_mHandledOperatorFlags ().getter_infixAddOperator (SOURCE_FILE ("expression-additive.galgas", 411)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15396, var_rightExpression_15704, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 410)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_15982 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_15396.ptr ())) ;
    if (NULL == var_leftBigint_15982.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_16063 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_15704.ptr ())) ;
      if (NULL == var_rightBigint_16063.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_15982.readProperty_mValue ().add_operation (var_rightBigint_16063.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 423))  COMMA_SOURCE_FILE ("expression-additive.galgas", 420)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_15396.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_15396, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("expression-additive.galgas", 430)), var_rightExpression_15704  COMMA_SOURCE_FILE ("expression-additive.galgas", 426)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 441)) ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 442)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_17734 ;
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_17734, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 457)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_18042 ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_17734.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_18042, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 467)) ;
  {
  const GALGAS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_17734.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 478)).readProperty_mHandledOperatorFlags ().getter_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 478)), GALGAS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17734, var_rightExpression_18042, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 477)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_18326 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_17734.ptr ())) ;
    if (NULL == var_leftBigint_18326.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_18407 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_18042.ptr ())) ;
      if (NULL == var_rightBigint_18407.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_18326.readProperty_mValue ().substract_operation (var_rightBigint_18407.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 490))  COMMA_SOURCE_FILE ("expression-additive.galgas", 487)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_17734.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_17734, GALGAS_binaryOperator::constructor_subNoOverflow (SOURCE_FILE ("expression-additive.galgas", 497)), var_rightExpression_18042  COMMA_SOURCE_FILE ("expression-additive.galgas", 493)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 508)) ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 509)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_20068 ;
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_20068, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 523)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_20376 ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_20068.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_20376, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 533)) ;
  {
  const GALGAS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_20068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 544)).readProperty_mHandledOperatorFlags ().getter_infixSubOperator (SOURCE_FILE ("expression-additive.galgas", 544)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_20068, var_rightExpression_20376, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 543)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_20654 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_20068.ptr ())) ;
    if (NULL == var_leftBigint_20654.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_20735 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_20376.ptr ())) ;
      if (NULL == var_rightBigint_20735.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_20654.readProperty_mValue ().substract_operation (var_rightBigint_20735.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 556))  COMMA_SOURCE_FILE ("expression-additive.galgas", 553)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_20068.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_20068, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("expression-additive.galgas", 563)), var_rightExpression_20376  COMMA_SOURCE_FILE ("expression-additive.galgas", 559)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperatorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 606)) ;
  GALGAS_string var_leftTemporaryOperand_22772 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22772, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 608)) ;
  GALGAS_string var_rightTemporaryOperand_22954 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22954, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 610)) ;
  GALGAS_string var_operatorString_23009 ;
  GALGAS_bool var_hasCompilerOption_23039 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GALGAS_binaryOperator::kNotBuilt:
    break ;
  case GALGAS_binaryOperator::kEnum_rightShift:
    {
      var_operatorString_23009 = GALGAS_string ("right_shift_operation") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_leftShift:
    {
      var_operatorString_23009 = GALGAS_string ("left_shift_operation") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_add:
    {
      var_operatorString_23009 = GALGAS_string ("add_operation") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_addNoOverflow:
    {
      var_operatorString_23009 = GALGAS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_sub:
    {
      var_operatorString_23009 = GALGAS_string ("substract_operation") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_subNoOverflow:
    {
      var_operatorString_23009 = GALGAS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_and:
    {
      var_operatorString_23009 = GALGAS_string ("operator_and") ;
      var_hasCompilerOption_23039 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_or:
    {
      var_operatorString_23009 = GALGAS_string ("operator_or") ;
      var_hasCompilerOption_23039 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_xor:
    {
      var_operatorString_23009 = GALGAS_string ("operator_xor") ;
      var_hasCompilerOption_23039 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_23009 = GALGAS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation:
    {
      var_operatorString_23009 = GALGAS_string ("multiply_operation") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation:
    {
      var_operatorString_23009 = GALGAS_string ("divide_operation") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_23009 = GALGAS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_modulo_5F_operation:
    {
      var_operatorString_23009 = GALGAS_string ("modulo_operation") ;
      var_hasCompilerOption_23039 = GALGAS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_22772.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 658)).add_operation (var_operatorString_23009, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 658)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 658)) ;
  outArgument_outCppExpression.plusAssign_operation(var_rightTemporaryOperand_22954, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 659)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_hasCompilerOption_23039.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 661)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 661)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 662)) COMMA_SOURCE_FILE ("expression-additive.galgas", 662)) ;
      }
    }
  }
  const GALGAS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 664)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 664)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 664)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 144)) ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 145)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_6843 ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6843, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 159)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7151 ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6843.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7151, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 169)) ;
  {
  const GALGAS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_6843.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 180)).readProperty_mHandledOperatorFlags ().getter_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 180)), GALGAS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_6843, var_rightExpression_7151, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 179)) ;
  }
  const GALGAS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_6843.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_6843, GALGAS_binaryOperator::constructor_multiply_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 191)), var_rightExpression_7151  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 187)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 202)) ;
  const GALGAS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 203)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8820 ;
  const GALGAS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8820, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 217)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_9128 ;
  const GALGAS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8820.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9128, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 227)) ;
  {
  const GALGAS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_8820.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 238)).readProperty_mHandledOperatorFlags ().getter_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas", 238)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8820, var_rightExpression_9128, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 237)) ;
  }
  const GALGAS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_8820.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8820, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 249)), var_rightExpression_9128  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 245)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 259)) ;
  const GALGAS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 260)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_10791 ;
  const GALGAS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10791, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 274)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_11099 ;
  const GALGAS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10791.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_11099, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 284)) ;
  {
  const GALGAS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_10791.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 295)).readProperty_mHandledOperatorFlags ().getter_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 295)), GALGAS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_10791, var_rightExpression_11099, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 294)) ;
  }
  const GALGAS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_10791.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_10791, GALGAS_binaryOperator::constructor_divide_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 306)), var_rightExpression_11099  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 302)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 316)) ;
  const GALGAS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 317)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_12753 ;
  const GALGAS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12753, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 331)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13061 ;
  const GALGAS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12753.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_13061, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 341)) ;
  {
  const GALGAS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_12753.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 352)).readProperty_mHandledOperatorFlags ().getter_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas", 352)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12753, var_rightExpression_13061, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 351)) ;
  }
  const GALGAS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_12753.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_12753, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 363)), var_rightExpression_13061  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 359)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 373)) ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 374)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14698 ;
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14698, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 388)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15006 ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14698.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_15006, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 398)) ;
  {
  const GALGAS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_14698.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 409)).readProperty_mHandledOperatorFlags ().getter_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 409)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14698, var_rightExpression_15006, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 408)) ;
  }
  const GALGAS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_14698.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14698, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 420)), var_rightExpression_15006  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 416)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 134)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4974 ;
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-is-as.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4974, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 149)) ;
  const GALGAS_testDynamicClassInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_5020 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 159)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_4974.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 161)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_5257 = var_castType_5020 ;
      GALGAS_bool var_found_5288 = GALGAS_bool (kIsEqual, var_t_5257.objectCompare (var_expression_4974.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 165)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 165)).isValid ()) {
        uint32_t variant_5327 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 165)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 165)).uintValue () ;
        bool loop_5327 = true ;
        while (loop_5327) {
          loop_5327 = var_found_5288.operator_not (SOURCE_FILE ("expression-is-as.galgas", 166)).operator_and (extensionGetter_definition (var_t_5257, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 166)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 166)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 166)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 166)).isValid () ;
          if (loop_5327) {
            loop_5327 = var_found_5288.operator_not (SOURCE_FILE ("expression-is-as.galgas", 166)).operator_and (extensionGetter_definition (var_t_5257, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 166)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 166)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 166)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 166)).boolValue () ;
          }
          if (loop_5327 && (0 == variant_5327)) {
            loop_5327 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 165)) ;
          }
          if (loop_5327) {
            variant_5327 -- ;
            var_t_5257 = extensionGetter_definition (var_t_5257, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 167)).readProperty_mSuperType () ;
            var_found_5288 = GALGAS_bool (kIsEqual, var_t_5257.objectCompare (var_expression_4974.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_5288.operator_not (SOURCE_FILE ("expression-is-as.galgas", 170)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_testDynamicClassInExpressionAST temp_4 = this ;
          const GALGAS_testDynamicClassInExpressionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 172)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 172)).add_operation (extensionGetter_definition (var_expression_4974.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 172)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 172)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 172)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 171)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_4974.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_4974.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)) ;
  }
  const GALGAS_testDynamicClassInExpressionAST temp_8 = this ;
  const GALGAS_testDynamicClassInExpressionAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_4974, temp_9.readProperty_mTypeComparisonKind (), var_castType_5020  COMMA_SOURCE_FILE ("expression-is-as.galgas", 179)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 192)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_7256 ;
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-is-as.galgas", 210)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7256, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 207)) ;
  const GALGAS_castInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_7299 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 217)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_7256.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 219)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 219)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_7536 = var_type_7299 ;
      GALGAS_bool var_found_7563 = GALGAS_bool (kIsEqual, var_t_7536.objectCompare (var_expression_7256.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 223)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 223)).isValid ()) {
        uint32_t variant_7602 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 223)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 223)).uintValue () ;
        bool loop_7602 = true ;
        while (loop_7602) {
          loop_7602 = var_found_7563.operator_not (SOURCE_FILE ("expression-is-as.galgas", 224)).operator_and (extensionGetter_definition (var_t_7536, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 224)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 224)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 224)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 224)).isValid () ;
          if (loop_7602) {
            loop_7602 = var_found_7563.operator_not (SOURCE_FILE ("expression-is-as.galgas", 224)).operator_and (extensionGetter_definition (var_t_7536, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 224)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 224)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 224)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 224)).boolValue () ;
          }
          if (loop_7602 && (0 == variant_7602)) {
            loop_7602 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 223)) ;
          }
          if (loop_7602) {
            variant_7602 -- ;
            var_t_7536 = extensionGetter_definition (var_t_7536, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 225)).readProperty_mSuperType () ;
            var_found_7563 = GALGAS_bool (kIsEqual, var_t_7536.objectCompare (var_expression_7256.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_7563.operator_not (SOURCE_FILE ("expression-is-as.galgas", 228)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_castInExpressionAST temp_4 = this ;
          const GALGAS_castInExpressionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 230)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 230)).add_operation (extensionGetter_definition (var_expression_7256.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 231)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 230)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 231)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 229)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_7256.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_7256.readProperty_mLocation (), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_7256.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 236)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 235)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 236)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_expression_7256.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 239)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_castInExpressionAST temp_10 = this ;
      const GALGAS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type_7299, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_7256, temp_11.readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_castInExpressionAST temp_12 = this ;
    const GALGAS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type_7299, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_7256, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_7299  COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GALGAS_string var_typeNameRepresentation_9639 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 274)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 274)) ;
  GALGAS_string var_receiverExpression_9928 ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_9928, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 276)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 284)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mTypeComparisonKind ().enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression_9928, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 287)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 287)).add_operation (var_typeNameRepresentation_9639, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 288)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 289)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (NULL != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_9639, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 291)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 292)).add_operation (var_receiverExpression_9928, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 293)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 293)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression_9928, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 295)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 295)).add_operation (var_typeNameRepresentation_9639, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 296)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (var_typeNameRepresentation_9639, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 298)).add_operation (var_receiverExpression_9928, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 299)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 299)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 312)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 313)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 314)) ;
  GALGAS_string var_receiverExpression_11422 ;
  const GALGAS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_11422, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 316)) ;
  const GALGAS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 324)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 324)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 325)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 325)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 325)).add_operation (var_receiverExpression_11422, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 326)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 324)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 327)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_3 = this ;
  const GALGAS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 330)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 331)).add_operation (var_receiverExpression_11422, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 332)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 332)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 332)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 333)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 333)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 333)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 333)).add_operation (var_receiverExpression_11422, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 333)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 329)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_5 = this ;
  const GALGAS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 338)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 338)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 338)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 339)).add_operation (var_receiverExpression_11422, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 337)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 345)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 346)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 364)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 365)) ;
  GALGAS_string var_receiverExpression_13396 ;
  const GALGAS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_13396, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 367)) ;
  const GALGAS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GALGAS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)).add_operation (var_receiverExpression_13396, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 376)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 376)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 377)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 377)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 378)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 379)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 379)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3800 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 99)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3800 COMMA_SOURCE_FILE ("expression-option.galgas", 100)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_4112 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_4157 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_4202 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_4249 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_4300 ;
  const GALGAS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_4112, var_boolOptionMap_4157, var_uintOptionMap_4202, var_stringOptionMap_4249, var_stringListOptionMap_4300, inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 102)) ;
  const GALGAS_optionExpressionAST temp_2 = this ;
  GALGAS_bool var_found_4322 = var_boolOptionMap_4157.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 110)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_4417 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_4322.operator_not (SOURCE_FILE ("expression-option.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_optionExpressionAST temp_4 = this ;
      var_found_4322 = var_uintOptionMap_4202.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 113)) ;
      var_returnedType_4417 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_4322.operator_not (SOURCE_FILE ("expression-option.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_optionExpressionAST temp_6 = this ;
      var_found_4322 = var_stringOptionMap_4249.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 117)) ;
      var_returnedType_4417 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_4322.operator_not (SOURCE_FILE ("expression-option.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_optionExpressionAST temp_8 = this ;
      var_found_4322 = var_stringListOptionMap_4300.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 121)) ;
      var_returnedType_4417 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_4322.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_optionExpressionAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_optionExpressionAST temp_12 = this ;
          const GALGAS_optionExpressionAST temp_13 = this ;
          const GALGAS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_4417, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4112, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 126)) ;
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
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4112, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 133)) ;
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
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4112, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 140)) ;
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
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4112, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 147)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_optionExpressionAST temp_30 = this ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-option.galgas", 154)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringlist var_s_6459 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-option.galgas", 157)) ;
    cEnumerator_commandLineOptionMap enumerator_6486 (var_boolOptionMap_4157, kENUMERATION_UP) ;
    while (enumerator_6486.hasCurrentObject ()) {
      var_s_6459.addAssign_operation (enumerator_6486.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 159)) ;
      enumerator_6486.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_6554 (var_uintOptionMap_4202, kENUMERATION_UP) ;
    while (enumerator_6554.hasCurrentObject ()) {
      var_s_6459.addAssign_operation (enumerator_6554.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 162)) ;
      enumerator_6554.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_6622 (var_stringOptionMap_4249, kENUMERATION_UP) ;
    while (enumerator_6622.hasCurrentObject ()) {
      var_s_6459.addAssign_operation (enumerator_6622.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 165)) ;
      enumerator_6622.gotoNextObject () ;
    }
    const GALGAS_optionExpressionAST temp_32 = this ;
    const GALGAS_optionExpressionAST temp_33 = this ;
    const GALGAS_optionExpressionAST temp_34 = this ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_6459) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 168)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 168)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 168)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 168)), fixItArray35  COMMA_SOURCE_FILE ("expression-option.galgas", 167)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 192)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 193))  COMMA_SOURCE_FILE ("expression-option.galgas", 193)) ;
    }
  }
  const GALGAS_optionValueExpressionForGeneration temp_3 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_4 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 196)).add_operation (GALGAS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 196)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216))  COMMA_SOURCE_FILE ("expression-option.galgas", 216)) ;
    }
  }
  const GALGAS_optionCharExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 218)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 218)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 219)).add_operation (GALGAS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 219)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 238)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 239))  COMMA_SOURCE_FILE ("expression-option.galgas", 239)) ;
    }
  }
  const GALGAS_optionStringExpressionForGeneration temp_3 = this ;
  const GALGAS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 241)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 241)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 242)).add_operation (GALGAS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 242)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 253)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 254))  COMMA_SOURCE_FILE ("expression-option.galgas", 254)) ;
    }
  }
  const GALGAS_optionCommentExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 256)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 256)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 257)).add_operation (GALGAS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 257)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_2827 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 72)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2827 COMMA_SOURCE_FILE ("expression-lexique.galgas", 73)) ;
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GALGAS_bool joker_3133_7 ; // Joker input parameter
  GALGAS_terminalMap joker_3133_6 ; // Joker input parameter
  GALGAS_indexingListAST joker_3133_5 ; // Joker input parameter
  GALGAS_terminalDeclarationListAST joker_3133_4 ; // Joker input parameter
  GALGAS_lexicalAttributeListAST joker_3133_3 ; // Joker input parameter
  GALGAS_lexicalStyleListAST joker_3133_2 ; // Joker input parameter
  GALGAS_lexicalListDeclarationListAST joker_3133_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_3133_7, joker_3133_6, joker_3133_5, joker_3133_4, joker_3133_3, joker_3133_2, joker_3133_1, inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 75)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GALGAS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-lexique.galgas", 81)) ;
    }
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-lexique.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 85)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-lexique.galgas", 84)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-lexique.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 109))  COMMA_SOURCE_FILE ("expression-lexique.galgas", 109)) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 110)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 110)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 110)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 111)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 112)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 112)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_4521 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 123)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4521 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 124)) ;
  }
  GALGAS_lstring var_filewrapperPath_4845 ;
  GALGAS_bool var_isInternal_4879 ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GALGAS_lstringlist joker_4851_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_4851_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_4851_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_4851_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_4845, joker_4851_4, joker_4851_3, joker_4851_2, joker_4851_1, var_isInternal_4879, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 126)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_4879.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_4963 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 134)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 135)).objectCompare (var_filewrapperDeclarationLocation_4963.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 135)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_4963.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)) ;
        }
      }
    }
  }
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_4845.readProperty_string ()  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 140)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  cEnumerator_actualOutputExpressionList enumerator_5812 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_5812.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_5812.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)) ;
    enumerator_5812.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GALGAS_lstring var_usefulnessName_6466 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 168)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_6466 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 169)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_6815 ;
  GALGAS_bool var_isInternal_6842 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GALGAS_lstring joker_6756_4 ; // Joker input parameter
  GALGAS_lstringlist joker_6756_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_6756_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_6756_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_6756_4, joker_6756_3, joker_6756_2, joker_6756_1, var_filewrapperTemplateMap_6815, var_isInternal_6842, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 171)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_6842.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_6927 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 179)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)).objectCompare (var_filewrapperDeclarationLocation_6927.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_filewrapperTemplateInExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_6927.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 181)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 181)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 181)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_7369 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GALGAS_lstring joker_7371 ; // Joker input parameter
  var_filewrapperTemplateMap_6815.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_7369, joker_7371, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 185)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7463 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 188)).objectCompare (var_templateSignature_7369.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 188)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_15 = this ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (var_templateSignature_7369.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 191)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 191)).add_operation (temp_15.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 192)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 191)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 192)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)) ;
      var_effectiveParameterList_7463.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_7463 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 195)) ;
    const GALGAS_filewrapperTemplateInExpressionAST temp_17 = this ;
    cEnumerator_actualOutputExpressionList enumerator_7969 (temp_17.readProperty_mExpressions (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_8031 (var_templateSignature_7369, kENUMERATION_UP) ;
    while (enumerator_7969.hasCurrentObject () && enumerator_8031.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (kIsNotEqual, enumerator_8031.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_7969.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_8031.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_8031.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_8141 = GALGAS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
          TC_Array <C_FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_8141) ;
          inCompiler->emitSemanticError (enumerator_7969.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8141, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_8743 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_7969.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8031.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_8743, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 202)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_8031.current_mFormalArgumentType (HERE), var_exp_8743.readProperty_mResultType (), enumerator_7969.current_mEndOfExpressionLocation (HERE), var_exp_8743, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 211)) ;
      }
      var_effectiveParameterList_7463.addAssign_operation (var_exp_8743  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 212)) ;
      enumerator_7969.gotoNextObject () ;
      enumerator_8031.gotoNextObject () ;
    }
  }
  const GALGAS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_7463  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 216)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_9990 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 242)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_9990 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 243)) ;
  }
  GALGAS_stringlist var_directoryList_10197 ;
  GALGAS_string var_fileName_10220 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 247)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_filewrapperInExpressionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 248)) ;
      var_directoryList_10197.drop () ; // Release error dropped variable
      var_fileName_10220.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 249)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperInExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 250)) ;
        var_directoryList_10197.drop () ; // Release error dropped variable
        var_fileName_10220.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_10197 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 252)) ;
      {
      var_directoryList_10197.setter_popLast (var_fileName_10220, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_10812 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_10866 ;
  GALGAS_bool var_isInternal_10899 ;
  const GALGAS_filewrapperInExpressionAST temp_10 = this ;
  GALGAS_lstring joker_10760 ; // Joker input parameter
  GALGAS_lstringlist joker_10767 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_10872 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_10760, joker_10767, var_filewrapperFileMap_10812, var_filewrapperDirectoryMap_10866, joker_10872, var_isInternal_10899, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 256)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_10899.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_filewrapperInExpressionAST temp_12 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_10983 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 267)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 268)).objectCompare (var_filewrapperDeclarationLocation_10983.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 268)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_filewrapperInExpressionAST temp_15 = this ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_10983.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 269)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 269)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 269)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_11356 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_10866.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 274)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)).isValid ()) {
    uint32_t variant_11368 = var_filewrapperDirectoryMap_10866.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 274)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)).uintValue () ;
    bool loop_11368 = true ;
    while (loop_11368) {
      loop_11368 = GALGAS_bool (kIsStrictSup, var_directoryList_10197.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 275)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_11368) {
        loop_11368 = GALGAS_bool (kIsStrictSup, var_directoryList_10197.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 275)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_11368 && (0 == variant_11368)) {
        loop_11368 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 274)) ;
      }
      if (loop_11368) {
        variant_11368 -- ;
        GALGAS_string var_directoryName_11493 ;
        {
        var_directoryList_10197.setter_popFirst (var_directoryName_11493, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 276)) ;
        }
        var_builtPath_11356.plusAssign_operation(var_directoryName_11493.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 277)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_10866.getter_hasKey (var_directoryName_11493 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 278)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_uint joker_11758 ; // Joker input parameter
            var_filewrapperDirectoryMap_10866.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_11493, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 280))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 280)), var_filewrapperFileMap_10812, var_filewrapperDirectoryMap_10866, joker_11758, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 279)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_filewrapperInExpressionAST temp_18 = this ;
          const GALGAS_filewrapperInExpressionAST temp_19 = this ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_builtPath_11356, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)) ;
          var_filewrapperFileMap_10812.drop () ; // Release error dropped variable
          var_directoryList_10197 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 287)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_12025 ;
  GALGAS_bool var_isTextFile_12048 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_10812.getter_hasKey (var_fileName_10220 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string joker_12174 ; // Joker input parameter
      GALGAS_uint joker_12189 ; // Joker input parameter
      var_filewrapperFileMap_10812.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_10220, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)), joker_12174, var_isTextFile_12048, joker_12189, var_fileIndex_12025, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GALGAS_filewrapperInExpressionAST temp_22 = this ;
    const GALGAS_filewrapperInExpressionAST temp_23 = this ;
    TC_Array <C_FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_fileName_10220, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).add_operation (var_builtPath_11356, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)) ;
    var_fileIndex_12025.drop () ; // Release error dropped variable
    var_isTextFile_12048.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMapEntry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_12048.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  }else if (kBoolFalse == test_26) {
    temp_25 = extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 303))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 303)) ;
  }
  const GALGAS_filewrapperInExpressionAST temp_27 = this ;
  const GALGAS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12025, var_isTextFile_12048  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 300)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 328))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 328)) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 329)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 329)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 349))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 349)) ;
  GALGAS_stringlist var_parameterList_14568 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 350)) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14604 (temp_1.readProperty_mActualOutputParameterList (), kENUMERATION_UP) ;
  while (enumerator_14604.hasCurrentObject ()) {
    GALGAS_string var_parameter_14815 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14604.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14815, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 352)) ;
    var_parameterList_14568.addAssign_operation (var_parameter_14815  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 359)) ;
    enumerator_14604.gotoNextObject () ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 361)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 361)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 361)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 361)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 362)) ;
  cEnumerator_stringlist enumerator_15096 (var_parameterList_14568, kENUMERATION_UP) ;
  while (enumerator_15096.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_15096.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 364)) ;
    enumerator_15096.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 366)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 366)) ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 387))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 387)) ;
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
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 389)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 389)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 389)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 389)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 84)) ;
  const GALGAS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 85)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4390 ;
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-getter-call.galgas", 103)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4390, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_4434 = var_receiverExpression_4390.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_getterCallExpressionAST temp_2 = this ;
    GALGAS_methodKind var_kind_4626 ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4666 ;
    GALGAS_location var_unused_0_4675 ;
    GALGAS_bool var_hasCompilerArgument_4712 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_4757 ;
    GALGAS_methodQualifier var_unused_0_4766 ;
    GALGAS_string var_getterErrorMessage_4804 ;
    const bool optionalResult4579 = extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 111)).readProperty_mGetterMap ().optional_searchKey (temp_2.readProperty_mGetterName ().readProperty_string (), var_kind_4626, var_getterFormalArgumentTypeList_4666, var_unused_0_4675, var_hasCompilerArgument_4712, var_returnedType_4757, var_unused_0_4766, var_getterErrorMessage_4804) ;
    if (!optionalResult4579) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_getterErrorMessage_4804.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_getterCallExpressionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mGetterName ().readProperty_location (), var_getterErrorMessage_4804, fixItArray5  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 121)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_getterCallExpressionAST temp_7 = this ;
        GALGAS_bool test_8 = temp_7.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (kBoolTrue == test_8.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)).readProperty_mPropertyMap ().getter_hasKey (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
        }
        GALGAS_bool test_10 = test_8 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 125)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        }
        test_6 = test_10.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_getterCallExpressionAST temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray13  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)) ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_getterCallExpressionAST temp_15 = this ;
        test_14 = GALGAS_bool (kIsNotEqual, temp_15.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 129)).objectCompare (var_getterFormalArgumentTypeList_4666.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 129)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_getterCallExpressionAST temp_16 = this ;
          const GALGAS_getterCallExpressionAST temp_17 = this ;
          const GALGAS_getterCallExpressionAST temp_18 = this ;
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_17.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)).add_operation (extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)).add_operation (var_getterFormalArgumentTypeList_4666.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 131)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 131)).add_operation (temp_18.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 132)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 131)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 132)), fixItArray19  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_14) {
        GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5777 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 134)) ;
        const GALGAS_getterCallExpressionAST temp_20 = this ;
        cEnumerator_actualOutputExpressionList enumerator_5846 (temp_20.readProperty_mExpressions (), kENUMERATION_UP) ;
        cEnumerator_functionSignature enumerator_5918 (var_getterFormalArgumentTypeList_4666, kENUMERATION_UP) ;
        while (enumerator_5846.hasCurrentObject () && enumerator_5918.hasCurrentObject ()) {
          GALGAS_semanticExpressionForGeneration var_exp_6246 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5846.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5918.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_6246, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 137)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = GALGAS_bool (kIsNotEqual, enumerator_5918.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5846.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_22 ;
              const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, enumerator_5918.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_23) {
                temp_22 = enumerator_5918.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)) ;
              }else if (kBoolFalse == test_23) {
                temp_22 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_6345 = GALGAS_string ("!").add_operation (temp_22, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)) ;
              TC_Array <C_FixItDescription> fixItArray24 ;
              appendFixItActions (fixItArray24, kFixItReplace, var_s_6345) ;
              inCompiler->emitSemanticError (enumerator_5846.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_6345, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)), fixItArray24  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_5918.current_mFormalArgumentType (HERE), var_exp_6246.readProperty_mResultType (), enumerator_5846.current_mEndOfExpressionLocation (HERE), var_exp_6246, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 150)) ;
          }
          var_constructorEffectiveParameterList_5777.addAssign_operation (var_exp_6246  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 151)) ;
          enumerator_5846.gotoNextObject () ;
          enumerator_5918.gotoNextObject () ;
        }
        const GALGAS_getterCallExpressionAST temp_25 = this ;
        const GALGAS_getterCallExpressionAST temp_26 = this ;
        outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_4757, temp_25.readProperty_mGetterName ().readProperty_location (), var_kind_4626, var_receiverExpression_4390, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 158)), temp_26.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_5777, var_hasCompilerArgument_4712  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 153)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_getterCallExpressionAST temp_28 = this ;
      test_27 = GALGAS_bool (kIsEqual, temp_28.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 165)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_getterCallExpressionAST temp_29 = this ;
        GALGAS_AccessControl var_accessControl_7237 ;
        GALGAS_bool var_unused_0_7240 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_7258 ;
        const bool optionalResult7193 = extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 165)).readProperty_mPropertyMap ().optional_searchKey (temp_29.readProperty_mGetterName ().readProperty_string (), var_accessControl_7237, var_unused_0_7240, var_propertyType_7258) ;
        if (!optionalResult7193) {
          test_27 = kBoolFalse ;
        }
        if (kBoolTrue == test_27) {
          const GALGAS_getterCallExpressionAST temp_30 = this ;
          extensionMethod_checkGetAccess (var_accessControl_7237, constinArgument_inAnalysisContext.readProperty_selfType (), temp_30.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 166)) ;
          const GALGAS_getterCallExpressionAST temp_31 = this ;
          const GALGAS_getterCallExpressionAST temp_32 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_7258, temp_31.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4390, temp_32.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 170)) ;
          enumGalgasBool test_33 = kBoolTrue ;
          if (kBoolTrue == test_33) {
            const GALGAS_getterCallExpressionAST temp_34 = this ;
            test_33 = temp_34.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (kBoolTrue == test_33) {
              const GALGAS_getterCallExpressionAST temp_35 = this ;
              TC_Array <C_FixItDescription> fixItArray36 ;
              inCompiler->emitSemanticError (temp_35.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray36  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 177)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_27) {
      GALGAS_uint var_matchingReaderCount_8005 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 182)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("expression-getter-call.galgas", 182)))).boolEnum () ;
        if (kBoolTrue == test_37) {
          GALGAS_functionSignature var_getterFormalArgumentTypeList_8134 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 183)) ;
          GALGAS_bool var_hasCompilerArgument_8169 = GALGAS_bool (true) ;
          GALGAS_unifiedTypeMapEntry var_returnedType_8199 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-getter-call.galgas", 185)) ;
          GALGAS_methodKind var_kind_8242 = GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 186)) ;
          GALGAS_stringlist var_fieldList_8307 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 187)) ;
          cEnumerator_typedPropertyList enumerator_8357 (extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 188)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
          while (enumerator_8357.hasCurrentObject ()) {
            GALGAS_unifiedTypeMapEntry var_propertyType_8441 = extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (extensionGetter_definition (enumerator_8357.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)).readProperty_mTypeName ().readProperty_string (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)) ;
            GALGAS_getterMap var_aMap_8546 = extensionGetter_definition (var_propertyType_8441, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).readProperty_mGetterMap () ;
            const GALGAS_getterCallExpressionAST temp_38 = this ;
            const cMapElement_getterMap * objectArray_8598 = (const cMapElement_getterMap *) var_aMap_8546.readAccessForWithInstruction (temp_38.readProperty_mGetterName ().readProperty_string ()) ;
            if (NULL != objectArray_8598) {
                macroValidSharedObject (objectArray_8598, cMapElement_getterMap) ;
              enumGalgasBool test_39 = kBoolTrue ;
              if (kBoolTrue == test_39) {
                test_39 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_propertyType_8441, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 192)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_8357.current_mPropertyName (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_39) {
                  var_matchingReaderCount_8005.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 193)) ;
                  var_getterFormalArgumentTypeList_8134 = objectArray_8598->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_8169 = objectArray_8598->mProperty_mHasCompilerArgument ;
                  var_returnedType_8199 = objectArray_8598->mProperty_mReturnedType ;
                  const GALGAS_getterCallExpressionAST temp_40 = this ;
                  var_receiverExpression_4390 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_returnedType_8199, temp_40.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4390, enumerator_8357.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 197)) ;
                  var_kind_8242 = objectArray_8598->mProperty_mKind ;
                  enumGalgasBool test_41 = kBoolTrue ;
                  if (kBoolTrue == test_41) {
                    test_41 = GALGAS_bool (kIsNotEqual, objectArray_8598->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_41) {
                      const GALGAS_getterCallExpressionAST temp_42 = this ;
                      TC_Array <C_FixItDescription> fixItArray43 ;
                      inCompiler->emitSemanticError (temp_42.readProperty_mGetterName ().readProperty_location (), objectArray_8598->mProperty_mErrorMessage, fixItArray43  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)) ;
                    }
                  }
                }
              }
            }
            enumerator_8357.gotoNextObject () ;
          }
          enumGalgasBool test_44 = kBoolTrue ;
          if (kBoolTrue == test_44) {
            test_44 = GALGAS_bool (kIsEqual, var_matchingReaderCount_8005.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_44) {
              const GALGAS_getterCallExpressionAST temp_45 = this ;
              const GALGAS_getterCallExpressionAST temp_46 = this ;
              TC_Array <C_FixItDescription> fixItArray47 ;
              inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)).add_operation (temp_46.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)), fixItArray47  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)) ;
              var_getterFormalArgumentTypeList_8134.drop () ; // Release error dropped variable
              var_hasCompilerArgument_8169.drop () ; // Release error dropped variable
              var_returnedType_8199.drop () ; // Release error dropped variable
              var_kind_8242.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_44) {
            enumGalgasBool test_48 = kBoolTrue ;
            if (kBoolTrue == test_48) {
              test_48 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_8005.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_48) {
                GALGAS_string var_s_9716 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_9741 (var_fieldList_8307, kENUMERATION_UP) ;
                while (enumerator_9741.hasCurrentObject ()) {
                  var_s_9716.plusAssign_operation(enumerator_9741.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 218)) ;
                  if (enumerator_9741.hasNextObject ()) {
                    var_s_9716.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 219)) ;
                  }
                  enumerator_9741.gotoNextObject () ;
                }
                const GALGAS_getterCallExpressionAST temp_49 = this ;
                const GALGAS_getterCallExpressionAST temp_50 = this ;
                TC_Array <C_FixItDescription> fixItArray51 ;
                inCompiler->emitSemanticError (temp_49.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (temp_50.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (var_s_9716, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 223)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 223)), fixItArray51  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 221)) ;
                var_getterFormalArgumentTypeList_8134.drop () ; // Release error dropped variable
                var_hasCompilerArgument_8169.drop () ; // Release error dropped variable
                var_returnedType_8199.drop () ; // Release error dropped variable
                var_kind_8242.drop () ; // Release error dropped variable
              }
            }
          }
          enumGalgasBool test_52 = kBoolTrue ;
          if (kBoolTrue == test_52) {
            const GALGAS_getterCallExpressionAST temp_53 = this ;
            test_52 = GALGAS_bool (kIsNotEqual, temp_53.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 227)).objectCompare (var_getterFormalArgumentTypeList_8134.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 227)))).boolEnum () ;
            if (kBoolTrue == test_52) {
              const GALGAS_getterCallExpressionAST temp_54 = this ;
              const GALGAS_getterCallExpressionAST temp_55 = this ;
              const GALGAS_getterCallExpressionAST temp_56 = this ;
              TC_Array <C_FixItDescription> fixItArray57 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).add_operation (extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).add_operation (var_getterFormalArgumentTypeList_8134.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 229)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)).add_operation (temp_56.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 230)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 230)), fixItArray57  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_52) {
            GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10704 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 232)) ;
            const GALGAS_getterCallExpressionAST temp_58 = this ;
            cEnumerator_actualOutputExpressionList enumerator_10775 (temp_58.readProperty_mExpressions (), kENUMERATION_UP) ;
            cEnumerator_functionSignature enumerator_10849 (var_getterFormalArgumentTypeList_8134, kENUMERATION_UP) ;
            while (enumerator_10775.hasCurrentObject () && enumerator_10849.hasCurrentObject ()) {
              GALGAS_semanticExpressionForGeneration var_exp_11193 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10775.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10849.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11193, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 235)) ;
              enumGalgasBool test_59 = kBoolTrue ;
              if (kBoolTrue == test_59) {
                test_59 = GALGAS_bool (kIsNotEqual, enumerator_10849.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10775.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_59) {
                  GALGAS_string temp_60 ;
                  const enumGalgasBool test_61 = GALGAS_bool (kIsNotEqual, enumerator_10849.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_61) {
                    temp_60 = enumerator_10849.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 245)) ;
                  }else if (kBoolFalse == test_61) {
                    temp_60 = GALGAS_string::makeEmptyString () ;
                  }
                  GALGAS_string var_s_11298 = GALGAS_string ("!").add_operation (temp_60, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 245)) ;
                  TC_Array <C_FixItDescription> fixItArray62 ;
                  appendFixItActions (fixItArray62, kFixItReplace, var_s_11298) ;
                  inCompiler->emitSemanticError (enumerator_10775.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11298, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)), fixItArray62  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10849.current_mFormalArgumentType (HERE), var_exp_11193.readProperty_mResultType (), enumerator_10775.current_mEndOfExpressionLocation (HERE), var_exp_11193, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)) ;
              }
              var_constructorEffectiveParameterList_10704.addAssign_operation (var_exp_11193  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 249)) ;
              enumerator_10775.gotoNextObject () ;
              enumerator_10849.gotoNextObject () ;
            }
            const GALGAS_getterCallExpressionAST temp_63 = this ;
            const GALGAS_getterCallExpressionAST temp_64 = this ;
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_8199, temp_63.readProperty_mGetterName ().readProperty_location (), var_kind_8242, var_receiverExpression_4390, var_fieldList_8307, temp_64.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_10704, var_hasCompilerArgument_8169  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 251)) ;
          }
        }
      }
      if (kBoolFalse == test_37) {
        enumGalgasBool test_65 = kBoolTrue ;
        if (kBoolTrue == test_65) {
          test_65 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 262)).readProperty_mGetterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 262)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_65) {
            const GALGAS_getterCallExpressionAST temp_66 = this ;
            TC_Array <C_FixItDescription> fixItArray67 ;
            inCompiler->emitSemanticError (temp_66.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)), fixItArray67  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 263)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_65) {
          const GALGAS_getterCallExpressionAST temp_68 = this ;
          const GALGAS_getterCallExpressionAST temp_69 = this ;
          TC_Array <C_FixItDescription> fixItArray70 ;
          appendFixItActions (fixItArray70, kFixItReplace, extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 270)).readProperty_mGetterMap ().getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 270))) ;
          inCompiler->emitSemanticError (temp_68.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4434, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 268)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 268)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 268)).add_operation (temp_69.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 268)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 268)), fixItArray70  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 267)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 298)) ;
  GALGAS_string var_receiverCppName_13759 ;
  const GALGAS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_13759, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 300)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_13828 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 308)) ;
  const GALGAS_getterCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_13852 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_13852.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_14055 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_13852.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_14055, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 310)) ;
    var_getterArgumentCppNameList_13828.addAssign_operation (var_argumentCppName_14055  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 317)) ;
    enumerator_13852.gotoNextObject () ;
  }
  const GALGAS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_getterCallExpressionForGeneration temp_4 = this ;
      GALGAS_unifiedTypeMapEntry var_baseType_14229 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_14229, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)) ;
      GALGAS_bool var_searching_14341 = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("expression-getter-call.galgas", 325)).isValid ()) {
        uint32_t variant_14357 = GALGAS_uint::constructor_max (SOURCE_FILE ("expression-getter-call.galgas", 325)).uintValue () ;
        bool loop_14357 = true ;
        while (loop_14357) {
          loop_14357 = var_searching_14341.isValid () ;
          if (loop_14357) {
            loop_14357 = var_searching_14341.boolValue () ;
          }
          if (loop_14357 && (0 == variant_14357)) {
            loop_14357 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 325)) ;
          }
          if (loop_14357) {
            variant_14357 -- ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_14229, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 326)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 326)).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  const GALGAS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_14229, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)).readProperty_mGetterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_baseType_14229 = extensionGetter_definition (var_baseType_14229, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).readProperty_mSuperType () ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_searching_14341 = GALGAS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              var_searching_14341 = GALGAS_bool (false) ;
            }
          }
        }
      }
      const GALGAS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_14229, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_13759 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 338)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 338)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_getterCallExpressionForGeneration temp_11 = this ;
          const GALGAS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)).add_operation (var_receiverCppName_13759, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)) ;
        }
      }
      if (kBoolFalse == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 342)) ;
        const GALGAS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)).add_operation (var_receiverCppName_13759, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_13759 ;
      const GALGAS_getterCallExpressionForGeneration temp_15 = this ;
      cEnumerator_stringlist enumerator_15541 (temp_15.readProperty_mFieldList (), kENUMERATION_UP) ;
      while (enumerator_15541.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".readProperty_").add_operation (enumerator_15541.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 348)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 348)) ;
        enumerator_15541.gotoNextObject () ;
      }
      const GALGAS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 350)) ;
      const GALGAS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_15826 (var_getterArgumentCppNameList_13828, kENUMERATION_UP) ;
  while (enumerator_15826.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_15826.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 354)) ;
    if (enumerator_15826.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 355)) ;
    }
    enumerator_15826.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsEqual, var_getterArgumentCppNameList_13828.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 357)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 359)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 359)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 360)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 360)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 363)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 363)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 364)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 364)) ;
      }
    }
    if (kBoolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 366)) ;
    }
  }
  const GALGAS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 368)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 368)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_constructorExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_constructorExpressionAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_5616 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_5616, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 166)) ;
      }
    }
  }
  const GALGAS_constructorExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 168)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
                                           C_Compiler * inCompiler
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
      outArgument_outConstructorType = extensionGetter_searchKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 191)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 193)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor.galgas", 194)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_constructorMap var_constructorMap_6913 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 199)).readProperty_mConstructorMap () ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_7049 ;
    const cMapElement_constructorMap * objectArray_7058 = (const cMapElement_constructorMap *) var_constructorMap_6913.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (NULL != objectArray_7058) {
        macroValidSharedObject (objectArray_7058, cMapElement_constructorMap) ;
      var_constructorFormalArgumentTypeList_7049 = objectArray_7058->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_7058->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_7058->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_constructorMap_6913.getter_count (SOURCE_FILE ("expression-constructor.galgas", 207)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 209)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 209)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 209)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor.galgas", 208)) ;
          var_constructorFormalArgumentTypeList_7049.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, var_constructorMap_6913.getter_keyList (SOURCE_FILE ("expression-constructor.galgas", 215))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 212)) ;
        var_constructorFormalArgumentTypeList_7049.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 219)).objectCompare (var_constructorFormalArgumentTypeList_7049.getter_length (SOURCE_FILE ("expression-constructor.galgas", 219)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (var_constructorFormalArgumentTypeList_7049.getter_length (SOURCE_FILE ("expression-constructor.galgas", 222)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 222)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 223)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 222)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 223)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 225)) ;
    cEnumerator_actualOutputExpressionList enumerator_8476 (constinArgument_inInitializerEffectiveParameterExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_8571 (var_constructorFormalArgumentTypeList_7049, kENUMERATION_UP) ;
    while (enumerator_8476.hasCurrentObject () && enumerator_8571.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_8888 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8476.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8571.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_8888, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 228)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_8571.current_mFormalArgumentType (HERE), var_exp_8888.readProperty_mResultType (), enumerator_8476.current_mEndOfExpressionLocation (HERE), var_exp_8888, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 237)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_8888  COMMA_SOURCE_FILE ("expression-constructor.galgas", 238)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, enumerator_8571.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8476.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string temp_9 ;
          const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_8571.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            temp_9 = enumerator_8571.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 240)) ;
          }else if (kBoolFalse == test_10) {
            temp_9 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_9152 = GALGAS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 240)) ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_s_9152) ;
          inCompiler->emitSemanticError (enumerator_8476.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9152, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 241)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 241)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 241)) ;
        }
      }
      enumerator_8476.gotoNextObject () ;
      enumerator_8571.gotoNextObject () ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    GALGAS_bool test_13 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (kBoolTrue == test_13.boolEnum ()) {
      test_13 = GALGAS_bool (kIsEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 246)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    test_12 = test_13.boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_stringset temp_14 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("expression-constructor.galgas", 247)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 247)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyMap")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 247)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptySortedList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 247)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyDict")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 247)) ;
      GALGAS_stringset var_oldInitializers_9521 = temp_14 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_oldInitializers_9521.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-constructor.galgas", 248)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string (" {}")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GALGAS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray16  COMMA_SOURCE_FILE ("expression-constructor.galgas", 249)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedType_10726 ;
  GALGAS_unifiedTypeMapEntry var_constructorType_10772 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10852 ;
  GALGAS_bool var_hasCompilerArgument_10887 ;
  {
  const GALGAS_constructorExpressionAST temp_0 = this ;
  const GALGAS_constructorExpressionAST temp_1 = this ;
  const GALGAS_constructorExpressionAST temp_2 = this ;
  const GALGAS_constructorExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mConstructorName (), temp_2.readProperty_mExpressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_10726, var_constructorType_10772, var_constructorEffectiveParameterList_10852, var_hasCompilerArgument_10887, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 267)) ;
  }
  const GALGAS_constructorExpressionAST temp_4 = this ;
  GALGAS_lstring var_constructorTypeUsefulnessName_10927 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (extensionGetter_definition (var_constructorType_10772, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 283)).readProperty_mTypeName ().readProperty_string (), temp_4.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 283)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_10927 COMMA_SOURCE_FILE ("expression-constructor.galgas", 284)) ;
  }
  const GALGAS_constructorExpressionAST temp_5 = this ;
  GALGAS_lstring var_returnedTypeUsefulnessName_11162 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (extensionGetter_definition (var_returnedType_10726, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 285)).readProperty_mTypeName ().readProperty_string (), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 285)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_11162 COMMA_SOURCE_FILE ("expression-constructor.galgas", 286)) ;
  }
  const GALGAS_constructorExpressionAST temp_6 = this ;
  const GALGAS_constructorExpressionAST temp_7 = this ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_10726, temp_6.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10772, temp_7.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_10852, var_hasCompilerArgument_10887  COMMA_SOURCE_FILE ("expression-constructor.galgas", 288)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_defaultConstructorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_defaultConstructorExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_defaultConstructorExpressionAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_11922 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_11922, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 304)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_defaultConstructorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_12484 = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_defaultConstructorExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_defaultConstructorExpressionAST temp_2 = this ;
      var_type_12484 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 321)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_type_12484.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 323)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_defaultConstructorExpressionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 324)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_type_12484, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 327)).readProperty_mIsConcrete ().operator_not (SOURCE_FILE ("expression-constructor.galgas", 327)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_defaultConstructorExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an abstract class does not support the default constructor"), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor.galgas", 328)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_type_12484, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 329)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_defaultConstructorExpressionAST temp_10 = this ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this class does not support the default constructor"), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 330)) ;
        }
      }
    }
    const GALGAS_defaultConstructorExpressionAST temp_12 = this ;
    GALGAS_lstring var_usefulnessName_13044 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (extensionGetter_definition (var_type_12484, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 333)).readProperty_mTypeName ().readProperty_string (), temp_12.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 333)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_13044 COMMA_SOURCE_FILE ("expression-constructor.galgas", 334)) ;
    }
    const GALGAS_defaultConstructorExpressionAST temp_13 = this ;
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type_12484, temp_13.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 336)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_constructorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 363)) ;
  GALGAS_stringlist var_parameterList_14355 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 364)) ;
  const GALGAS_constructorExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14379 (temp_1.readProperty_mEffectiveParameterList (), kENUMERATION_UP) ;
  while (enumerator_14379.hasCurrentObject ()) {
    GALGAS_string var_parameter_14596 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14379.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14596, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 366)) ;
    var_parameterList_14355.addAssign_operation (var_parameter_14596  COMMA_SOURCE_FILE ("expression-constructor.galgas", 373)) ;
    enumerator_14379.gotoNextObject () ;
  }
  const GALGAS_constructorExpressionForGeneration temp_2 = this ;
  const GALGAS_constructorExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mConstructorType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 375)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 375)).add_operation (temp_3.readProperty_mConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 376)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 376)) ;
  cEnumerator_stringlist enumerator_14854 (var_parameterList_14355, kENUMERATION_UP) ;
  while (enumerator_14854.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_14854.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 379)) ;
    if (enumerator_14854.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 380)) ;
    }
    enumerator_14854.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_14972 = GALGAS_bool (kIsStrictSup, var_parameterList_14355.getter_length (SOURCE_FILE ("expression-constructor.galgas", 382)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_constructorExpressionForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needsComma_14972.boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 385)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 387)) COMMA_SOURCE_FILE ("expression-constructor.galgas", 387)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 388)) ;
      var_needsComma_14972 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_needsComma_14972.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_constructorExpressionForGeneration temp_8 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 392)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 392)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_constructorExpressionForGeneration temp_9 = this ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 394)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 394)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_defaultConstructorExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_defaultConstructorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 412)) ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_1 = this ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_2 = this ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 414)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 414)).add_operation (extensionGetter_definition (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 416)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 415)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 416)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 417)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 417)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  cEnumerator_actualOutputExpressionList enumerator_2395 (temp_0.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_2395.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2395.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 59)) ;
    enumerator_2395.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3043 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 74)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3043 COMMA_SOURCE_FILE ("expression-function-call.galgas", 75)) ;
  }
  GALGAS_functionSignature var_functionSignature_3347 ;
  GALGAS_unifiedTypeMapEntry var_resultType_3388 ;
  GALGAS_bool var_isInternal_3414 ;
  const GALGAS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_3347, var_resultType_3388, var_isInternal_3414, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 77)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3414.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionCallExpressionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_3491 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 85)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_functionCallExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 86)).objectCompare (var_procDeclarationLocation_3491.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 86)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_functionCallExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3491.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 87)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 87)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 87)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_functionCallExpressionAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_3347.getter_length (SOURCE_FILE ("expression-function-call.galgas", 91)).objectCompare (temp_9.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-function-call.galgas", 91)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_functionCallExpressionAST temp_10 = this ;
      const GALGAS_functionCallExpressionAST temp_11 = this ;
      const GALGAS_functionCallExpressionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 93)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 93)).add_operation (var_functionSignature_3347.getter_length (SOURCE_FILE ("expression-function-call.galgas", 93)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 93)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 93)).add_operation (temp_12.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-function-call.galgas", 94)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 92)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_4230 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-function-call.galgas", 98)) ;
    const GALGAS_functionCallExpressionAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_4319 (var_functionSignature_3347, kENUMERATION_UP) ;
    cEnumerator_actualOutputExpressionList enumerator_4396 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_4319.hasCurrentObject () && enumerator_4396.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_4707 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4396.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4319.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4707, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 100)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_4319.current_mFormalArgumentType (HERE), var_expression_4707.readProperty_mResultType (), enumerator_4396.current_mEndOfExpressionLocation (HERE), var_expression_4707, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 109)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_4319.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_4396.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_4319.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_4319.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 116)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_4974 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 116)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_4974) ;
          inCompiler->emitSemanticError (enumerator_4396.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_4974, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 117)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 117)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 117)) ;
        }
      }
      var_semanticExpressionListForGeneration_4230.addAssign_operation (var_expression_4707  COMMA_SOURCE_FILE ("expression-function-call.galgas", 120)) ;
      enumerator_4319.gotoNextObject () ;
      enumerator_4396.gotoNextObject () ;
    }
    const GALGAS_functionCallExpressionAST temp_19 = this ;
    const GALGAS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_3388, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_4230  COMMA_SOURCE_FILE ("expression-function-call.galgas", 122)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 148)) ;
  const GALGAS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 150))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 150)) ;
  GALGAS_stringlist var_parameterList_6448 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-function-call.galgas", 152)) ;
  const GALGAS_functionCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_6484 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_6484.hasCurrentObject ()) {
    GALGAS_string var_parameter_6651 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_6484.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_6651, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 154)) ;
    var_parameterList_6448.addAssign_operation (var_parameter_6651  COMMA_SOURCE_FILE ("expression-function-call.galgas", 155)) ;
    enumerator_6484.gotoNextObject () ;
  }
  const GALGAS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 157)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 157)) ;
  cEnumerator_stringlist enumerator_6794 (var_parameterList_6448, kENUMERATION_UP) ;
  while (enumerator_6794.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_6794.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 159)) ;
    enumerator_6794.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 161)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 161)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 162)) ;
  const GALGAS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 163)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 163)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_2072 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_2072, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 50)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_2640 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 64)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2640 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 65)) ;
  }
  const GALGAS_literalTypeInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_2796 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 67)) ;
  const GALGAS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 69))  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 69)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_2796  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 68)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 92)) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (extensionGetter_definition (temp_1.readProperty_mLiteralType (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 94)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-literal-type.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 93)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 94)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_collectionValueAST temp_0 = this ;
  cEnumerator_collectionValueElementList enumerator_5915 (temp_0.readProperty_mElementList (), kENUMERATION_UP) ;
  while (enumerator_5915.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractCollectionValueElement *) enumerator_5915.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 155)) ;
    enumerator_5915.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_6560 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_collectionValueAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_6560 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_collectionValueAST temp_2 = this ;
    var_targetType_6560 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 174)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_targetType_6560.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-collection-value.galgas", 177)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_collectionValueAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 178)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_6560, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 179)).readProperty_mSupportCollectionValue ().operator_not (SOURCE_FILE ("expression-collection-value.galgas", 179)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_collectionValueAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (extensionGetter_definition (var_targetType_6560, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 180)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 180)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 180)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 180)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_collectionValueAST temp_9 = this ;
      GALGAS_lstring var_usefulnessName_7021 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (extensionGetter_definition (var_targetType_6560, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 182)).readProperty_mTypeName ().readProperty_string (), temp_9.readProperty_mEndOfCollectionValue ()  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 182)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7021 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 183)) ;
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_collectionValueAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mElementList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 184)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_collectionValueAST temp_12 = this ;
          outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_6560, temp_12.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 185)) ;
        }
      }
      if (kBoolFalse == test_10) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_7494 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 190)) ;
        const GALGAS_collectionValueAST temp_13 = this ;
        cEnumerator_collectionValueElementList enumerator_7519 (temp_13.readProperty_mElementList (), kENUMERATION_UP) ;
        while (enumerator_7519.hasCurrentObject ()) {
          callExtensionMethod_analyze ((cPtr_abstractCollectionValueElement *) enumerator_7519.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_targetType_6560, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_7494, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 192)) ;
          enumerator_7519.gotoNextObject () ;
        }
        const GALGAS_collectionValueAST temp_14 = this ;
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_6560, temp_14.readProperty_mEndOfCollectionValue (), var_collectionValueElementListForGeneration_7494  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 202)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionCollectionValue temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 219)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionListCollectionValue temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 225)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::method_analyze (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inElementType,
                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                     GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_10127 ;
  const GALGAS_expressionCollectionValue temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10127, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 250)) ;
  {
  const GALGAS_expressionCollectionValue temp_1 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_10127.readProperty_mResultType (), temp_1.readProperty_mExpressionLocation (), var_expression_10127, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 260)) ;
  }
  const GALGAS_expressionCollectionValue temp_2 = this ;
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (temp_2.readProperty_mExpressionLocation (), var_expression_10127  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 262))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 262)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::method_analyze (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GALGAS_unifiedTypeMapEntry constinArgument_inElementType,
                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                         GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionSignature var_formalParameterTypeList_11022 = extensionGetter_definition (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 275)).readProperty_mAddAssignOperatorArguments () ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_11158 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_expressionListCollectionValue temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_11022.getter_length (SOURCE_FILE ("expression-collection-value.galgas", 277)).objectCompare (temp_1.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 277)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_expressionListCollectionValue temp_2 = this ;
      const GALGAS_expressionListCollectionValue temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpressionLocation (), GALGAS_string ("element of of '@").add_operation (extensionGetter_definition (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)).add_operation (var_formalParameterTypeList_11022.getter_length (SOURCE_FILE ("expression-collection-value.galgas", 279)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 279)).add_operation (temp_3.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 280)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 279)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 280)), fixItArray4  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)) ;
      var_semanticExpressionListForGeneration_11158.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_11158 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 282)) ;
    const GALGAS_expressionListCollectionValue temp_5 = this ;
    cEnumerator_actualOutputExpressionList enumerator_11657 (temp_5.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_11697 (var_formalParameterTypeList_11022, kENUMERATION_UP) ;
    while (enumerator_11657.hasCurrentObject () && enumerator_11697.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_12015 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11657.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11697.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_12015, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 284)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_11697.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11657.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_11697.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_11697.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 294)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12119 = GALGAS_string ("!").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 294)) ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_12119) ;
          inCompiler->emitSemanticError (enumerator_11657.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12119, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 295)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 295)), fixItArray9  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 295)) ;
        }
      }
      {
      const GALGAS_expressionListCollectionValue temp_10 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_11697.current_mFormalArgumentType (HERE), var_exp_12015.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_exp_12015, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 299)) ;
      }
      var_semanticExpressionListForGeneration_11158.addAssign_operation (var_exp_12015  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 300)) ;
      enumerator_11657.gotoNextObject () ;
      enumerator_11697.gotoNextObject () ;
    }
    const GALGAS_expressionListCollectionValue temp_11 = this ;
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (temp_11.readProperty_mEndOfExpressionLocation (), var_semanticExpressionListForGeneration_11158  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 302))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 302)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValueForGeneration::method_generateCollectionElementCode (const GALGAS_unifiedTypeMapEntry /* constinArgument_inTargetType */,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        const GALGAS_string constinArgument_inCppTargetVar,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_14751 ;
  const GALGAS_expressionCollectionValueForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_14751, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 347)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_14751, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 355)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 356)) ;
  const GALGAS_expressionCollectionValueForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 357)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 357)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 358)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 358)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionForGeneration::method_generateCollectionElementCode (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_string constinArgument_inCppTargetVar,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_parameterList_15780 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 377)) ;
  const GALGAS_expressionListCollectionForGeneration temp_0 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15816 (temp_0.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_15816.hasCurrentObject ()) {
    GALGAS_string var_parameter_16024 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15816.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_16024, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 379)) ;
    var_parameterList_15780.addAssign_operation (var_parameter_16024  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 386)) ;
    enumerator_15816.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 389)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 391)) ;
  cEnumerator_stringlist enumerator_16215 (var_parameterList_15780, kENUMERATION_UP) ;
  while (enumerator_16215.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16215.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 393)) ;
    if (enumerator_16215.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 394)) ;
    }
    enumerator_16215.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 396)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("expression-collection-value.galgas", 396)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 397)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 398)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 398)) ;
      }
    }
  }
  const GALGAS_expressionListCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 400)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 400)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 418)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 420)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 421)) ;
  const GALGAS_expressionCollectionForGeneration temp_1 = this ;
  const GALGAS_expressionCollectionForGeneration temp_2 = this ;
  const GALGAS_expressionCollectionForGeneration temp_3 = this ;
  const GALGAS_expressionCollectionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 423)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 423)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 423)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 423)).add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)).add_operation (extensionGetter_definition (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-collection-value.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)).add_operation (extensionGetter_sourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 423)) ;
  const GALGAS_expressionCollectionForGeneration temp_5 = this ;
  cEnumerator_collectionValueElementListForGeneration enumerator_17849 (temp_5.readProperty_mElementList (), kENUMERATION_UP) ;
  while (enumerator_17849.hasCurrentObject ()) {
    const GALGAS_expressionCollectionForGeneration temp_6 = this ;
    callExtensionMethod_generateCollectionElementCode ((cPtr_abstractCollectionValueElementForGeneration *) enumerator_17849.current_mElement (HERE).ptr (), temp_6.readProperty_mResultType (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 427)) ;
    enumerator_17849.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_2570 ;
    GALGAS_bool var_unused_0_2574 ;
    GALGAS_bool var_unused_1_2574 ;
    const bool optionalResult2550 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_2570, var_unused_0_2574, var_unused_1_2574) ;
    if (!optionalResult2550) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_string var_selfCppName_2608 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
      const GALGAS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GALGAS_selfInExpressionForGeneration::constructor_new (var_selfType_2570, temp_1.readProperty_mSelfLocation (), var_selfCppName_2608  COMMA_SOURCE_FILE ("expression-self.galgas", 63)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfInExpressionAST temp_2 = this ;
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-self.galgas", 65)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 86)) ;
  const GALGAS_selfInExpressionForGeneration temp_0 = this ;
  const GALGAS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 87)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 87)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 87)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 87)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 87)) ;
  {
  const GALGAS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-self.galgas", 88)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3705 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-property-access.galgas", 91)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3705, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 88)) ;
  GALGAS_unifiedTypeMapEntry var_expressionType_3788 = var_expression_3705.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_expressionType_3788, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 99)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 99)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 99)).operator_and (extensionGetter_definition (var_expressionType_3788, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 99)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 99)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 99)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 99)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structPropertyAccessExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray3  COMMA_SOURCE_FILE ("expression-property-access.galgas", 100)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_4071 = extensionGetter_definition (var_expressionType_3788, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 102)).readProperty_mPropertyMap () ;
  GALGAS_AccessControl var_accessControl_4178 ;
  GALGAS_unifiedTypeMapEntry var_type_4191 ;
  const GALGAS_structPropertyAccessExpressionAST temp_4 = this ;
  GALGAS_bool joker_4180 ; // Joker input parameter
  var_propertyMap_4071.method_searchKey (temp_4.readProperty_mPropertyName (), var_accessControl_4178, joker_4180, var_type_4191, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 103)) ;
  const GALGAS_structPropertyAccessExpressionAST temp_5 = this ;
  extensionMethod_checkGetAccess (var_accessControl_4178, constinArgument_inAnalysisContext.readProperty_selfType (), temp_5.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 104)) ;
  const GALGAS_structPropertyAccessExpressionAST temp_6 = this ;
  const GALGAS_structPropertyAccessExpressionAST temp_7 = this ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_4191, temp_6.readProperty_mOperatorLocation (), var_expression_3705, temp_7.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-property-access.galgas", 111)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structPropertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 136)) ;
  GALGAS_string var_operand_5751 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5751, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 138)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5751.add_operation (GALGAS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 146)).add_operation (temp_2.readProperty_mStructFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 146)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 146)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3007 ;
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-not.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3007, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 67)) ;
  GALGAS_unifiedTypeMapEntry var_type_3076 = var_expression_3007.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_3007.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 79)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_3007.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 81)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_3076, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 82)).readProperty_mHandledOperatorFlags ().getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 82)).operator_not (SOURCE_FILE ("expression-not.galgas", 82)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3076, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 84)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 84)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 84)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 83)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_3076, temp_8.readProperty_mOperatorLocation (), var_expression_3007  COMMA_SOURCE_FILE ("expression-not.galgas", 88)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 112)) ;
  GALGAS_string var_operand_4840 ;
  const GALGAS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4840, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)) ;
  const GALGAS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4840.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 116)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 116)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 116)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3046 ;
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-tilde.galgas", 71)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3046, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 68)) ;
  GALGAS_unifiedTypeMapEntry var_type_3115 = var_expression_3046.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_3153 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3046.ptr ())) ;
    if (NULL == var_exp_3153.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_3153.readProperty_mResultType (), var_exp_3153.readProperty_mLocation (), var_exp_3153.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 83))  COMMA_SOURCE_FILE ("expression-tilde.galgas", 80)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3115, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)).readProperty_mHandledOperatorFlags ().getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 85)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 85)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3115, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 87)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 87)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 87)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 86)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_3115, temp_5.readProperty_mOperatorLocation (), var_expression_3046  COMMA_SOURCE_FILE ("expression-tilde.galgas", 91)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 115)) ;
  GALGAS_string var_operand_4724 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4724, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4724.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 119)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 119)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 119)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 57)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3083 ;
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-bang.galgas", 75)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3083, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 72)) ;
  GALGAS_unifiedTypeMapEntry var_type_3152 = var_expression_3083.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMapEntry var_classIndex_3268 ;
    const bool optionalResult3237 = extensionGetter_definition (var_type_3152, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 83)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classIndex_3268) ;
    if (!optionalResult3237) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::constructor_new (var_classIndex_3268, temp_2.readProperty_mOperatorLocation (), var_expression_3083, extensionGetter_definition (var_type_3152, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 88)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-bang.galgas", 84)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = this ;
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3152, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 92)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 92)).add_operation (GALGAS_string ("' and does not support the '°' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 92)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 91)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 113)) ;
  GALGAS_string var_operand_4896 ;
  const GALGAS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4896, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 115)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 123)) COMMA_SOURCE_FILE ("expression-bang.galgas", 123)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4896.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 124)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 124)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 125)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 125)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 125)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3080 ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3080, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 67)) ;
  GALGAS_unifiedTypeMapEntry var_type_3149 = var_expression_3080.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_3149, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryWrappingMinusExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3149, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 80)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 80)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 79)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionForGeneration::constructor_new (var_type_3149, temp_4.readProperty_mOperatorLocation (), var_expression_3080  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 84)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 107)) ;
  GALGAS_string var_operand_4630 ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4630, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 109)) ;
  outArgument_outCppExpression = var_operand_4630.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 117)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 144)) ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 145)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_6723 ;
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6723, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 159)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7032 ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6723.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7032, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 169)) ;
  {
  const GALGAS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_6723.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 180)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 180)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_6723, var_rightExpression_7032, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 179)) ;
  }
  const GALGAS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_6723.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_6723, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 190)), var_rightExpression_7032  COMMA_SOURCE_FILE ("expression-or.galgas", 186)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 200)) ;
  const GALGAS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 201)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8641 ;
  const GALGAS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8641, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 215)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8950 ;
  const GALGAS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8641.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8950, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 225)) ;
  {
  const GALGAS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_8641.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 236)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 236)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8641, var_rightExpression_8950, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 235)) ;
  }
  const GALGAS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftExpression_8641.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8641, var_rightExpression_8950  COMMA_SOURCE_FILE ("expression-or.galgas", 243)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 255)) ;
  const GALGAS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 256)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_10548 ;
  const GALGAS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10548, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 270)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10857 ;
  const GALGAS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10548.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10857, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 280)) ;
  {
  const GALGAS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_10548.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 291)).readProperty_mHandledOperatorFlags ().getter_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 291)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_10548, var_rightExpression_10857, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 290)) ;
  }
  const GALGAS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_10548.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_10548, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 302)), var_rightExpression_10857  COMMA_SOURCE_FILE ("expression-or.galgas", 298)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 312)) ;
  const GALGAS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 313)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_12537 ;
  const GALGAS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12537, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 328)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12868 ;
  const GALGAS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12868, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 338)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_12941 = var_leftExpression_12537.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_leftType_12941, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 349)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_12537.readProperty_mLocation (), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 350)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_rightType_13165 = var_rightExpression_12868.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_13165, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 353)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_12868.readProperty_mLocation (), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 354)) ;
    }
  }
  const GALGAS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_12537.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-or.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 358)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_12537, var_rightExpression_12868  COMMA_SOURCE_FILE ("expression-or.galgas", 357)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 370)) ;
  const GALGAS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 371)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_15083 ;
  const GALGAS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_15083, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 385)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15414 ;
  const GALGAS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_15414, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 395)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_leftExpression_15083.readProperty_mResultType (), var_leftExpression_15083.readProperty_mLocation (), var_leftExpression_15083, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 405)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_rightExpression_15414.readProperty_mResultType (), var_rightExpression_15414.readProperty_mLocation (), var_rightExpression_15414, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 415)) ;
  }
  const GALGAS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_15083.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-or.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 427)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15083, var_rightExpression_15414  COMMA_SOURCE_FILE ("expression-or.galgas", 426)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 465)) ;
  GALGAS_string var_leftTemporaryOperand_18274 ;
  const GALGAS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18274, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 467)) ;
  GALGAS_string var_testVar_18317 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 475)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 476)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_18317, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 477)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 477)).add_operation (var_leftTemporaryOperand_18274, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 477)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 477)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_18317, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 478)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 478)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 480)) ;
  }
  GALGAS_string var_rightTemporaryOperand_18803 ;
  const GALGAS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18803, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 481)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_18317.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)).add_operation (var_rightTemporaryOperand_18803, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 488)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 489)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 490)) ;
  outArgument_outCppExpression = var_testVar_18317 ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 502)) ;
  GALGAS_string var_leftTemporaryOperand_19602 ;
  const GALGAS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19602, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 504)) ;
  GALGAS_string var_rightTemporaryOperand_19807 ;
  const GALGAS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_19807, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 512)) ;
  const GALGAS_closedSliceExpressionForGeneration temp_3 = this ;
  const GALGAS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_19602, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 521)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 521)).add_operation (var_rightTemporaryOperand_19807, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 521)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)).add_operation (var_leftTemporaryOperand_19602, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 522)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)) ;
  GALGAS_string var_leftTemporaryOperand_20780 ;
  const GALGAS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20780, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 536)) ;
  GALGAS_string var_rightTemporaryOperand_20985 ;
  const GALGAS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20985, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 544)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 552)) COMMA_SOURCE_FILE ("expression-or.galgas", 552)) ;
  }
  const GALGAS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_20780, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 554)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 554)).add_operation (var_rightTemporaryOperand_20985, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 554)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)).add_operation (var_leftTemporaryOperand_20780, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 556)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 84)) ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 85)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_4373 ;
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_4373, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 99)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_4681 ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_4373.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_4681, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 109)) ;
  {
  const GALGAS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_4373.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 120)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 120)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_4373, var_rightExpression_4681, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 119)) ;
  }
  const GALGAS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_4373.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_4373, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 131)), var_rightExpression_4681  COMMA_SOURCE_FILE ("expression-and.galgas", 127)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 141)) ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 142)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_6318 ;
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6318, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 156)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_6626 ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6318.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_6626, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 166)) ;
  {
  const GALGAS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_6318.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 177)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 177)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_6318, var_rightExpression_6626, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 176)) ;
  }
  const GALGAS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftExpression_6318.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_6318, var_rightExpression_6626  COMMA_SOURCE_FILE ("expression-and.galgas", 184)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 208)) ;
  GALGAS_string var_leftTemporaryOperand_8146 ;
  const GALGAS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_8146, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 210)) ;
  GALGAS_string var_testVar_8189 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 218)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 218)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_8189, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 219)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 219)).add_operation (var_leftTemporaryOperand_8146, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 219)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 219)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_8189, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 220)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 220)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 222)) ;
  }
  GALGAS_string var_rightTemporaryOperand_8673 ;
  const GALGAS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_8673, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 223)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_8189.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 230)).add_operation (var_rightTemporaryOperand_8673, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 230)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 230)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 231)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 232)) ;
  outArgument_outCppExpression = var_testVar_8189 ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                   const GALGAS_unifiedTypeMapEntry constinArgument_inSourceType,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_sourceType_2261 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_2291 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2261)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).isValid ()) {
    uint32_t variant_2327 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).uintValue () ;
    bool loop_2327 = true ;
    while (loop_2327) {
      loop_2327 = var_ok_2291.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).operator_and (extensionGetter_definition (var_sourceType_2261, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).isValid () ;
      if (loop_2327) {
        loop_2327 = var_ok_2291.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).operator_and (extensionGetter_definition (var_sourceType_2261, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).boolValue () ;
      }
      if (loop_2327 && (0 == variant_2327)) {
        loop_2327 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)) ;
      }
      if (loop_2327) {
        variant_2327 -- ;
        var_sourceType_2261 = extensionGetter_definition (var_sourceType_2261, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 48)).readProperty_mSuperType () ;
        var_ok_2291 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2261)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_2291.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 51)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapEntry var_targetType_2610 ;
      const bool optionalResult2579 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 51)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_targetType_2610) ;
      if (!optionalResult2579) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_2261 = constinArgument_inSourceType ;
        var_ok_2291 = GALGAS_bool (kIsEqual, var_targetType_2610.objectCompare (var_sourceType_2261)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).isValid ()) {
          uint32_t variant_2689 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).uintValue () ;
          bool loop_2689 = true ;
          while (loop_2689) {
            loop_2689 = var_ok_2291.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).operator_and (extensionGetter_definition (var_sourceType_2261, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).isValid () ;
            if (loop_2689) {
              loop_2689 = var_ok_2291.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).operator_and (extensionGetter_definition (var_sourceType_2261, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).boolValue () ;
            }
            if (loop_2689 && (0 == variant_2689)) {
              loop_2689 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) ;
            }
            if (loop_2689) {
              variant_2689 -- ;
              var_sourceType_2261 = extensionGetter_definition (var_sourceType_2261, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 55)).readProperty_mSuperType () ;
              var_ok_2291 = GALGAS_bool (kIsEqual, var_targetType_2610.objectCompare (var_sourceType_2261)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_2291.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inSourceType,
                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                        GALGAS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_handled_3590 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_3620 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (NULL == var_bigIntSource_3620.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("uint").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_bigint var_bigIntValue_3761 = var_bigIntSource_3620.readProperty_mValue () ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsStrictInf, var_bigIntValue_3761.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_3761.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_3761.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 76)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 76)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 76)) ;
            }
          }
          ioArgument_ioExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_3761.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 78))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 78)) ;
          var_handled_3590 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("sint").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_bigint var_bigIntValue_4181 = var_bigIntSource_3620.readProperty_mValue () ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsStrictInf, var_bigIntValue_4181.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_4181.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_4181.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)) ;
              }
            }
            ioArgument_ioExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4181.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 85))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 85)) ;
            var_handled_3590 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_bigint var_bigIntValue_4612 = var_bigIntSource_3620.readProperty_mValue () ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsStrictInf, var_bigIntValue_4612.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_4612.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  TC_Array <C_FixItDescription> fixItArray9 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_4612.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)) ;
                }
              }
              ioArgument_ioExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4612.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)) ;
              var_handled_3590 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_10) {
                GALGAS_bigint var_bigIntValue_5040 = var_bigIntSource_3620.readProperty_mValue () ;
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = GALGAS_bool (kIsStrictInf, var_bigIntValue_5040.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_5040.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_5040.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)), fixItArray12  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)) ;
                  }
                }
                ioArgument_ioExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5040.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) ;
                var_handled_3590 = GALGAS_bool (true) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_handled_3590.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 103)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_unifiedTypeMapEntry var_sourceType_5468 = constinArgument_inSourceType ;
      GALGAS_bool var_ok_5500 = GALGAS_bool (kIsEqual, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)))) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).isValid ()) {
        uint32_t variant_5562 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).uintValue () ;
        bool loop_5562 = true ;
        while (loop_5562) {
          loop_5562 = var_ok_5500.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).operator_and (extensionGetter_definition (var_sourceType_5468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).isValid () ;
          if (loop_5562) {
            loop_5562 = var_ok_5500.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).operator_and (extensionGetter_definition (var_sourceType_5468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).boolValue () ;
          }
          if (loop_5562 && (0 == variant_5562)) {
            loop_5562 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)) ;
          }
          if (loop_5562) {
            variant_5562 -- ;
            var_sourceType_5468 = extensionGetter_definition (var_sourceType_5468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 107)).readProperty_mSuperType () ;
            var_ok_5500 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_5468)) ;
          }
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_ok_5500.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_unifiedTypeMapEntry var_targetType_5853 ;
          const bool optionalResult5822 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_targetType_5853) ;
          if (!optionalResult5822) {
            test_14 = kBoolFalse ;
          }
          if (kBoolTrue == test_14) {
            var_sourceType_5468 = constinArgument_inSourceType ;
            var_ok_5500 = GALGAS_bool (kIsEqual, extensionGetter_typeName (var_targetType_5853, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).objectCompare (extensionGetter_typeName (var_sourceType_5468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)))) ;
            if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).isValid ()) {
              uint32_t variant_5960 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).uintValue () ;
              bool loop_5960 = true ;
              while (loop_5960) {
                loop_5960 = var_ok_5500.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).operator_and (extensionGetter_definition (var_sourceType_5468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).isValid () ;
                if (loop_5960) {
                  loop_5960 = var_ok_5500.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).operator_and (extensionGetter_definition (var_sourceType_5468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).boolValue () ;
                }
                if (loop_5960 && (0 == variant_5960)) {
                  loop_5960 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)) ;
                }
                if (loop_5960) {
                  variant_5960 -- ;
                  var_sourceType_5468 = extensionGetter_definition (var_sourceType_5468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 114)).readProperty_mSuperType () ;
                  var_ok_5500 = GALGAS_bool (kIsEqual, extensionGetter_typeName (var_targetType_5853, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).objectCompare (extensionGetter_typeName (var_sourceType_5468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)))) ;
                }
              }
            }
          }
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_ok_5500.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_AccessControl var_accessControl_6377 ;
          GALGAS_bool var_unused_0_6380 ;
          GALGAS_unifiedTypeMapEntry var_propertyType_6398 ;
          const bool optionalResult6314 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)).readProperty_mPropertyMap ().optional_searchKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)).readProperty_mTypeName ().readProperty_string (), var_accessControl_6377, var_unused_0_6380, var_propertyType_6398) ;
          if (!optionalResult6314) {
            test_15 = kBoolFalse ;
          }
          if (kBoolTrue == test_15) {
            extensionMethod_checkSetAccess (var_accessControl_6377, GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) ;
            GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_6626 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_6398, constinArgument_inErrorLocation, ioArgument_ioExpression, extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 128)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)) ;
            ioArgument_ioExpression = var_conversionExpression_6626 ;
            var_ok_5500 = GALGAS_bool (kIsEqual, var_propertyType_6398.objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          GALGAS_bool test_17 = var_ok_5500.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 132)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 132)).readProperty_mGetterMap ().getter_hasKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 132)).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 132)) ;
          }
          test_16 = test_17.boolEnum () ;
          if (kBoolTrue == test_16) {
            GALGAS_methodKind var_kind_7125 ;
            GALGAS_functionSignature var_argumentTypeList_7174 ;
            GALGAS_bool var_hasCompilerArgument_7218 ;
            GALGAS_unifiedTypeMapEntry var_returnedType_7244 ;
            GALGAS_location joker_7184 ; // Joker input parameter
            GALGAS_methodQualifier joker_7254_2 ; // Joker input parameter
            GALGAS_string joker_7254_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 133)).readProperty_mGetterMap ().method_searchKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 134)).readProperty_mTypeName (), var_kind_7125, var_argumentTypeList_7174, joker_7184, var_hasCompilerArgument_7218, var_returnedType_7244, joker_7254_2, joker_7254_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 133)) ;
            var_ok_5500 = GALGAS_bool (kIsEqual, var_argumentTypeList_7174.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_7244.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)) ;
            GALGAS_getterCallExpressionForGeneration var_conversionExpression_7406 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_7125, ioArgument_ioExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)), extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).readProperty_mTypeName ().readProperty_string (), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 151)), var_hasCompilerArgument_7218  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 144)) ;
            ioArgument_ioExpression = var_conversionExpression_7406 ;
          }
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_5500.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 160)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 159)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 160)).add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 160)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 160)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 160)), fixItArray19  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 157)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator (const GALGAS_bool constinArgument_inOperandIsHandled,
                                  const GALGAS_string constinArgument_inOperatorNameForErrorMessage,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  GALGAS_semanticExpressionForGeneration & ioArgument_ioLeftExpression,
                                  GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_leftType_8600 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_8648 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 176)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 176)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 176)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 176)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 177)).add_operation (extensionGetter_definition (var_rightType_8648, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 175)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapEntry var_rightType_9020 = var_rightType_8648 ;
    GALGAS_bool var_ok_9049 = GALGAS_bool (kIsEqual, var_leftType_8600.objectCompare (var_rightType_9020)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).isValid ()) {
      uint32_t variant_9082 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).uintValue () ;
      bool loop_9082 = true ;
      while (loop_9082) {
        loop_9082 = var_ok_9049.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).operator_and (extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).isValid () ;
        if (loop_9082) {
          loop_9082 = var_ok_9049.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).operator_and (extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).boolValue () ;
        }
        if (loop_9082 && (0 == variant_9082)) {
          loop_9082 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)) ;
        }
        if (loop_9082) {
          variant_9082 -- ;
          var_rightType_9020 = extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).readProperty_mSuperType () ;
          var_ok_9049 = GALGAS_bool (kIsEqual, var_leftType_8600.objectCompare (var_rightType_9020)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_ok_9049.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 187)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_9319 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (NULL == var_bigIntSource_9319.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("uint").objectCompare (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_bigint var_bigIntValue_9465 = var_bigIntSource_9319.readProperty_mValue () ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsStrictInf, var_bigIntValue_9465.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_9465.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <C_FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_9465.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)) ;
                }
              }
              ioArgument_ioRightExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (var_leftType_8600, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_9465.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 193))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 193)) ;
              var_ok_9049 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("sint").objectCompare (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_6) {
                GALGAS_bigint var_bigIntValue_9901 = var_bigIntSource_9319.readProperty_mValue () ;
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  test_7 = GALGAS_bool (kIsStrictInf, var_bigIntValue_9901.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_9901.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    TC_Array <C_FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_9901.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 198)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 198)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 198)) ;
                  }
                }
                ioArgument_ioRightExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (var_leftType_8600, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_9901.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 200))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 200)) ;
                var_ok_9049 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_6) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 202)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_bigint var_bigIntValue_10348 = var_bigIntSource_9319.readProperty_mValue () ;
                  enumGalgasBool test_10 = kBoolTrue ;
                  if (kBoolTrue == test_10) {
                    test_10 = GALGAS_bool (kIsStrictInf, var_bigIntValue_10348.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_10348.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      TC_Array <C_FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_10348.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (var_leftType_8600, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10348.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 207))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 207)) ;
                  var_ok_9049 = GALGAS_bool (true) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsEqual, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 209)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    GALGAS_bigint var_bigIntValue_10792 = var_bigIntSource_9319.readProperty_mValue () ;
                    enumGalgasBool test_13 = kBoolTrue ;
                    if (kBoolTrue == test_13) {
                      test_13 = GALGAS_bool (kIsStrictInf, var_bigIntValue_10792.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 211)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_10792.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 211)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 211)).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        TC_Array <C_FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_10792.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (var_leftType_8600, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10792.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214)) ;
                    var_ok_9049 = GALGAS_bool (true) ;
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
      test_15 = var_ok_9049.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_11240 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (NULL == var_bigIntSource_11240.ptr ()) {
          test_15 = kBoolFalse ;
        }
        if (kBoolTrue == test_15) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (kIsEqual, GALGAS_string ("uint").objectCompare (extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 220)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_bigint var_bigIntValue_11386 = var_bigIntSource_11240.readProperty_mValue () ;
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                test_17 = GALGAS_bool (kIsStrictInf, var_bigIntValue_11386.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 222)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_11386.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 222)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 222)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  TC_Array <C_FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_11386.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 223)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 223)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 223)) ;
                }
              }
              ioArgument_ioLeftExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (var_rightType_9020, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_11386.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 225))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 225)) ;
              var_ok_9049 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_16) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GALGAS_bool (kIsEqual, GALGAS_string ("sint").objectCompare (extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 227)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                GALGAS_bigint var_bigIntValue_11821 = var_bigIntSource_11240.readProperty_mValue () ;
                enumGalgasBool test_20 = kBoolTrue ;
                if (kBoolTrue == test_20) {
                  test_20 = GALGAS_bool (kIsStrictInf, var_bigIntValue_11821.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 229)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_11821.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 229)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 229)).boolEnum () ;
                  if (kBoolTrue == test_20) {
                    TC_Array <C_FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_11821.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)) ;
                  }
                }
                ioArgument_ioLeftExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (var_rightType_9020, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_11821.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 232))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 232)) ;
                var_ok_9049 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_19) {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                test_22 = GALGAS_bool (kIsEqual, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 234)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_22) {
                  GALGAS_bigint var_bigIntValue_12267 = var_bigIntSource_11240.readProperty_mValue () ;
                  enumGalgasBool test_23 = kBoolTrue ;
                  if (kBoolTrue == test_23) {
                    test_23 = GALGAS_bool (kIsStrictInf, var_bigIntValue_12267.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 236)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_12267.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 236)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 236)).boolEnum () ;
                    if (kBoolTrue == test_23) {
                      TC_Array <C_FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_12267.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (var_rightType_9020, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12267.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 239))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 239)) ;
                  var_ok_9049 = GALGAS_bool (true) ;
                }
              }
              if (kBoolFalse == test_22) {
                enumGalgasBool test_25 = kBoolTrue ;
                if (kBoolTrue == test_25) {
                  test_25 = GALGAS_bool (kIsEqual, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 241)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_25) {
                    GALGAS_bigint var_bigIntValue_12710 = var_bigIntSource_11240.readProperty_mValue () ;
                    enumGalgasBool test_26 = kBoolTrue ;
                    if (kBoolTrue == test_26) {
                      test_26 = GALGAS_bool (kIsStrictInf, var_bigIntValue_12710.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 243)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_12710.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 243)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 243)).boolEnum () ;
                      if (kBoolTrue == test_26) {
                        TC_Array <C_FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_12710.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (var_rightType_9020, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12710.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 246))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 246)) ;
                    var_ok_9049 = GALGAS_bool (true) ;
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
      test_28 = var_ok_9049.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).boolEnum () ;
      if (kBoolTrue == test_28) {
        GALGAS_AccessControl var_accessControl_13288 ;
        GALGAS_bool var_unused_0_13291 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_13309 ;
        const bool optionalResult13229 = extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).readProperty_mPropertyMap ().optional_searchKey (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).readProperty_mTypeName ().readProperty_string (), var_accessControl_13288, var_unused_0_13291, var_propertyType_13309) ;
        if (!optionalResult13229) {
          test_28 = kBoolFalse ;
        }
        if (kBoolTrue == test_28) {
          extensionMethod_checkSetAccess (var_accessControl_13288, GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 252)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 252)) ;
          GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_13537 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_13309, constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 260)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 256)) ;
          ioArgument_ioRightExpression = var_conversionExpression_13537 ;
          var_ok_9049 = GALGAS_bool (kIsEqual, var_propertyType_13309.objectCompare (var_leftType_8600)) ;
        }
      }
    }
    if (kBoolFalse == test_28) {
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        GALGAS_bool test_30 = var_ok_9049.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 264)) ;
        if (kBoolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 264)).readProperty_mGetterMap ().getter_hasKey (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 264)).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 264)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (kBoolTrue == test_29) {
          GALGAS_methodKind var_kind_14024 ;
          GALGAS_functionSignature var_argumentTypeList_14073 ;
          GALGAS_bool var_hasCompilerArgument_14117 ;
          GALGAS_unifiedTypeMapEntry var_returnedType_14143 ;
          GALGAS_location joker_14083 ; // Joker input parameter
          GALGAS_methodQualifier joker_14153_2 ; // Joker input parameter
          GALGAS_string joker_14153_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 265)).readProperty_mGetterMap ().method_searchKey (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)).readProperty_mTypeName (), var_kind_14024, var_argumentTypeList_14073, joker_14083, var_hasCompilerArgument_14117, var_returnedType_14143, joker_14153_2, joker_14153_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 265)) ;
          var_ok_9049 = GALGAS_bool (kIsEqual, var_argumentTypeList_14073.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 274)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_14143.objectCompare (var_leftType_8600)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 274)) ;
          GALGAS_getterCallExpressionForGeneration var_conversionExpression_14301 = GALGAS_getterCallExpressionForGeneration::constructor_new (var_leftType_8600, constinArgument_inErrorLocation, var_kind_14024, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 281)), extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 282)).readProperty_mTypeName ().readProperty_string (), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 283)), var_hasCompilerArgument_14117  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 276)) ;
          ioArgument_ioRightExpression = var_conversionExpression_14301 ;
        }
      }
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = var_ok_9049.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 288)).boolEnum () ;
      if (kBoolTrue == test_31) {
        TC_Array <C_FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 290)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 290)).add_operation (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 290)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 290)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 290)).add_operation (extensionGetter_definition (var_rightType_9020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 291)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 291)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 291)).add_operation (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 293)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 292)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 293)).add_operation (extensionGetter_definition (var_leftType_8600, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 293)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 293)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 293)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 289)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 136)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_5722 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_assignmentInstructionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_assignmentInstructionAST temp_2 = this ;
      GALGAS_string joker_5861 ; // Joker input parameter
      GALGAS_string joker_5870 ; // Joker input parameter
      extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_2.readProperty_mTargetVariableName (), var_targetType_5722, joker_5861, joker_5870, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 162)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_assignmentInstructionAST temp_3 = this ;
    GALGAS_string joker_5977 ; // Joker input parameter
    GALGAS_string joker_5986 ; // Joker input parameter
    extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_3.readProperty_mTargetVariableName (), var_targetType_5722, joker_5977, joker_5986, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 169)) ;
    }
    GALGAS_propertyMap var_propertyMap_6053 = extensionGetter_definition (var_targetType_5722, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 176)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_6162 ;
    GALGAS_bool var_isConstant_6178 ;
    const GALGAS_assignmentInstructionAST temp_4 = this ;
    var_propertyMap_6053.method_searchKey (temp_4.readProperty_mOptionalProperty (), var_accessControl_6162, var_isConstant_6178, var_targetType_5722, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 177)) ;
    const GALGAS_assignmentInstructionAST temp_5 = this ;
    extensionMethod_checkSetAccess (var_accessControl_6162, constinArgument_inAnalysisContext.readProperty_selfType (), temp_5.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 178)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_isConstant_6178.boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_assignmentInstructionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray8  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 190)) ;
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_7080 ;
  const GALGAS_assignmentInstructionAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_5722, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7080, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 194)) ;
  {
  const GALGAS_assignmentInstructionAST temp_10 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_5722, var_expression_7080.readProperty_mResultType (), temp_10.readProperty_mInstructionLocation (), var_expression_7080, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 204)) ;
  }
  GALGAS_string var_targetVariableCppName_7328 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_7378 ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_assignmentInstructionAST temp_12 = this ;
    test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      {
      const GALGAS_assignmentInstructionAST temp_13 = this ;
      GALGAS_unifiedTypeMapEntry joker_7506 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mTargetVariableName (), joker_7506, var_targetVariableCppName_7328, var_nameForCheckingFormalParameterUsing_7378, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 214)) ;
      }
    }
  }
  if (kBoolFalse == test_11) {
    {
    const GALGAS_assignmentInstructionAST temp_14 = this ;
    GALGAS_unifiedTypeMapEntry joker_7678 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mTargetVariableName (), joker_7678, var_targetVariableCppName_7328, var_nameForCheckingFormalParameterUsing_7378, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 221)) ;
    }
  }
  const GALGAS_assignmentInstructionAST temp_15 = this ;
  const GALGAS_assignmentInstructionAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_5722, var_targetVariableCppName_7328, var_nameForCheckingFormalParameterUsing_7378, temp_15.readProperty_mOptionalProperty ().readProperty_string (), var_expression_7080, temp_16.readProperty_mTargetVariableName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 229))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 229)) ;
}
