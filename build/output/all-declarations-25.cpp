#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_routinePrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1143)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_routinePrototypeDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                   extensionGetter_routinePrototypeDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_routinePrototypeDeclarationForGeneration_headerKind (defineExtensionGetter_routinePrototypeDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GALGAS_string & outArgument_outHeader,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routinePrototypeDeclarationForGeneration * object = (const cPtr_routinePrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routinePrototypeDeclarationForGeneration) ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_0 = object ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.getter_mRoutineName (HERE), temp_1.getter_mFormalArgumentList (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1151))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_functionPrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1162)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionPrototypeDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                   extensionGetter_functionPrototypeDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionPrototypeDeclarationForGeneration_headerKind (defineExtensionGetter_functionPrototypeDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GALGAS_string & outArgument_outHeader,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionPrototypeDeclarationForGeneration * object = (const cPtr_functionPrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionPrototypeDeclarationForGeneration) ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_0 = object ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_1 = object ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.getter_mFunctionName (HERE), temp_1.getter_mFormalArgumentList (HERE), temp_2.getter_mReturnType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1173)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1170))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_onceFunctionDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1180)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_onceFunctionDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                   extensionGetter_onceFunctionDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_onceFunctionDeclarationForGeneration_headerKind (defineExtensionGetter_onceFunctionDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.getter_mFunctionName (HERE), GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1190)), temp_1.getter_mReturnType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1191)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1188))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                              extensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outImplementation ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  const GALGAS_semanticTypeForGeneration temp_0 = object ;
  const GALGAS_semanticTypeForGeneration temp_1 = object ;
  const GALGAS_semanticTypeForGeneration temp_2 = object ;
  const GALGAS_semanticTypeForGeneration temp_3 = object ;
  result_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1201)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1202)), temp_2.getter_mSelfTypeEntry (HERE).getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1203)), temp_3.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1204)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1200))) ;
//---
  return result_outImplementation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation (void) {
  enterExtensionGetter_appendTypeGenericImplementation (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                        extensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_appendTypeGenericImplementation (defineExtensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_routineImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineImplementationForGeneration * object = (const cPtr_routineImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routineImplementationForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineImplementationForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mHasHeader (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineImplementationForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_2.getter_mRoutineName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1218)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1218))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1218)) ;
    }
  }
  GALGAS_string var_code_49035 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = object ;
  const GALGAS_routineImplementationForGeneration temp_4 = object ;
  const GALGAS_routineImplementationForGeneration temp_5 = object ;
  const GALGAS_routineImplementationForGeneration temp_6 = object ;
  routine_generateProcedure (temp_3.getter_mGenerateStatic (HERE), GALGAS_string ("routine_").add_operation (temp_4.getter_mRoutineName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1222)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1222)), ioArgument_ioInclusionSet, temp_5.getter_mFormalArgumentList (HERE), temp_6.getter_mRoutineInstructionList (HERE), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_49035, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1220)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.getter_mRoutineName (HERE), var_code_49035 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1233))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_routineImplementationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_routineImplementationForGeneration.mSlotID,
                                                     extensionMethod_routineImplementationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_routineImplementationForGeneration_appendSpecificImplementation (defineExtensionMethod_routineImplementationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionImplementationForGeneration * object = (const cPtr_functionImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionImplementationForGeneration) ;
  const GALGAS_functionImplementationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.getter_mFunctionName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1245)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1245))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1245)) ;
  GALGAS_string var_code_49847 ;
  {
  const GALGAS_functionImplementationForGeneration temp_1 = object ;
  const GALGAS_functionImplementationForGeneration temp_2 = object ;
  const GALGAS_functionImplementationForGeneration temp_3 = object ;
  const GALGAS_functionImplementationForGeneration temp_4 = object ;
  const GALGAS_functionImplementationForGeneration temp_5 = object ;
  routine_generateFunction (GALGAS_string ("function_").add_operation (temp_1.getter_mFunctionName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1247)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1247)), ioArgument_ioInclusionSet, temp_2.getter_mFormalArgumentList (HERE), temp_3.getter_mFunctionInstructionList (HERE), GALGAS_string ("C_Compiler"), temp_4.getter_mReturnType (HERE), temp_5.getter_mResultVariableCppName (HERE), GALGAS_bool (false), var_code_49847, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1246)) ;
  }
  const GALGAS_functionImplementationForGeneration temp_6 = object ;
  const GALGAS_functionImplementationForGeneration temp_7 = object ;
  const GALGAS_functionImplementationForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.getter_mFunctionName (HERE), var_code_49847, temp_7.getter_mFormalArgumentList (HERE), temp_8.getter_mReturnType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1261)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1257))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionImplementationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_functionImplementationForGeneration.mSlotID,
                                                     extensionMethod_functionImplementationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionImplementationForGeneration_appendSpecificImplementation (defineExtensionMethod_functionImplementationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.getter_mFunctionName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1272)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1272))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1272)) ;
  GALGAS_string var_code_50764 ;
  {
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_2 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_3 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_4 = object ;
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (temp_1.getter_mFunctionName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1274)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1274)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1276)), temp_2.getter_mFunctionInstructionList (HERE), GALGAS_string ("C_Compiler"), temp_3.getter_mReturnType (HERE), temp_4.getter_mResultVariableCppName (HERE), GALGAS_bool (true), var_code_50764, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1273)) ;
  }
  const GALGAS_onceFunctionDeclarationForGeneration temp_5 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.getter_mFunctionName (HERE), var_code_50764, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1287)), temp_6.getter_mReturnType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1288)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                                     extensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_lexiqueDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1297)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexiqueDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                   extensionGetter_lexiqueDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexiqueDeclarationForGeneration_headerKind (defineExtensionGetter_lexiqueDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = object ;
  outArgument_outHeader = temp_0.getter_mHeaderContents (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                              extensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_string & outArgument_outHeader,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = temp_1.getter_mCppContents (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                                     extensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inProductDirectory,
                                                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                                 GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = object ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1326)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = object ;
  const GALGAS_lexiqueDeclarationForGeneration temp_2 = object ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_1.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1329)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), temp_2.getter_mCocoaHeader (HERE), GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1327)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_3 = object ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1339)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_4 = object ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_4.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1340)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1340)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1340))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1340)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_5 = object ;
  const GALGAS_lexiqueDeclarationForGeneration temp_6 = object ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_5.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1343)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1343)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), temp_6.getter_mCocoaImplementation (HERE), GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"
    "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1341)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                            extensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_programComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1359)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_programComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                   extensionGetter_programComponentForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_programComponentForGeneration_headerKind (defineExtensionGetter_programComponentForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_programComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_programComponentForGeneration * object = (const cPtr_programComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_programComponentForGeneration) ;
  const GALGAS_programComponentForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.getter_mInclusionSet (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)) ;
  const GALGAS_programComponentForGeneration temp_1 = object ;
  outArgument_outImplementation = temp_1.getter_mImplementationString (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_programComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                                     extensionMethod_programComponentForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_programComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_programComponentForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_filewrapperDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1379)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_filewrapperDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                   extensionGetter_filewrapperDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_filewrapperDeclarationForGeneration_headerKind (defineExtensionGetter_filewrapperDeclarationForGeneration_headerKind, NULL) ;

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
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1391)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1391))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1391)) ;
  cEnumerator_wrapperFileMap enumerator_55224 (constinArgument_inFilewrapperFileMap, kENUMERATION_UP) ;
  while (enumerator_55224.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1393)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1393))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1393)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_55224.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_55224.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1395))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1395)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_55224.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1397))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1397)) ;
    }
    enumerator_55224.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_55544 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_55544.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile (enumerator_55544.current_mRegularFileMap (HERE), enumerator_55544.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1401)) ;
    }
    enumerator_55544.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_string & outArgument_outHeader,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  GALGAS_stringlist var_regularFileIndexStringList_56092 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1417)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_56150 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1418)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_56206 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1419)) ;
  GALGAS_stringlist var_directoryIndexStringList_56253 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1420)) ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = object ;
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = object ;
  routine_recursivlyEnumerateRegularFile (temp_0.getter_mFilewrapperFileMap (HERE), temp_1.getter_mFilewrapperDirectoryMap (HERE), var_regularFileIndexStringList_56092, var_directoryIndexStringList_56253, var_regularTextContentIndexStringList_56206, var_regularBinaryContentIndexStringList_56150, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_56092, var_directoryIndexStringList_56253, var_regularTextContentIndexStringList_56206, var_regularBinaryContentIndexStringList_56150, temp_2.getter_mFilewrapperName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = object ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_56859 (temp_3.getter_mFilewrapperTemplateListForGeneration (HERE), kENUMERATION_UP) ;
  while (enumerator_56859.hasCurrentObject ()) {
    const GALGAS_filewrapperDeclarationForGeneration temp_4 = object ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.getter_mFilewrapperName (HERE), enumerator_56859.current_mFilewrapperTemplateName (HERE), enumerator_56859.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)) ;
    enumerator_56859.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                              extensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_, NULL) ;

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
  cEnumerator_wrapperFileMap enumerator_57551 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_57551.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_57551.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_contents_57605 = GALGAS_string::constructor_stringWithContentsOfFile (enumerator_57551.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (enumerator_57551.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string ("'\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string ("const char * gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (enumerator_57551.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (var_contents_57605.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1463)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string (" ;\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1463)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1463)).add_operation (enumerator_57551.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1464)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (enumerator_57551.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1466)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1466)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1466)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1466)).add_operation (enumerator_57551.current_lkey (HERE).getter_string (HERE).getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1467)).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (GALGAS_string ("  true, // Text file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1468)).add_operation (var_contents_57605.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1469)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1469)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).add_operation (GALGAS_string (", // Text length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).add_operation (GALGAS_string ("  gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).add_operation (enumerator_57551.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (GALGAS_string (") ;\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_data var_contents_58469 = GALGAS_data::constructor_dataWithContentsOfFile (enumerator_57551.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (enumerator_57551.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (GALGAS_string ("'\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (enumerator_57551.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (var_contents_58469.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1477)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (var_contents_58469.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1478)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (GALGAS_string ("} ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1478)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1478)).add_operation (enumerator_57551.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1479)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1480)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)).add_operation (enumerator_57551.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1481)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481)).add_operation (enumerator_57551.current_lkey (HERE).getter_string (HERE).getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1482)).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1482)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483)).add_operation (var_contents_58469.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1484)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1484)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484)).add_operation (enumerator_57551.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1485)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1485)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)).add_operation (GALGAS_string (") ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)) ;
    }
    enumerator_57551.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_59424 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_59424.hasCurrentObject ()) {
    {
    routine_generateWrapperContents (constinArgument_inFilewrapperName, enumerator_59424.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1493)), enumerator_59424.current_mWrapperDirectoryIndex (HERE), enumerator_59424.current_mRegularFileMap (HERE), enumerator_59424.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1491)) ;
    }
    enumerator_59424.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1501)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1501)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1501)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1503)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1502)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1503)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1503)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1503)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1503)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1504)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1504)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1504)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1504)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1504)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1501)) ;
  cEnumerator_wrapperFileMap enumerator_60004 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_60004.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_60004.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1506)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1506)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)) ;
    enumerator_60004.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1508)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1508)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1513)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1512)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1513)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1513)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1513)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1513)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1514)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1514)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1514)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1514)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1514)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)) ;
  cEnumerator_wrapperDirectoryMap enumerator_60601 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_60601.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_60601.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1516)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1516)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1516)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1516)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1516)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1516)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1516)) ;
    enumerator_60601.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1518)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1518)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1521)).add_operation (GALGAS_string ("'\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1521)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1521)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1522)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1522)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1522)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1523)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1522)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1523)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1523)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1524)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1524)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1524)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1524)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1525)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1525)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1525)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1525)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1525)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1526)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1526)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1526)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1526)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1526)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1526)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1526)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1527)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1527)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1527)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1527)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1527)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1528)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1528)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1528)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1528)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1528)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1528)).add_operation (GALGAS_string (") ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1528)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1521)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.getter_mFilewrapperName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1538))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1538)) ;
  GALGAS_string var_filewrapperImplementation_61928 = GALGAS_string::makeEmptyString () ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = object ;
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = object ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = object ;
  routine_generateWrapperContents (temp_1.getter_mFilewrapperName (HERE), GALGAS_string::makeEmptyString (), GALGAS_uint ((uint32_t) 0U), temp_2.getter_mFilewrapperFileMap (HERE), temp_3.getter_mFilewrapperDirectoryMap (HERE), var_filewrapperImplementation_61928, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1540)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.getter_mFilewrapperName (HERE), var_filewrapperImplementation_61928 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1548))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_5 = object ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_62343 (temp_5.getter_mFilewrapperTemplateListForGeneration (HERE), kENUMERATION_UP) ;
  while (enumerator_62343.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_62439 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_62477 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_stringset var_unusedVariableCppNameSet_62521 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1557)) ;
    var_unusedVariableCppNameSet_62521.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1558))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1558)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_62634 (enumerator_62343.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_62634.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_62521.addAssign_operation (enumerator_62634.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1560)) ;
      enumerator_62634.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_62729 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_62343.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_62439, ioArgument_ioInclusionSet, var_temporaryVariableIndex_62477, var_unusedVariableCppNameSet_62521, var_useColumnMarker_62729, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1563)) ;
    }
    const GALGAS_filewrapperDeclarationForGeneration temp_6 = object ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.getter_mFilewrapperName (HERE), enumerator_62343.current_mFilewrapperTemplateName (HERE), enumerator_62343.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_62521, var_useColumnMarker_62729, var_generatedCodeForInstructionList_62439 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1572))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1572)) ;
    enumerator_62343.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                                     extensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation, NULL) ;

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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"all-predefined-types.h\"\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_Compiler.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement::cMapElement (const GALGAS_lstring & inLKey\n"
    "                          COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mProperty_lkey (inLKey) {\n"
    "}\n"
    "\n" ;
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
  result << "\n"
    "#pragma once\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"strings/C_String.h\"\n"
    "#include \"time/C_Timer.h\"\n"
    "#include \"galgas2/AC_GALGAS_root.h\"\n"
    "#include \"galgas2/C_galgas_type_descriptor.h\"\n"
    "#include \"galgas2/typeComparisonResult.h\"\n"
    "#include \"galgas2/cGenericAbstractEnumerator.h\"\n"
    "#include \"galgas2/cEnumerator_range.h\"\n"
    "#include \"galgas2/AC_GALGAS_list.h\"\n"
    "#include \"galgas2/AC_GALGAS_sortedlist.h\"\n"
    "#include \"galgas2/AC_GALGAS_map.h\"\n"
    "#include \"galgas2/AC_GALGAS_uniqueMap.h\"\n"
    "#include \"galgas2/AC_GALGAS_reference_class.h\"\n"
    "#include \"galgas2/AC_GALGAS_value_class.h\"\n"
    "#include \"galgas2/AC_GALGAS_enumAssociatedValues.h\"\n"
    "#include \"galgas2/AC_GALGAS_graph.h\"\n"
    "#include \"galgas2/acStrongPtr_class.h\"\n"
    "#include \"galgas2/cPtr_weakReference_class.h\"\n"
    "#include \"galgas2/AC_GALGAS_weak_reference.h\"\n"
    "#include \"command_line_interface/C_BoolCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_UIntCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringListCommandLineOption.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "#include \"utilities/C_BigInt.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_Compiler ;\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement : public cCollectionElement {\n"
    "//--- Attribut\n"
    "  public: GALGAS_lstring mProperty_lkey ;\n"
    "\n"
    "//--- Default constructor\n"
    "  public: cMapElement (const GALGAS_lstring & inLKey\n"
    "                        COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cMapElement (const cMapElement &) ;\n"
    "  private: cMapElement & operator = (const cMapElement &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_galgas_function_descriptor.h\"\n"
    "#include \"galgas2/cObjectArray.h\"\n"
    "\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @sint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_sint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: int32_t mSIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline int32_t intValue (void) const { return mSIntValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_sint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_sint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_sint (const int32_t inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @sint64 type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_sint_36__34_ : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: int64_t mSInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_sint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_sint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @object type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_object ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_object : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private: cPtr_object * mSharedObject ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedObject != NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n"
    "                          COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_object (const GALGAS_object & inSource) ;\n"
    "  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n"
    "\n"
    "//--------------------------------- Embedded Object\n"
    "  public: const AC_GALGAS_root * embeddedObject (void) const ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @uint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_uint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: uint32_t mUIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n"
    "  public: inline void increment (void) { mUIntValue ++ ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_uint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_uint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_uint (const uint32_t inValue) ;\n"
    "  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//  @uint64 type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_uint_36__34_ : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: uint64_t mUInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_uint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_uint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@bool type").stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_bool : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: bool mBoolValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n"
    "  public: inline bool boolValue (void) const { return mBoolValue ; }\n"
    "  public: enumGalgasBool boolEnum (void) const ;\n"
    "\n"
    "//--------------------------------- Drop\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_bool (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_bool constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_bool (const bool inValue) ; // Is built\n"
    "  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n"
    "\n"
    "//--------------------------------- Constructor for comparison result\n"
    "  public: GALGAS_bool (const typeComparisonKind inComparisonKind,\n"
    "                        const typeComparisonResult inComparisonResult) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "// @binaryset type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"bdd/C_BDD.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_binaryset : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_BDD mBDD ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline C_BDD bddValue (void) const { return mBDD ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_binaryset (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_binaryset (const C_BDD & inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @function type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_galgas_function_descriptor ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_function : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mFunctionDescriptor ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mFunctionDescriptor = NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_function (const GALGAS_function & inSource) ;\n"
    "  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @type type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_type : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return NULL != mTypeDescriptor ; }\n"
    "  public: inline void drop (void) { mTypeDescriptor = NULL ; }\n"
    "  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_type (const GALGAS_type & inSource) ;\n"
    "  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @location type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/C_LocationInSource.h\"\n"
    "#include \"galgas2/C_SourceTextInString.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_location : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: C_LocationInSource mStartLocationInSource ;\n"
    "  private: C_LocationInSource mEndLocationInSource ;\n"
    "  private: C_SourceTextInString mSourceText ;\n"
    "  private: bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public: C_LocationInSource startLocation (void) const { return mStartLocationInSource ; }\n"
    "  public: C_LocationInSource endLocation (void) const { return mEndLocationInSource ; }\n"
    "  public: C_SourceTextInString sourceText (void) const { return mSourceText ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_location (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_location (const C_LocationInSource & inStartLocationInSource,\n"
    "                            const C_LocationInSource & inEndLocationInSource,\n"
    "                            const C_SourceTextInString & inSourceText) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @data type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_data : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_Data mData ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline C_Data dataValue (void) const { return mData ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_data (void) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_data (const C_Data & inData) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @char type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_char : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: utf32 mCharValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline utf32 charValue (void) const { return mCharValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_char (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_char constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_char (const utf32 inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//  @double type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_double : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: double mDoubleValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline double doubleValue (void) const { return mDoubleValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_double (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_double constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_double (const double inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @string type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_string & inString) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_lstring & inString) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_string : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_String mString ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public: inline C_String stringValue (void) const { return mString ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_string (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_string constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Constructor for making an empty string\n"
    "  public: static GALGAS_string makeEmptyString (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_string (const C_String & inValue) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @stringset type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_stringset : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: class cSharedStringsetRoot * mSharedRoot ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedRoot != NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- In debug mode : check method\n"
    "  protected: void checkStringset (LOCATION_ARGS) const ;\n"
    "\n"
    "//--------------------------------- Insulate\n"
    "  protected: void insulate (LOCATION_ARGS) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @filewrapper type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cRegularFileWrapper {\n"
    "  public: const char * mName ;\n"
    "  public: const char * mExtension ;\n"
    "  public: const bool mIsTextFile ; // True: text file, false: binary file\n"
    "  public: const uint32_t mFileLength ;\n"
    "  public: const char * mContents ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cRegularFileWrapper (const char * inName,\n"
    "                                const char * inExtension,\n"
    "                                const bool inIsTextFile,\n"
    "                                const uint32_t inFileLength,\n"
    "                                const char * inContents) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n"
    "  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cDirectoryWrapper {\n"
    "  public: const char * mDirectoryName ;\n"
    "  public: const uint32_t mFileCount ;\n"
    "  public: const cRegularFileWrapper * * const mFiles ;\n"
    "  public: const uint32_t mDirectoryCount ;\n"
    "  public: const cDirectoryWrapper * * mDirectories ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cDirectoryWrapper (const char * inDirectoryName,\n"
    "                              const uint32_t inFileCount,\n"
    "                              const cRegularFileWrapper * * const inFiles,\n"
    "                              const uint32_t inDirectoryCount,\n"
    "                              const cDirectoryWrapper * * inDirectories) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n"
    "  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_filewrapper : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n"
    "  private: C_String mCurrentDirectory ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mRootDirectoryPtr ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mRootDirectoryPtr = NULL ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_filewrapper (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n"
    "  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@application type").stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_application : public AC_GALGAS_root {\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return false ; }\n"
    "  public: inline void drop (void) { }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_application (const GALGAS_application & inSource) ;\n"
    "  public: GALGAS_application & operator = (const GALGAS_application & inSource) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @bigint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_bigint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private: bool mIsValid ;\n"
    "  private: C_BigInt mValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: inline C_BigInt bigintValue (void) const { return mValue ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_bigint (void) ;\n"
    "\n"
    "//--------------------------------- Constructor\n"
    "  public: GALGAS_bigint (const C_BigInt & inValue) ;\n"
    "  public: GALGAS_bigint (const char * inDecimalString, C_Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor\n"
    "  public: virtual ~ GALGAS_bigint (void) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @timer type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_timer : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private: bool mIsValid ;\n"
    "  private: C_Timer mTimer ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_timer (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outHeader ; // Returned variable
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  const GALGAS_primitiveTypeForGeneration temp_0 = object ;
  switch (temp_0.getter_mKind (HERE).enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1642))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1644))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1646))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1648))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1650))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1654))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1656))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1658))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1660))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1662))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1664))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1666))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1668))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1670))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1672))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1674))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1676))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1678))) ;
    }
    break ;
  }
  const GALGAS_primitiveTypeForGeneration temp_1 = object ;
  const GALGAS_primitiveTypeForGeneration temp_2 = object ;
  const GALGAS_primitiveTypeForGeneration temp_3 = object ;
  const GALGAS_primitiveTypeForGeneration temp_4 = object ;
  const GALGAS_primitiveTypeForGeneration temp_5 = object ;
  const GALGAS_primitiveTypeForGeneration temp_6 = object ;
  const GALGAS_primitiveTypeForGeneration temp_7 = object ;
  const GALGAS_primitiveTypeForGeneration temp_8 = object ;
  const GALGAS_primitiveTypeForGeneration temp_9 = object ;
  const GALGAS_primitiveTypeForGeneration temp_10 = object ;
  const GALGAS_primitiveTypeForGeneration temp_11 = object ;
  const GALGAS_primitiveTypeForGeneration temp_12 = object ;
  const GALGAS_primitiveTypeForGeneration temp_13 = object ;
  result_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1682)), temp_3.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683)), temp_4.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684)), temp_5.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1685)), temp_6.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1686)), temp_7.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1687)), temp_8.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1688)), temp_9.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1689)), temp_10.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1690)), temp_11.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1691)), temp_12.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1692)), temp_13.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1693)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1680))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1680)) ;
//---
  return result_outHeader ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (void) {
  enterExtensionGetter_appendPrimitiveTypeDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                       extensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (defineExtensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioHeader,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  const GALGAS_primitiveTypeForGeneration temp_0 = object ;
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (temp_0.getter_mPredefinedTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (void) {
  enterExtensionMethod_appendPrimitiveTypePreDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                          extensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (defineExtensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration, NULL) ;

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
  GALGAS_string var_generatedCode_69068 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1716))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_69197 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69197.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69197.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1718)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_69197.current_mDeclaration (HERE).ptr (), var_generatedCode_69068, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1719)) ;
      }
    }
    enumerator_69197.gotoNextObject () ;
  }
  var_generatedCode_69068.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1722)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_69400 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69400.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69400.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1724)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_69068.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_69400.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1725)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1725)) ;
      }
    }
    enumerator_69400.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_69577 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69577.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69577.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1729)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_69662 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1730)) ;
        GALGAS_string var_code_69681 ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_69577.current_mDeclaration (HERE).ptr (), joker_69662, var_code_69681, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1730)) ;
        var_generatedCode_69068.plusAssign_operation(var_code_69681, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1731)) ;
      }
    }
    enumerator_69577.gotoNextObject () ;
  }
  var_generatedCode_69068.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1734))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1734)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_69866 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69866.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69866.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1736)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_stringset joker_69964 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1737)) ;
        GALGAS_string var_headerString_32__69992 ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_69866.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_69964, var_headerString_32__69992, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1737)) ;
        var_generatedCode_69068.plusAssign_operation(var_headerString_32__69992, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1738)) ;
      }
    }
    enumerator_69866.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1741)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1742)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1743)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_generatedCode_69068, GALGAS_string ("\n"
        "\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1744)) ;
      }
    }
  }
  var_generatedCode_69068 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1757))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_70786 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_70786.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_70786.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1759)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_69068.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_70786.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1760)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1760)) ;
        GALGAS_stringset joker_70977 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1761)) ;
        GALGAS_string var_code_70996 ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_70786.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::constructor_emptyMap (SOURCE_FILE ("semanticGeneration.galgas", 1761)), joker_70977, var_code_70996, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1761)) ;
        var_generatedCode_69068.plusAssign_operation(var_code_70996, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1762)) ;
      }
    }
    enumerator_70786.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1765)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1766)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1767)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_generatedCode_69068, GALGAS_string ("\n"
        "\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1768)) ;
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
  result << "#pragma once\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"all-predefined-types.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_330_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_330 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_330.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_330.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_330_.increment () ;
      enumerator_330.gotoNextObject () ;
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
  result << "#include \"galgas2/C_Compiler.h\"\n"
    "#include \"galgas2/C_galgas_io.h\"\n"
    "#include \"galgas2/C_galgas_CLI_Options.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_309_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_309 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_309.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_309.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_309_.increment () ;
      enumerator_309.gotoNextObject () ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_1470 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 23)) ;
  var_attributeList_1470.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 25))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 25)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 28))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 24)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31)), var_attributeList_1470  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 29))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 29)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 34)) ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_2158 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 43)) ;
  var_attributeList_2158.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 45))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 45)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 46))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 46)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 48))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 44)) ;
  var_attributeList_2158.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 50))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 50)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 51))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 51)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 53))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 49)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 57))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 57)), var_attributeList_2158  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 55))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 55)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 60)) ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_2997 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 69)) ;
  var_attributeList_2997.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 71))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 71)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 72))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 72)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 74))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 70)) ;
  var_attributeList_2997.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 76))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 76)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 77))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 77)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 79))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 75)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 83))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 83)), var_attributeList_2997  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 81))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 81)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2lstringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 86)) ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_3819 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 96)) ;
  var_attributeList_3819.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 98))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 98)), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 99))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 99)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 101))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 97)) ;
  var_attributeList_3819.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 103))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 103)), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 104))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 104)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 106))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 102)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 109)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 109))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 109)), var_attributeList_3819, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 107))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 107)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 113)) ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_4698 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 122)) ;
  var_attributeList_4698.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 124))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 124)), GALGAS_lstring::constructor_new (GALGAS_string ("start"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 125))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 125)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 127))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 123)) ;
  var_attributeList_4698.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 129))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 129)), GALGAS_lstring::constructor_new (GALGAS_string ("length"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 130))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 130)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 132))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 128)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("range"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 135))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 135)), var_attributeList_4698, GALGAS_string ("uint")  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 133))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 133)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("range"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 139)) ;
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
  GALGAS_lstring var_typeUsefulnessName_5439 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (constinArgument_inTypeName, GALGAS_location::constructor_nowhere (SOURCE_FILE ("predefinedTypes.galgas", 145))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 145)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_typeUsefulnessName_5439  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 146)) ;
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
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_applicationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("application"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (SOURCE_FILE ("predefinedTypes.galgas", 155))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 155))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 155)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("application"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 156)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_bigintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bigint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (SOURCE_FILE ("predefinedTypes.galgas", 157))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 157))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 157)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 158)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_binarysetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("binaryset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (SOURCE_FILE ("predefinedTypes.galgas", 159))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 159))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 159)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("binaryset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 160)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_boolPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bool"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (SOURCE_FILE ("predefinedTypes.galgas", 161))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 161))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 161)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 162)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_charPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("char"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (SOURCE_FILE ("predefinedTypes.galgas", 163))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 163))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 163)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 164)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_dataPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("data"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (SOURCE_FILE ("predefinedTypes.galgas", 165))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 165))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 165)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("data"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 166)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_doublePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("double"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (SOURCE_FILE ("predefinedTypes.galgas", 167))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 167))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 167)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("double"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 168)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_filewrapperPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (SOURCE_FILE ("predefinedTypes.galgas", 169))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 169))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 169)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("filewrapper"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 170)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_functionPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("function"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (SOURCE_FILE ("predefinedTypes.galgas", 171))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 171))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 171)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("function"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 172)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_locationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("location"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (SOURCE_FILE ("predefinedTypes.galgas", 173))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 173))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 173)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("location"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 174)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_objectPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("object"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (SOURCE_FILE ("predefinedTypes.galgas", 175))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 175))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 175)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("object"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 176)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (SOURCE_FILE ("predefinedTypes.galgas", 177))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 177))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 177)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 178)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 179))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 179))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 179)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 180)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("string"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (SOURCE_FILE ("predefinedTypes.galgas", 181))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 181))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 181)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 182)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringsetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("stringset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (SOURCE_FILE ("predefinedTypes.galgas", 183))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 183))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 183)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("stringset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 184)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_timerPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("timer"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (SOURCE_FILE ("predefinedTypes.galgas", 185))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 185))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 185)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("timer"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 186)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_typePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("type"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (SOURCE_FILE ("predefinedTypes.galgas", 187))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 187))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 187)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("type"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 188)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (SOURCE_FILE ("predefinedTypes.galgas", 189))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 189))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 189)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 190)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 191))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 191))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 191)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 192)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 194)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 195)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 196)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 197)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 198)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 199)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 200)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 201)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 202)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 203)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 205)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 206)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 207)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 208)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 209)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 210)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 211)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 212)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 213)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 215)) ;
  }
  {
  routine_appendPredefined_32_LStringListTypeAST (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 216)) ;
  }
  {
  routine_appendStructASTForRangeType (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 218)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  GALGAS_lstring var_key_11784 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mPredefinedTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 232)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 232))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 232)) ;
  {
  const GALGAS_predefinedTypeAST temp_1 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11784, temp_1, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 233)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                                extensionMethod_predefinedTypeAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_enterDeclarationInGraph (defineExtensionMethod_predefinedTypeAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_12405 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 245)) ;
  GALGAS_constructorMap var_constructorMap_12520 ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  callExtensionMethod_getConstructorMap ((const cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_constructorMap_12520, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 246)) ;
  GALGAS_getterMap var_getterMap_12597 ;
  const GALGAS_predefinedTypeAST temp_1 = object ;
  callExtensionMethod_getGetterMap ((const cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_12597, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 247)) ;
  GALGAS_setterMap var_setterMap_12674 ;
  const GALGAS_predefinedTypeAST temp_2 = object ;
  callExtensionMethod_getSetterMap ((const cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_setterMap_12674, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 248)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12775 ;
  const GALGAS_predefinedTypeAST temp_3 = object ;
  callExtensionMethod_getInstanceMethodMap ((const cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_instanceMethodMap_12775, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 249)) ;
  GALGAS_classMethodMap var_classMethodMap_12867 ;
  const GALGAS_predefinedTypeAST temp_4 = object ;
  callExtensionMethod_getClassMethodMap ((const cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_classMethodMap_12867, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 250)) ;
  GALGAS_functionSignature var_addAssignArgumentList_12976 ;
  const GALGAS_predefinedTypeAST temp_5 = object ;
  callExtensionMethod_getAddAssignArgumentList ((const cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_addAssignArgumentList_12976, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 251)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_13089 ;
  GALGAS_string var_enumeratedTypeName_13125 ;
  const GALGAS_predefinedTypeAST temp_6 = object ;
  callExtensionMethod_getEnumerationList ((const cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_enumerationList_13089, var_enumeratedTypeName_13125, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 252)) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_13282 ;
  {
  const GALGAS_predefinedTypeAST temp_7 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_7.getter_mPredefinedTypeName (HERE), var_selfTypeEntry_13282 COMMA_SOURCE_FILE ("predefinedTypes.galgas", 257)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedTypeEntry_13347 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, var_enumeratedTypeName_13125.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_enumeratedTypeEntry_13347 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("predefinedTypes.galgas", 265)) ;
    }
  }
  if (kBoolFalse == test_8) {
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_enumeratedTypeName_13125, var_enumeratedTypeEntry_13347 COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)) ;
    }
  }
  {
  const GALGAS_predefinedTypeAST temp_9 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, GALGAS_lstring::constructor_new (temp_9.getter_mPredefinedTypeName (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 275))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 275)), var_getterMap_12597, var_setterMap_12674, var_instanceMethodMap_12775, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 270)) ;
  }
  {
  const GALGAS_predefinedTypeAST temp_10 = object ;
  const GALGAS_predefinedTypeAST temp_11 = object ;
  const GALGAS_predefinedTypeAST temp_12 = object ;
  const GALGAS_predefinedTypeAST temp_13 = object ;
  const GALGAS_predefinedTypeAST temp_14 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (temp_10.getter_mPredefinedTypeName (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 282))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 282)), temp_11.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("predefinedTypes.galgas", 285)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("predefinedTypes.galgas", 286)), GALGAS_bool (kIsEqual, temp_12.getter_mPredefinedTypeName (HERE).objectCompare (GALGAS_string ("stringset"))), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 288)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 289)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 290)), var_constructorMap_12520, var_getterMap_12597, var_setterMap_12674, var_instanceMethodMap_12775, var_classMethodMap_12867, var_optionalMethodMap_12405, var_enumerationList_13089, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_13.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 298)), var_addAssignArgumentList_12976, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 300)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 301)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 302)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 303)), GALGAS_bool (false), var_enumeratedTypeEntry_13347, extensionGetter_defaultConstructorName (temp_14.getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 306)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("predefinedTypes.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 281)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                               extensionMethod_predefinedTypeAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_enterInSemanticContext (defineExtensionMethod_predefinedTypeAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_15292 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_0.getter_mPredefinedTypeName (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 323))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 323)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15292, var_nameForUsefulness_15292, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)) ;
  }
  const GALGAS_predefinedTypeAST temp_1 = object ;
  const GALGAS_predefinedTypeAST temp_2 = object ;
  const GALGAS_predefinedTypeAST temp_3 = object ;
  const GALGAS_predefinedTypeAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (temp_1.getter_mPredefinedTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)), GALGAS_primitiveTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_2.getter_mPredefinedTypeName (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 329))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 329)), temp_3.getter_mPredefinedTypeName (HERE), temp_4.getter_mKind (HERE)  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 328))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 326)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                         extensionMethod_predefinedTypeAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_semanticAnalysis (defineExtensionMethod_predefinedTypeAST_semanticAnalysis, NULL) ;

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
    GALGAS_bool test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.getter_value ()) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 36)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_undefinedNodeList_2030 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 38)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsStrictSup, var_undefinedNodeList_2030.getter_length (SOURCE_FILE ("useful-entities-computation.galgas", 39)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string var_s_2132 = GALGAS_string ("usefulness computation, undefined nodes:") ;
          cEnumerator_stringlist enumerator_2215 (var_undefinedNodeList_2030, kENUMERATION_UP) ;
          while (enumerator_2215.hasCurrentObject ()) {
            var_s_2132.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_2215.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 42)) ;
            enumerator_2215.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 44)), var_s_2132, fixItArray3  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 44)) ;
        }
      }
      if (kBoolFalse == test_2) {
        GALGAS_lstringlist var_usefullEntityList_2372 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("useful-entities-computation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 47)) ;
        GALGAS_stringset var_usefullEntitySet_2465 = GALGAS_stringset::constructor_setWithLStringList (var_usefullEntityList_2372  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)) ;
        GALGAS_stringset var_allEntitySet_2541 = GALGAS_stringset::constructor_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 49))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)) ;
        GALGAS_stringset var_unusedEntities_2632 = var_allEntitySet_2541.substract_operation (var_usefullEntitySet_2465, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 50)) ;
        GALGAS_uselessEntityLocationMap var_uselessEntityLocationMap_2723 = GALGAS_uselessEntityLocationMap::constructor_emptyMap (SOURCE_FILE ("useful-entities-computation.galgas", 51)) ;
        cEnumerator_stringset enumerator_2771 (var_unusedEntities_2632, kENUMERATION_UP) ;
        while (enumerator_2771.hasCurrentObject ()) {
          GALGAS_location var_l_2788 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2771.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 53)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, var_l_2788.objectCompare (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 54)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 55)), GALGAS_string ("unused entity, '").add_operation (enumerator_2771.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)).add_operation (GALGAS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)).add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.getter_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)), fixItArray5  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = var_uselessEntityLocationMap_2723.getter_hasKey (var_l_2788.getter_locationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 57)).boolEnum () ;
              if (kBoolTrue == test_6) {
                {
                var_uselessEntityLocationMap_2723.setter_insertKey (var_l_2788.getter_locationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 58)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 58)), var_l_2788, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 58)) ;
                }
              }
            }
          }
          enumerator_2771.gotoNextObject () ;
        }
        cEnumerator_uselessEntityLocationMap enumerator_3264 (var_uselessEntityLocationMap_2723, kENUMERATION_UP) ;
        while (enumerator_3264.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_3264.current_mLocation (HERE), GALGAS_string ("unused entity, due to option --").add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.getter_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)), fixItArray7  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)) ;
          enumerator_3264.gotoNextObject () ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)).add_operation (constinArgument_inGetterName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)), constinArgument_inGetterName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)).add_operation (constinArgument_inSetterName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)), constinArgument_inSetterName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)).add_operation (constinArgument_inMethodName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)), constinArgument_inMethodName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (constinArgument_inLexiqueName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 89)), constinArgument_inLexiqueName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 89)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (constinArgument_inGrammarName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 95)), constinArgument_inGrammarName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 95)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (constinArgument_inSyntaxName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 101)), constinArgument_inSyntaxName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 101)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("option ").add_operation (constinArgument_inOptionName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 107)), constinArgument_inOptionName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 107)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 113)), constinArgument_inFilewrapperName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 113)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)).add_operation (constinArgument_inTemplateName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)), constinArgument_inTemplateName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("function ").add_operation (constinArgument_inFunctionName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)), constinArgument_inFunctionName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("procedure ").add_operation (constinArgument_inProcName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 132)), constinArgument_inProcName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 132)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("type @").add_operation (constinArgument_inTypeName.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 138)), constinArgument_inTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 138)) ;
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
                                                         C_Compiler * /* inCompiler */
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
                                                          C_Compiler * /* inCompiler */
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("rule .").add_operation (constinArgument_inFileExtension.getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 156)), constinArgument_inFileExtension.getter_location (SOURCE_FILE ("useful-entities-computation.galgas", 156))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 156)) ;
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

static void extensionMethod_ifExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  const GALGAS_ifExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mIfExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
  const GALGAS_ifExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mThenExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 49)) ;
  const GALGAS_ifExpressionAST temp_2 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_2.getter_mElseExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 50)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                         extensionMethod_ifExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_ifExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_2686 ;
  const GALGAS_ifExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mIfExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression_2686, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 64)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_2773 ;
  const GALGAS_ifExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mThenExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression_2773, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 74)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_3048 ;
  const GALGAS_ifExpressionAST temp_2 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_2.getter_mElseExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression_3048, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 84)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_if_5F_expression_2686.getter_mResultType (SOURCE_FILE ("expression-if.galgas", 93)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 93)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ifExpressionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mOperatorLocation (HERE), GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression_2686.getter_mResultType (SOURCE_FILE ("expression-if.galgas", 95)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 95)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 95)), fixItArray5  COMMA_SOURCE_FILE ("expression-if.galgas", 94)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, var_then_5F_expression_2773.getter_mResultType (SOURCE_FILE ("expression-if.galgas", 97)).objectCompare (var_else_5F_expression_3048.getter_mResultType (SOURCE_FILE ("expression-if.galgas", 97)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_ifExpressionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mOperatorLocation (HERE), GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression_2773.getter_mResultType (SOURCE_FILE ("expression-if.galgas", 99)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 99)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 99)).add_operation (var_else_5F_expression_3048.getter_mResultType (SOURCE_FILE ("expression-if.galgas", 99)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 99)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 99)), fixItArray8  COMMA_SOURCE_FILE ("expression-if.galgas", 98)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_ifExpressionAST temp_9 = object ;
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression_2773.getter_mResultType (SOURCE_FILE ("expression-if.galgas", 104)), temp_9.getter_mOperatorLocation (HERE), var_if_5F_expression_2686, var_then_5F_expression_2773, var_else_5F_expression_3048  COMMA_SOURCE_FILE ("expression-if.galgas", 103)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                  extensionMethod_ifExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeSemanticExpression (defineExtensionMethod_ifExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionForGeneration * object = (const cPtr_ifExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionForGeneration) ;
  GALGAS_string var_ifExpression_5039 ;
  const GALGAS_ifExpressionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mIfExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_5039, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 133)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 141)) ;
  const GALGAS_ifExpressionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mThenExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-if.galgas", 142)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 142)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 142)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 142)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 142)) ;
  GALGAS_string var_testVar_5302 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 143)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 143)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_5302, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 144)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 144)).add_operation (var_ifExpression_5039, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 144)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_5302, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 145)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 147)) ;
  }
  GALGAS_string var_thenExpression_5773 ;
  const GALGAS_ifExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mThenExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_5773, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 148)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 155)).add_operation (var_thenExpression_5773, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 155)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 155)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 156)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_5302, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 158)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 158)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 159)) ;
  }
  GALGAS_string var_elseExpression_6194 ;
  const GALGAS_ifExpressionForGeneration temp_3 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_3.getter_mElseExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_6194, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 160)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 167)).add_operation (var_elseExpression_6194, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 167)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 167)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 169)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_ifExpressionForGeneration.mSlotID,
                                           extensionMethod_ifExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifExpressionForGeneration_generateExpression (defineExtensionMethod_ifExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  const GALGAS_unaryPlusExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                         extensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  const GALGAS_unaryPlusExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-unary-plus.galgas", 52)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 49)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2307 = outArgument_outExpression.getter_mResultType (SOURCE_FILE ("expression-unary-plus.galgas", 58)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_2307.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 59)).getter_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas", 59)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas", 59)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryPlusExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mOperatorLocation (HERE), GALGAS_string ("operand type is '@").add_operation (var_type_2307.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 61)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 61)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 60)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                  extensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  const GALGAS_unaryMinusExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                         extensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2296 ;
  const GALGAS_unaryMinusExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-unary-minus.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2296, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2366 = var_expression_2296.getter_mResultType (SOURCE_FILE ("expression-unary-minus.galgas", 59)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_2406 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_2296.ptr ())) ;
    if (NULL == var_exp_2406.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_2406.getter_mResultType (SOURCE_FILE ("expression-unary-minus.galgas", 62)), var_exp_2406.getter_mLocation (SOURCE_FILE ("expression-unary-minus.galgas", 63)), var_exp_2406.getter_mValue (SOURCE_FILE ("expression-unary-minus.galgas", 64)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 64))  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 61)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_type_2366.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 66)).getter_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas", 66)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas", 66)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_unaryMinusExpressionAST temp_3 = object ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.getter_mOperatorLocation (HERE), GALGAS_string ("operand type is '@").add_operation (var_type_2366.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 68)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 68)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 67)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_unaryMinusExpressionAST temp_5 = object ;
      outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_2366, temp_5.getter_mOperatorLocation (HERE), var_expression_2296  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 72)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                  extensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryMinusExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionForGeneration * object = (const cPtr_unaryMinusExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionForGeneration) ;
  const GALGAS_unaryMinusExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-unary-minus.galgas", 97)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 97)) ;
  GALGAS_string var_operand_3991 ;
  const GALGAS_unaryMinusExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_3991, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 99)) ;
  const GALGAS_unaryMinusExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_3991.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 107)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 107)).add_operation (extensionGetter_commaSourceFile (temp_2.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 107)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 107)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 108)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 108)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryMinusExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration.mSlotID,
                                           extensionMethod_unaryMinusExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryMinusExpressionForGeneration_generateExpression (defineExtensionMethod_unaryMinusExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                         extensionMethod_varInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_varInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_1958 ;
  GALGAS_string var_sourceVariableCppName_1997 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_2050 ;
  {
  const GALGAS_varInExpressionAST temp_0 = object ;
  ioArgument_ioVariableMap.setter_searchForReadAccess (temp_0.getter_mVarName (HERE), var_type_1958, var_sourceVariableCppName_1997, var_nameForCheckingFormalParameterUsing_2050, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 45)) ;
  }
  const GALGAS_varInExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_1958, temp_1.getter_mVarName (HERE).getter_location (SOURCE_FILE ("expression-var.galgas", 53)), var_sourceVariableCppName_1997, var_nameForCheckingFormalParameterUsing_2050  COMMA_SOURCE_FILE ("expression-var.galgas", 51)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                  extensionMethod_varInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_varInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionForGeneration * object = (const cPtr_varInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionForGeneration) ;
  const GALGAS_varInExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 77)) ;
  const GALGAS_varInExpressionForGeneration temp_1 = object ;
  outArgument_outCppExpression = temp_1.getter_mCppVarName (HERE) ;
  {
  const GALGAS_varInExpressionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("expression-var.galgas", 79)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_varInExpressionForGeneration.mSlotID,
                                           extensionMethod_varInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varInExpressionForGeneration_generateExpression (defineExtensionMethod_varInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_trueExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_trueExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                         extensionMethod_trueExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_trueExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_trueExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_trueExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_trueExpressionAST * object = (const cPtr_trueExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_trueExpressionAST) ;
  const GALGAS_trueExpressionAST temp_0 = object ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_0.getter_mLocation (HERE)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 58)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_trueExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                  extensionMethod_trueExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_trueExpressionAST_analyzeSemanticExpression (defineExtensionMethod_trueExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_falseExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_falseExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                         extensionMethod_falseExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_falseExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_falseExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_falseExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_falseExpressionAST * object = (const cPtr_falseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_falseExpressionAST) ;
  const GALGAS_falseExpressionAST temp_0 = object ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_0.getter_mLocation (HERE)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 78)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_falseExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                  extensionMethod_falseExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_falseExpressionAST_analyzeSemanticExpression (defineExtensionMethod_falseExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_trueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                            GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (true)") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_trueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                           extensionMethod_trueExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_trueExpressionForGeneration_generateExpression (defineExtensionMethod_trueExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_falseExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                             GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (false)") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_falseExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_falseExpressionForGeneration.mSlotID,
                                           extensionMethod_falseExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_falseExpressionForGeneration_generateExpression (defineExtensionMethod_falseExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpressionForGeneration isTrueExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_trueExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_trueExpressionForGeneration_isTrueExpression (void) {
  enterExtensionGetter_isTrueExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                         extensionGetter_trueExpressionForGeneration_isTrueExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_trueExpressionForGeneration_isTrueExpression (defineExtensionGetter_trueExpressionForGeneration_isTrueExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                         extensionMethod_literalStringExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalStringExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionAST * object = (const cPtr_literalStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionAST) ;
  GALGAS_string var_s_2083 = GALGAS_string::makeEmptyString () ;
  const GALGAS_literalStringExpressionAST temp_0 = object ;
  cEnumerator_stringlist enumerator_2121 (temp_0.getter_mStringSequence (HERE), kENUMERATION_UP) ;
  while (enumerator_2121.hasCurrentObject ()) {
    var_s_2083.plusAssign_operation(enumerator_2121.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)) ;
    enumerator_2121.gotoNextObject () ;
  }
  const GALGAS_literalStringExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), temp_1.getter_mLocation (HERE), var_s_2083  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 55)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                  extensionMethod_literalStringExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalStringExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionForGeneration * object = (const cPtr_literalStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_literalStringExpressionForGeneration temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mString (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_string::makeEmptyString ()") ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_literalStringExpressionForGeneration temp_2 = object ;
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (temp_2.getter_mString (HERE).getter_utf_38_Representation (SOURCE_FILE ("expression-literal-string.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 77)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 77)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalStringExpressionForGeneration.mSlotID,
                                           extensionMethod_literalStringExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringExpressionForGeneration_generateExpression (defineExtensionMethod_literalStringExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalCharExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalCharExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                         extensionMethod_literalCharExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalCharExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalCharExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalCharExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionAST * object = (const cPtr_literalCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionAST) ;
  const GALGAS_literalCharExpressionAST temp_0 = object ;
  const GALGAS_literalCharExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mCharType (HERE), temp_0.getter_mCharacter (HERE).getter_location (SOURCE_FILE ("expression-literal-char.galgas", 47)), temp_1.getter_mCharacter (HERE).getter_char (SOURCE_FILE ("expression-literal-char.galgas", 48))  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 45)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalCharExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                  extensionMethod_literalCharExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalCharExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalCharExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionForGeneration * object = (const cPtr_literalCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionForGeneration) ;
  const GALGAS_literalCharExpressionForGeneration temp_0 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (temp_0.getter_mCharacter (HERE).getter_uint (SOURCE_FILE ("expression-literal-char.galgas", 68)).getter_string (SOURCE_FILE ("expression-literal-char.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 68)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 68)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalCharExpressionForGeneration.mSlotID,
                                           extensionMethod_literalCharExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalCharExpressionForGeneration_generateExpression (defineExtensionMethod_literalCharExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                         extensionMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalDoubleExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionAST * object = (const cPtr_literalDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionAST) ;
  const GALGAS_literalDoubleExpressionAST temp_0 = object ;
  const GALGAS_literalDoubleExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mDoubleType (HERE), temp_0.getter_mValue (HERE).getter_location (SOURCE_FILE ("expression-literal-double.galgas", 47)), temp_1.getter_mValue (HERE).getter_double (SOURCE_FILE ("expression-literal-double.galgas", 48))  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 45)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalDoubleExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                  extensionMethod_literalDoubleExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalDoubleExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalDoubleExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionForGeneration * object = (const cPtr_literalDoubleExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionForGeneration) ;
  const GALGAS_literalDoubleExpressionForGeneration temp_0 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (temp_0.getter_mValue (HERE).getter_string (SOURCE_FILE ("expression-literal-double.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 69)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 69)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalDoubleExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration.mSlotID,
                                           extensionMethod_literalDoubleExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalDoubleExpressionForGeneration_generateExpression (defineExtensionMethod_literalDoubleExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                         extensionMethod_literalUIntExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalUIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalUIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionAST * object = (const cPtr_literalUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionAST) ;
  const GALGAS_literalUIntExpressionAST temp_0 = object ;
  const GALGAS_literalUIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), temp_0.getter_mValue (HERE).getter_location (SOURCE_FILE ("expression-literal-integer.galgas", 99)), temp_1.getter_mValue (HERE).getter_uint (SOURCE_FILE ("expression-literal-integer.galgas", 100))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 97)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalUIntExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                  extensionMethod_literalUIntExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalUIntExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalUIntExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                         extensionMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                        const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionAST * object = (const cPtr_literalUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionAST) ;
  const GALGAS_literalUInt_36__34_ExpressionAST temp_0 = object ;
  const GALGAS_literalUInt_36__34_ExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUInt_36__34_Type (HERE), temp_0.getter_mValue (HERE).getter_location (SOURCE_FILE ("expression-literal-integer.galgas", 123)), temp_1.getter_mValue (HERE).getter_uint_36__34_ (SOURCE_FILE ("expression-literal-integer.galgas", 124))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 121)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                  extensionMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                         extensionMethod_literalSIntExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalSIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalSIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionAST * object = (const cPtr_literalSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionAST) ;
  const GALGAS_literalSIntExpressionAST temp_0 = object ;
  const GALGAS_literalSIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mSIntType (HERE), temp_0.getter_mValue (HERE).getter_location (SOURCE_FILE ("expression-literal-integer.galgas", 145)), temp_1.getter_mValue (HERE).getter_sint (SOURCE_FILE ("expression-literal-integer.galgas", 145))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 145)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalSIntExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                  extensionMethod_literalSIntExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalSIntExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalSIntExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                         extensionMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                        const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionAST * object = (const cPtr_literalSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionAST) ;
  const GALGAS_literalSInt_36__34_ExpressionAST temp_0 = object ;
  const GALGAS_literalSInt_36__34_ExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mSInt_36__34_Type (HERE), temp_0.getter_mValue (HERE).getter_location (SOURCE_FILE ("expression-literal-integer.galgas", 167)), temp_1.getter_mValue (HERE).getter_sint_36__34_ (SOURCE_FILE ("expression-literal-integer.galgas", 168))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 165)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                  extensionMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalBigIntExpressionAST.mSlotID,
                                                         extensionMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalBigIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionAST * object = (const cPtr_literalBigIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionAST) ;
  const GALGAS_literalBigIntExpressionAST temp_0 = object ;
  const GALGAS_literalBigIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_0.getter_mValue (HERE).getter_location (SOURCE_FILE ("expression-literal-integer.galgas", 191)), temp_1.getter_mValue (HERE).getter_bigint (SOURCE_FILE ("expression-literal-integer.galgas", 192))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 189)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalBigIntExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionAST.mSlotID,
                                                  extensionMethod_literalBigIntExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalBigIntExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalBigIntExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalUIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionForGeneration * object = (const cPtr_literalUIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionForGeneration) ;
  const GALGAS_literalUIntExpressionForGeneration temp_0 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint ((uint32_t) ").add_operation (temp_0.getter_mValue (HERE).getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 212)).add_operation (GALGAS_string ("U)"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 212)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalUIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalUIntExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalUIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalUIntExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionForGeneration * object = (const cPtr_literalUInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
  const GALGAS_literalUInt_36__34_ExpressionForGeneration temp_0 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ ((uint64_t) ").add_operation (temp_0.getter_mValue (HERE).getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 229)).add_operation (GALGAS_string ("ULL)"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 229)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration.mSlotID,
                                           extensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (defineExtensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalSIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionForGeneration * object = (const cPtr_literalSIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionForGeneration) ;
  const GALGAS_literalSIntExpressionForGeneration temp_0 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint ((int32_t) ").add_operation (temp_0.getter_mValue (HERE).getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 246)).add_operation (GALGAS_string ("L)"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 246)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalSIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalSIntExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalSIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalSIntExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionForGeneration * object = (const cPtr_literalSInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
  const GALGAS_literalSInt_36__34_ExpressionForGeneration temp_0 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ ((int64_t) ").add_operation (temp_0.getter_mValue (HERE).getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 263)).add_operation (GALGAS_string ("LL)"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 263)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration.mSlotID,
                                           extensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (defineExtensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalBigIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionForGeneration * object = (const cPtr_literalBigIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionForGeneration) ;
  const GALGAS_literalBigIntExpressionForGeneration temp_0 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (temp_0.getter_mValue (HERE).getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 281)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 281)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 282)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 282)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 283)) ;
  const GALGAS_literalBigIntExpressionForGeneration temp_1 = object ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 284)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 284)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalBigIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalBigIntExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalBigIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalBigIntExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_comparisonExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonExpressionAST * object = (const cPtr_comparisonExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonExpressionAST) ;
  const GALGAS_comparisonExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 84)) ;
  const GALGAS_comparisonExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 85)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_comparisonExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_comparisonExpressionAST.mSlotID,
                                                         extensionMethod_comparisonExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_comparisonExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_comparisonExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_comparisonExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonExpressionAST * object = (const cPtr_comparisonExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_4155 ;
  const GALGAS_comparisonExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_4155, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 99)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_4196 = var_leftExpression_4155.getter_mResultType (SOURCE_FILE ("expression-comparison.galgas", 107)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_4483 ;
  const GALGAS_comparisonExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_4196, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_4483, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 109)) ;
  GALGAS_string var_operatorName_4533 ;
  const GALGAS_comparisonExpressionAST temp_2 = object ;
  switch (temp_2.getter_mComparison (HERE).enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
    {
      var_operatorName_4533 = GALGAS_string ("==") ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
    {
      var_operatorName_4533 = GALGAS_string ("!=") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_4533 = GALGAS_string ("<=") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_4533 = GALGAS_string ("<") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_4533 = GALGAS_string (">=") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_4533 = GALGAS_string (">") ;
    }
    break ;
  }
  {
  const GALGAS_comparisonExpressionAST temp_3 = object ;
  routine_checkDiadicOperator (var_leftType_4196, var_rightExpression_4483.getter_mResultType (SOURCE_FILE ("expression-comparison.galgas", 130)), GALGAS_bool (true), var_operatorName_4533, temp_3.getter_mOperatorLocation (HERE), var_rightExpression_4483, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 128)) ;
  }
  const GALGAS_comparisonExpressionAST temp_4 = object ;
  const GALGAS_comparisonExpressionAST temp_5 = object ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_4.getter_mOperatorLocation (HERE), var_leftExpression_4155, temp_5.getter_mComparison (HERE), var_rightExpression_4483  COMMA_SOURCE_FILE ("expression-comparison.galgas", 137)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_comparisonExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_comparisonExpressionAST.mSlotID,
                                                  extensionMethod_comparisonExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_comparisonExpressionAST_analyzeSemanticExpression (defineExtensionMethod_comparisonExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_comparisonExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonExpressionForGeneration * object = (const cPtr_comparisonExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonExpressionForGeneration) ;
  const GALGAS_comparisonExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mLeftExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-comparison.galgas", 164)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 164)) ;
  GALGAS_string var_leftTemporaryOperand_6198 ;
  const GALGAS_comparisonExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mLeftExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_6198, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 167)) ;
  GALGAS_string var_rightTemporaryOperand_6406 ;
  const GALGAS_comparisonExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mRightExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_6406, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 170)) ;
  GALGAS_string var_operatorName_6611 ;
  const GALGAS_comparisonExpressionForGeneration temp_3 = object ;
  switch (temp_3.getter_mComparison (HERE).enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
    {
      var_operatorName_6611 = GALGAS_string ("kIsEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
    {
      var_operatorName_6611 = GALGAS_string ("kIsNotEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_6611 = GALGAS_string ("kIsInfOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_6611 = GALGAS_string ("kIsStrictInf") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_6611 = GALGAS_string ("kIsSupOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_6611 = GALGAS_string ("kIsStrictSup") ;
    }
    break ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_operatorName_6611, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)).add_operation (var_leftTemporaryOperand_6198, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)).add_operation (var_rightTemporaryOperand_6406, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_comparisonExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_comparisonExpressionForGeneration.mSlotID,
                                           extensionMethod_comparisonExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_comparisonExpressionForGeneration_generateExpression (defineExtensionMethod_comparisonExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  const GALGAS_rightShiftExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 112)) ;
  const GALGAS_rightShiftExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 113)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                         extensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_rightShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_5192 ;
  const GALGAS_rightShiftExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_5192, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 127)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_5493 ;
  const GALGAS_rightShiftExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_5493, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 136)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_5567 = var_leftExpression_5192.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 145)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_5612 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_5192.ptr ())) ;
    if (NULL == var_left_5612.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_5686 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_5493.ptr ())) ;
      if (NULL == var_right_5686.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_rightShiftExpressionAST temp_3 = object ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_3.getter_mOperatorLocation (HERE), var_left_5612.getter_mValue (SOURCE_FILE ("expression-additive.galgas", 151)).right_shift_operation (var_right_5686.getter_mValue (SOURCE_FILE ("expression-additive.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 151))  COMMA_SOURCE_FILE ("expression-additive.galgas", 148)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_5963 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_5192.ptr ())) ;
      if (NULL == var_left_5963.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_6037 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_5493.ptr ())) ;
        if (NULL == var_right_6037.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_rightShiftExpressionAST temp_5 = object ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_5.getter_mOperatorLocation (HERE), var_left_5963.getter_mValue (SOURCE_FILE ("expression-additive.galgas", 158)).right_shift_operation (var_right_6037.getter_mValue (SOURCE_FILE ("expression-additive.galgas", 158)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 158))  COMMA_SOURCE_FILE ("expression-additive.galgas", 155)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_leftType_5567.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 160)).getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 160)).operator_not (SOURCE_FILE ("expression-additive.galgas", 160)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_rightShiftExpressionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.getter_mOperatorLocation (HERE), GALGAS_string ("left operand type is '@").add_operation (var_leftType_5567.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 162)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 162)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 161)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_rightShiftExpressionAST temp_9 = object ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_5567, temp_9.getter_mOperatorLocation (HERE), var_leftExpression_5192, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("expression-additive.galgas", 170)), var_rightExpression_5493  COMMA_SOURCE_FILE ("expression-additive.galgas", 166)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_rightShiftExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                  extensionMethod_rightShiftExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_rightShiftExpressionAST_analyzeSemanticExpression (defineExtensionMethod_rightShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  const GALGAS_leftShiftExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 181)) ;
  const GALGAS_leftShiftExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 182)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                         extensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_leftShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_7832 ;
  const GALGAS_leftShiftExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_7832, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 196)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8133 ;
  const GALGAS_leftShiftExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_8133, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 205)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_8207 = var_leftExpression_7832.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 214)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_8252 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_7832.ptr ())) ;
    if (NULL == var_left_8252.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_8326 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_8133.ptr ())) ;
      if (NULL == var_right_8326.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_leftShiftExpressionAST temp_3 = object ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_3.getter_mOperatorLocation (HERE), var_left_8252.getter_mValue (SOURCE_FILE ("expression-additive.galgas", 220)).left_shift_operation (var_right_8326.getter_mValue (SOURCE_FILE ("expression-additive.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 220))  COMMA_SOURCE_FILE ("expression-additive.galgas", 217)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_8603 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_7832.ptr ())) ;
      if (NULL == var_left_8603.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_8677 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_8133.ptr ())) ;
        if (NULL == var_right_8677.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_leftShiftExpressionAST temp_5 = object ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_5.getter_mOperatorLocation (HERE), var_left_8603.getter_mValue (SOURCE_FILE ("expression-additive.galgas", 227)).left_shift_operation (var_right_8677.getter_mValue (SOURCE_FILE ("expression-additive.galgas", 227)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 227))  COMMA_SOURCE_FILE ("expression-additive.galgas", 224)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_leftType_8207.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 229)).getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 229)).operator_not (SOURCE_FILE ("expression-additive.galgas", 229)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_leftShiftExpressionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.getter_mOperatorLocation (HERE), GALGAS_string ("left operand type is '@").add_operation (var_leftType_8207.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 231)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 231)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 230)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_leftShiftExpressionAST temp_9 = object ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_8207, temp_9.getter_mOperatorLocation (HERE), var_leftExpression_7832, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("expression-additive.galgas", 239)), var_rightExpression_8133  COMMA_SOURCE_FILE ("expression-additive.galgas", 235)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_leftShiftExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                  extensionMethod_leftShiftExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_leftShiftExpressionAST_analyzeSemanticExpression (defineExtensionMethod_leftShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  const GALGAS_addExpressionNoOverflowAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 250)) ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 251)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_10479 ;
  const GALGAS_addExpressionNoOverflowAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_10479, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 265)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10758 ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10479.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 277)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_10758, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 274)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_10832 = var_leftExpression_10479.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 283)) ;
  {
  const GALGAS_addExpressionNoOverflowAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_10832, var_rightExpression_10758.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 286)), var_leftType_10832.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 287)).getter_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 287)), GALGAS_string ("&+"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_10758, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 284)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_11109 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_10479.ptr ())) ;
    if (NULL == var_leftBigint_11109.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_11190 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_10758.ptr ())) ;
      if (NULL == var_rightBigint_11190.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionNoOverflowAST temp_4 = object ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_4.getter_mOperatorLocation (HERE), var_leftBigint_11109.getter_mValue (HERE).add_operation (var_rightBigint_11190.getter_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 298))  COMMA_SOURCE_FILE ("expression-additive.galgas", 295)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionNoOverflowAST temp_5 = object ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_10832, temp_5.getter_mOperatorLocation (HERE), var_leftExpression_10479, GALGAS_binaryOperator::constructor_addNoOverflow (SOURCE_FILE ("expression-additive.galgas", 305)), var_rightExpression_10758  COMMA_SOURCE_FILE ("expression-additive.galgas", 301)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  const GALGAS_addExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 316)) ;
  const GALGAS_addExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 317)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                         extensionMethod_addExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_addExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_12728 ;
  const GALGAS_addExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_12728, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 330)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13007 ;
  const GALGAS_addExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12728.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 342)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_13007, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 339)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_13081 = var_leftExpression_12728.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 348)) ;
  {
  const GALGAS_addExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_13081, var_rightExpression_13007.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 351)), var_leftType_13081.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 352)).getter_infixAddOperator (SOURCE_FILE ("expression-additive.galgas", 352)), GALGAS_string ("+"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_13007, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 349)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_13352 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_12728.ptr ())) ;
    if (NULL == var_leftBigint_13352.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_13433 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_13007.ptr ())) ;
      if (NULL == var_rightBigint_13433.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionAST temp_4 = object ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_4.getter_mOperatorLocation (HERE), var_leftBigint_13352.getter_mValue (HERE).add_operation (var_rightBigint_13433.getter_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 363))  COMMA_SOURCE_FILE ("expression-additive.galgas", 360)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionAST temp_5 = object ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_13081, temp_5.getter_mOperatorLocation (HERE), var_leftExpression_12728, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("expression-additive.galgas", 370)), var_rightExpression_13007  COMMA_SOURCE_FILE ("expression-additive.galgas", 366)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                  extensionMethod_addExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addExpressionAST_analyzeSemanticExpression (defineExtensionMethod_addExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  const GALGAS_subExpressionNoOverflowAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 381)) ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 382)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_14981 ;
  const GALGAS_subExpressionNoOverflowAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_14981, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 396)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15260 ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14981.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 408)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_15260, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 405)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_15334 = var_leftExpression_14981.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 414)) ;
  {
  const GALGAS_subExpressionNoOverflowAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_15334, var_rightExpression_15260.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 417)), var_leftType_15334.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 418)).getter_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 418)), GALGAS_string ("&-"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_15260, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 415)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_15611 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14981.ptr ())) ;
    if (NULL == var_leftBigint_15611.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_15692 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_15260.ptr ())) ;
      if (NULL == var_rightBigint_15692.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionNoOverflowAST temp_4 = object ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_4.getter_mOperatorLocation (HERE), var_leftBigint_15611.getter_mValue (HERE).substract_operation (var_rightBigint_15692.getter_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 429))  COMMA_SOURCE_FILE ("expression-additive.galgas", 426)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionNoOverflowAST temp_5 = object ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_15334, temp_5.getter_mOperatorLocation (HERE), var_leftExpression_14981, GALGAS_binaryOperator::constructor_subNoOverflow (SOURCE_FILE ("expression-additive.galgas", 436)), var_rightExpression_15260  COMMA_SOURCE_FILE ("expression-additive.galgas", 432)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_subExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  const GALGAS_subExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 447)) ;
  const GALGAS_subExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 448)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_subExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                         extensionMethod_subExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_subExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_subExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_subExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_17230 ;
  const GALGAS_subExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_17230, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 461)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17509 ;
  const GALGAS_subExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_17230.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 473)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_17509, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 470)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_17583 = var_leftExpression_17230.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 479)) ;
  {
  const GALGAS_subExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_17583, var_rightExpression_17509.getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 482)), var_leftType_17583.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 483)).getter_infixSubOperator (SOURCE_FILE ("expression-additive.galgas", 483)), GALGAS_string ("-"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_17509, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 480)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_17854 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_17230.ptr ())) ;
    if (NULL == var_leftBigint_17854.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_17935 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17509.ptr ())) ;
      if (NULL == var_rightBigint_17935.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionAST temp_4 = object ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), temp_4.getter_mOperatorLocation (HERE), var_leftBigint_17854.getter_mValue (HERE).substract_operation (var_rightBigint_17935.getter_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 494))  COMMA_SOURCE_FILE ("expression-additive.galgas", 491)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionAST temp_5 = object ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_17583, temp_5.getter_mOperatorLocation (HERE), var_leftExpression_17230, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("expression-additive.galgas", 501)), var_rightExpression_17509  COMMA_SOURCE_FILE ("expression-additive.galgas", 497)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_subExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                  extensionMethod_subExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_subExpressionAST_analyzeSemanticExpression (defineExtensionMethod_subExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperatorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binaryOperatorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperatorExpressionForGeneration * object = (const cPtr_binaryOperatorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperatorExpressionForGeneration) ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mLeftExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-additive.galgas", 544)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 544)) ;
  GALGAS_string var_leftTemporaryOperand_19796 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mLeftExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19796, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 547)) ;
  GALGAS_string var_rightTemporaryOperand_20004 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mRightExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20004, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 550)) ;
  GALGAS_string var_operatorString_20213 ;
  GALGAS_bool var_hasCompilerOption_20239 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_3 = object ;
  switch (temp_3.getter_mOperator (HERE).enumValue ()) {
  case GALGAS_binaryOperator::kNotBuilt:
    break ;
  case GALGAS_binaryOperator::kEnum_rightShift:
    {
      var_operatorString_20213 = GALGAS_string ("right_shift_operation") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_leftShift:
    {
      var_operatorString_20213 = GALGAS_string ("left_shift_operation") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_add:
    {
      var_operatorString_20213 = GALGAS_string ("add_operation") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_addNoOverflow:
    {
      var_operatorString_20213 = GALGAS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_sub:
    {
      var_operatorString_20213 = GALGAS_string ("substract_operation") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_subNoOverflow:
    {
      var_operatorString_20213 = GALGAS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_and:
    {
      var_operatorString_20213 = GALGAS_string ("operator_and") ;
      var_hasCompilerOption_20239 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_or:
    {
      var_operatorString_20213 = GALGAS_string ("operator_or") ;
      var_hasCompilerOption_20239 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_xor:
    {
      var_operatorString_20213 = GALGAS_string ("operator_xor") ;
      var_hasCompilerOption_20239 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_20213 = GALGAS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation:
    {
      var_operatorString_20213 = GALGAS_string ("multiply_operation") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation:
    {
      var_operatorString_20213 = GALGAS_string ("divide_operation") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_20213 = GALGAS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_modulo_5F_operation:
    {
      var_operatorString_20213 = GALGAS_string ("modulo_operation") ;
      var_hasCompilerOption_20239 = GALGAS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_19796.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 598)).add_operation (var_operatorString_20213, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 598)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 598)) ;
  outArgument_outCppExpression.plusAssign_operation(var_rightTemporaryOperand_20004, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 599)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_hasCompilerOption_20239.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 601)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 601)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 602)) COMMA_SOURCE_FILE ("expression-additive.galgas", 602)) ;
      }
    }
  }
  const GALGAS_binaryOperatorExpressionForGeneration temp_5 = object ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_5.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 604)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 604)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binaryOperatorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration.mSlotID,
                                           extensionMethod_binaryOperatorExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binaryOperatorExpressionForGeneration_generateExpression (defineExtensionMethod_binaryOperatorExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  const GALGAS_testDynamicClassInExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 84)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                         extensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_3322 ;
  const GALGAS_testDynamicClassInExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-cast-expression.galgas", 102)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3322, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 99)) ;
  const GALGAS_testDynamicClassInExpressionAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_castType_3575 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_1.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 108)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_expression_3322.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 110)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 110)).getter_isClassType (SOURCE_FILE ("expression-cast-expression.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMap_2D_entry var_t_3858 = var_castType_3575 ;
      GALGAS_bool var_found_3885 = GALGAS_bool (kIsEqual, var_t_3858.objectCompare (var_expression_3322.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 113)))) ;
      if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("expression-cast-expression.galgas", 114)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 114)).isValid ()) {
        uint32_t variant_3926 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("expression-cast-expression.galgas", 114)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 114)).uintValue () ;
        bool loop_3926 = true ;
        while (loop_3926) {
          loop_3926 = var_found_3885.operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 115)).operator_and (var_t_3858.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 115)).getter_isNull (SOURCE_FILE ("expression-cast-expression.galgas", 115)).operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 115)) COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 115)).isValid () ;
          if (loop_3926) {
            loop_3926 = var_found_3885.operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 115)).operator_and (var_t_3858.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 115)).getter_isNull (SOURCE_FILE ("expression-cast-expression.galgas", 115)).operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 115)) COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 115)).boolValue () ;
          }
          if (loop_3926 && (0 == variant_3926)) {
            loop_3926 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-cast-expression.galgas", 114)) ;
          }
          if (loop_3926) {
            variant_3926 -- ;
            var_t_3858 = var_t_3858.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 116)) ;
            var_found_3885 = GALGAS_bool (kIsEqual, var_t_3858.objectCompare (var_expression_3322.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 117)))) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_3885.operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 119)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_testDynamicClassInExpressionAST temp_4 = object ;
          const GALGAS_testDynamicClassInExpressionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-cast-expression.galgas", 120)), GALGAS_string ("the '@").add_operation (temp_5.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("expression-cast-expression.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 121)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 121)).add_operation (var_expression_3322.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 121)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 121)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 121)), fixItArray6  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 120)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_3322.getter_mLocation (SOURCE_FILE ("expression-cast-expression.galgas", 124)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_3322.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 125)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 124)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 125)), fixItArray7  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 124)) ;
  }
  const GALGAS_testDynamicClassInExpressionAST temp_8 = object ;
  const GALGAS_testDynamicClassInExpressionAST temp_9 = object ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_8.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-cast-expression.galgas", 130)), var_expression_3322, temp_9.getter_mTypeComparisonKind (HERE), var_castType_3575  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 128)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                  extensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_castInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  const GALGAS_castInExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 141)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_castInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                         extensionMethod_castInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_castInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_castInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_castInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_5725 ;
  const GALGAS_castInExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-cast-expression.galgas", 158)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5725, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 155)) ;
  const GALGAS_castInExpressionAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_5768 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_1.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 164)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_expression_5725.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 169)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 169)).getter_isClassType (SOURCE_FILE ("expression-cast-expression.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMap_2D_entry var_t_6066 = var_type_5768 ;
      GALGAS_bool var_found_6089 = GALGAS_bool (kIsEqual, var_t_6066.objectCompare (var_expression_5725.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 172)))) ;
      if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("expression-cast-expression.galgas", 173)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 173)).isValid ()) {
        uint32_t variant_6130 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("expression-cast-expression.galgas", 173)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 173)).uintValue () ;
        bool loop_6130 = true ;
        while (loop_6130) {
          loop_6130 = var_found_6089.operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 174)).operator_and (var_t_6066.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 174)).getter_isNull (SOURCE_FILE ("expression-cast-expression.galgas", 174)).operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 174)) COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 174)).isValid () ;
          if (loop_6130) {
            loop_6130 = var_found_6089.operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 174)).operator_and (var_t_6066.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 174)).getter_isNull (SOURCE_FILE ("expression-cast-expression.galgas", 174)).operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 174)) COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 174)).boolValue () ;
          }
          if (loop_6130 && (0 == variant_6130)) {
            loop_6130 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-cast-expression.galgas", 173)) ;
          }
          if (loop_6130) {
            variant_6130 -- ;
            var_t_6066 = var_t_6066.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 175)) ;
            var_found_6089 = GALGAS_bool (kIsEqual, var_t_6066.objectCompare (var_expression_5725.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 176)))) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_6089.operator_not (SOURCE_FILE ("expression-cast-expression.galgas", 178)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_castInExpressionAST temp_4 = object ;
          const GALGAS_castInExpressionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-cast-expression.galgas", 179)), GALGAS_string ("the '@").add_operation (temp_5.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("expression-cast-expression.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 180)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 180)).add_operation (var_expression_5725.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 181)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 180)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 181)), fixItArray6  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 179)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsNotEqual, var_expression_5725.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 183)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 183)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_5725.getter_mLocation (SOURCE_FILE ("expression-cast-expression.galgas", 184)), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (var_expression_5725.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 186)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 185)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 186)), fixItArray8  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 184)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_expression_5725.getter_mResultType (SOURCE_FILE ("expression-cast-expression.galgas", 189)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 189)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_castInExpressionAST temp_10 = object ;
      const GALGAS_castInExpressionAST temp_11 = object ;
      outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type_5768, temp_10.getter_mEndOfReceiverExpression (HERE), var_expression_5725, temp_11.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("expression-cast-expression.galgas", 194))  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 190)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_castInExpressionAST temp_12 = object ;
    const GALGAS_castInExpressionAST temp_13 = object ;
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type_5768, temp_12.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-cast-expression.galgas", 198)), var_expression_5725, temp_13.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("expression-cast-expression.galgas", 200)), var_type_5768  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 196)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_castInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                  extensionMethod_castInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_castInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_castInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_testDynamicClassInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionForGeneration * object = (const cPtr_testDynamicClassInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionForGeneration) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_0 = object ;
  GALGAS_string var_typeNameRepresentation_8068 = temp_0.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 224)).getter_identifierRepresentation (SOURCE_FILE ("expression-cast-expression.galgas", 224)) ;
  GALGAS_string var_receiverExpression_8333 ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_8333, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 226)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mCastType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 234)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_3 = object ;
  switch (temp_3.getter_mTypeComparisonKind (HERE).enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression_8333, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 237)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 237)).add_operation (var_typeNameRepresentation_8068, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 238)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 239)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (NULL != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_8068, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 241)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 242)).add_operation (var_receiverExpression_8333, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 243)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 243)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression_8333, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 245)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 245)).add_operation (var_typeNameRepresentation_8068, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 246)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 247)).add_operation (var_typeNameRepresentation_8068, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 247)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 248)).add_operation (var_receiverExpression_8333, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 249)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 249)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testDynamicClassInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration.mSlotID,
                                           extensionMethod_testDynamicClassInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testDynamicClassInExpressionForGeneration_generateExpression (defineExtensionMethod_testDynamicClassInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_castInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionForGeneration * object = (const cPtr_castInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionForGeneration) ;
  const GALGAS_castInExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mCastType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 262)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-cast-expression.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 263)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 264)) ;
  GALGAS_string var_receiverExpression_9825 ;
  const GALGAS_castInExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_9825, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 266)) ;
  const GALGAS_castInExpressionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.getter_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-cast-expression.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 274)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 274)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 275)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 275)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 275)).add_operation (var_receiverExpression_9825, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 276)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 274)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 277)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_3 = object ;
  const GALGAS_castInExpressionForGeneration temp_4 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (temp_3.getter_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-cast-expression.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 280)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 281)).add_operation (var_receiverExpression_9825, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 282)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 282)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 282)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 283)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 283)).add_operation (temp_4.getter_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-cast-expression.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 283)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 283)).add_operation (var_receiverExpression_9825, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 283)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 284)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 279)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 286)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_5 = object ;
  const GALGAS_castInExpressionForGeneration temp_6 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 288)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 288)).add_operation (temp_5.getter_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-cast-expression.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 288)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 289)).add_operation (var_receiverExpression_9825, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 290)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 290)).add_operation (extensionGetter_commaSourceFile (temp_6.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 290)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 287)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 292)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 293)) COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 293)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 294)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 295)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 296)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_castInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_castInExpressionForGeneration.mSlotID,
                                           extensionMethod_castInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_castInExpressionForGeneration_generateExpression (defineExtensionMethod_castInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extractObjectInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extractObjectInExpressionForGeneration * object = (const cPtr_extractObjectInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extractObjectInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-cast-expression.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 314)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 314)) ;
  GALGAS_string var_receiverExpression_11773 ;
  const GALGAS_extractObjectInExpressionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_11773, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 316)) ;
  const GALGAS_extractObjectInExpressionForGeneration temp_1 = object ;
  const GALGAS_extractObjectInExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 324)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 324)).add_operation (var_receiverExpression_11773, inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 325)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 325)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 326)).add_operation (extensionGetter_commaSourceFile (temp_2.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 326)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 327)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 328)) COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 328)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extractObjectInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration.mSlotID,
                                           extensionMethod_extractObjectInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extractObjectInExpressionForGeneration_generateExpression (defineExtensionMethod_extractObjectInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                         extensionMethod_optionExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_optionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionExpressionAST * object = (const cPtr_optionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionExpressionAST) ;
  const GALGAS_optionExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_2526 = function_optionNameForUsefulEntitiesGraph (temp_0.getter_mOptionComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 65)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2526 COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_2838 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_2883 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_2928 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_2975 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_3026 ;
  const GALGAS_optionExpressionAST temp_1 = object ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (temp_1.getter_mOptionComponentName (HERE), var_optionComponentIsPredefined_2838, var_boolOptionMap_2883, var_uintOptionMap_2928, var_stringOptionMap_2975, var_stringListOptionMap_3026, inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  const GALGAS_optionExpressionAST temp_2 = object ;
  GALGAS_bool var_found_3044 = var_boolOptionMap_2883.getter_hasKey (temp_2.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 76)) COMMA_SOURCE_FILE ("expression-option.galgas", 76)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_3138 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_3044.operator_not (SOURCE_FILE ("expression-option.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_optionExpressionAST temp_4 = object ;
      var_found_3044 = var_uintOptionMap_2928.getter_hasKey (temp_4.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 79)) COMMA_SOURCE_FILE ("expression-option.galgas", 79)) ;
      var_returnedType_3138 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_3044.operator_not (SOURCE_FILE ("expression-option.galgas", 82)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_optionExpressionAST temp_6 = object ;
      var_found_3044 = var_stringOptionMap_2975.getter_hasKey (temp_6.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 83)) COMMA_SOURCE_FILE ("expression-option.galgas", 83)) ;
      var_returnedType_3138 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_3044.operator_not (SOURCE_FILE ("expression-option.galgas", 86)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_optionExpressionAST temp_8 = object ;
      var_found_3044 = var_stringListOptionMap_3026.getter_hasKey (temp_8.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 87)) COMMA_SOURCE_FILE ("expression-option.galgas", 87)) ;
      var_returnedType_3138 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_3044.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_optionExpressionAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.getter_mOptionGetterName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 91)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_optionExpressionAST temp_12 = object ;
          const GALGAS_optionExpressionAST temp_13 = object ;
          const GALGAS_optionExpressionAST temp_14 = object ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_3138, temp_12.getter_mOptionComponentName (HERE).getter_location (SOURCE_FILE ("expression-option.galgas", 94)), var_optionComponentIsPredefined_2838, temp_13.getter_mOptionComponentName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 96)), temp_14.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 97))  COMMA_SOURCE_FILE ("expression-option.galgas", 92)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_optionExpressionAST temp_16 = object ;
          test_15 = GALGAS_bool (kIsEqual, temp_16.getter_mOptionGetterName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 98)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_optionExpressionAST temp_17 = object ;
            const GALGAS_optionExpressionAST temp_18 = object ;
            const GALGAS_optionExpressionAST temp_19 = object ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mCharType (HERE), temp_17.getter_mOptionComponentName (HERE).getter_location (SOURCE_FILE ("expression-option.galgas", 101)), var_optionComponentIsPredefined_2838, temp_18.getter_mOptionComponentName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 103)), temp_19.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 104))  COMMA_SOURCE_FILE ("expression-option.galgas", 99)) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_optionExpressionAST temp_21 = object ;
            test_20 = GALGAS_bool (kIsEqual, temp_21.getter_mOptionGetterName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 105)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_optionExpressionAST temp_22 = object ;
              const GALGAS_optionExpressionAST temp_23 = object ;
              const GALGAS_optionExpressionAST temp_24 = object ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), temp_22.getter_mOptionComponentName (HERE).getter_location (SOURCE_FILE ("expression-option.galgas", 108)), var_optionComponentIsPredefined_2838, temp_23.getter_mOptionComponentName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 110)), temp_24.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 111))  COMMA_SOURCE_FILE ("expression-option.galgas", 106)) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_optionExpressionAST temp_26 = object ;
              test_25 = GALGAS_bool (kIsEqual, temp_26.getter_mOptionGetterName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 112)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_optionExpressionAST temp_27 = object ;
                const GALGAS_optionExpressionAST temp_28 = object ;
                const GALGAS_optionExpressionAST temp_29 = object ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), temp_27.getter_mOptionComponentName (HERE).getter_location (SOURCE_FILE ("expression-option.galgas", 115)), var_optionComponentIsPredefined_2838, temp_28.getter_mOptionComponentName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 117)), temp_29.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 118))  COMMA_SOURCE_FILE ("expression-option.galgas", 113)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_optionExpressionAST temp_30 = object ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.getter_mOptionGetterName (HERE).getter_location (SOURCE_FILE ("expression-option.galgas", 120)), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-option.galgas", 120)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringlist var_s_5214 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-option.galgas", 123)) ;
    cEnumerator_commandLineOptionMap enumerator_5247 (var_boolOptionMap_2883, kENUMERATION_UP) ;
    while (enumerator_5247.hasCurrentObject ()) {
      var_s_5214.addAssign_operation (enumerator_5247.current_lkey (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 125))  COMMA_SOURCE_FILE ("expression-option.galgas", 125)) ;
      enumerator_5247.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_5303 (var_uintOptionMap_2928, kENUMERATION_UP) ;
    while (enumerator_5303.hasCurrentObject ()) {
      var_s_5214.addAssign_operation (enumerator_5303.current_lkey (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 128))  COMMA_SOURCE_FILE ("expression-option.galgas", 128)) ;
      enumerator_5303.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_5361 (var_stringOptionMap_2975, kENUMERATION_UP) ;
    while (enumerator_5361.hasCurrentObject ()) {
      var_s_5214.addAssign_operation (enumerator_5361.current_lkey (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 131))  COMMA_SOURCE_FILE ("expression-option.galgas", 131)) ;
      enumerator_5361.gotoNextObject () ;
    }
    const GALGAS_optionExpressionAST temp_32 = object ;
    const GALGAS_optionExpressionAST temp_33 = object ;
    const GALGAS_optionExpressionAST temp_34 = object ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_5214) ;
    inCompiler->emitSemanticError (temp_32.getter_mOptionEntryName (HERE).getter_location (SOURCE_FILE ("expression-option.galgas", 133)), GALGAS_string ("the '").add_operation (temp_33.getter_mOptionComponentName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 134)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 134)).add_operation (temp_34.getter_mOptionEntryName (HERE).getter_string (SOURCE_FILE ("expression-option.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 134)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 134)), fixItArray35  COMMA_SOURCE_FILE ("expression-option.galgas", 133)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                  extensionMethod_optionExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_optionExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionValueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionValueExpressionForGeneration * object = (const cPtr_optionValueExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionValueExpressionForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionValueExpressionForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOptionComponentIsPredefined (HERE).operator_not (SOURCE_FILE ("expression-option.galgas", 158)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionValueExpressionForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 159))  COMMA_SOURCE_FILE ("expression-option.galgas", 159)) ;
    }
  }
  const GALGAS_optionValueExpressionForGeneration temp_3 = object ;
  const GALGAS_optionValueExpressionForGeneration temp_4 = object ;
  const GALGAS_optionValueExpressionForGeneration temp_5 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (temp_3.getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 161)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 161)).add_operation (temp_4.getter_mOptionComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 161)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 161)).add_operation (temp_5.getter_mOptionEntryName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 162)).add_operation (GALGAS_string (".getter_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 162)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                           extensionMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineExtensionMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCharExpressionForGeneration * object = (const cPtr_optionCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCharExpressionForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCharExpressionForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOptionComponentIsPredefined (HERE).operator_not (SOURCE_FILE ("expression-option.galgas", 181)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCharExpressionForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 182))  COMMA_SOURCE_FILE ("expression-option.galgas", 182)) ;
    }
  }
  const GALGAS_optionCharExpressionForGeneration temp_3 = object ;
  const GALGAS_optionCharExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (temp_3.getter_mOptionComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 184)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 184)).add_operation (temp_4.getter_mOptionEntryName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 185)).add_operation (GALGAS_string (".getter_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 185)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineExtensionMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionStringExpressionForGeneration * object = (const cPtr_optionStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionStringExpressionForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionStringExpressionForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOptionComponentIsPredefined (HERE).operator_not (SOURCE_FILE ("expression-option.galgas", 204)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionStringExpressionForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 205))  COMMA_SOURCE_FILE ("expression-option.galgas", 205)) ;
    }
  }
  const GALGAS_optionStringExpressionForGeneration temp_3 = object ;
  const GALGAS_optionStringExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (temp_3.getter_mOptionComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 207)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 207)).add_operation (temp_4.getter_mOptionEntryName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 208)).add_operation (GALGAS_string (".getter_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 208)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                           extensionMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineExtensionMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionCommentExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCommentExpressionForGeneration * object = (const cPtr_optionCommentExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCommentExpressionForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCommentExpressionForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mOptionComponentIsPredefined (HERE).operator_not (SOURCE_FILE ("expression-option.galgas", 219)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCommentExpressionForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 220))  COMMA_SOURCE_FILE ("expression-option.galgas", 220)) ;
    }
  }
  const GALGAS_optionCommentExpressionForGeneration temp_3 = object ;
  const GALGAS_optionCommentExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (temp_3.getter_mOptionComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 222)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 222)).add_operation (temp_4.getter_mOptionEntryName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 223)).add_operation (GALGAS_string (".getter_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 223)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                         extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_2058 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.getter_mLexiqueComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 51)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2058 COMMA_SOURCE_FILE ("expression-lexique.galgas", 52)) ;
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_1 = object ;
  GALGAS_terminalMap joker_2364_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_2364_2 ; // Joker input parameter
  GALGAS_lstring joker_2364_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (temp_1.getter_mLexiqueComponentName (HERE), joker_2364_3, joker_2364_2, joker_2364_1, inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 54)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_lexiqueIntrospectionExpressionAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.getter_mLexiqueGetterName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_lexiqueIntrospectionExpressionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mLexiqueGetterName (HERE).getter_location (SOURCE_FILE ("expression-lexique.galgas", 60)), GALGAS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-lexique.galgas", 60)) ;
    }
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_6 = object ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_7 = object ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_8 = object ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-lexique.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("expression-lexique.galgas", 64)), temp_6.getter_mLexiqueComponentName (HERE).getter_location (HERE), temp_7.getter_mLexiqueComponentName (HERE).getter_string (HERE), temp_8.getter_mLexiqueGetterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("expression-lexique.galgas", 63)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                  extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueIntrospectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionForGeneration * object = (const cPtr_lexiqueIntrospectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionForGeneration) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.getter_mLexiqueComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("expression-lexique.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 88))  COMMA_SOURCE_FILE ("expression-lexique.galgas", 88)) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_1 = object ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_2 = object ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (temp_1.getter_mLexiqueComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 89)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 89)).add_operation (temp_2.getter_mLexiqueGetterName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 89)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 90)).add_operation (extensionGetter_sourceFile (temp_3.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 91)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 91)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration.mSlotID,
                                           extensionMethod_lexiqueIntrospectionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueIntrospectionForGeneration_generateExpression (defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                     const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                     GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperObjectInstanciationInExpressionAST * object = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_3163 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.getter_mFilewrapperName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 84)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3163 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 85)) ;
  }
  GALGAS_lstring var_filewrapperPath_3487 ;
  GALGAS_bool var_isInternal_3521 ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_1 = object ;
  GALGAS_lstringlist joker_3493_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_3493_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_3493_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_3493_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (temp_1.getter_mFilewrapperName (HERE), var_filewrapperPath_3487, joker_3493_4, joker_3493_3, joker_3493_2, joker_3493_1, var_isInternal_3521, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 87)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3521.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_3 = object ;
      GALGAS_location var_filewrapperDeclarationLocation_3605 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (temp_3.getter_mFilewrapperName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 95)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.getter_mFilewrapperName (HERE).getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 96)).objectCompare (var_filewrapperDeclarationLocation_3605.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 96)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mFilewrapperName (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 97)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_3605.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
        }
      }
    }
  }
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_8 = object ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_9 = object ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), temp_8.getter_mFilewrapperName (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 102))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 102)), temp_9.getter_mFilewrapperName (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 103)), temp_10.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 104)), var_filewrapperPath_3487.getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 105))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 101)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = object ;
  cEnumerator_actualOutputExpressionList enumerator_4527 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_4527.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_4527.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 114)) ;
    enumerator_4527.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = object ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_1 = object ;
  GALGAS_lstring var_usefulnessName_5085 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.getter_mFilewrapperName (HERE), temp_1.getter_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 128)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5085 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 129)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_5434 ;
  GALGAS_bool var_isInternal_5461 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_2 = object ;
  GALGAS_lstring joker_5375_4 ; // Joker input parameter
  GALGAS_lstringlist joker_5375_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_5375_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_5375_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (temp_2.getter_mFilewrapperName (HERE), joker_5375_4, joker_5375_3, joker_5375_2, joker_5375_1, var_filewrapperTemplateMap_5434, var_isInternal_5461, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 131)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_5461.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_4 = object ;
      GALGAS_location var_filewrapperDeclarationLocation_5546 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (temp_4.getter_mFilewrapperName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 139)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperTemplateInExpressionAST temp_6 = object ;
        test_5 = GALGAS_bool (kIsNotEqual, temp_6.getter_mFilewrapperName (HERE).getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 140)).objectCompare (var_filewrapperDeclarationLocation_5546.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 140)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_filewrapperTemplateInExpressionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.getter_mFilewrapperName (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 141)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5546.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_5988 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_9 = object ;
  GALGAS_lstring joker_5990 ; // Joker input parameter
  var_filewrapperTemplateMap_5434.method_searchKey (temp_9.getter_mFilewrapperTemplateName (HERE), var_templateSignature_5988, joker_5990, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 145)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_6078 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_filewrapperTemplateInExpressionAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 148)).objectCompare (var_templateSignature_5988.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 148)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_12 = object ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_13 = object ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_14 = object ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.getter_mFilewrapperTemplateName (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 149)), GALGAS_string ("calling the '").add_operation (temp_13.getter_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 150)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 150)).add_operation (temp_14.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 150)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 150)).add_operation (var_templateSignature_5988.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 151)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 150)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 151)).add_operation (temp_15.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 152)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 151)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 152)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 149)) ;
      var_effectiveParameterList_6078.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_6078 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 155)) ;
    const GALGAS_filewrapperTemplateInExpressionAST temp_17 = object ;
    cEnumerator_actualOutputExpressionList enumerator_6554 (temp_17.getter_mExpressions (HERE), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_6579 (var_templateSignature_5988, kENUMERATION_UP) ;
    while (enumerator_6554.hasCurrentObject () && enumerator_6579.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (kIsNotEqual, enumerator_6579.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_6554.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_6579.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (enumerator_6554.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 158)), GALGAS_string ("the selector should be '!").add_operation (enumerator_6579.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 158)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 158)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 158)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 158)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_7036 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_6554.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6579.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_7036, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 160)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_6579.current_mFormalArgumentType (HERE), var_exp_7036.getter_mResultType (SOURCE_FILE ("expression-filewrapper.galgas", 168)), enumerator_6554.current_mEndOfExpressionLocation (HERE), var_exp_7036, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 168)) ;
      }
      var_effectiveParameterList_6078.addAssign_operation (var_exp_7036  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 169)) ;
      enumerator_6554.gotoNextObject () ;
      enumerator_6579.gotoNextObject () ;
    }
  }
  const GALGAS_filewrapperTemplateInExpressionAST temp_22 = object ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_23 = object ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_24 = object ;
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), temp_22.getter_mFilewrapperName (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 175)), temp_23.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 176)), temp_24.getter_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 177)), var_effectiveParameterList_6078  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 173)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionAST * object = (const cPtr_filewrapperInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionAST) ;
  const GALGAS_filewrapperInExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_8217 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.getter_mFilewrapperName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_8217 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)) ;
  }
  GALGAS_stringlist var_directoryList_8420 ;
  GALGAS_string var_fileName_8439 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_filewrapperInExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.getter_mFilewrapperPath (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 203)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_filewrapperInExpressionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mFilewrapperPath (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 204)), GALGAS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 204)) ;
      var_directoryList_8420.drop () ; // Release error dropped variable
      var_fileName_8439.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_6 = object ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.getter_mFilewrapperPath (HERE).getter_string (HERE).getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 205)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperInExpressionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mFilewrapperPath (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 206)), GALGAS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 206)) ;
        var_directoryList_8420.drop () ; // Release error dropped variable
        var_fileName_8439.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_9 = object ;
      var_directoryList_8420 = temp_9.getter_mFilewrapperPath (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 208)) ;
      {
      var_directoryList_8420.setter_popLast (var_fileName_8439, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_9031 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_9085 ;
  GALGAS_bool var_isInternal_9118 ;
  const GALGAS_filewrapperInExpressionAST temp_10 = object ;
  GALGAS_lstring joker_8979 ; // Joker input parameter
  GALGAS_lstringlist joker_8986 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_9091 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (temp_10.getter_mFilewrapperName (HERE), joker_8979, joker_8986, var_filewrapperFileMap_9031, var_filewrapperDirectoryMap_9085, joker_9091, var_isInternal_9118, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 212)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_9118.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_filewrapperInExpressionAST temp_12 = object ;
      GALGAS_location var_filewrapperDeclarationLocation_9202 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (temp_12.getter_mFilewrapperName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 223)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_filewrapperInExpressionAST temp_14 = object ;
        test_13 = GALGAS_bool (kIsNotEqual, temp_14.getter_mFilewrapperName (HERE).getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 224)).objectCompare (var_filewrapperDeclarationLocation_9202.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 224)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_filewrapperInExpressionAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.getter_mFilewrapperName (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 225)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_9202.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 225)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 225)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 225)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_9571 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_9085.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 230)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 230)).isValid ()) {
    uint32_t variant_9583 = var_filewrapperDirectoryMap_9085.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 230)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 230)).uintValue () ;
    bool loop_9583 = true ;
    while (loop_9583) {
      loop_9583 = GALGAS_bool (kIsStrictSup, var_directoryList_8420.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 231)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_9583) {
        loop_9583 = GALGAS_bool (kIsStrictSup, var_directoryList_8420.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 231)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_9583 && (0 == variant_9583)) {
        loop_9583 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 230)) ;
      }
      if (loop_9583) {
        variant_9583 -- ;
        GALGAS_string var_directoryName_9685 ;
        {
        var_directoryList_8420.setter_popFirst (var_directoryName_9685, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 233)) ;
        }
        var_builtPath_9571.plusAssign_operation(var_directoryName_9685.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 234)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_9085.getter_hasKey (var_directoryName_9685 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 235)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_uint joker_9995 ; // Joker input parameter
            var_filewrapperDirectoryMap_9085.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_9685, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 237))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 237)), var_filewrapperFileMap_9031, var_filewrapperDirectoryMap_9085, joker_9995, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 236)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_filewrapperInExpressionAST temp_18 = object ;
          const GALGAS_filewrapperInExpressionAST temp_19 = object ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.getter_mFilewrapperPath (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 243)), GALGAS_string ("the '").add_operation (var_builtPath_9571, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 243)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 243)).add_operation (temp_19.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 243)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 243)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 243)) ;
          var_filewrapperFileMap_9031.drop () ; // Release error dropped variable
          var_directoryList_8420 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 244)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_10265 ;
  GALGAS_bool var_isTextFile_10284 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_9031.getter_hasKey (var_fileName_8439 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 249)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string joker_10410 ; // Joker input parameter
      GALGAS_uint joker_10425 ; // Joker input parameter
      var_filewrapperFileMap_9031.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_8439, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 250))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 250)), joker_10410, var_isTextFile_10284, joker_10425, var_fileIndex_10265, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 250)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GALGAS_filewrapperInExpressionAST temp_22 = object ;
    const GALGAS_filewrapperInExpressionAST temp_23 = object ;
    TC_Array <C_FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.getter_mFilewrapperPath (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 252)), GALGAS_string ("the '").add_operation (var_fileName_8439, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)).add_operation (var_builtPath_9571, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)).add_operation (temp_23.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 252)) ;
    var_fileIndex_10265.drop () ; // Release error dropped variable
    var_isTextFile_10284.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_entry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_10284.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  }else if (kBoolFalse == test_26) {
    temp_25 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 260))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 260)) ;
  }
  const GALGAS_filewrapperInExpressionAST temp_27 = object ;
  const GALGAS_filewrapperInExpressionAST temp_28 = object ;
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_25, temp_27.getter_mFilewrapperName (HERE).getter_location (SOURCE_FILE ("expression-filewrapper.galgas", 262)), temp_28.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 263)), var_fileIndex_10265, var_isTextFile_10284  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 257)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionForGeneration * object = (const cPtr_filewrapperInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionForGeneration) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.getter_mFilewrapperName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_1 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.getter_mFilewrapperName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionForGeneration * object = (const cPtr_filewrapperTemplateInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionForGeneration) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.getter_mFilewrapperName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 306))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 306)) ;
  GALGAS_stringlist var_parameterList_12815 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 307)) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_12875 (temp_1.getter_mActualOutputParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_12875.hasCurrentObject ()) {
    GALGAS_string var_parameter_12900 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_12875.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_12900, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 310)) ;
    var_parameterList_12815.addAssign_operation (var_parameter_12900  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 317)) ;
    enumerator_12875.gotoNextObject () ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_2 = object ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (temp_2.getter_mFilewrapperName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 319)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 319)).add_operation (temp_3.getter_mFilewrapperTemplateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 319)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 319)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 320)) ;
  cEnumerator_stringlist enumerator_13361 (var_parameterList_12815, kENUMERATION_UP) ;
  while (enumerator_13361.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_13361.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 322)) ;
    enumerator_13361.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 324)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 324)) ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 325)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 325)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                               GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                               GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperStaticPathInExpressionForGeneration * object = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.getter_mFilewrapperName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 345))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 345)) ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_1 = object ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = temp_1.getter_mIsTextFile (HERE).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_4 = object ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_5 = object ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (temp_4.getter_mFilewrapperFileIndex (HERE).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)).add_operation (temp_5.getter_mFilewrapperName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  const GALGAS_getterCallExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiver (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 42)) ;
  const GALGAS_getterCallExpressionAST temp_1 = object ;
  extensionMethod_enterInSemanticContext (temp_1.getter_mExpressions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 43)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                         extensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getterCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getterCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2614 ;
  const GALGAS_getterCallExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiver (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-getter-call.galgas", 60)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2614, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 57)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_2659 = var_receiverExpression_2614.getter_mResultType (SOURCE_FILE ("expression-getter-call.galgas", 65)) ;
  GALGAS_getterMap var_getterMap_2741 = var_receiverType_2659.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 67)) ;
  GALGAS_functionSignature var_getterFormalArgumentTypeList_2838 ;
  GALGAS_methodKind var_kind_2857 ;
  GALGAS_bool var_hasCompilerArgument_2885 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_2922 ;
  GALGAS_stringlist var_fieldList_2946 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 73)) ;
  const GALGAS_getterCallExpressionAST temp_1 = object ;
  const cMapElement_getterMap * objectArray_2958 = (const cMapElement_getterMap *) var_getterMap_2741.readAccessForWithInstruction (temp_1.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 74))) ;
  if (NULL != objectArray_2958) {
      macroValidSharedObject (objectArray_2958, cMapElement_getterMap) ;
    var_getterFormalArgumentTypeList_2838 = objectArray_2958->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_2885 = objectArray_2958->mProperty_mHasCompilerArgument ;
    var_returnedType_2922 = objectArray_2958->mProperty_mReturnedType ;
    var_kind_2857 = objectArray_2958->mProperty_mKind ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, objectArray_2958->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_getterCallExpressionAST temp_3 = object ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 80)), objectArray_2958->mProperty_mErrorMessage, fixItArray4  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 80)) ;
      }
    }
  }else{
    GALGAS_uint var_matchingReaderCount_3273 = GALGAS_uint ((uint32_t) 0U) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsEqual, var_receiverType_2659.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 84)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("expression-getter-call.galgas", 84)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_getterFormalArgumentTypeList_2838 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 85)) ;
        var_hasCompilerArgument_2885 = GALGAS_bool (true) ;
        var_returnedType_2922 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-getter-call.galgas", 87)) ;
        var_kind_2857 = GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 88)) ;
        cEnumerator_typedPropertyList enumerator_3570 (var_receiverType_2659.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 89)), kENUMERATION_UP) ;
        while (enumerator_3570.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_attributeType_3599 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (enumerator_3570.current_mPropertyTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 92)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 92))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 90)) ;
          GALGAS_getterMap var_aMap_3785 = var_attributeType_3599.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 94)) ;
          const GALGAS_getterCallExpressionAST temp_6 = object ;
          const cMapElement_getterMap * objectArray_3827 = (const cMapElement_getterMap *) var_aMap_3785.readAccessForWithInstruction (temp_6.getter_mGetterName (HERE).getter_string (HERE)) ;
          if (NULL != objectArray_3827) {
              macroValidSharedObject (objectArray_3827, cMapElement_getterMap) ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, var_attributeType_3599.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 96)).objectCompare (enumerator_3570.current_mPropertyName (HERE).getter_string (HERE))).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_matchingReaderCount_3273.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 97)) ;
                var_getterFormalArgumentTypeList_2838 = objectArray_3827->mProperty_mArgumentTypeList ;
                var_hasCompilerArgument_2885 = objectArray_3827->mProperty_mHasCompilerArgument ;
                var_returnedType_2922 = objectArray_3827->mProperty_mReturnedType ;
                const GALGAS_getterCallExpressionAST temp_8 = object ;
                var_receiverExpression_2614 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_returnedType_2922, temp_8.getter_mGetterName (HERE).getter_location (HERE), var_receiverExpression_2614, enumerator_3570.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 101)) ;
                var_kind_2857 = objectArray_3827->mProperty_mKind ;
                enumGalgasBool test_9 = kBoolTrue ;
                if (kBoolTrue == test_9) {
                  test_9 = GALGAS_bool (kIsNotEqual, objectArray_3827->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    const GALGAS_getterCallExpressionAST temp_10 = object ;
                    TC_Array <C_FixItDescription> fixItArray11 ;
                    inCompiler->emitSemanticError (temp_10.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 109)), objectArray_3827->mProperty_mErrorMessage, fixItArray11  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 109)) ;
                  }
                }
              }
            }
          }
          enumerator_3570.gotoNextObject () ;
        }
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsEqual, var_matchingReaderCount_3273.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_12) {
            const GALGAS_getterCallExpressionAST temp_13 = object ;
            const GALGAS_getterCallExpressionAST temp_14 = object ;
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (temp_13.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 115)), GALGAS_string ("the '@").add_operation (var_receiverType_2659.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 116)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 116)).add_operation (temp_14.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 116)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 116)), fixItArray15  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 115)) ;
            var_getterFormalArgumentTypeList_2838.drop () ; // Release error dropped variable
            var_hasCompilerArgument_2885.drop () ; // Release error dropped variable
            var_returnedType_2922.drop () ; // Release error dropped variable
            var_kind_2857.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_12) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_3273.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_string var_s_4896 = GALGAS_string::makeEmptyString () ;
              cEnumerator_stringlist enumerator_4929 (var_fieldList_2946, kENUMERATION_UP) ;
              while (enumerator_4929.hasCurrentObject ()) {
                var_s_4896.plusAssign_operation(enumerator_4929.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 122)) ;
                if (enumerator_4929.hasNextObject ()) {
                  var_s_4896.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 123)) ;
                }
                enumerator_4929.gotoNextObject () ;
              }
              const GALGAS_getterCallExpressionAST temp_17 = object ;
              const GALGAS_getterCallExpressionAST temp_18 = object ;
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (temp_17.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 125)), GALGAS_string ("the '@").add_operation (var_receiverType_2659.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (temp_18.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (var_s_4896, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)), fixItArray19  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)) ;
              var_getterFormalArgumentTypeList_2838.drop () ; // Release error dropped variable
              var_hasCompilerArgument_2885.drop () ; // Release error dropped variable
              var_returnedType_2922.drop () ; // Release error dropped variable
              var_kind_2857.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (kIsEqual, var_getterMap_2741.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_20) {
          const GALGAS_getterCallExpressionAST temp_21 = object ;
          TC_Array <C_FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (temp_21.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 131)), GALGAS_string ("the '@").add_operation (var_receiverType_2659.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 132)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 132)), fixItArray22  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 131)) ;
          var_getterFormalArgumentTypeList_2838.drop () ; // Release error dropped variable
          var_hasCompilerArgument_2885.drop () ; // Release error dropped variable
          var_returnedType_2922.drop () ; // Release error dropped variable
          var_kind_2857.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_20) {
        const GALGAS_getterCallExpressionAST temp_23 = object ;
        const GALGAS_getterCallExpressionAST temp_24 = object ;
        TC_Array <C_FixItDescription> fixItArray25 ;
        appendFixItActions (fixItArray25, kFixItReplace, var_getterMap_2741.getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 138))) ;
        inCompiler->emitSemanticError (temp_23.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 135)), GALGAS_string ("the '@").add_operation (var_receiverType_2659.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 136)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 136)).add_operation (temp_24.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 136)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 136)), fixItArray25  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 135)) ;
        var_getterFormalArgumentTypeList_2838.drop () ; // Release error dropped variable
        var_hasCompilerArgument_2885.drop () ; // Release error dropped variable
        var_returnedType_2922.drop () ; // Release error dropped variable
        var_kind_2857.drop () ; // Release error dropped variable
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_getterCallExpressionAST temp_27 = object ;
    test_26 = GALGAS_bool (kIsNotEqual, temp_27.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("expression-getter-call.galgas", 142)).objectCompare (var_getterFormalArgumentTypeList_2838.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 142)))).boolEnum () ;
    if (kBoolTrue == test_26) {
      const GALGAS_getterCallExpressionAST temp_28 = object ;
      const GALGAS_getterCallExpressionAST temp_29 = object ;
      const GALGAS_getterCallExpressionAST temp_30 = object ;
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_28.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 143)), GALGAS_string ("calling the '").add_operation (temp_29.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)).add_operation (var_receiverType_2659.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)).add_operation (var_getterFormalArgumentTypeList_2838.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 144)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 144)).add_operation (temp_30.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("expression-getter-call.galgas", 145)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 144)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 145)), fixItArray31  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_26) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_6297 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 147)) ;
    const GALGAS_getterCallExpressionAST temp_32 = object ;
    cEnumerator_actualOutputExpressionList enumerator_6334 (temp_32.getter_mExpressions (HERE), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_6370 (var_getterFormalArgumentTypeList_2838, kENUMERATION_UP) ;
    while (enumerator_6334.hasCurrentObject () && enumerator_6370.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_6614 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_6334.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6370.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_6614, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 149)) ;
      enumGalgasBool test_33 = kBoolTrue ;
      if (kBoolTrue == test_33) {
        test_33 = GALGAS_bool (kIsNotEqual, enumerator_6370.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_6334.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_33) {
          GALGAS_string temp_34 ;
          const enumGalgasBool test_35 = GALGAS_bool (kIsNotEqual, enumerator_6370.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_35) {
            temp_34 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_35) {
            temp_34 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (enumerator_6334.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 158)), GALGAS_string ("the selector should be '!").add_operation (enumerator_6370.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 158)).add_operation (temp_34, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 158)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 158)), fixItArray36  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 158)) ;
        }
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_6370.current_mFormalArgumentType (HERE), var_exp_6614.getter_mResultType (SOURCE_FILE ("expression-getter-call.galgas", 160)), enumerator_6334.current_mEndOfExpressionLocation (HERE), var_exp_6614, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 160)) ;
      }
      var_constructorEffectiveParameterList_6297.addAssign_operation (var_exp_6614  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 161)) ;
      enumerator_6334.gotoNextObject () ;
      enumerator_6370.gotoNextObject () ;
    }
    const GALGAS_getterCallExpressionAST temp_37 = object ;
    const GALGAS_getterCallExpressionAST temp_38 = object ;
    outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_2922, temp_37.getter_mGetterName (HERE).getter_location (SOURCE_FILE ("expression-getter-call.galgas", 165)), var_kind_2857, var_receiverExpression_2614, var_fieldList_2946, temp_38.getter_mGetterName (HERE).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 169)), var_constructorEffectiveParameterList_6297, var_hasCompilerArgument_2885  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 163)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getterCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                  extensionMethod_getterCallExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getterCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_getterCallExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getterCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionForGeneration * object = (const cPtr_getterCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionForGeneration) ;
  const GALGAS_getterCallExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)) ;
  GALGAS_string var_receiverCppName_8501 ;
  const GALGAS_getterCallExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_8501, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 201)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_8566 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 209)) ;
  const GALGAS_getterCallExpressionForGeneration temp_2 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_8601 (temp_2.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_8601.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_8782 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_8601.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8782, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)) ;
    var_getterArgumentCppNameList_8566.addAssign_operation (var_argumentCppName_8782  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 218)) ;
    enumerator_8601.gotoNextObject () ;
  }
  const GALGAS_getterCallExpressionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_getterCallExpressionForGeneration temp_4 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_baseType_8953 = temp_4.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-getter-call.galgas", 223)) ;
      extensionMethod_addHeaderFileName (var_baseType_8953, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 224)) ;
      GALGAS_bool var_searching_9063 = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("expression-getter-call.galgas", 226)).isValid ()) {
        uint32_t variant_9079 = GALGAS_uint::constructor_max (SOURCE_FILE ("expression-getter-call.galgas", 226)).uintValue () ;
        bool loop_9079 = true ;
        while (loop_9079) {
          loop_9079 = var_searching_9063.isValid () ;
          if (loop_9079) {
            loop_9079 = var_searching_9063.boolValue () ;
          }
          if (loop_9079 && (0 == variant_9079)) {
            loop_9079 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 226)) ;
          }
          if (loop_9079) {
            variant_9079 -- ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_baseType_8953.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 227)).getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 227)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 227)).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  const GALGAS_getterCallExpressionForGeneration temp_7 = object ;
                  test_6 = var_baseType_8953.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).getter_hasKey (temp_7.getter_mGetterName (HERE) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_baseType_8953 = var_baseType_8953.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)) ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_searching_9063 = GALGAS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              var_searching_9063 = GALGAS_bool (false) ;
            }
          }
        }
      }
      const GALGAS_getterCallExpressionForGeneration temp_8 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_8953.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 237)).getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 237)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 237)).add_operation (temp_8.getter_mGetterName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 237))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 237)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_8501 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 238)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_10 = object ;
        test_9 = temp_10.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-getter-call.galgas", 239)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 239)).getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 239)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_getterCallExpressionForGeneration temp_11 = object ;
          const GALGAS_getterCallExpressionForGeneration temp_12 = object ;
          outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (temp_11.getter_mGetterName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 240)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 240)).add_operation (temp_12.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-getter-call.galgas", 241)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 241)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 241)).add_operation (var_receiverCppName_8501, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 241)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 241)) ;
        }
      }
      if (kBoolFalse == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_13 = object ;
        extensionMethod_addHeaderFileName (temp_13.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-getter-call.galgas", 243)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 243)) ;
        const GALGAS_getterCallExpressionForGeneration temp_14 = object ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (temp_14.getter_mGetterName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)).add_operation (var_receiverCppName_8501, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_8501 ;
      const GALGAS_getterCallExpressionForGeneration temp_15 = object ;
      cEnumerator_stringlist enumerator_10204 (temp_15.getter_mFieldList (HERE), kENUMERATION_UP) ;
      while (enumerator_10204.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (enumerator_10204.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 249)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 249)) ;
        enumerator_10204.gotoNextObject () ;
      }
      const GALGAS_getterCallExpressionForGeneration temp_16 = object ;
      extensionMethod_addHeaderFileName (temp_16.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 251)) ;
      const GALGAS_getterCallExpressionForGeneration temp_17 = object ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (temp_17.getter_mGetterName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_10491 (var_getterArgumentCppNameList_8566, kENUMERATION_UP) ;
  while (enumerator_10491.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_10491.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 255)) ;
    if (enumerator_10491.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 256)) ;
    }
    enumerator_10491.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsEqual, var_getterArgumentCppNameList_8566.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 258)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_18) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_getterCallExpressionForGeneration temp_20 = object ;
        test_19 = temp_20.getter_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 260)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 260)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 261)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 261)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_18) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      const GALGAS_getterCallExpressionForGeneration temp_22 = object ;
      test_21 = temp_22.getter_mHasCompilerArgument (HERE).boolEnum () ;
      if (kBoolTrue == test_21) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 265)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 265)) ;
      }
    }
    if (kBoolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 267)) ;
    }
  }
  const GALGAS_getterCallExpressionForGeneration temp_23 = object ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 269)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 269)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getterCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_getterCallExpressionForGeneration.mSlotID,
                                           extensionMethod_getterCallExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getterCallExpressionForGeneration_generateExpression (defineExtensionMethod_getterCallExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  {
  const GALGAS_constructorExpressionAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry joker_2738 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeOptionalEntry (ioArgument_ioTypeMap, temp_0.getter_mTypeName (HERE), joker_2738 COMMA_SOURCE_FILE ("expression-constructor.galgas", 76)) ;
  }
  const GALGAS_constructorExpressionAST temp_1 = object ;
  extensionMethod_enterInSemanticContext (temp_1.getter_mExpressions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 77)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                         extensionMethod_constructorExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_constructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                           const GALGAS_lstring constinArgument_inTypeName,
                                           const GALGAS_lstring constinArgument_inConstructorName,
                                           const GALGAS_actualOutputExpressionList constinArgument_inConstuctorEffectiveParameterExpressions,
                                           GALGAS_unifiedTypeMap_2D_entry & outArgument_outReturnedType,
                                           GALGAS_unifiedTypeMap_2D_entry & outArgument_outConstructorType,
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
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outConstructorType = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), constinArgument_inTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 98)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 100)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.getter_location (SOURCE_FILE ("expression-constructor.galgas", 101)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor.galgas", 101)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_constructorMap var_constructorMap_3963 = outArgument_outConstructorType.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 106)) ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_4084 ;
    const cMapElement_constructorMap * objectArray_4093 = (const cMapElement_constructorMap *) var_constructorMap_3963.readAccessForWithInstruction (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("expression-constructor.galgas", 109))) ;
    if (NULL != objectArray_4093) {
        macroValidSharedObject (objectArray_4093, cMapElement_constructorMap) ;
      var_constructorFormalArgumentTypeList_4084 = objectArray_4093->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_4093->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_4093->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_constructorMap_3963.getter_count (SOURCE_FILE ("expression-constructor.galgas", 114)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("expression-constructor.galgas", 115)), GALGAS_string ("the '@").add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 116)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 116)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor.galgas", 115)) ;
          var_constructorFormalArgumentTypeList_4084.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, var_constructorMap_3963.getter_keyList (SOURCE_FILE ("expression-constructor.galgas", 122))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("expression-constructor.galgas", 119)), GALGAS_string ("the '@").add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 120)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 120)).add_operation (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("expression-constructor.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 120)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 120)), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 119)) ;
        var_constructorFormalArgumentTypeList_4084.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inConstuctorEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 126)).objectCompare (var_constructorFormalArgumentTypeList_4084.getter_length (SOURCE_FILE ("expression-constructor.galgas", 126)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("expression-constructor.galgas", 127)), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("expression-constructor.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 128)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 128)).add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 128)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 128)).add_operation (var_constructorFormalArgumentTypeList_4084.getter_length (SOURCE_FILE ("expression-constructor.galgas", 129)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 128)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)).add_operation (constinArgument_inConstuctorEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 130)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 130)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor.galgas", 127)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 132)) ;
    cEnumerator_actualOutputExpressionList enumerator_5433 (constinArgument_inConstuctorEffectiveParameterExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_5474 (var_constructorFormalArgumentTypeList_4084, kENUMERATION_UP) ;
    while (enumerator_5433.hasCurrentObject () && enumerator_5474.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_5718 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5433.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5474.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_5718, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 134)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_5474.current_mFormalArgumentType (HERE), var_exp_5718.getter_mResultType (SOURCE_FILE ("expression-constructor.galgas", 142)), enumerator_5433.current_mEndOfExpressionLocation (HERE), var_exp_5718, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 142)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_5718  COMMA_SOURCE_FILE ("expression-constructor.galgas", 143)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, enumerator_5474.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_5433.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string temp_9 ;
          const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_5474.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            temp_9 = enumerator_5474.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 146)) ;
          }else if (kBoolFalse == test_10) {
            temp_9 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5433.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor.galgas", 145)), GALGAS_string ("the selector should be '!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 146)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 146)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 145)) ;
        }
      }
      enumerator_5433.gotoNextObject () ;
      enumerator_5474.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_6854 ;
  GALGAS_unifiedTypeMap_2D_entry var_constructorType_6901 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_6981 ;
  GALGAS_bool var_hasCompilerArgument_7016 ;
  {
  const GALGAS_constructorExpressionAST temp_0 = object ;
  const GALGAS_constructorExpressionAST temp_1 = object ;
  const GALGAS_constructorExpressionAST temp_2 = object ;
  routine_analyzeConstructorInvocation (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, temp_0.getter_mTypeName (HERE), temp_1.getter_mConstructorName (HERE), temp_2.getter_mExpressions (HERE), var_returnedType_6854, var_constructorType_6901, var_constructorEffectiveParameterList_6981, var_hasCompilerArgument_7016, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 162)) ;
  }
  const GALGAS_constructorExpressionAST temp_3 = object ;
  GALGAS_lstring var_constructorTypeUsefulnessName_7056 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_constructorType_6901.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 176)), temp_3.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-constructor.galgas", 176))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 176)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_7056 COMMA_SOURCE_FILE ("expression-constructor.galgas", 177)) ;
  }
  const GALGAS_constructorExpressionAST temp_4 = object ;
  GALGAS_lstring var_returnedTypeUsefulnessName_7267 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_returnedType_6854.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 178)), temp_4.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-constructor.galgas", 178))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 178)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_7267 COMMA_SOURCE_FILE ("expression-constructor.galgas", 179)) ;
  }
  const GALGAS_constructorExpressionAST temp_5 = object ;
  const GALGAS_constructorExpressionAST temp_6 = object ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_6854, temp_5.getter_mConstructorName (HERE).getter_location (SOURCE_FILE ("expression-constructor.galgas", 183)), var_constructorType_6901, temp_6.getter_mConstructorName (HERE).getter_string (SOURCE_FILE ("expression-constructor.galgas", 185)), var_constructorEffectiveParameterList_6981, var_hasCompilerArgument_7016  COMMA_SOURCE_FILE ("expression-constructor.galgas", 181)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                  extensionMethod_constructorExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_constructorExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_defaultConstructorExpressionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_defaultConstructorExpressionAST temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_8029 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_2.getter_mTypeName (HERE), joker_8029 COMMA_SOURCE_FILE ("expression-constructor.galgas", 197)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                         extensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_8510 = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_defaultConstructorExpressionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_defaultConstructorExpressionAST temp_2 = object ;
      var_type_8510 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_2.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_type_8510.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_defaultConstructorExpressionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-constructor.galgas", 216)), GALGAS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 216)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_type_8510.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 219)).operator_not (SOURCE_FILE ("expression-constructor.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_defaultConstructorExpressionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-constructor.galgas", 220)), GALGAS_string ("an abstract class does not support the default constructor"), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, var_type_8510.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_defaultConstructorExpressionAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-constructor.galgas", 222)), GALGAS_string ("this class does not support the default constructor"), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 222)) ;
        }
      }
    }
    const GALGAS_defaultConstructorExpressionAST temp_12 = object ;
    GALGAS_lstring var_usefulnessName_9105 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_type_8510.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 225)), temp_12.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-constructor.galgas", 225))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 225)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_9105 COMMA_SOURCE_FILE ("expression-constructor.galgas", 226)) ;
    }
    const GALGAS_defaultConstructorExpressionAST temp_13 = object ;
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type_8510, temp_13.getter_mTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("expression-constructor.galgas", 228)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                  extensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionForGeneration * object = (const cPtr_constructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionForGeneration) ;
  const GALGAS_constructorExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 255)) ;
  GALGAS_stringlist var_parameterList_10343 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 256)) ;
  const GALGAS_constructorExpressionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_10389 (temp_1.getter_mEffectiveParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_10389.hasCurrentObject ()) {
    GALGAS_string var_parameter_10573 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_10389.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_10573, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 258)) ;
    var_parameterList_10343.addAssign_operation (var_parameter_10573  COMMA_SOURCE_FILE ("expression-constructor.galgas", 265)) ;
    enumerator_10389.gotoNextObject () ;
  }
  const GALGAS_constructorExpressionForGeneration temp_2 = object ;
  const GALGAS_constructorExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (temp_2.getter_mConstructorType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 267)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 267)).add_operation (temp_3.getter_mConstructorName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 268)) ;
  cEnumerator_stringlist enumerator_10843 (var_parameterList_10343, kENUMERATION_UP) ;
  while (enumerator_10843.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_10843.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 271)) ;
    if (enumerator_10843.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 272)) ;
    }
    enumerator_10843.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_10939 = GALGAS_bool (kIsStrictSup, var_parameterList_10343.getter_length (SOURCE_FILE ("expression-constructor.galgas", 274)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_constructorExpressionForGeneration temp_5 = object ;
    test_4 = temp_5.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needsComma_10939.boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 277)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 279)) COMMA_SOURCE_FILE ("expression-constructor.galgas", 279)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 280)) ;
      var_needsComma_10939 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_needsComma_10939.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_constructorExpressionForGeneration temp_8 = object ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 284)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 284)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_constructorExpressionForGeneration temp_9 = object ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_9.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 286)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 286)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                           extensionMethod_constructorExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineExtensionMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_defaultConstructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionForGeneration * object = (const cPtr_defaultConstructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionForGeneration) ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 304)) ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_1 = object ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_2 = object ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 306)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 306)).add_operation (temp_2.getter_mResultType (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 308)).getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 307)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 308)).add_operation (extensionGetter_sourceFile (temp_3.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 309)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 309)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                           extensionMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  const GALGAS_functionCallExpressionAST temp_0 = object ;
  cEnumerator_actualOutputExpressionList enumerator_1654 (temp_0.getter_mExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_1654.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_1654.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
    enumerator_1654.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                         extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  const GALGAS_functionCallExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_2203 = function_functionNameForUsefulEntitiesGraph (temp_0.getter_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 55)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2203 COMMA_SOURCE_FILE ("expression-function-call.galgas", 56)) ;
  }
  GALGAS_functionSignature var_functionSignature_2507 ;
  GALGAS_unifiedTypeMap_2D_entry var_resultType_2549 ;
  GALGAS_bool var_isInternal_2575 ;
  const GALGAS_functionCallExpressionAST temp_1 = object ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).method_searchKey (temp_1.getter_mFunctionName (HERE), var_functionSignature_2507, var_resultType_2549, var_isInternal_2575, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 58)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_2575.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionCallExpressionAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_2652 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).getter_locationForKey (temp_3.getter_mFunctionName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 66)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_functionCallExpressionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.getter_mFunctionName (HERE).getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 67)).objectCompare (var_procDeclarationLocation_2652.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 67)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_functionCallExpressionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("expression-function-call.galgas", 68)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2652.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 68)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 68)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 68)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_functionCallExpressionAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_2507.getter_length (SOURCE_FILE ("expression-function-call.galgas", 72)).objectCompare (temp_9.getter_mExpressionList (HERE).getter_length (SOURCE_FILE ("expression-function-call.galgas", 72)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_functionCallExpressionAST temp_10 = object ;
      const GALGAS_functionCallExpressionAST temp_11 = object ;
      const GALGAS_functionCallExpressionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("expression-function-call.galgas", 73)), GALGAS_string ("the '").add_operation (temp_11.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("expression-function-call.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 74)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 74)).add_operation (var_functionSignature_2507.getter_length (SOURCE_FILE ("expression-function-call.galgas", 74)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 74)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 74)).add_operation (temp_12.getter_mExpressionList (HERE).getter_length (SOURCE_FILE ("expression-function-call.galgas", 75)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 75)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 75)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 73)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_3391 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-function-call.galgas", 79)) ;
    const GALGAS_functionCallExpressionAST temp_14 = object ;
    cEnumerator_functionSignature enumerator_3464 (var_functionSignature_2507, kENUMERATION_UP) ;
    cEnumerator_actualOutputExpressionList enumerator_3492 (temp_14.getter_mExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_3464.hasCurrentObject () && enumerator_3492.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_3743 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_3492.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_3464.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3743, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 81)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_3464.current_mFormalArgumentType (HERE), var_expression_3743.getter_mResultType (SOURCE_FILE ("expression-function-call.galgas", 89)), enumerator_3492.current_mEndOfExpressionLocation (HERE), var_expression_3743, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_3464.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_3492.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_3464.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_3464.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 91)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_3492.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("expression-function-call.galgas", 91)), GALGAS_string ("the selector should be '!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 91)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 91)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 91)) ;
        }
      }
      var_semanticExpressionListForGeneration_3391.addAssign_operation (var_expression_3743  COMMA_SOURCE_FILE ("expression-function-call.galgas", 93)) ;
      enumerator_3464.gotoNextObject () ;
      enumerator_3492.gotoNextObject () ;
    }
    const GALGAS_functionCallExpressionAST temp_19 = object ;
    const GALGAS_functionCallExpressionAST temp_20 = object ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_2549, temp_19.getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("expression-function-call.galgas", 97)), temp_20.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("expression-function-call.galgas", 98)), var_semanticExpressionListForGeneration_3391  COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                  extensionMethod_functionCallExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionForGeneration * object = (const cPtr_functionCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionForGeneration) ;
  const GALGAS_functionCallExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 121)) ;
  const GALGAS_functionCallExpressionForGeneration temp_1 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_1.getter_mFunctionName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 123))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 123)) ;
  GALGAS_stringlist var_parameterList_5369 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-function-call.galgas", 125)) ;
  const GALGAS_functionCallExpressionForGeneration temp_2 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_5415 (temp_2.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_5415.hasCurrentObject ()) {
    GALGAS_string var_parameter_5440 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_5415.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_5440, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 128)) ;
    var_parameterList_5369.addAssign_operation (var_parameter_5440  COMMA_SOURCE_FILE ("expression-function-call.galgas", 129)) ;
    enumerator_5415.gotoNextObject () ;
  }
  const GALGAS_functionCallExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (temp_3.getter_mFunctionName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 131)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 131)) ;
  cEnumerator_stringlist enumerator_5733 (var_parameterList_5369, kENUMERATION_UP) ;
  while (enumerator_5733.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_5733.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 133)) ;
    enumerator_5733.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 135)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 135)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)) ;
  const GALGAS_functionCallExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_functionCallExpressionForGeneration.mSlotID,
                                           extensionMethod_functionCallExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionCallExpressionForGeneration_generateExpression (defineExtensionMethod_functionCallExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  {
  const GALGAS_literalTypeInExpressionAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry joker_1497 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_0.getter_mLiteralTypeName (HERE), joker_1497 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                         extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  const GALGAS_literalTypeInExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_1984 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mLiteralTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 47)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_1984 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 48)) ;
  }
  const GALGAS_literalTypeInExpressionAST temp_1 = object ;
  GALGAS_bool joker_2245_26 ; // Joker input parameter
  GALGAS_bool joker_2245_25 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2245_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_2245_23 ; // Joker input parameter
  GALGAS_bool joker_2245_22 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2245_21 ; // Joker input parameter
  GALGAS_propertyMap joker_2245_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2245_19 ; // Joker input parameter
  GALGAS_constructorMap joker_2245_18 ; // Joker input parameter
  GALGAS_getterMap joker_2245_17 ; // Joker input parameter
  GALGAS_setterMap joker_2245_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2245_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_2245_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_2245_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2245_12 ; // Joker input parameter
  GALGAS_operators joker_2245_11 ; // Joker input parameter
  GALGAS_functionSignature joker_2245_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2245_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_2245_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2245_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2245_6 ; // Joker input parameter
  GALGAS_bool joker_2245_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2245_4 ; // Joker input parameter
  GALGAS_string joker_2245_3 ; // Joker input parameter
  GALGAS_string joker_2245_2 ; // Joker input parameter
  GALGAS_headerKind joker_2245_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).method_searchKey (temp_1.getter_mLiteralTypeName (HERE), joker_2245_26, joker_2245_25, joker_2245_24, joker_2245_23, joker_2245_22, joker_2245_21, joker_2245_20, joker_2245_19, joker_2245_18, joker_2245_17, joker_2245_16, joker_2245_15, joker_2245_14, joker_2245_13, joker_2245_12, joker_2245_11, joker_2245_10, joker_2245_9, joker_2245_8, joker_2245_7, joker_2245_6, joker_2245_5, joker_2245_4, joker_2245_3, joker_2245_2, joker_2245_1, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 50)) ;
  const GALGAS_literalTypeInExpressionAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2265 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_2.getter_mLiteralTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 52)) ;
  const GALGAS_literalTypeInExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54))  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54)), temp_3.getter_mLiteralTypeName (HERE).getter_location (SOURCE_FILE ("expression-literal-type.galgas", 55)), var_type_2265  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                  extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalTypeInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionForGeneration * object = (const cPtr_literalTypeInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionForGeneration) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mLiteralType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 77)) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_1 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (temp_1.getter_mLiteralType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 79)).getter_identifierRepresentation (SOURCE_FILE ("expression-literal-type.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 78)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 79)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration.mSlotID,
                                           extensionMethod_literalTypeInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalTypeInExpressionForGeneration_generateExpression (defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_collectionValueAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  const GALGAS_collectionValueAST temp_0 = object ;
  cEnumerator_collectionValueElementList enumerator_3650 (temp_0.getter_mElementList (HERE), kENUMERATION_UP) ;
  while (enumerator_3650.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_3650.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 94)) ;
    enumerator_3650.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                         extensionMethod_collectionValueAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_collectionValueAST_enterExpressionInSemanticContext (defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_4196 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_collectionValueAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_4196 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_collectionValueAST temp_2 = object ;
    var_targetType_4196 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_2.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 113)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_targetType_4196.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-collection-value.galgas", 116)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_collectionValueAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-collection-value.galgas", 117)), GALGAS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 117)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_targetType_4196.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 118)).operator_not (SOURCE_FILE ("expression-collection-value.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_collectionValueAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mTypeName (HERE).getter_location (SOURCE_FILE ("expression-collection-value.galgas", 119)), GALGAS_string ("the @").add_operation (var_targetType_4196.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 119)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 119)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 119)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_collectionValueAST temp_9 = object ;
      GALGAS_lstring var_usefulnessName_4658 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_targetType_4196.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 121)), temp_9.getter_mEndOfCollectionValue (HERE)  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 121)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4658 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 122)) ;
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_collectionValueAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.getter_mElementList (HERE).getter_length (SOURCE_FILE ("expression-collection-value.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_collectionValueAST temp_12 = object ;
          outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_4196, temp_12.getter_mTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 124)) ;
        }
      }
      if (kBoolFalse == test_10) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_5103 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 129)) ;
        const GALGAS_collectionValueAST temp_13 = object ;
        cEnumerator_collectionValueElementList enumerator_5142 (temp_13.getter_mElementList (HERE), kENUMERATION_UP) ;
        while (enumerator_5142.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_5142.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_targetType_4196, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_5103, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 131)) ;
          enumerator_5142.gotoNextObject () ;
        }
        const GALGAS_collectionValueAST temp_14 = object ;
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_4196, temp_14.getter_mEndOfCollectionValue (HERE), var_collectionValueElementListForGeneration_5103  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 140)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                  extensionMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineExtensionMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  const GALGAS_expressionCollectionValue temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 157)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                               extensionMethod_expressionCollectionValue_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionCollectionValue_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionListCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  const GALGAS_expressionListCollectionValue temp_0 = object ;
  extensionMethod_enterInSemanticContext (temp_0.getter_mExpressionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 163)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                               extensionMethod_expressionListCollectionValue_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionListCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               const GALGAS_unifiedTypeMap_2D_entry constinArgument_inElementType,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression_7557 ;
  const GALGAS_expressionCollectionValue temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7557, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 186)) ;
  {
  const GALGAS_expressionCollectionValue temp_1 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_7557.getter_mResultType (SOURCE_FILE ("expression-collection-value.galgas", 195)), temp_1.getter_mExpressionLocation (HERE), var_expression_7557, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 195)) ;
  }
  const GALGAS_expressionCollectionValue temp_2 = object ;
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (temp_2.getter_mExpressionLocation (HERE), var_expression_7557  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 197))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 197)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                extensionMethod_expressionCollectionValue_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineExtensionMethod_expressionCollectionValue_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_unifiedTypeMap_2D_entry constinArgument_inElementType,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList_8395 = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_8516 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_expressionListCollectionValue temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_8395.getter_length (SOURCE_FILE ("expression-collection-value.galgas", 211)).objectCompare (temp_1.getter_mExpressionList (HERE).getter_length (SOURCE_FILE ("expression-collection-value.galgas", 211)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_expressionListCollectionValue temp_2 = object ;
      const GALGAS_expressionListCollectionValue temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfExpressionLocation (HERE), GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 212)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 212)).add_operation (var_formalParameterTypeList_8395.getter_length (SOURCE_FILE ("expression-collection-value.galgas", 213)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 212)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 213)).add_operation (temp_3.getter_mExpressionList (HERE).getter_length (SOURCE_FILE ("expression-collection-value.galgas", 214)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 213)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 214)), fixItArray4  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 212)) ;
      var_semanticExpressionListForGeneration_8516.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_8516 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 216)) ;
    const GALGAS_expressionListCollectionValue temp_5 = object ;
    cEnumerator_actualOutputExpressionList enumerator_8991 (temp_5.getter_mExpressionList (HERE), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_9022 (var_formalParameterTypeList_8395, kENUMERATION_UP) ;
    while (enumerator_8991.hasCurrentObject () && enumerator_9022.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_9277 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_8991.current (HERE).getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_9022.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_9277, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 218)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_9022.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_8991.current (HERE).getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_9022.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_8991.current (HERE).getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("expression-collection-value.galgas", 227)), GALGAS_string ("the selector should be '!").add_operation (enumerator_9022.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 228)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 228)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 228)), fixItArray9  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 227)) ;
        }
      }
      {
      const GALGAS_expressionListCollectionValue temp_10 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_9022.current_mFormalArgumentType (HERE), var_exp_9277.getter_mResultType (SOURCE_FILE ("expression-collection-value.galgas", 230)), temp_10.getter_mEndOfExpressionLocation (HERE), var_exp_9277, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 230)) ;
      }
      var_semanticExpressionListForGeneration_8516.addAssign_operation (var_exp_9277  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 231)) ;
      enumerator_8991.gotoNextObject () ;
      enumerator_9022.gotoNextObject () ;
    }
    const GALGAS_expressionListCollectionValue temp_11 = object ;
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (temp_11.getter_mEndOfExpressionLocation (HERE), var_semanticExpressionListForGeneration_8516  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 233))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 233)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionListCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                extensionMethod_expressionListCollectionValue_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineExtensionMethod_expressionListCollectionValue_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inTargetType */,
                                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                  const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValueForGeneration * object = (const cPtr_expressionCollectionValueForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValueForGeneration) ;
  GALGAS_string var_sourceVar_11778 ;
  const GALGAS_expressionCollectionValueForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_11778, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 285)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_11778, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 286)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 287)) ;
  const GALGAS_expressionCollectionValueForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.getter_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 288)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 288)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 289)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 289)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration.mSlotID,
                                                      extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap_2D_entry constinArgument_inTargetType,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                 const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionForGeneration * object = (const cPtr_expressionListCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionForGeneration) ;
  GALGAS_stringlist var_parameterList_12799 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 308)) ;
  const GALGAS_expressionListCollectionForGeneration temp_0 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_12849 (temp_0.getter_mExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_12849.hasCurrentObject ()) {
    GALGAS_string var_parameter_13032 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_12849.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13032, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 310)) ;
    var_parameterList_12799.addAssign_operation (var_parameter_13032  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 317)) ;
    enumerator_12849.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 320)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 322)) ;
  cEnumerator_stringlist enumerator_13235 (var_parameterList_12799, kENUMERATION_UP) ;
  while (enumerator_13235.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_13235.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 324)) ;
    if (enumerator_13235.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 325)) ;
    }
    enumerator_13235.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inTargetType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 327)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("expression-collection-value.galgas", 327)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 328)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 329)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 329)) ;
      }
    }
  }
  const GALGAS_expressionListCollectionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.getter_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 331)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 331)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionListCollectionForGeneration.mSlotID,
                                                      extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionListCollectionForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionCollectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionForGeneration * object = (const cPtr_expressionCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionForGeneration) ;
  const GALGAS_expressionCollectionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 349)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 351)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 351)) ;
  const GALGAS_expressionCollectionForGeneration temp_1 = object ;
  const GALGAS_expressionCollectionForGeneration temp_2 = object ;
  const GALGAS_expressionCollectionForGeneration temp_3 = object ;
  const GALGAS_expressionCollectionForGeneration temp_4 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 353)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 353)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 353)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 353)).add_operation (temp_2.getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)).add_operation (temp_3.getter_mResultType (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)).getter_identifierRepresentation (SOURCE_FILE ("expression-collection-value.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)).add_operation (extensionGetter_sourceFile (temp_4.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 353)) ;
  const GALGAS_expressionCollectionForGeneration temp_5 = object ;
  cEnumerator_collectionValueElementListForGeneration enumerator_14830 (temp_5.getter_mElementList (HERE), kENUMERATION_UP) ;
  while (enumerator_14830.hasCurrentObject ()) {
    const GALGAS_expressionCollectionForGeneration temp_6 = object ;
    callExtensionMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_14830.current_mElement (HERE).ptr (), temp_6.getter_mResultType (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 357)) ;
    enumerator_14830.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionCollectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_expressionCollectionForGeneration.mSlotID,
                                           extensionMethod_expressionCollectionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionCollectionForGeneration_generateExpression (defineExtensionMethod_expressionCollectionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_selfInExpressionAST.mSlotID,
                                                         extensionMethod_selfInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_selfInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfInExpressionAST * object = (const cPtr_selfInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfInExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("expression-self.galgas", 45)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfInExpressionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mSelfLocation (HERE), GALGAS_string ("'self' cannot be used in this context"), fixItArray2  COMMA_SOURCE_FILE ("expression-self.galgas", 46)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_selfCppName_2033 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    const GALGAS_selfInExpressionAST temp_3 = object ;
    outArgument_outExpression = GALGAS_selfInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE), temp_3.getter_mSelfLocation (HERE), var_selfCppName_2033  COMMA_SOURCE_FILE ("expression-self.galgas", 49)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_selfInExpressionAST.mSlotID,
                                                  extensionMethod_selfInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_selfInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfInExpressionForGeneration * object = (const cPtr_selfInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 69)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 69)) ;
  const GALGAS_selfInExpressionForGeneration temp_0 = object ;
  const GALGAS_selfInExpressionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (temp_0.getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 70)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 70)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 70)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 70)).add_operation (temp_1.getter_mSelfCppName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 70)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 70)) ;
  {
  const GALGAS_selfInExpressionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mSelfCppName (HERE) COMMA_SOURCE_FILE ("expression-self.galgas", 71)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_selfInExpressionForGeneration.mSlotID,
                                           extensionMethod_selfInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfInExpressionForGeneration_generateExpression (defineExtensionMethod_selfInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST.mSlotID,
                                                         extensionMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structPropertyAccessExpressionAST * object = (const cPtr_structPropertyAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structPropertyAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2362 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-property-access.galgas", 55)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2362, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 52)) ;
  GALGAS_unifiedTypeMap_2D_entry var_expressionType_2446 = var_expression_2362.getter_mResultType (SOURCE_FILE ("expression-property-access.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_expressionType_2446.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 62)).getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 62)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 62)).operator_and (var_expressionType_2446.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 62)).getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 62)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 62)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 62)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structPropertyAccessExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mStructFieldName (HERE).getter_location (SOURCE_FILE ("expression-property-access.galgas", 63)), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray3  COMMA_SOURCE_FILE ("expression-property-access.galgas", 63)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_2712 = var_expressionType_2446.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 65)) ;
  GALGAS_bool var_isPublic_2806 ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2816 ;
  const GALGAS_structPropertyAccessExpressionAST temp_4 = object ;
  var_propertyMap_2712.method_searchKey (temp_4.getter_mStructFieldName (HERE), var_isPublic_2806, var_type_2816, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 66)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isPublic_2806.boolEnum () ;
    if (kBoolTrue == test_5) {
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("expression-property-access.galgas", 69)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_structPropertyAccessExpressionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mStructFieldName (HERE).getter_location (SOURCE_FILE ("expression-property-access.galgas", 70)), GALGAS_string ("inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("expression-property-access.galgas", 70)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_expressionType_2446.objectCompare (constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_structPropertyAccessExpressionAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.getter_mStructFieldName (HERE).getter_location (SOURCE_FILE ("expression-property-access.galgas", 72)), GALGAS_string ("inaccessible property (due to its 'private' qualifier)2"), fixItArray11  COMMA_SOURCE_FILE ("expression-property-access.galgas", 72)) ;
        }
      }
    }
  }
  const GALGAS_structPropertyAccessExpressionAST temp_12 = object ;
  const GALGAS_structPropertyAccessExpressionAST temp_13 = object ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_2816, temp_12.getter_mOperatorLocation (HERE), var_expression_2362, temp_13.getter_mStructFieldName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("expression-property-access.galgas", 75)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST.mSlotID,
                                                  extensionMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression (defineExtensionMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structPropertyAccessExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structPropertyAccessExpressionForGeneration * object = (const cPtr_structPropertyAccessExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structPropertyAccessExpressionForGeneration) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 100)) ;
  GALGAS_string var_operand_4367 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4367, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 102)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4367.add_operation (GALGAS_string (".getter_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 104)).add_operation (temp_2.getter_mStructFieldName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 104)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structPropertyAccessExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration.mSlotID,
                                           extensionMethod_structPropertyAccessExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structPropertyAccessExpressionForGeneration_generateExpression (defineExtensionMethod_structPropertyAccessExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_notExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  const GALGAS_notExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                         extensionMethod_notExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_notExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_notExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2080 ;
  const GALGAS_notExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-not.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2080, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2349 = var_expression_2080.getter_mResultType (SOURCE_FILE ("expression-not.galgas", 59)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_2080.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = object ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_2.getter_mOperatorLocation (HERE)  COMMA_SOURCE_FILE ("expression-not.galgas", 61)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_2080.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = object ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_4.getter_mOperatorLocation (HERE)  COMMA_SOURCE_FILE ("expression-not.galgas", 63)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_type_2349.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 64)).getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 64)).operator_not (SOURCE_FILE ("expression-not.galgas", 64)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mOperatorLocation (HERE), GALGAS_string ("operand type is '@").add_operation (var_type_2349.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 66)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 66)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 65)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = object ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_2349, temp_8.getter_mOperatorLocation (HERE), var_expression_2080  COMMA_SOURCE_FILE ("expression-not.galgas", 70)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_notExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                  extensionMethod_notExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_notExpressionAST_analyzeSemanticExpression (defineExtensionMethod_notExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_notExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionForGeneration * object = (const cPtr_notExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionForGeneration) ;
  const GALGAS_notExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-not.galgas", 94)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 94)) ;
  GALGAS_string var_operand_3947 ;
  const GALGAS_notExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_3947, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 97)) ;
  const GALGAS_notExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_3947.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)).add_operation (extensionGetter_sourceFile (temp_2.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_notExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_notExpressionForGeneration.mSlotID,
                                           extensionMethod_notExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_notExpressionForGeneration_generateExpression (defineExtensionMethod_notExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_tildeExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionAST * object = (const cPtr_tildeExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionAST) ;
  const GALGAS_tildeExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_tildeExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_tildeExpressionAST.mSlotID,
                                                         extensionMethod_tildeExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_tildeExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_tildeExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_tildeExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionAST * object = (const cPtr_tildeExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2276 ;
  const GALGAS_tildeExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-tilde.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2276, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2346 = var_expression_2276.getter_mResultType (SOURCE_FILE ("expression-tilde.galgas", 59)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_2386 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_2276.ptr ())) ;
    if (NULL == var_exp_2386.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_2386.getter_mResultType (SOURCE_FILE ("expression-tilde.galgas", 62)), var_exp_2386.getter_mLocation (SOURCE_FILE ("expression-tilde.galgas", 63)), var_exp_2386.getter_mValue (SOURCE_FILE ("expression-tilde.galgas", 64)).operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 64))  COMMA_SOURCE_FILE ("expression-tilde.galgas", 61)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_type_2346.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 66)).getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 66)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 66)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = object ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.getter_mOperatorLocation (HERE), GALGAS_string ("operand type is '@").add_operation (var_type_2346.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 68)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 68)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 67)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = object ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_2346, temp_5.getter_mOperatorLocation (HERE), var_expression_2276  COMMA_SOURCE_FILE ("expression-tilde.galgas", 72)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_tildeExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_tildeExpressionAST.mSlotID,
                                                  extensionMethod_tildeExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_tildeExpressionAST_analyzeSemanticExpression (defineExtensionMethod_tildeExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_tildeExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionForGeneration * object = (const cPtr_tildeExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionForGeneration) ;
  const GALGAS_tildeExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mExpression (HERE).getter_mResultType (SOURCE_FILE ("expression-tilde.galgas", 96)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 96)) ;
  GALGAS_string var_operand_3795 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_3795, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 99)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_3795.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 101)).add_operation (extensionGetter_sourceFile (temp_2.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 101)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 101)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_tildeExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_tildeExpressionForGeneration.mSlotID,
                                           extensionMethod_tildeExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_tildeExpressionForGeneration_generateExpression (defineExtensionMethod_tildeExpressionForGeneration_generateExpression, NULL) ;

