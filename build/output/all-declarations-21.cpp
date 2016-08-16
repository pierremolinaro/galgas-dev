#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-21.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfForGeneration * object = (const cPtr_templateInstructionIfForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfForGeneration) ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_9835 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_9835.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_9884 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_9835.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_9884, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 225)) ;
    GALGAS_string var_testVar_10050 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (var_ifVarCppName_9884, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 229)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_9835.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 230)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 238)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 240)) ;
    }
    enumerator_9835.gotoNextObject () ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 243)) ;
  }
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_10982 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_10982.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 252)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 253)) ;
    enumerator_10982.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                               extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchForGeneration * object = (const cPtr_templateInstructionSwitchForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchForGeneration) ;
  GALGAS_string var_switchVarCppName_11474 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11474, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_11474, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 270)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 271)) ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11909 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_11909.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11940 (enumerator_11909.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_11940.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (enumerator_11940.current_mValue (HERE).getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).getter_identifierRepresentation (SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)) ;
      enumerator_11940.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 277)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_11909.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 278)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 279)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)) ;
      }
      {
      routine_templateCodeGenerationForListInstruction (enumerator_11909.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 281)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 289)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 290)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 292)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 293)) ;
    }
    enumerator_11909.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 296)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                               extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                   GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                              extensionGetter_lexicalOrExpressionAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32CharRange (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mLowerBound.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 41)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 42)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mUpperBound.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 43)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@lexicalStringMatchAST generateConditionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (object->mAttribute_mString.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 53)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 54)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 54)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 55)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                              extensionGetter_lexicalStringMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 64)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 65)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 66)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 66)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 67)) ;
  result_outGeneratedCode.plusAssign_operation(inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 68)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                              extensionGetter_lexicalStringNotMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32Char (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 79)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 79)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 80)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForCharWithFunction (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 89)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 90)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 104)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 111)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 111)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mUnsigned.getter_uint (SOURCE_FILE ("lexiqueGeneration.galgas", 118)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 118)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("previousChar ()") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_function_").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7628 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_7628.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7628.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
    enumerator_7628.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 150)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 157)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                              GALGAS_string /* inArgument_inScannerClassName */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mAttribute_mDefaultSentTerminal.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 173)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 173)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       GALGAS_string inArgument_inScannerClassName,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (inArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (object->mAttribute_mDefaultErrorMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalStructuredSendInstructionAST generateInstructionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                  GALGAS_string inArgument_inScannerClassName,
                                                                                                  GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_11026 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_11026.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_11026.current_mSearchListName (HERE).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (enumerator_11026.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    enumerator_11026.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 208)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalDropInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                        GALGAS_string /* inArgument_inScannerClassName */,
                                                                                        GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("enterDroppedTerminal (kToken_").add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 218)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 218)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionGetter_lexicalDropInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalSimpleSendInstructionAST generateInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                              GALGAS_string /* inArgument_inScannerClassName */,
                                                                                              GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mAttribute_mSentTerminal.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRepeatInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 239)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12862 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_12862.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12862.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)) ;
    enumerator_12862.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_13021 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_13021.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 247)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13021.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 249)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13267 (enumerator_13021.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_13267.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13267.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)) ;
      enumerator_13267.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 254)) ;
    }
    if (enumerator_13021.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 256)) ;
    }
    enumerator_13021.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = false ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 258)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 261)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop) ;\n"
    "mLoop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 262)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalSelectInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSelectInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSelectBranchListAST enumerator_14085 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_14085.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 276)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_14085.current_mSelectExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 277)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 278)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14333 (enumerator_14085.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_14333.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14333.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 281)) ;
      enumerator_14333.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 283)) ;
    }
    if (enumerator_14085.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 285)) ;
    }
    enumerator_14085.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mDefaultInstructionList.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 288)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 289)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 290)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14730 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
    while (enumerator_14730.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14730.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 292)) ;
      enumerator_14730.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 294)) ;
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 296)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSelectInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionGetter_lexicalSelectInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSelectInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRoutineInstructionAST generateInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           GALGAS_string inArgument_inScannerClassName,
                                                                                           GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_routine_").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 305)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 305)) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_15346 (object->mAttribute_mActualArgumentList, kEnumeration_up) ;
  while (enumerator_15346.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_15346.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)) ;
    enumerator_15346.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_15472 (object->mAttribute_mErrorMessageList, kEnumeration_up) ;
  while (enumerator_15472.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 310)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 310)).add_operation (enumerator_15472.current_mValue (HERE).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 310)) ;
    enumerator_15472.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRoutineInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRoutineInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalErrorInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_string inArgument_inScannerClassName,
                                                                                         GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 321)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 321)).add_operation (object->mAttribute_mErrorMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 321)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 321)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionGetter_lexicalErrorInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalErrorInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalWarningInstructionAST generateInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalWarningInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           GALGAS_string inArgument_inScannerClassName,
                                                                                           GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 330)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 330)).add_operation (object->mAttribute_mWarningMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 330)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 330)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalWarningInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionGetter_lexicalWarningInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalWarningInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalTagInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalTagInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                       GALGAS_string /* inArgument_inScannerClassName */,
                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("const C_LocationInSource currentLocationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 339)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 339)).add_operation (GALGAS_string ("const C_LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 339)).add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalTagInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionGetter_lexicalTagInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalTagInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRewindInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRewindInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string /* inArgument_inScannerClassName */,
                                                                                          GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mCurrentLocation = currentLocationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 350)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 350)).add_operation (GALGAS_string ("mTokenEndLocation = endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 350)).add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (GALGAS_string ("mCurrentChar = currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (GALGAS_string ("token.mTokenCode = kToken_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string ("enterToken (token) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRewindInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionGetter_lexicalRewindInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRewindInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalLogInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalLogInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                       GALGAS_string /* inArgument_inScannerClassName */,
                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalLogInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionGetter_lexicalLogInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalLogInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@lexicalImplicitRuleAST generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalImplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList_19117 ;
  GALGAS_lexicalExplicitTokenListMap joker_19191 ; // Joker input parameter
  GALGAS_bool joker_19211 ; // Joker input parameter
  inArgument_inLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueGeneration.galgas", 382)).method_searchKey (object->mAttribute_mListName, joker_19191, var_tokenSortedList_19117, joker_19211, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 382)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_19267 (var_tokenSortedList_19117, kEnumeration_down) ;
  while (enumerator_19267.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 385)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 385)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_19267.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 386)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 387)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_19267.current_mName (HERE).getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 388)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 388)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 389)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_19267.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 391)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 392)) ;
    enumerator_19267.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalImplicitRuleAST_generateCode (void) {
  enterExtensionGetter_generateCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                     extensionGetter_lexicalImplicitRuleAST_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCode (defineExtensionGetter_lexicalImplicitRuleAST_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@lexicalExplicitRuleAST generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (") ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 403)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 404)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 405)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_20261 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_20261.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_20261.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)) ;
    enumerator_20261.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 409)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 410)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalExplicitRuleAST_generateCode (void) {
  enterExtensionGetter_generateCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                     extensionGetter_lexicalExplicitRuleAST_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCode (defineExtensionGetter_lexicalExplicitRuleAST_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalOrExpressionAST generateCocoaConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                                   extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateCocoaConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalCharacterIntervalMatchAST generateCocoaConditionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                                  GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputFromChar:") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mLowerBound.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 42)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mUpperBound.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalStringMatchAST generateCocoaConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputString:@").add_operation (object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 53)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                                   extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalStringNotMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                          GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self notTestForInputString:@") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" error:& scanningOk]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 63)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                                   extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalCharacterMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                          GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputChar:") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 73)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalCharacterSetMatchAST generateCocoaConditionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForCharWithFunction:") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 82)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 83)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension getter '@lexicalAttributeInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 97)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension getter '@lexicalCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension getter '@lexicalUnsignedInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mUnsigned.getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 111)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 111)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                     C_Compiler * /* inCompiler */
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("mPreviousChar") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension getter '@lexicalFunctionInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7042 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_7042.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7042.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)) ;
    if (enumerator_7042.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 128)) ;
    }
    enumerator_7042.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateCocoaRoutineArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_lexicalType_8045 ;
  inArgument_inLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)).method_searchKey (object->mAttribute_mAttributeName, var_lexicalType_8045, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = extensionGetter_needsReferenceInInputOutputInCocoa (var_lexicalType_8045, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 150)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 151)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (void) {
  enterExtensionGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                     extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@lexicalFormalInputArgumentAST generateCocoaRoutineArgument'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                 GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 161)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (void) {
  enterExtensionGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                     extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalSendTerminalByDefaultAST generateCocoaDefaultSendCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                   GALGAS_string inArgument_inScannerClassName,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (object->mAttribute_mDefaultSentTerminal.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterExtensionGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                     extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalErrorByDefaultAST generateCocoaDefaultSendCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * /* inObject */,
                                                                                            GALGAS_string /* inArgument_inScannerClassName */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterExtensionGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                     extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@lexicalStructuredSendInstructionAST generateCocoaInstructionCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                       GALGAS_string inArgument_inScannerClassName,
                                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_10810 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_10810.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = search_into_").add_operation (inArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (enumerator_10810.current_mSearchListName (HERE).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (enumerator_10810.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 207)) ;
    enumerator_10810.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 209)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                     extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalSimpleSendInstructionAST generateCocoaInstructionCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                   GALGAS_string inArgument_inScannerClassName,
                                                                                                   GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (object->mAttribute_mSentTerminal.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                     extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalRepeatInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 230)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12159 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_12159.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12159.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)) ;
    enumerator_12159.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_12323 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_12323.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_12323.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 240)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 241)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12582 (enumerator_12323.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_12582.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12582.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)) ;
      enumerator_12582.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)) ;
    }
    if (enumerator_12323.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 247)) ;
    }
    enumerator_12323.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = NO ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 249)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 252)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop && scanningOk) ;\n"
    "mLoop = YES ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 253)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalSelectInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSelectBranchListAST enumerator_13420 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_13420.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 267)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13420.current_mSelectExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 269)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 270)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13681 (enumerator_13420.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_13681.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13681.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)) ;
      enumerator_13681.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 274)) ;
    }
    if (enumerator_13420.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 276)) ;
    }
    enumerator_13420.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mDefaultInstructionList.getter_length (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 280)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 281)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14083 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
    while (enumerator_14083.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14083.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)) ;
      enumerator_14083.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 285)) ;
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                     extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@lexicalRoutineInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                GALGAS_string /* inArgument_inScannerClassName */,
                                                                                                GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_14720 (object->mAttribute_mActualArgumentList, kEnumeration_up) ;
  while (enumerator_14720.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_14720.current_mLexicalRoutineActualArgument (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)) ;
    enumerator_14720.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 300)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalDropInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                             GALGAS_string inArgument_inScannerClassName,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                     extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalErrorInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                              GALGAS_string /* inArgument_inScannerClassName */,
                                                                                              GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                     extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@lexicalWarningInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                                GALGAS_string /* inArgument_inScannerClassName */,
                                                                                                GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                     extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalTagInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                            GALGAS_string /* inArgument_inScannerClassName */,
                                                                                            GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                     extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalRewindInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                                               GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalLogInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                            GALGAS_string /* inArgument_inScannerClassName */,
                                                                                            GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) ; */\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                     extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@lexicalImplicitRuleAST generateCocoaCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalImplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList_18369 ;
  GALGAS_lexicalExplicitTokenListMap joker_18443 ; // Joker input parameter
  GALGAS_bool joker_18463 ; // Joker input parameter
  inArgument_inLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)).method_searchKey (object->mAttribute_mListName, joker_18443, var_tokenSortedList_18369, joker_18463, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_18519 (var_tokenSortedList_18369, kEnumeration_down) ;
  while (enumerator_18519.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && [self testForInputString:@"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_18519.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 380)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (enumerator_18519.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 382)) ;
    enumerator_18519.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalImplicitRuleAST_generateCocoaCode (void) {
  enterExtensionGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                          extensionGetter_lexicalImplicitRuleAST_generateCocoaCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCocoaCode (defineExtensionGetter_lexicalImplicitRuleAST_generateCocoaCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@lexicalExplicitRuleAST generateCocoaCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 394)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_19392 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_19392.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_19392.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)) ;
    enumerator_19392.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 399)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 400)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalExplicitRuleAST_generateCocoaCode (void) {
  enterExtensionGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                          extensionGetter_lexicalExplicitRuleAST_generateCocoaCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCocoaCode (defineExtensionGetter_lexicalExplicitRuleAST_generateCocoaCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  GALGAS_lexicalSentValueList joker_8289 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 163)).method_searchKey (object->mAttribute_mDefaultSentTerminal, joker_8289, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (void) {
  enterExtensionMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                  extensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (defineExtensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mDefaultErrorMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 170)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (void) {
  enterExtensionMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                  extensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (defineExtensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalOrExpressionAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 184)) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 185)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalOrExpressionAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                               extensionMethod_lexicalOrExpressionAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalOrExpressionAST_checkLexicalExpression (defineExtensionMethod_lexicalOrExpressionAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  const enumGalgasBool test_0 = ioArgument_ioLexiqueAnalysisContext.mAttribute_mExternUnicodeTestFunctions.getter_hasKey (object->mAttribute_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 199)) COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 199)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 199)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, ioArgument_ioLexiqueAnalysisContext.mAttribute_mExternUnicodeTestFunctions) ;
    inCompiler->emitSemanticError (object->mAttribute_mCharacterSetName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 200)), GALGAS_string ("undefined test function"), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 200)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalStringMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                          GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 214))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 214)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalStringMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                               extensionMethod_lexicalStringMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStringMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalStringMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalStringNotMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 221))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 221)) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mErrorMessage.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 222)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalStringNotMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                               extensionMethod_lexicalStringNotMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStringNotMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalStringNotMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                               GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_12224 ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 240)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType_12224, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 240)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_12224.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAttributeName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 246)), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_12224, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 246)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 248)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 246)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                               GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                               GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 260)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mCharacter.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 261)), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 261)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 262)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 261)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 274)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mUnsigned.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 275)), GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                      GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                      GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 288)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 289)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 290)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 289)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14994 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_15039 ;
  GALGAS_string var_replacementFunctionName_15073 ;
  GALGAS_bool joker_15245 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalFunctionMap (SOURCE_FILE ("lexiqueCompilation.galgas", 305)).method_searchKey (object->mAttribute_mFunctionName, var_lexicalFormalTypeList_14994, var_returnedLexicalFormalType_15039, var_replacementFunctionName_15073, joker_15245, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 305)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_15073.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 314)), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_15073, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_15039.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 318)), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_15039, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 318)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 319)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 320)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 321)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 318)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_14994.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 325)).objectCompare (object->mAttribute_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 325)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 326)), GALGAS_string ("this lexical function names ").add_operation (object->mAttribute_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 327)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)).add_operation (var_lexicalFormalTypeList_14994.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 329)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 329)), fixItArray5  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)) ;
  }
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_16225 (var_lexicalFormalTypeList_14994, kEnumeration_up) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_16260 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_16225.hasCurrentObject () && enumerator_16260.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_16260.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_16225.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 333)) ;
    enumerator_16225.gotoNextObject () ;
    enumerator_16260.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_17366 ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 355)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType_17366, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_17366.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAttributeName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 361)), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_17366, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 361)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 361)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 375)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mCharacter.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 376)), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 376)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 377)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 378)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 376)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 389)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mUnsigned.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 390)), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 390)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 391)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 392)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 390)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 403)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 404)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 405)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 406)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 404)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_20137 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_20182 ;
  GALGAS_string var_replacementFunctionName_20216 ;
  GALGAS_bool joker_20388 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalFunctionMap (SOURCE_FILE ("lexiqueCompilation.galgas", 420)).method_searchKey (object->mAttribute_mFunctionName, var_lexicalFormalTypeList_20137, var_returnedLexicalFormalType_20182, var_replacementFunctionName_20216, joker_20388, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 420)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_20216.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 429)), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_20216, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_20182.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 433)), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_20182, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 433)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 435)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 433)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_20137.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 440)).objectCompare (object->mAttribute_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 440)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 441)), GALGAS_string ("this lexical function names ").add_operation (object->mAttribute_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 442)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 441)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 442)).add_operation (var_lexicalFormalTypeList_20137.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 444)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 443)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 444)), fixItArray5  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 441)) ;
  }
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_21368 (var_lexicalFormalTypeList_20137, kEnumeration_up) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_21403 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_21368.hasCurrentObject () && enumerator_21403.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_21403.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_21368.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 448)) ;
    enumerator_21368.gotoNextObject () ;
    enumerator_21403.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                    GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                                    GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_22639 ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 472)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType_22639, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_22639.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAttributeName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 478)), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_22639, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 479)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 480)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 481)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 485)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualPassingModeLocation, GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 486)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                           GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 497)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 502)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualPassingModeLocation, GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 503)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                         GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  cEnumerator_lexicalSendSearchListAST enumerator_24938 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_24938.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_24938.current_mSearchListName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 521)) ;
    }
    GALGAS_lexicalTypeEnum joker_25134 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 522)).method_searchKey (enumerator_24938.current_mAttributeName (HERE), joker_25134, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 522)) ;
    enumerator_24938.gotoNextObject () ;
  }
  callExtensionMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 524)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  GALGAS_lexicalSentValueList joker_25583 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 532)).method_searchKey (object->mAttribute_mSentTerminal, joker_25583, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 532)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  cEnumerator_lexicalWhileBranchListAST enumerator_25898 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_25898.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_25898.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 541)) ;
    GALGAS_lexicalTagMap var_tagMap_25989 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 542)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26073 (enumerator_25898.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_26073.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26073.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25989, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 544)) ;
      enumerator_26073.gotoNextObject () ;
    }
    enumerator_25898.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_26184 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 547)) ;
  cEnumerator_lexicalInstructionListAST enumerator_26269 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_26269.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26269.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26184, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 549)) ;
    enumerator_26269.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  cEnumerator_lexicalSelectBranchListAST enumerator_26672 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_26672.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_26672.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 559)) ;
    GALGAS_lexicalTagMap var_tagMap_26764 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 560)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26849 (enumerator_26672.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_26849.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26849.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26764, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 562)) ;
      enumerator_26849.gotoNextObject () ;
    }
    enumerator_26672.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_26960 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 565)) ;
  cEnumerator_lexicalInstructionListAST enumerator_27044 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
  while (enumerator_27044.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_27044.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26960, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 567)) ;
    enumerator_27044.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSelectInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalRoutineInstructionAST checkLexicalInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_27486 ;
  GALGAS_stringlist var_routineErrorMessageList_27524 ;
  GALGAS_bool joker_27681 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexiqueCompilation.galgas", 578)).method_searchKey (object->mAttribute_mRoutineName, var_lexicalRoutineFormalArgumentList_27486, var_routineErrorMessageList_27524, joker_27681, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 578)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_27486.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 585)).objectCompare (object->mAttribute_mActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 585)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 586)), GALGAS_string ("this lexical routine call names ").add_operation (object->mAttribute_mActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 587)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 586)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 587)).add_operation (var_lexicalRoutineFormalArgumentList_27486.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 589)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 588)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 589)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 586)) ;
  }
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_28164 (var_lexicalRoutineFormalArgumentList_27486, kEnumeration_up) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_28191 (object->mAttribute_mActualArgumentList, kEnumeration_up) ;
  while (enumerator_28164.hasCurrentObject () && enumerator_28191.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_28191.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_28164.current_mLexicalFormalArgumentMode (HERE), enumerator_28164.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 593)) ;
    enumerator_28164.gotoNextObject () ;
    enumerator_28191.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_27524.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 600)).objectCompare (object->mAttribute_mErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 600)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 601)), GALGAS_string ("this lexical routine call names ").add_operation (object->mAttribute_mErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 602)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 601)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 602)).add_operation (var_routineErrorMessageList_27524.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 604)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 603)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 604)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 601)) ;
  }
  cEnumerator_lstringlist enumerator_28803 (object->mAttribute_mErrorMessageList, kEnumeration_up) ;
  while (enumerator_28803.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), enumerator_28803.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 611)) ;
    }
    enumerator_28803.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalLogInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  ioArgument_ioTagMap.method_searchKey (object->mAttribute_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 627)) ;
  GALGAS_lexicalSentValueList joker_29721 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 628)).method_searchKey (object->mAttribute_mTerminalName, joker_29721, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 628)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRewindInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  GALGAS_lexicalSentValueList joker_30076 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 636)).method_searchKey (object->mAttribute_mTerminalName, joker_30076, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 636)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalDropInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  {
  ioArgument_ioTagMap.setter_insertKey (object->mAttribute_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 644)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalTagInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mErrorMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 652)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalErrorInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mWarningMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 660)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalWarningInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalImplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_lexicalExplicitTokenListMap joker_31969 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_31972 ; // Joker input parameter
  GALGAS_bool joker_31975 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCompilation.galgas", 674)).method_searchKey (object->mAttribute_mListName, joker_31969, joker_31972, joker_31975, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 674)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalImplicitRuleAST_checkLexicalRule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalImplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalExplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 681)) ;
  GALGAS_lexicalTagMap var_tagMap_32304 = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 682)) ;
  cEnumerator_lexicalInstructionListAST enumerator_32360 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_32360.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_32360.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_32304, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 684)) ;
    enumerator_32360.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalExplicitRuleAST_checkLexicalRule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalExplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@arrayDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  GALGAS_lstring var_key_2228 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 46)), object->mAttribute_mArrayTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 46))  COMMA_SOURCE_FILE ("type-array.galgas", 46)) ;
  {
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2228, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2228, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mElementTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 48)), object->mAttribute_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 48))  COMMA_SOURCE_FILE ("type-array.galgas", 48)) COMMA_SOURCE_FILE ("type-array.galgas", 48)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                                extensionMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@arrayDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mDimension.getter_location (SOURCE_FILE ("type-array.galgas", 62)), GALGAS_string ("the dimension of an array should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeIndex_3371 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, var_arrayTypeIndex_3371 COMMA_SOURCE_FILE ("type-array.galgas", 66)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeIndex_3527 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, var_elementTypeIndex_3527 COMMA_SOURCE_FILE ("type-array.galgas", 69)) ;
  }
  GALGAS_constructorMap var_constructorMap_3654 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 71)) ;
  GALGAS_getterMap var_getterMap_3768 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_3768, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 72)) ;
  }
  GALGAS_setterMap var_setterMap_3786 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 73)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3833 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 74)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_3903 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolType_3903 COMMA_SOURCE_FILE ("type-array.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType_4035 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType_4035 COMMA_SOURCE_FILE ("type-array.galgas", 80)) ;
  }
  GALGAS_functionSignature var_uintArgs_4148 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 82)) ;
  GALGAS_uint var_idx_4183 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 84)).isValid ()) {
    uint32_t variant_4194 = object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 84)).uintValue () ;
    bool loop_4194 = true ;
    while (loop_4194) {
      loop_4194 = GALGAS_bool (kIsStrictInf, var_idx_4183.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 84)))).isValid () ;
      if (loop_4194) {
        loop_4194 = GALGAS_bool (kIsStrictInf, var_idx_4183.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 84)))).boolValue () ;
      }
      if (loop_4194 && (0 == variant_4194)) {
        loop_4194 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 84)) ;
      }
      if (loop_4194) {
        variant_4194 -- ;
        var_uintArgs_4148.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 85)), var_uintType_4035, GALGAS_string ("inSize").add_operation (var_idx_4183.getter_string (SOURCE_FILE ("type-array.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 85))  COMMA_SOURCE_FILE ("type-array.galgas", 85)) ;
        var_idx_4183.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 86)) ;
      }
    }
  }
  {
  var_constructorMap_3654.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 90))  COMMA_SOURCE_FILE ("type-array.galgas", 90)), var_uintArgs_4148, GALGAS_bool (false), var_arrayTypeIndex_3371, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 89)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_3768, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 96)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3768, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 97)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3768, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 98)) ;
  }
  {
  var_getterMap_3768.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 100))  COMMA_SOURCE_FILE ("type-array.galgas", 100)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 101)), var_uintArgs_4148, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 103)), GALGAS_bool (true), var_boolType_3903, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 106)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 99)) ;
  }
  {
  var_getterMap_3768.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 110))  COMMA_SOURCE_FILE ("type-array.galgas", 110)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 111)), var_uintArgs_4148, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 113)), GALGAS_bool (true), var_elementTypeIndex_3527, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 116)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 109)) ;
  }
  GALGAS_formalParameterSignature var_setterFormalArgumentList_5426 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 120)) ;
  var_setterFormalArgumentList_5426.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 121)), var_elementTypeIndex_3527, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 121)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("type-array.galgas", 121)) ;
  var_idx_4183 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 123)).isValid ()) {
    uint32_t variant_5596 = object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 123)).uintValue () ;
    bool loop_5596 = true ;
    while (loop_5596) {
      loop_5596 = GALGAS_bool (kIsStrictInf, var_idx_4183.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 123)))).isValid () ;
      if (loop_5596) {
        loop_5596 = GALGAS_bool (kIsStrictInf, var_idx_4183.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 123)))).boolValue () ;
      }
      if (loop_5596 && (0 == variant_5596)) {
        loop_5596 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 123)) ;
      }
      if (loop_5596) {
        variant_5596 -- ;
        var_setterFormalArgumentList_5426.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 124)), var_uintType_4035, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 124)), GALGAS_string ("inIndex").add_operation (var_idx_4183.getter_string (SOURCE_FILE ("type-array.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 124))  COMMA_SOURCE_FILE ("type-array.galgas", 124)) ;
        var_idx_4183.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
      }
    }
  }
  {
  var_setterMap_3786.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 128)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 129)), var_setterFormalArgumentList_5426, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 132)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 127)) ;
  }
  {
  var_setterMap_3786.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 136)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 137)), var_setterFormalArgumentList_5426, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 140)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 135)) ;
  }
  {
  GALGAS_lstring joker_6188_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_6188_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_6188_2 ; // Joker input parameter
  GALGAS_string joker_6188_1 ; // Joker input parameter
  var_setterFormalArgumentList_5426.setter_popFirst (joker_6188_4, joker_6188_3, joker_6188_2, joker_6188_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 143)) ;
  }
  {
  var_setterMap_3786.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 145)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 146)), var_setterFormalArgumentList_5426, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 149)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 144)) ;
  }
  {
  var_setterMap_3786.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("type-array.galgas", 153)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 154)), var_setterFormalArgumentList_5426, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 157)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 152)) ;
  }
  var_setterFormalArgumentList_5426 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 160)) ;
  var_setterFormalArgumentList_5426.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 161)), var_uintType_4035, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 161)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("type-array.galgas", 161)) ;
  var_setterFormalArgumentList_5426.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 162)), var_uintType_4035, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 162)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("type-array.galgas", 162)) ;
  {
  var_setterMap_3786.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("type-array.galgas", 164)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 165)), var_setterFormalArgumentList_5426, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 168)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 163)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mArrayTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 176)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 177)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 179)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 180)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 181)), var_constructorMap_3654, var_getterMap_3768, var_setterMap_3786, var_instanceMethodMap_3833, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 186)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 187)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 188)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 190)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 191)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 192)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 193)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 194)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 198)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 172)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               extensionMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@arrayDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_8730 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 216)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8730, var_nameForUsefulness_8730, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 217)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_8890 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 218)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8730, var_elementTypeNameForUsefulness_8890 COMMA_SOURCE_FILE ("type-array.galgas", 219)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 222)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 224)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 225)), object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 226))  COMMA_SOURCE_FILE ("type-array.galgas", 223)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-array.galgas", 221)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineExtensionMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@arrayTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 245)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 246)), object->mAttribute_mElementTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 247)), object->mAttribute_mDimension COMMA_SOURCE_FILE ("type-array.galgas", 244))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 251)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 252)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 253)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 254)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 255)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 256)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 257)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 258)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 259)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 260)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 261)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 262)) COMMA_SOURCE_FILE ("type-array.galgas", 250))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 250)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                              extensionMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 272)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 273)) ;
  GALGAS_stringlist var_suffixList_11213 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 275)) ;
  GALGAS_uint var_idx_11241 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.isValid ()) {
    uint32_t variant_11252 = object->mAttribute_mDimension.uintValue () ;
    bool loop_11252 = true ;
    while (loop_11252) {
      loop_11252 = GALGAS_bool (kIsStrictInf, var_idx_11241.objectCompare (object->mAttribute_mDimension)).isValid () ;
      if (loop_11252) {
        loop_11252 = GALGAS_bool (kIsStrictInf, var_idx_11241.objectCompare (object->mAttribute_mDimension)).boolValue () ;
      }
      if (loop_11252 && (0 == variant_11252)) {
        loop_11252 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 277)) ;
      }
      if (loop_11252) {
        variant_11252 -- ;
        var_suffixList_11213.addAssign_operation (var_idx_11241.getter_string (SOURCE_FILE ("type-array.galgas", 278))  COMMA_SOURCE_FILE ("type-array.galgas", 278)) ;
        var_idx_11241.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 279)) ;
      }
    }
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 282)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 283)), object->mAttribute_mElementTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 284)), object->mAttribute_mDimension, var_suffixList_11213 COMMA_SOURCE_FILE ("type-array.galgas", 281))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                     extensionMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@classDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_key_3148 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 86)), object->mAttribute_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 86))  COMMA_SOURCE_FILE ("type-class.galgas", 86)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3148, temp_0, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 87)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperClassName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3148, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 89)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("type-class.galgas", 89)) COMMA_SOURCE_FILE ("type-class.galgas", 89)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_3457 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3457.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3148, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3457.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 92)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("type-class.galgas", 92)) COMMA_SOURCE_FILE ("type-class.galgas", 92)) ;
    }
    enumerator_3457.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                                extensionMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@classDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_uintType_4337 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType_4337 COMMA_SOURCE_FILE ("type-class.galgas", 107)) ;
  }
  GALGAS_getterMap var_getterMap_4458 ;
  GALGAS_setterMap var_setterMap_4481 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4520 ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList_4569 ;
  GALGAS_attributeMap var_attributeMap_4588 = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 113)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassIndex_4678 ;
  GALGAS_bool var_generateHeaderInSeparateFile_4715 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 117)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassIndex_4678 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 118)) ;
    {
    routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_4458, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
    }
    var_setterMap_4481 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 120)) ;
    var_instanceMethodMap_4520 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 121)) ;
    var_inheritedTypedAttributeList_4569 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 122)) ;
    var_attributeMap_4588 = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 123)) ;
    var_generateHeaderInSeparateFile_4715 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5150 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
    while (enumerator_5150.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5150.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 126)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generateHeaderInSeparateFile_4715 = GALGAS_bool (true) ;
      }
      enumerator_5150.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, var_superClassIndex_4678 COMMA_SOURCE_FILE ("type-class.galgas", 131)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_5413 ;
    GALGAS_getterMap var_inheritedGetterMap_5447 ;
    GALGAS_setterMap var_inheritedSetterMap_5481 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_5523 ;
    GALGAS_bool joker_5596_3 ; // Joker input parameter
    GALGAS_bool joker_5596_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5596_1 ; // Joker input parameter
    GALGAS_bool joker_5626 ; // Joker input parameter
    GALGAS_typedPropertyList joker_5690_2 ; // Joker input parameter
    GALGAS_constructorMap joker_5690_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_5778_9 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_5778_8 ; // Joker input parameter
    GALGAS_stringlist joker_5778_7 ; // Joker input parameter
    GALGAS_uint joker_5778_6 ; // Joker input parameter
    GALGAS_functionSignature joker_5778_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_5778_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_5778_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5778_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5778_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5824_4 ; // Joker input parameter
    GALGAS_string joker_5824_3 ; // Joker input parameter
    GALGAS_string joker_5824_2 ; // Joker input parameter
    GALGAS_headerKind joker_5824_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mSuperClassName, joker_5596_3, joker_5596_2, joker_5596_1, var_typeKindEnum_5413, joker_5626, var_inheritedTypedAttributeList_4569, var_attributeMap_4588, joker_5690_2, joker_5690_1, var_inheritedGetterMap_5447, var_inheritedSetterMap_5481, var_inheritedMethodMap_5523, joker_5778_9, joker_5778_8, joker_5778_7, joker_5778_6, joker_5778_5, joker_5778_4, joker_5778_3, joker_5778_2, joker_5778_1, var_generateHeaderInSeparateFile_4715, joker_5824_4, joker_5824_3, joker_5824_2, joker_5824_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 136)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_5413.objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("type-class.galgas", 152)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mSuperClassName.getter_location (SOURCE_FILE ("type-class.galgas", 153)), GALGAS_string ("the @").add_operation (object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 153)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 153)), fixItArray3  COMMA_SOURCE_FILE ("type-class.galgas", 153)) ;
    }
    var_setterMap_4481 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 156)) ;
    cEnumerator_setterMap enumerator_6091 (var_inheritedSetterMap_5481, kEnumeration_up) ;
    while (enumerator_6091.hasCurrentObject ()) {
      {
      var_setterMap_4481.setter_insertKey (enumerator_6091.current_lkey (HERE), enumerator_6091.current_mKind (HERE), enumerator_6091.current_mParameterList (HERE), enumerator_6091.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 163)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 158)) ;
      }
      enumerator_6091.gotoNextObject () ;
    }
    var_getterMap_4458 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 168)) ;
    cEnumerator_getterMap enumerator_6400 (var_inheritedGetterMap_5447, kEnumeration_up) ;
    while (enumerator_6400.hasCurrentObject ()) {
      {
      var_getterMap_4458.setter_insertKey (enumerator_6400.current_lkey (HERE), enumerator_6400.current_mKind (HERE), enumerator_6400.current_mArgumentTypeList (HERE), enumerator_6400.current_mDeclarationLocation (HERE), enumerator_6400.current_mHasCompilerArgument (HERE), enumerator_6400.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 177)), enumerator_6400.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 170)) ;
      }
      enumerator_6400.gotoNextObject () ;
    }
    var_instanceMethodMap_4520 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 182)) ;
    cEnumerator_instanceMethodMap enumerator_6773 (var_inheritedMethodMap_5523, kEnumeration_up) ;
    while (enumerator_6773.hasCurrentObject ()) {
      {
      var_instanceMethodMap_4520.setter_insertKey (enumerator_6773.current_lkey (HERE), enumerator_6773.current_mKind (HERE), enumerator_6773.current_mParameterList (HERE), enumerator_6773.current_mDeclarationLocation (HERE), enumerator_6773.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 190)), enumerator_6773.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 184)) ;
      }
      enumerator_6773.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_7101 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 196)) ;
  cEnumerator_typedPropertyList enumerator_7164 (var_inheritedTypedAttributeList_4569, kEnumeration_up) ;
  while (enumerator_7164.hasCurrentObject ()) {
    var_constructorAttributeTypeList_7101.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 198)), enumerator_7164.current_mAttributeTypeProxy (HERE), enumerator_7164.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-class.galgas", 198)) ;
    enumerator_7164.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_7294 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7294.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_7342 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_7294.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7342 COMMA_SOURCE_FILE ("type-class.galgas", 202)) ;
    }
    var_constructorAttributeTypeList_7101.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 203)), var_attributeTypeIndex_7342, enumerator_7294.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-class.galgas", 203)) ;
    {
    var_attributeMap_4588.setter_insertKey (enumerator_7294.current_mPropertyName (HERE), var_attributeTypeIndex_7342, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 204)) ;
    }
    const enumGalgasBool test_4 = var_getterMap_4458.getter_hasKey (enumerator_7294.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 209)) COMMA_SOURCE_FILE ("type-class.galgas", 209)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_7294.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 210)), GALGAS_string ("'").add_operation (enumerator_7294.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 210)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 210)), fixItArray5  COMMA_SOURCE_FILE ("type-class.galgas", 210)) ;
    }
    enumerator_7294.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_classIndex_7975 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, var_classIndex_7975 COMMA_SOURCE_FILE ("type-class.galgas", 214)) ;
  }
  GALGAS_constructorMap var_constructorMap_8017 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 220)) ;
  const enumGalgasBool test_6 = object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 221)).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    var_constructorMap_8017.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 223))  COMMA_SOURCE_FILE ("type-class.galgas", 223)), var_constructorAttributeTypeList_7101, GALGAS_bool (false), var_classIndex_7975, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 222)) ;
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList_8290 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 230)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_8356 = var_inheritedTypedAttributeList_4569 ;
  cEnumerator_propertyInCollectionListAST enumerator_8413 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_8413.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_8461 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_8413.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8461 COMMA_SOURCE_FILE ("type-class.galgas", 234)) ;
    }
    GALGAS_bool var_hasSetter_8587 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_8615 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_8649 (enumerator_8413.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8649.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_8649.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 238)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_hasSetter_8587 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_8649.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 240)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_hasGetter_8615 = GALGAS_bool (false) ;
        }
      }
      enumerator_8649.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList_8290.addAssign_operation (var_attributeTypeIndex_8461, enumerator_8413.current_mPropertyName (HERE), var_hasSetter_8587, var_hasGetter_8615  COMMA_SOURCE_FILE ("type-class.galgas", 244)) ;
    var_allTypedAttributeList_8356.addAssign_operation (var_attributeTypeIndex_8461, enumerator_8413.current_mPropertyName (HERE), var_hasSetter_8587, var_hasGetter_8615  COMMA_SOURCE_FILE ("type-class.galgas", 245)) ;
    const enumGalgasBool test_9 = var_hasGetter_8615.boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      var_getterMap_4458.setter_insertKey (enumerator_8413.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 249)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 250)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 251)), GALGAS_bool (false), var_attributeTypeIndex_8461, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-class.galgas", 254)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 247)) ;
      }
    }
    enumerator_8413.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_9411 (var_currentClassTypedAttributeList_8290, kEnumeration_up) ;
  while (enumerator_9411.hasCurrentObject ()) {
    const enumGalgasBool test_10 = enumerator_9411.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      GALGAS_formalParameterSignature temp_11 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 265)) ;
      temp_11.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 265)), enumerator_9411.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 265)), enumerator_9411.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-class.galgas", 265)) ;
      var_setterMap_4481.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9411.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 263)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 263)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 263))  COMMA_SOURCE_FILE ("type-class.galgas", 263)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 264)), temp_11, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 267)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 262)) ;
      }
    }
    enumerator_9411.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mClassTypeName, var_getterMap_4458, var_setterMap_4481, var_instanceMethodMap_4520, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 273)) ;
  }
  GALGAS_string var_defaultConstructorName_10200 ;
  const enumGalgasBool test_12 = var_superClassIndex_4678.getter_isNull (SOURCE_FILE ("type-class.galgas", 285)).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_defaultConstructorName_10200 = GALGAS_string ("default") ;
  }else if (kBoolFalse == test_12) {
    var_defaultConstructorName_10200 = var_superClassIndex_4678.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 288)) ;
  }
  cEnumerator_typedPropertyList enumerator_10401 (var_currentClassTypedAttributeList_8290, kEnumeration_up) ;
  bool bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10200.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_10401.hasCurrentObject () && bool_13) {
    while (enumerator_10401.hasCurrentObject () && bool_13) {
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_10401.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 291)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_10401.current_mAttributeTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 291)).operator_not (SOURCE_FILE ("type-class.galgas", 291)) COMMA_SOURCE_FILE ("type-class.galgas", 291)).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_defaultConstructorName_10200 = GALGAS_string::makeEmptyString () ;
      }
      enumerator_10401.gotoNextObject () ;
      if (enumerator_10401.hasCurrentObject ()) {
        bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10200.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mClassTypeName, object->mAttribute_mIsPredefined, object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 299)), var_superClassIndex_4678, GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("type-class.galgas", 301)), GALGAS_bool (false), var_allTypedAttributeList_8356, var_attributeMap_4588, var_currentClassTypedAttributeList_8290, var_constructorMap_8017, var_getterMap_4458, var_setterMap_4481, var_instanceMethodMap_4520, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 310)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 311)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 312)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 314)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 315)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 316)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 317)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 318)), var_generateHeaderInSeparateFile_4715, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 320)), var_defaultConstructorName_10200, GALGAS_string ("class-").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 322)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 296)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               extensionMethod_classDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineExtensionMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@classDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_classTypeNameForUsefulness_12252 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mClassTypeName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 340)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_12252, var_classTypeNameForUsefulness_12252, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 341)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 342)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_superClassNameForUsefulness_12472 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mSuperClassName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 343)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12252, var_superClassNameForUsefulness_12472 COMMA_SOURCE_FILE ("type-class.galgas", 344)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_12680 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 347)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy_12968 ;
  GALGAS_typedPropertyList var_allAttributeList_13006 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 353)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_superClassProxy_12968 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 354)) ;
    var_allAttributeList_13006 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 355)) ;
    GALGAS_bool var_generatedInSeparateFileFeature_13190 = GALGAS_bool (false) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 357)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_lstringlist enumerator_13275 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_13275.hasCurrentObject ()) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_13275.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 359)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_generatedInSeparateFileFeature_13190.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_13275.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 361)), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray5  COMMA_SOURCE_FILE ("type-class.galgas", 361)) ;
          }
          var_generatedInSeparateFileFeature_13190 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_13275.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 365)), GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here"), fixItArray6  COMMA_SOURCE_FILE ("type-class.galgas", 365)) ;
        }
        enumerator_13275.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_1) {
    var_superClassProxy_12968 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 370)) ;
    var_allAttributeList_13006 = var_superClassProxy_12968.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 371)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 372)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      cEnumerator_lstringlist enumerator_13900 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_13900.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_13900.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 374)), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray8  COMMA_SOURCE_FILE ("type-class.galgas", 374)) ;
        enumerator_13900.gotoNextObject () ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_14074 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 379)) ;
  GALGAS_attributeIndexMap var_attributeMap_14113 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 380)) ;
  cEnumerator_propertyInCollectionListAST enumerator_14145 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_14145.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14186 = function_typeNameForUsefulEntitiesGraph (enumerator_14145.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 382)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12252, var_propertyTypeNameForUsefulness_14186 COMMA_SOURCE_FILE ("type-class.galgas", 383)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_14347 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_14145.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 384)) ;
    GALGAS_bool var_hasSetter_14450 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_14478 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_14512 (enumerator_14145.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_14512.hasCurrentObject ()) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_14512.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 388)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_9) {
        const enumGalgasBool test_10 = var_hasSetter_14450.boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_14512.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 390)), GALGAS_string ("the 'setter' feature is already named"), fixItArray11  COMMA_SOURCE_FILE ("type-class.galgas", 390)) ;
        }
        var_hasSetter_14450 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_9) {
        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_14512.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 393)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const enumGalgasBool test_13 = var_hasGetter_14478.operator_not (SOURCE_FILE ("type-class.galgas", 394)).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_14512.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 395)), GALGAS_string ("the 'nogetter' feature is already named"), fixItArray14  COMMA_SOURCE_FILE ("type-class.galgas", 395)) ;
          }
          var_hasGetter_14478 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_12) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (enumerator_14512.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 399)), GALGAS_string ("only the 'setter' or 'nogetter' are allowed here"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 399)) ;
        }
      }
      enumerator_14512.gotoNextObject () ;
    }
    var_typedAttributeList_14074.addAssign_operation (var_t_14347, enumerator_14145.current_mPropertyName (HERE), var_hasSetter_14450, var_hasGetter_14478  COMMA_SOURCE_FILE ("type-class.galgas", 402)) ;
    var_allAttributeList_13006.addAssign_operation (var_t_14347, enumerator_14145.current_mPropertyName (HERE), var_hasSetter_14450, var_hasGetter_14478  COMMA_SOURCE_FILE ("type-class.galgas", 407)) ;
    {
    var_attributeMap_14113.setter_insertKey (enumerator_14145.current_mPropertyName (HERE), var_t_14347, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 412)) ;
    }
    enumerator_14145.gotoNextObject () ;
  }
  GALGAS_string var_sortString_15286 = var_selfType_12680.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_15329 = var_selfType_12680.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 416)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("type-class.galgas", 417)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 417)).isValid ()) {
    uint32_t variant_15360 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("type-class.galgas", 417)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 417)).uintValue () ;
    bool loop_15360 = true ;
    while (loop_15360) {
      loop_15360 = var_t_15329.getter_isNull (SOURCE_FILE ("type-class.galgas", 418)).operator_not (SOURCE_FILE ("type-class.galgas", 418)).isValid () ;
      if (loop_15360) {
        loop_15360 = var_t_15329.getter_isNull (SOURCE_FILE ("type-class.galgas", 418)).operator_not (SOURCE_FILE ("type-class.galgas", 418)).boolValue () ;
      }
      if (loop_15360 && (0 == variant_15360)) {
        loop_15360 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-class.galgas", 417)) ;
      }
      if (loop_15360) {
        variant_15360 -- ;
        var_sortString_15286 = var_t_15329.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 419)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 419)).add_operation (var_sortString_15286, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 419)) ;
        var_t_15329 = var_t_15329.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 420)) ;
      }
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 424)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_12680, object->mAttribute_mIsAbstract, object->mAttribute_mClassTypeName, var_superClassProxy_12968, var_allAttributeList_13006, var_typedAttributeList_14074, var_selfType_12680.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 432))  COMMA_SOURCE_FILE ("type-class.galgas", 425)), var_sortString_15286  COMMA_SOURCE_FILE ("type-class.galgas", 423)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 454)).operator_not (SOURCE_FILE ("type-class.galgas", 454)).boolEnum () ;
  if (kBoolTrue == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 455)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 461)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 461)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 459)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 460)), temp_1, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 464)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 458))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 467)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 468)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 469)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 470)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 471)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 472)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 473)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 474)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 475)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 476)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 477)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 478)) COMMA_SOURCE_FILE ("type-class.galgas", 466))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 466)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          const GALGAS_string constinArgument_inOutputDirectory,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_18007 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_18007.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18007.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 489)) ;
    enumerator_18007.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mGenerateHeaderInSeparateFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 496)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_2) {
      temp_1 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 496)) ;
    }
    GALGAS_string var_part_31__18114 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 494)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 495)), temp_1, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 493))) ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 504)).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_4) {
      temp_3 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 504)) ;
    }
    GALGAS_string var_part_32__18426 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 502)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 503)), temp_3, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 501))) ;
    GALGAS_string var_headerFileName_18747 = GALGAS_string ("separateHeaderFor_").add_operation (object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 511)), var_headerFileName_18747, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_part_31__18114, GALGAS_string ("\n"
      "\n"), var_part_32__18426, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 510)) ;
    }
    outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_18747, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)).add_operation (GALGAS_string ("\"\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 526)).boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_6) {
      temp_5 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 526)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 524)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 525)), temp_5, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 523))) ;
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 534)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 534)) ;
    }
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 532)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 533)), temp_7, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 531))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 531)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@classTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 548)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 552)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 552)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 550)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)), temp_0, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mAllTypedAttributeList.getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mAttribute_mAllTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 555)).substract_operation (object->mAttribute_mTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 555))  COMMA_SOURCE_FILE ("type-class.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 555)), object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 557)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 549))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                     extensionMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_key_3382 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 75)), object->mAttribute_mEnumTypeName.getter_location (SOURCE_FILE ("type-enum.galgas", 75))  COMMA_SOURCE_FILE ("type-enum.galgas", 75)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3382, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 76)) ;
  }
  GALGAS_bool var_circularReference_3616 = GALGAS_bool (true) ;
  cEnumerator_enumConstantList enumerator_3649 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_3649.hasCurrentObject ()) {
    GALGAS_bool var_namesCurrentType_3677 = GALGAS_bool (false) ;
    cEnumerator__32_lstringlist enumerator_3730 (enumerator_3649.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_3730.hasCurrentObject ()) {
      GALGAS_lstring var_propertyKey_3755 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3730.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 82)), enumerator_3730.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 82))  COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_propertyKey_3755.mAttribute_string.objectCompare (var_key_3382.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_namesCurrentType_3677 = GALGAS_bool (true) ;
      }
      enumerator_3730.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = var_namesCurrentType_3677.operator_not (SOURCE_FILE ("type-enum.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_circularReference_3616 = GALGAS_bool (false) ;
    }
    enumerator_3649.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_4061 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_4061.hasCurrentObject ()) {
    cEnumerator__32_lstringlist enumerator_4109 (enumerator_4061.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_4109.hasCurrentObject ()) {
      GALGAS_lstring var_propertyKey_4134 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4109.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 94)), enumerator_4109.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 94))  COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
      GALGAS_bool test_3 = GALGAS_bool (kIsNotEqual, var_propertyKey_4134.mAttribute_string.objectCompare (var_key_3382.mAttribute_string)) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = var_circularReference_3616 ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3382, var_propertyKey_4134 COMMA_SOURCE_FILE ("type-enum.galgas", 96)) ;
        }
      }
      enumerator_4109.gotoNextObject () ;
    }
    enumerator_4061.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                                extensionMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap_5105 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 112)) ;
  GALGAS_setterMap var_setterMap_5133 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 113)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5177 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 114)) ;
  GALGAS_classMethodMap var_classMethodMap_5215 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 115)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy_5368 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, var_enumTypeProxy_5368 COMMA_SOURCE_FILE ("type-enum.galgas", 117)) ;
  }
  GALGAS_constantIndexMap var_constantMap_5419 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 119)) ;
  GALGAS_bool var_hasAssociatedValues_5452 = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_5486 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_5486.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_5537 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 122)) ;
    GALGAS_functionSignature var_argumentTypeList_5582 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 123)) ;
    cEnumerator__32_lstringlist enumerator_5653 (enumerator_5486.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_5653.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_5781 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5653.current_mValue_30_ (HERE), var_associatedTypeProxy_5781 COMMA_SOURCE_FILE ("type-enum.galgas", 125)) ;
      }
      var_argumentTypeList_5582.addAssign_operation (enumerator_5653.current_mValue_31_ (HERE), var_associatedTypeProxy_5781, enumerator_5653.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-enum.galgas", 126)) ;
      var_associatedTypeList_5537.addAssign_operation (var_associatedTypeProxy_5781  COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
      var_hasAssociatedValues_5452 = GALGAS_bool (true) ;
      enumerator_5653.gotoNextObject () ;
    }
    {
    var_constantMap_5419.setter_insertKey (enumerator_5486.current_mConstantName (HERE), var_constantMap_5419.getter_count (SOURCE_FILE ("type-enum.galgas", 130)), var_associatedTypeList_5537, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 130)) ;
    }
    {
    var_constructorMap_5105.setter_insertOrReplace (enumerator_5486.current_mConstantName (HERE), var_argumentTypeList_5582, GALGAS_bool (false), var_enumTypeProxy_5368 COMMA_SOURCE_FILE ("type-enum.galgas", 131)) ;
    }
    enumerator_5486.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_6204 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_6204.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_6204.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 140)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapProxyList var_associatedTypeList_6313 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 141)) ;
      GALGAS_formalParameterSignature var_argumentTypeList_6367 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 142)) ;
      cEnumerator__32_lstringlist enumerator_6440 (enumerator_6204.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
      while (enumerator_6440.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_6570 ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_6440.current_mValue_30_ (HERE), var_associatedTypeProxy_6570 COMMA_SOURCE_FILE ("type-enum.galgas", 144)) ;
        }
        var_argumentTypeList_6367.addAssign_operation (enumerator_6440.current_mValue_31_ (HERE), var_associatedTypeProxy_6570, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 145)), enumerator_6440.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-enum.galgas", 145)) ;
        var_associatedTypeList_6313.addAssign_operation (var_associatedTypeProxy_6570  COMMA_SOURCE_FILE ("type-enum.galgas", 146)) ;
        var_hasAssociatedValues_5452 = GALGAS_bool (true) ;
        enumerator_6440.gotoNextObject () ;
      }
      {
      var_instanceMethodMap_5177.setter_insertKey (enumerator_6204.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 151)), var_argumentTypeList_6367, enumerator_6204.current_mConstantName (HERE).mAttribute_location, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 155)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 149)) ;
      }
    }
    enumerator_6204.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_7074 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_7074, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 161)) ;
  }
  cEnumerator_enumConstantList enumerator_7101 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_7101.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_7074, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("is").add_operation (enumerator_7101.current_mConstantName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 166)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 163)) ;
    }
    enumerator_7101.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mEnumTypeName, var_getterMap_7074, var_setterMap_5133, var_instanceMethodMap_5177, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 172)) ;
  }
  {
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = var_hasAssociatedValues_5452.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 210)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 210)) ;
  }
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mEnumTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 187)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 188)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 190)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 191)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 192)), var_constructorMap_5105, var_getterMap_7074, var_setterMap_5133, var_instanceMethodMap_5177, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 197)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 198)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 199)), function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 200)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 200)) COMMA_SOURCE_FILE ("type-enum.galgas", 200)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 201)), var_constantMap_5419, object->mAttribute_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 204)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 205)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 207)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 209)), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 183)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               extensionMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineExtensionMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@enumDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_9464 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mEnumTypeName, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 227)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9464, var_nameForUsefulness_9464, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 228)) ;
  }
  GALGAS_stringlist var_constantList_9626 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 230)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_9705 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 231)) ;
  GALGAS_constantIndexMap var_constantMap_9728 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 232)) ;
  cEnumerator_enumConstantList enumerator_9784 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_9784.hasCurrentObject ()) {
    var_constantList_9626.addAssign_operation (enumerator_9784.current_mConstantName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-enum.galgas", 234)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_9877 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 235)) ;
    GALGAS_stringset var_associatedValueNameSet_9920 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 236)) ;
    cEnumerator__32_lstringlist enumerator_9970 (enumerator_9784.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_9970.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_10013 = function_typeNameForUsefulEntitiesGraph (enumerator_9970.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 238)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9464, var_propertyTypeNameForUsefulness_10013 COMMA_SOURCE_FILE ("type-enum.galgas", 239)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_10177 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9970.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 240)) ;
      var_associatedTypeList_9877.addAssign_operation (var_associatedTypeProxy_10177  COMMA_SOURCE_FILE ("type-enum.galgas", 241)) ;
      const enumGalgasBool test_0 = var_associatedValueNameSet_9920.getter_hasKey (enumerator_9970.current_mValue_31_ (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-enum.galgas", 242)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_9970.current_mValue_31_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 243)), GALGAS_string ("duplicated name"), fixItArray1  COMMA_SOURCE_FILE ("type-enum.galgas", 243)) ;
      }
      var_associatedValueNameSet_9920.addAssign_operation (enumerator_9970.current_mValue_31_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-enum.galgas", 245)) ;
      enumerator_9970.gotoNextObject () ;
    }
    {
    var_constantMap_9728.setter_insertKey (enumerator_9784.current_mConstantName (HERE), var_constantMap_9728.getter_count (SOURCE_FILE ("type-enum.galgas", 247)), var_associatedTypeList_9877, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 247)) ;
    }
    var_enumConstantListForGeneration_9705.addAssign_operation (enumerator_9784.current_mConstantName (HERE).mAttribute_string, var_associatedTypeList_9877  COMMA_SOURCE_FILE ("type-enum.galgas", 248)) ;
    enumerator_9784.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_10660 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 251)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 253)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_10660, var_enumConstantListForGeneration_9705  COMMA_SOURCE_FILE ("type-enum.galgas", 254)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-enum.galgas", 252)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionMethod_enumDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineExtensionMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_12711 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_12745 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues_12711.operator_not (SOURCE_FILE ("type-enum.galgas", 307)).isValidAndTrue () ;
  if (enumerator_12745.hasCurrentObject () && bool_0) {
    while (enumerator_12745.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_12711 = GALGAS_bool (kIsStrictSup, enumerator_12745.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_12745.gotoNextObject () ;
      if (enumerator_12745.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_12711.operator_not (SOURCE_FILE ("type-enum.galgas", 307)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 311)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 312)), object->mAttribute_mConstantList, var_hasAssociatedValues_12711 COMMA_SOURCE_FILE ("type-enum.galgas", 310))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 317)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 318)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 319)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 320)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 321)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 322)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 323)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 324)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 325)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 326)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 327)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 328)) COMMA_SOURCE_FILE ("type-enum.galgas", 316))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 316)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_13840 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_13874 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues_13840.operator_not (SOURCE_FILE ("type-enum.galgas", 339)).isValidAndTrue () ;
  if (enumerator_13874.hasCurrentObject () && bool_0) {
    while (enumerator_13874.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_13840 = GALGAS_bool (kIsStrictSup, enumerator_13874.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 340)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13874.gotoNextObject () ;
      if (enumerator_13874.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_13840.operator_not (SOURCE_FILE ("type-enum.galgas", 339)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_14003 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_14003.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_14045 (enumerator_14003.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
    while (enumerator_14045.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_14045.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 344)) ;
      enumerator_14045.gotoNextObject () ;
    }
    enumerator_14003.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 348)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 349)), object->mAttribute_mConstantList, var_hasAssociatedValues_13840 COMMA_SOURCE_FILE ("type-enum.galgas", 347))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_14613 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_14647 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues_14613.operator_not (SOURCE_FILE ("type-enum.galgas", 362)).isValidAndTrue () ;
  if (enumerator_14647.hasCurrentObject () && bool_0) {
    while (enumerator_14647.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_14613 = GALGAS_bool (kIsStrictSup, enumerator_14647.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 363)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14647.gotoNextObject () ;
      if (enumerator_14647.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_14613.operator_not (SOURCE_FILE ("type-enum.galgas", 362)).isValidAndTrue () ;
      }
    }
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 365)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 367)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 368)), object->mAttribute_mConstantList, var_hasAssociatedValues_14613 COMMA_SOURCE_FILE ("type-enum.galgas", 366))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_key_5895 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 162)), object->mAttribute_mExternTypeName.getter_location (SOURCE_FILE ("type-extern.galgas", 162))  COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5895, temp_0, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 163)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                                extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap_6855 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_6855, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 176)) ;
  }
  GALGAS_constructorMap var_constructorMap_6878 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 177)) ;
  GALGAS_setterMap var_setterMap_6922 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 178)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6969 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 179)) ;
  GALGAS_classMethodMap var_classMethodMap_7021 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 180)) ;
  cEnumerator_externTypeConstructorList enumerator_7106 (object->mAttribute_mExternTypeConstructorList, kEnumeration_up) ;
  while (enumerator_7106.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy_7153 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_7106.current_mResultTypeName (HERE), var_returnedTypeProxy_7153 COMMA_SOURCE_FILE ("type-extern.galgas", 184)) ;
    }
    GALGAS_functionSignature var_arguments_7281 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 186)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_7333 (enumerator_7106.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_7333.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy_7382 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_7333.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy_7382 COMMA_SOURCE_FILE ("type-extern.galgas", 189)) ;
      }
      var_arguments_7281.addAssign_operation (enumerator_7333.current_mFormalSelector (HERE), var_argumentTypeProxy_7382, enumerator_7333.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-extern.galgas", 190)) ;
      enumerator_7333.gotoNextObject () ;
    }
    {
    var_constructorMap_6878.setter_insertKey (enumerator_7106.current_mConstructorName (HERE), var_arguments_7281, GALGAS_bool (true), var_returnedTypeProxy_7153, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 193)) ;
    }
    enumerator_7106.gotoNextObject () ;
  }
  cEnumerator_externTypeGetterList enumerator_7798 (object->mAttribute_mExternTypeGetterList, kEnumeration_up) ;
  while (enumerator_7798.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy_7845 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_7798.current_mResultTypeName (HERE), var_returnedTypeProxy_7845 COMMA_SOURCE_FILE ("type-extern.galgas", 203)) ;
    }
    GALGAS_functionSignature var_arguments_7988 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 205)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_8022 (enumerator_7798.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_8022.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy_8071 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_8022.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy_8071 COMMA_SOURCE_FILE ("type-extern.galgas", 208)) ;
      }
      var_arguments_7988.addAssign_operation (enumerator_8022.current_mFormalSelector (HERE), var_argumentTypeProxy_8071, enumerator_8022.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-extern.galgas", 209)) ;
      enumerator_8022.gotoNextObject () ;
    }
    {
    var_getterMap_6855.setter_insertKey (enumerator_7798.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 214)), var_arguments_7988, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 216)), GALGAS_bool (true), var_returnedTypeProxy_7845, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 219)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 212)) ;
    }
    enumerator_7798.gotoNextObject () ;
  }
  cEnumerator_externTypeModifierList enumerator_8604 (object->mAttribute_mExternTypeModifierList, kEnumeration_up) ;
  while (enumerator_8604.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_8632 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 225)) ;
    cEnumerator_formalParameterListAST enumerator_8697 (enumerator_8604.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_8697.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_8863 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_8697.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_8863 COMMA_SOURCE_FILE ("type-extern.galgas", 227)) ;
      }
      var_routineSignature_8632.addAssign_operation (enumerator_8697.current_mFormalSelector (HERE), var_parameterTypeIndex_8863, enumerator_8697.current_mFormalArgumentPassingMode (HERE), enumerator_8697.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-extern.galgas", 232)) ;
      enumerator_8697.gotoNextObject () ;
    }
    {
    var_setterMap_6922.setter_insertKey (enumerator_8604.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 237)), var_routineSignature_8632, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 240)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 235)) ;
    }
    enumerator_8604.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_9281 (object->mAttribute_mExternTypeMethodList, kEnumeration_up) ;
  while (enumerator_9281.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_9309 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 246)) ;
    cEnumerator_formalParameterListAST enumerator_9374 (enumerator_9281.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_9374.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_9424 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_9374.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_9424 COMMA_SOURCE_FILE ("type-extern.galgas", 249)) ;
      }
      var_routineSignature_9309.addAssign_operation (enumerator_9374.current_mFormalSelector (HERE), var_parameterTypeIndex_9424, enumerator_9374.current_mFormalArgumentPassingMode (HERE), enumerator_9374.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-extern.galgas", 254)) ;
      enumerator_9374.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_6969.setter_insertKey (enumerator_9281.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 259)), var_routineSignature_9309, enumerator_9281.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 263)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 257)) ;
    }
    enumerator_9281.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mExternTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 272)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 273)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 275)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 276)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 277)), var_constructorMap_6878, var_getterMap_6855, var_setterMap_6922, var_instanceMethodMap_6969, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 282)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 283)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 284)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 286)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 287)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 288)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 289)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 290)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 292)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 294)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 268)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               extensionMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@externTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_11658 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mExternTypeName, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 312)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11658, var_nameForUsefulness_11658, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 313)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 316)), GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 318)), object->mAttribute_mExternTypeName.mAttribute_string, object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode  COMMA_SOURCE_FILE ("type-extern.galgas", 317)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-extern.galgas", 315)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 342)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 343)), object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode COMMA_SOURCE_FILE ("type-extern.galgas", 341))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 348)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 349)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 350)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 351)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 352)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 353)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 354)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 355)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 356)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 357)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 358)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 359)) COMMA_SOURCE_FILE ("type-extern.galgas", 347))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 347)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_key_2720 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 64)), object->mAttribute_mGraphTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 64))  COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2720, temp_0, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2720, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 66)), object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 66))  COMMA_SOURCE_FILE ("type-graph.galgas", 66)) COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                                extensionMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@graphDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeProxy_3847 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy_3847 COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeProxy_4016 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy_4016 COMMA_SOURCE_FILE ("type-graph.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy_4176 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, var_graphTypeProxy_4176 COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy_4364 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeProxy_4364 COMMA_SOURCE_FILE ("type-graph.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringListTypeProxy_4546 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy_4546 COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap_4640 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_4640, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 109)) ;
  }
  GALGAS_constructorMap var_constructorMap_4663 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 110)) ;
  GALGAS_setterMap var_setterMap_4707 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 111)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4754 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 112)) ;
  GALGAS_classMethodMap var_classMethodMap_4806 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 113)) ;
  GALGAS_formalParameterSignature var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 115)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 117)), var_associatedListTypeProxy_4364, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 119)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 116)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 122)), var_lstringListTypeProxy_4546, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 124)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 127)), var_associatedListTypeProxy_4364, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 129)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 126)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 132)), var_lstringListTypeProxy_4546, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 134)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 137))  COMMA_SOURCE_FILE ("type-graph.galgas", 137)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 138)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 140)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 142)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 146))  COMMA_SOURCE_FILE ("type-graph.galgas", 146)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 147)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 149)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 151)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 145)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 156)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 158)), var_associatedListTypeProxy_4364, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 160)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 157)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 163)), var_lstringListTypeProxy_4546, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 165)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 162)) ;
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 168))  COMMA_SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 169)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 167)) ;
  }
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 177))  COMMA_SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 178)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 176)) ;
  }
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 186))  COMMA_SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 187)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 189)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 185)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("reversedGraph"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 212)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 220)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 228)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 236)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 246)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 264)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 272)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 280)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4640, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 292)) ;
  }
  {
  var_constructorMap_4663.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303))  COMMA_SOURCE_FILE ("type-graph.galgas", 303)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 304)), GALGAS_bool (false), var_graphTypeProxy_4176, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 302)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 309)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 311)), var_lstringTypeProxy_4016, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 313)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 310)) ;
  cEnumerator_functionSignature enumerator_10666 (var_associatedListTypeProxy_4364.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 315)), kEnumeration_up) ;
  while (enumerator_10666.hasCurrentObject ()) {
    var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 317)), enumerator_10666.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 319)), enumerator_10666.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 316)) ;
    enumerator_10666.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_10856 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_10856.hasCurrentObject ()) {
    {
    var_setterMap_4707.setter_insertOrReplace (enumerator_10856.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 325)), var_formalParameterList_4920, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 328)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 323)) ;
    }
    enumerator_10856.gotoNextObject () ;
  }
  {
  var_setterMap_4707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 335))  COMMA_SOURCE_FILE ("type-graph.galgas", 335)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 336)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 337)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 339)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 334)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 343)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 344)), var_stringTypeProxy_3847, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 344)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 344)) ;
  {
  var_setterMap_4707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 346))  COMMA_SOURCE_FILE ("type-graph.galgas", 346)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 347)), var_formalParameterList_4920, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 350)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 345)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 355)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 356)), var_lstringTypeProxy_4016, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 356)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 356)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 357)), var_lstringTypeProxy_4016, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 357)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 357)) ;
  {
  var_setterMap_4707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 359))  COMMA_SOURCE_FILE ("type-graph.galgas", 359)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 360)), var_formalParameterList_4920, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 363)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 358)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 368)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 369)), var_lstringTypeProxy_4016, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 369)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 369)) ;
  {
  var_setterMap_4707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 371))  COMMA_SOURCE_FILE ("type-graph.galgas", 371)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 372)), var_formalParameterList_4920, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 375)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 370)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mGraphTypeName, var_getterMap_4640, var_setterMap_4707, var_instanceMethodMap_4754, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 380)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mGraphTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 399)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 400)), var_constructorMap_4663, var_getterMap_4640, var_setterMap_4707, var_instanceMethodMap_4754, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 406)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 407)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 409)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 412)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 413)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 417)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 391)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               extensionMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineExtensionMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@graphDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_14898 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mGraphTypeName, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 435)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14898, var_nameForUsefulness_14898, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 436)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_15061 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 437)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14898, var_associatedTypeNameForUsefulness_15061 COMMA_SOURCE_FILE ("type-graph.galgas", 438)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy_15235 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy_15345 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListElementTypeProxy_15471 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mAssociatedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)), object->mAttribute_mAssociatedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-graph.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 442)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy_15345.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 445)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 446)), GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 446)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 446)), fixItArray1  COMMA_SOURCE_FILE ("type-graph.galgas", 446)) ;
  }
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 449)) ;
  temp_2.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 449)) ;
  temp_2.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 449)) ;
  GALGAS_stringset var_reservedModifierNames_15897 = temp_2 ;
  cEnumerator_graphInsertModifierList enumerator_15956 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_15956.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_reservedModifierNames_15897.getter_hasKey (enumerator_15956.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 451)) COMMA_SOURCE_FILE ("type-graph.galgas", 451)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_15956.current_mInsertModifierName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 452)), GALGAS_string ("the '").add_operation (enumerator_15956.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)), fixItArray4  COMMA_SOURCE_FILE ("type-graph.galgas", 452)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_15956.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 454)) ;
    }
    enumerator_15956.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 458)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy_15235, var_associatedListTypeProxy_15345, var_associatedListElementTypeProxy_15471, object->mAttribute_mInsertModifierList  COMMA_SOURCE_FILE ("type-graph.galgas", 459)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-graph.galgas", 457)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 484)) COMMA_SOURCE_FILE ("type-graph.galgas", 482))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 487)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 488)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)) COMMA_SOURCE_FILE ("type-graph.galgas", 486))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 486)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 508)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 510)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 513)), object->mAttribute_mAssociatedListTypeProxy, object->mAttribute_mInsertModifierList COMMA_SOURCE_FILE ("type-graph.galgas", 511))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_key_2263 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)), object->mAttribute_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 49))  COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2263, temp_0, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2409 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2409.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2409.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 52)), enumerator_2409.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 52))  COMMA_SOURCE_FILE ("type-list.galgas", 52)) COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
    }
    enumerator_2409.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                                extensionMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_3303 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 66)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3353 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3353.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3487 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3353.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3487 COMMA_SOURCE_FILE ("type-list.galgas", 68)) ;
    }
    GALGAS_bool var_hasGetter_3508 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_3535 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3570 (enumerator_3353.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_3570.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3570.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_hasGetter_3508 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_3570.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_hasSetter_3535 = GALGAS_bool (true) ;
        }
      }
      enumerator_3570.gotoNextObject () ;
    }
    var_typedAttributeList_3303.addAssign_operation (var_attributeTypeIndex_3487, enumerator_3353.current_mPropertyName (HERE), var_hasSetter_3535, var_hasGetter_3508  COMMA_SOURCE_FILE ("type-list.galgas", 78)) ;
    enumerator_3353.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType_3955 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType_3955 COMMA_SOURCE_FILE ("type-list.galgas", 81)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex_4097 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, var_listTypeIndex_4097 COMMA_SOURCE_FILE ("type-list.galgas", 83)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_4335 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 87)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-list.galgas", 87)), var_listElementTypeIndex_4335 COMMA_SOURCE_FILE ("type-list.galgas", 85)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_4393 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 91)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_4459 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 92)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_4519 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 93)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_4585 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 94)) ;
  cEnumerator_typedPropertyList enumerator_4646 (var_typedAttributeList_3303, kEnumeration_up) ;
  while (enumerator_4646.hasCurrentObject ()) {
    var_enumerationDescriptor_4393.addAssign_operation (enumerator_4646.current_mAttributeTypeProxy (HERE), enumerator_4646.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 96))  COMMA_SOURCE_FILE ("type-list.galgas", 96)) ;
    var_constructorAttributeTypeList_4459.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 97)), enumerator_4646.current_mAttributeTypeProxy (HERE), enumerator_4646.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 97)) ;
    var_setterOutputFormalArgumentList_4519.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 98)), enumerator_4646.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 98)), enumerator_4646.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 98)) ;
    var_setterInputFormalArgumentList_4585.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 99)), enumerator_4646.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 99)), enumerator_4646.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 99)) ;
    enumerator_4646.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5147 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 102)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_5147, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyList"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 107)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 103)) ;
  }
  {
  var_constructorMap_5147.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 111))  COMMA_SOURCE_FILE ("type-list.galgas", 111)), var_constructorAttributeTypeList_4459, GALGAS_bool (false), var_listTypeIndex_4097, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 110)) ;
  }
  GALGAS_getterMap var_getterMap_5622 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_5622, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 117)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 118)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 125)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 136)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 132)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 143)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 139)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 150)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 146)) ;
  }
  cEnumerator_typedPropertyList enumerator_6519 (var_typedAttributeList_3303, kEnumeration_up) ;
  while (enumerator_6519.hasCurrentObject ()) {
    const enumGalgasBool test_2 = enumerator_6519.current_mHasGetter (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_functionSignature temp_3 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 158)) ;
      temp_3.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 158)), var_uintType_3955, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 158)) ;
      var_getterMap_5622.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_6519.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 156)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 156)), enumerator_6519.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 156))  COMMA_SOURCE_FILE ("type-list.galgas", 156)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 157)), temp_3, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 159)), GALGAS_bool (true), enumerator_6519.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 162)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 155)) ;
      }
    }
    enumerator_6519.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_6992 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 168)) ;
  {
  var_instanceMethodMap_6992.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 170))  COMMA_SOURCE_FILE ("type-list.galgas", 170)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 171)), var_setterOutputFormalArgumentList_4519, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 173)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 175)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 169)) ;
  }
  {
  var_instanceMethodMap_6992.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 179))  COMMA_SOURCE_FILE ("type-list.galgas", 179)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 180)), var_setterOutputFormalArgumentList_4519, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 182)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 184)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 178)) ;
  }
  GALGAS_setterMap var_setterMap_7529 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 188)) ;
  {
  var_setterMap_7529.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 190))  COMMA_SOURCE_FILE ("type-list.galgas", 190)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 191)), var_setterOutputFormalArgumentList_4519, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 194)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 189)) ;
  }
  {
  var_setterMap_7529.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 198))  COMMA_SOURCE_FILE ("type-list.galgas", 198)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 199)), var_setterOutputFormalArgumentList_4519, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 202)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 197)) ;
  }
  var_setterOutputFormalArgumentList_4519.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 205)), var_uintType_3955, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 205)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 205)) ;
  {
  var_setterMap_7529.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 207))  COMMA_SOURCE_FILE ("type-list.galgas", 207)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 208)), var_setterOutputFormalArgumentList_4519, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 211)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 206)) ;
  }
  cEnumerator_typedPropertyList enumerator_8346 (var_typedAttributeList_3303, kEnumeration_up) ;
  while (enumerator_8346.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_8346.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_formalParameterSignature var_setterFormalArgumentList_8407 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 217)) ;
      var_setterFormalArgumentList_8407.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 218)), enumerator_8346.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 218)), enumerator_8346.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 218)) ;
      var_setterFormalArgumentList_8407.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 219)), var_uintType_3955, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 219)), enumerator_8346.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 219)) ;
      {
      var_setterMap_7529.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_8346.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 221)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 221)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 221)), enumerator_8346.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 221))  COMMA_SOURCE_FILE ("type-list.galgas", 221)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 222)), var_setterFormalArgumentList_8407, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 225)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 220)) ;
      }
    }
    enumerator_8346.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_4585.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 231)), var_uintType_3955, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 231)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 231)) ;
  {
  var_setterMap_7529.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 233))  COMMA_SOURCE_FILE ("type-list.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 234)), var_setterInputFormalArgumentList_4585, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 237)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 232)) ;
  }
  GALGAS_stringlist var_enumerationVariants_9519 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 242)) ;
  var_enumerationVariants_9519.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-list.galgas", 243)) ;
  var_enumerationVariants_9519.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListTypeName, var_getterMap_5622, var_setterMap_7529, var_instanceMethodMap_6992, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 246)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-list.galgas", 261)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 262)), GALGAS_bool (true), var_typedAttributeList_3303, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 265)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 266)), var_constructorMap_5147, var_getterMap_5622, var_setterMap_7529, var_instanceMethodMap_6992, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 271)), var_enumerationDescriptor_4393, var_enumerationVariants_9519, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 274)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 274)) COMMA_SOURCE_FILE ("type-list.galgas", 274)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 274)) COMMA_SOURCE_FILE ("type-list.galgas", 274)), var_constructorAttributeTypeList_4459, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 276)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 277)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 278)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 279)), GALGAS_bool (false), var_listElementTypeIndex_4335, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 283)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 257)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               extensionMethod_listDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineExtensionMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@listDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_11090 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 293)) ;
  cEnumerator_propertyInCollectionListAST enumerator_11122 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_11122.hasCurrentObject ()) {
    var_structAttributeList_11090.addAssign_operation (enumerator_11122.current_mPropertyTypeName (HERE), enumerator_11122.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 298))  COMMA_SOURCE_FILE ("type-list.galgas", 295)) ;
    enumerator_11122.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 302)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-list.galgas", 302)), var_structAttributeList_11090, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 300))  COMMA_SOURCE_FILE ("type-list.galgas", 300)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@listDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_12205 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mListTypeName, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 322)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12205, var_nameForUsefulness_12205, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 323)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_12364 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 324)), object->mAttribute_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 324))  COMMA_SOURCE_FILE ("type-list.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 324)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12205, var_elementTypeNameForUsefulness_12364 COMMA_SOURCE_FILE ("type-list.galgas", 325)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_12586 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 327)) ;
  GALGAS_attributeIndexMap var_attributeMap_12625 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 328)) ;
  cEnumerator_propertyInCollectionListAST enumerator_12657 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_12657.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_12698 = function_typeNameForUsefulEntitiesGraph (enumerator_12657.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 330)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12205, var_propertyTypeNameForUsefulness_12698 COMMA_SOURCE_FILE ("type-list.galgas", 331)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_12850 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_12657.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 332)) ;
    GALGAS_bool var_hasGetter_12951 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_12976 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13011 (enumerator_12657.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_13011.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_13011.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_hasGetter_12951.operator_not (SOURCE_FILE ("type-list.galgas", 337)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.addObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_13011.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 338)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 338)) ;
        }
        var_hasGetter_12951 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_13011.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_hasSetter_12976.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            fixItArray5.addObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_13011.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 343)), GALGAS_string ("duplicate attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 343)) ;
          }
          var_hasSetter_12976 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          GALGAS_stringlist temp_7 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 347)) ;
          temp_7.addAssign_operation (GALGAS_string ("nogetter")  COMMA_SOURCE_FILE ("type-list.galgas", 347)) ;
          temp_7.addAssign_operation (GALGAS_string ("setter")  COMMA_SOURCE_FILE ("type-list.galgas", 347)) ;
          appendFixItActions (fixItArray6, kFixItReplace, temp_7) ;
          inCompiler->emitSemanticError (enumerator_13011.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 347)), GALGAS_string ("unknown feature"), fixItArray6  COMMA_SOURCE_FILE ("type-list.galgas", 347)) ;
        }
      }
      enumerator_13011.gotoNextObject () ;
    }
    var_typedAttributeList_12586.addAssign_operation (var_t_12850, enumerator_12657.current_mPropertyName (HERE), var_hasSetter_12976, var_hasGetter_12951  COMMA_SOURCE_FILE ("type-list.galgas", 350)) ;
    {
    var_attributeMap_12625.setter_insertKey (enumerator_12657.current_mPropertyName (HERE), var_t_12850, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 355)) ;
    }
    enumerator_12657.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_13630 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 358)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 360)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_13630, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 363)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-list.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 363)), var_typedAttributeList_12586  COMMA_SOURCE_FILE ("type-list.galgas", 361)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 359)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@listTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 400)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 401)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 399))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 405)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 406)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 407)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 408)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 409)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 410)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 411)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 412)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 413)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 414)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 415)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 416)) COMMA_SOURCE_FILE ("type-list.galgas", 404))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 404)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@listTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_16290 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_16290.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16290.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 427)) ;
    enumerator_16290.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 429)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 430)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 432)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 433)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 431))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@listmapDeclarationAST addAssociatedElement'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_1789 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 37)) ;
  var_structAttributeList_1789.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 40)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 41)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 42))  COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  var_structAttributeList_1789.addAssign_operation (object->mAttribute_mAssociatedListTypeName, GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 46)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), var_structAttributeList_1789, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 49))  COMMA_SOURCE_FILE ("type-listmap.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_key_3145 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 67)), object->mAttribute_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 67))  COMMA_SOURCE_FILE ("type-listmap.galgas", 67)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3145, temp_0, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 68)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3145, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 69)), object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                                extensionMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@listmapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_4280 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_4338 ;
  GALGAS_bool joker_4242_3 ; // Joker input parameter
  GALGAS_bool joker_4242_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4242_1 ; // Joker input parameter
  GALGAS_bool joker_4286 ; // Joker input parameter
  GALGAS_attributeMap joker_4344_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_4344_19 ; // Joker input parameter
  GALGAS_constructorMap joker_4344_18 ; // Joker input parameter
  GALGAS_getterMap joker_4344_17 ; // Joker input parameter
  GALGAS_setterMap joker_4344_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_4344_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_4344_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_4344_13 ; // Joker input parameter
  GALGAS_stringlist joker_4344_12 ; // Joker input parameter
  GALGAS_uint joker_4344_11 ; // Joker input parameter
  GALGAS_functionSignature joker_4344_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_4344_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_4344_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4344_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4344_6 ; // Joker input parameter
  GALGAS_bool joker_4344_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4344_4 ; // Joker input parameter
  GALGAS_string joker_4344_3 ; // Joker input parameter
  GALGAS_string joker_4344_2 ; // Joker input parameter
  GALGAS_headerKind joker_4344_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_4242_3, joker_4242_2, joker_4242_1, var_typeKindEnum_4280, joker_4286, var_listTypedAttributeList_4338, joker_4344_20, joker_4344_19, joker_4344_18, joker_4344_17, joker_4344_16, joker_4344_15, joker_4344_14, joker_4344_13, joker_4344_12, joker_4344_11, joker_4344_10, joker_4344_9, joker_4344_8, joker_4344_7, joker_4344_6, joker_4344_5, joker_4344_4, joker_4344_3, joker_4344_2, joker_4344_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 82)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_4280.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 90)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 91)), GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 91)) ;
    var_listTypedAttributeList_4338 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 92)) ;
  }
  GALGAS_constructorMap var_constructorMap_4595 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 95)) ;
  GALGAS_getterMap var_getterMap_4709 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_4709, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  GALGAS_setterMap var_setterMap_4727 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4774 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 98)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeIndex_4976 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeIndex_4976 COMMA_SOURCE_FILE ("type-listmap.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_5132 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5132 COMMA_SOURCE_FILE ("type-listmap.galgas", 102)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4709, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 104)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4709, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 111)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4709, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_4709, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 131)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_4595, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 139)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 135)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6100 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 143)) ;
  var_enumeratorDescriptor_6100.addAssign_operation (var_stringTypeIndex_5132, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  var_enumeratorDescriptor_6100.addAssign_operation (var_associatedListTypeIndex_4976, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_6313 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 147)) ;
  var_addAssignOperatorDescription_6313.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 148)), var_stringTypeIndex_5132, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  cEnumerator_typedPropertyList enumerator_6445 (var_listTypedAttributeList_4338, kEnumeration_up) ;
  while (enumerator_6445.hasCurrentObject ()) {
    var_addAssignOperatorDescription_6313.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), enumerator_6445.current_mAttributeTypeProxy (HERE), enumerator_6445.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
    enumerator_6445.gotoNextObject () ;
  }
  GALGAS_stringlist var_enumerationVariants_6600 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 153)) ;
  var_enumerationVariants_6600.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-listmap.galgas", 154)) ;
  var_enumerationVariants_6600.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-listmap.galgas", 155)) ;
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListmapTypeName, var_getterMap_4709, var_setterMap_4727, var_instanceMethodMap_4774, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 157)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_7199 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-listmap.galgas", 170)), var_listElementTypeIndex_7199 COMMA_SOURCE_FILE ("type-listmap.galgas", 168)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mListmapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-listmap.galgas", 178)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 179)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 181)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 182)), var_listTypedAttributeList_4338, var_constructorMap_4595, var_getterMap_4709, var_setterMap_4727, var_instanceMethodMap_4774, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 188)), var_enumeratorDescriptor_6100, var_enumerationVariants_6600, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 191)), var_addAssignOperatorDescription_6313, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 193)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 194)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 196)), GALGAS_bool (false), var_listElementTypeIndex_7199, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 200)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 174)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@listmapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listmapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_8878 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mListmapTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8878, var_nameForUsefulness_8878, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 219)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_9043 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 220)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8878, var_associatedTypeNameForUsefulness_9043 COMMA_SOURCE_FILE ("type-listmap.galgas", 221)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_9226 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 222)), object->mAttribute_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 222))  COMMA_SOURCE_FILE ("type-listmap.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 222)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8878, var_elementTypeNameForUsefulness_9226 COMMA_SOURCE_FILE ("type-listmap.galgas", 223)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_9568 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9625 ;
  GALGAS_bool joker_9530_3 ; // Joker input parameter
  GALGAS_bool joker_9530_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9530_1 ; // Joker input parameter
  GALGAS_bool joker_9574 ; // Joker input parameter
  GALGAS_attributeMap joker_9631_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9631_19 ; // Joker input parameter
  GALGAS_constructorMap joker_9631_18 ; // Joker input parameter
  GALGAS_getterMap joker_9631_17 ; // Joker input parameter
  GALGAS_setterMap joker_9631_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9631_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_9631_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9631_13 ; // Joker input parameter
  GALGAS_stringlist joker_9631_12 ; // Joker input parameter
  GALGAS_uint joker_9631_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9631_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9631_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9631_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9631_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9631_6 ; // Joker input parameter
  GALGAS_bool joker_9631_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9631_4 ; // Joker input parameter
  GALGAS_string joker_9631_3 ; // Joker input parameter
  GALGAS_string joker_9631_2 ; // Joker input parameter
  GALGAS_headerKind joker_9631_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_9530_3, joker_9530_2, joker_9530_1, var_typeKindEnum_9568, joker_9574, var_listTypeAttributeList_9625, joker_9631_20, joker_9631_19, joker_9631_18, joker_9631_17, joker_9631_16, joker_9631_15, joker_9631_14, joker_9631_13, joker_9631_12, joker_9631_11, joker_9631_10, joker_9631_9, joker_9631_8, joker_9631_7, joker_9631_6, joker_9631_5, joker_9631_4, joker_9631_3, joker_9631_2, joker_9631_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 225)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_9568.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 234)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 235)), GALGAS_string ("associated type should be a list type"), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 235)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 241)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 242)), var_listTypeAttributeList_9625, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 244)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-listmap.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 244))  COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 238)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@listmapTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_11134 (object->mAttribute_mAssociatedListTypedAttributeList, kEnumeration_up) ;
  while (enumerator_11134.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_11134.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)) ;
    enumerator_11134.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)) COMMA_SOURCE_FILE ("type-listmap.galgas", 268))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 276)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 278)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 279)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 280)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 281)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 282)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 283)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 284)) COMMA_SOURCE_FILE ("type-listmap.galgas", 272))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 272)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                              extensionMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 294)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedListMapElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 295)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 297)), object->mAttribute_mAssociatedListTypeIndex.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 298)), object->mAttribute_mAssociatedListTypedAttributeList COMMA_SOURCE_FILE ("type-listmap.galgas", 296))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                     extensionMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@mapDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_6152 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 168)) ;
  var_structAttributeList_6152.addAssign_operation (GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 171)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 172)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 173))  COMMA_SOURCE_FILE ("type-map.galgas", 169)) ;
  cEnumerator_propertyInCollectionListAST enumerator_6340 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_6340.hasCurrentObject ()) {
    var_structAttributeList_6152.addAssign_operation (enumerator_6340.current_mPropertyTypeName (HERE), enumerator_6340.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 179))  COMMA_SOURCE_FILE ("type-map.galgas", 175)) ;
    enumerator_6340.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 183)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-map.galgas", 183)), var_structAttributeList_6152, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 181))  COMMA_SOURCE_FILE ("type-map.galgas", 181)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                             extensionMethod_mapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineExtensionMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_lstring var_key_7513 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 198)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("type-map.galgas", 198))  COMMA_SOURCE_FILE ("type-map.galgas", 198)) ;
  {
  const GALGAS_mapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7513, temp_0, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 199)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_7656 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_7656.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_7656.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 201)), enumerator_7656.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 201))  COMMA_SOURCE_FILE ("type-map.galgas", 201)) COMMA_SOURCE_FILE ("type-map.galgas", 201)) ;
    }
    enumerator_7656.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                                extensionMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeIndex_8560 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolTypeIndex_8560 COMMA_SOURCE_FILE ("type-map.galgas", 216)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_8722 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_8722 COMMA_SOURCE_FILE ("type-map.galgas", 219)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_locationTypeProxy_8891 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy_8891 COMMA_SOURCE_FILE ("type-map.galgas", 222)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_9062 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_9062 COMMA_SOURCE_FILE ("type-map.galgas", 225)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_currentMapTypeIndex_9238 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, var_currentMapTypeIndex_9238 COMMA_SOURCE_FILE ("type-map.galgas", 228)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_9395 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_lstringTypeIndex_9062, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 230)) ;
  GALGAS_stringlist var_enumerationVariants_9492 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 231)) ;
  var_enumerationVariants_9492.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-map.galgas", 232)) ;
  var_enumerationVariants_9492.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-map.galgas", 233)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_9627 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_9663 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_9663.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_9663.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_usesSelectorsInInsertAndSearch_9627.boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9663.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 239)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
      }
      var_usesSelectorsInInsertAndSearch_9627 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_9663.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 243)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-map.galgas", 243)) ;
    }
    enumerator_9663.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_9927 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 247)) ;
  GALGAS_getterMap var_getterMap_10041 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_10041, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 248)) ;
  }
  GALGAS_setterMap var_setterMap_10059 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 249)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_10106 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 250)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_9927, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 256)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 252)) ;
  }
  {
  routine_enterConstructorWithArgument (var_constructorMap_9927, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("mapWithMapToOverride"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 263)), GALGAS_string ("inMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 265)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10041, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 269)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_10041, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 276)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10041, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 287)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10041, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 294)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10041, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 301)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10041, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 310)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_10041, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("overriddenMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 319)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 319)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10041, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 320)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_12114 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 328)) ;
  GALGAS_typedPropertyList var_typedPropertyList_12169 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 329)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_12266 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 330)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_12266.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 331)), var_lstringTypeIndex_9062, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 331)) ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = var_usesSelectorsInInsertAndSearch_9627.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_12114.addAssign_operation (temp_4.getter_nowhere (SOURCE_FILE ("type-map.galgas", 333)), var_lstringTypeIndex_9062, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 335)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 332)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_12604 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 337)) ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = var_usesSelectorsInInsertAndSearch_9627.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_12604.addAssign_operation (temp_6.getter_nowhere (SOURCE_FILE ("type-map.galgas", 339)), var_lstringTypeIndex_9062, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 341)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 338)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_12873 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 343)) ;
  cEnumerator_propertyInCollectionListAST enumerator_12936 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_12936.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_13070 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_12936.current_mPropertyTypeName (HERE), var_attributeTypeIndex_13070 COMMA_SOURCE_FILE ("type-map.galgas", 345)) ;
    }
    GALGAS_bool var_hasGetter_13091 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_13118 = GALGAS_bool (true) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_12266.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 348)), var_attributeTypeIndex_13070, enumerator_12936.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-map.galgas", 348)) ;
    var_typedPropertyList_12169.addAssign_operation (var_attributeTypeIndex_13070, enumerator_12936.current_mPropertyName (HERE), var_hasSetter_13118, var_hasGetter_13091  COMMA_SOURCE_FILE ("type-map.galgas", 349)) ;
    var_typesToIncludeInHeaderCompilation_12873.addAssign_operation (var_attributeTypeIndex_13070  COMMA_SOURCE_FILE ("type-map.galgas", 350)) ;
    var_enumerationDescriptor_9395.addAssign_operation (var_attributeTypeIndex_13070, enumerator_12936.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 351))  COMMA_SOURCE_FILE ("type-map.galgas", 351)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_9627.boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_12936.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 353)) ;
    }
    var_insertMethodFormalArgumentList_12114.addAssign_operation (temp_8, var_attributeTypeIndex_13070, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 355)), enumerator_12936.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-map.galgas", 352)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_9627.boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_12936.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 358)) ;
    }
    var_removeMethodFormalArgumentList_12604.addAssign_operation (temp_10, var_attributeTypeIndex_13070, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 360)), enumerator_12936.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-map.galgas", 357)) ;
    enumerator_12936.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_13972 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_13972.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_setterMap_10059.getter_hasKey (enumerator_13972.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 365)) COMMA_SOURCE_FILE ("type-map.galgas", 365)).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (enumerator_13972.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 366)), GALGAS_string ("the '").add_operation (enumerator_13972.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 366)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 366)), fixItArray13  COMMA_SOURCE_FILE ("type-map.galgas", 366)) ;
    }else if (kBoolFalse == test_12) {
      {
      var_setterMap_10059.setter_insertOrReplace (enumerator_13972.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 370)), var_insertMethodFormalArgumentList_12114, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 373)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 368)) ;
      }
    }
    enumerator_13972.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_14419 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_14419.hasCurrentObject ()) {
    const enumGalgasBool test_14 = var_setterMap_10059.getter_hasKey (enumerator_14419.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 380)) COMMA_SOURCE_FILE ("type-map.galgas", 380)).boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_14419.current_mMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 381)), GALGAS_string ("the '").add_operation (enumerator_14419.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 381)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 381)), fixItArray15  COMMA_SOURCE_FILE ("type-map.galgas", 381)) ;
    }else if (kBoolFalse == test_14) {
      {
      var_setterMap_10059.setter_insertOrReplace (enumerator_14419.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 385)), var_removeMethodFormalArgumentList_12604, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 388)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 383)) ;
      }
    }
    enumerator_14419.gotoNextObject () ;
  }
  cEnumerator_mapSearchMethodListAST enumerator_14915 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_14915.hasCurrentObject ()) {
    {
    var_instanceMethodMap_10106.setter_insertKey (enumerator_14915.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 397)), var_removeMethodFormalArgumentList_12604, enumerator_14915.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 399)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 401)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 395)) ;
    }
    enumerator_14915.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_15235 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_15235.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_15259 = GALGAS_lstring::constructor_new (enumerator_15235.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 407)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 407)), enumerator_15235.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 407))  COMMA_SOURCE_FILE ("type-map.galgas", 407)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_15382 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_15235.current_mPropertyTypeName (HERE), var_attributeTypeIndex_15382 COMMA_SOURCE_FILE ("type-map.galgas", 409)) ;
    }
    {
    GALGAS_functionSignature temp_16 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 413)) ;
    temp_16.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 413)), var_stringTypeIndex_8722, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 413)) ;
    var_getterMap_10041.setter_insertOrReplace (var_accessorName_15259, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 412)), temp_16, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 414)), GALGAS_bool (true), var_attributeTypeIndex_15382, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 417)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 410)) ;
    }
    enumerator_15235.gotoNextObject () ;
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("type-map.galgas", 422)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_location var_insertOrReplaceLocation_15918 ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceLocation_15918, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 424)) ;
    {
    var_setterMap_10059.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_15918  COMMA_SOURCE_FILE ("type-map.galgas", 426)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 427)), var_insertMethodFormalArgumentList_12114, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 430)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 425)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_16348 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_16348.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_16372 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_16348.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 437)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 437)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 437)), enumerator_16348.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 438))  COMMA_SOURCE_FILE ("type-map.galgas", 436)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_16662 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_16348.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16662 COMMA_SOURCE_FILE ("type-map.galgas", 440)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_16703 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 445)) ;
    var_accessorFormalArgumentList_16703.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 446)), var_attributeTypeIndex_16662, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 446)), enumerator_16348.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-map.galgas", 446)) ;
    var_accessorFormalArgumentList_16703.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 447)), var_stringTypeIndex_8722, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 447)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 447)) ;
    {
    var_setterMap_10059.setter_insertOrReplace (var_accessorName_16372, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 450)), var_accessorFormalArgumentList_16703, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 453)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 448)) ;
    }
    enumerator_16348.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap_10041, var_setterMap_10059, var_instanceMethodMap_10106, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 458)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_17647 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 471)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-map.galgas", 471)), var_elementTypeProxy_17647 COMMA_SOURCE_FILE ("type-map.galgas", 469)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map.galgas", 479)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 480)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 482)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 483)), var_typedPropertyList_12169, var_constructorMap_9927, var_getterMap_10041, var_setterMap_10059, var_instanceMethodMap_10106, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 489)), var_enumerationDescriptor_9395, var_enumerationVariants_9492, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 492)).operator_or (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 492)) COMMA_SOURCE_FILE ("type-map.galgas", 492)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 492)) COMMA_SOURCE_FILE ("type-map.galgas", 492)), var_argumentTypeListForAddAssignWithFieldExpressionList_12266, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 494)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 495)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 497)), GALGAS_bool (false), var_elementTypeProxy_17647, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 501)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 475)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               extensionMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@mapDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_21505 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mMapTypeName, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 574)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21505, var_nameForUsefulness_21505, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 575)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_21663 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 576)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("type-map.galgas", 576))  COMMA_SOURCE_FILE ("type-map.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 576)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21505, var_elementTypeNameForUsefulness_21663 COMMA_SOURCE_FILE ("type-map.galgas", 577)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_21888 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 579)) ;
  GALGAS_attributeIndexMap var_attributeMap_21930 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 580)) ;
  cEnumerator_propertyInCollectionListAST enumerator_21987 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_21987.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_22028 = function_typeNameForUsefulEntitiesGraph (enumerator_21987.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 582)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21505, var_propertyTypeNameForUsefulness_22028 COMMA_SOURCE_FILE ("type-map.galgas", 583)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_22180 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_21987.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 584)) ;
    GALGAS_bool var_hasSetter_22281 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_22308 = GALGAS_bool (true) ;
    var_typedAttributeList_21888.addAssign_operation (var_t_22180, enumerator_21987.current_mPropertyName (HERE), var_hasSetter_22281, var_hasGetter_22308  COMMA_SOURCE_FILE ("type-map.galgas", 587)) ;
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 592)).getter_hasKey (enumerator_21987.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-map.galgas", 592)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m_22487 = GALGAS_string ("a property cannot be named:") ;
      cEnumerator_stringset enumerator_22557 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 594)), kEnumeration_up) ;
      while (enumerator_22557.hasCurrentObject ()) {
        var_m_22487.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_22557.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 595)) ;
        enumerator_22557.gotoNextObject () ;
      }
      var_m_22487.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 597)) ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_21987.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 598)), var_m_22487, fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 598)) ;
    }
    {
    var_attributeMap_21930.setter_insertKey (enumerator_21987.current_mPropertyName (HERE), var_t_22180, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 600)) ;
    }
    enumerator_21987.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_22771 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 603)) ;
  cEnumerator_insertMethodListAST enumerator_22830 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_22830.hasCurrentObject ()) {
    {
    var_insertMethodMap_22771.setter_insertKey (enumerator_22830.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 605)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22830.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 606)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22830.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 607)) ;
    }
    enumerator_22830.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_23046 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 610)) ;
  cEnumerator_mapSearchMethodListAST enumerator_23105 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_23105.hasCurrentObject ()) {
    {
    var_searchMethodMap_23046.setter_insertKey (enumerator_23105.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 612)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23105.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 613)) ;
    }
    enumerator_23105.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_23271 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_23271.hasCurrentObject ()) {
    {
    var_insertMethodMap_22771.setter_insertKey (enumerator_23271.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 617)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23271.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 618)) ;
    }
    enumerator_23271.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_23488 (object->mAttribute_mInsertOrReplaceDeclarationListAST, kEnumeration_up) ;
  GALGAS_uint index_23447 ((uint32_t) 0) ;
  while (enumerator_23488.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, index_23447.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (enumerator_23488.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray3  COMMA_SOURCE_FILE ("type-map.galgas", 623)) ;
    }
    enumerator_23488.gotoNextObject () ;
    index_23447.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 621)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier_23671 = GALGAS_bool (kIsStrictSup, object->mAttribute_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("type-map.galgas", 626)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_4 = var_hasInsertOrReplaceModifier_23671.operator_and (var_insertMethodMap_22771.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 627)) COMMA_SOURCE_FILE ("type-map.galgas", 627)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_insertOrReplaceDeclarationLocation_23853 ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation_23853, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 629)) ;
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_23853, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray5  COMMA_SOURCE_FILE ("type-map.galgas", 630)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 634)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 636)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 637)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-map.galgas", 637)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 637)), object->mAttribute_mMapTypeName, var_typedAttributeList_21888, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, var_hasInsertOrReplaceModifier_23671  COMMA_SOURCE_FILE ("type-map.galgas", 635)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 633)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionMethod_mapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineExtensionMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 668)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 669)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-map.galgas", 667))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 674)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 675)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 676)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 677)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 678)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 679)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 680)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 681)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 682)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 683)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 684)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 685)) COMMA_SOURCE_FILE ("type-map.galgas", 673))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 673)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_26587 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_26587.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_26587.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 696)) ;
    enumerator_26587.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 700)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 701)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-map.galgas", 699))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 712)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 713)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 715)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, object->mAttribute_mHasInsertOrReplaceModifier COMMA_SOURCE_FILE ("type-map.galgas", 714))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                     extensionMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@mapProxyDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                            GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                            GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_key_1326 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 20)), object->mAttribute_mMapProxyTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 20))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 20)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1326, temp_0, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 21)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1326, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)), object->mAttribute_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 22))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                                extensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@mapProxyDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_2460 ;
  GALGAS_typedPropertyList var_mapTypedAttributeList_2518 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_2577 ;
  GALGAS_bool joker_2422_3 ; // Joker input parameter
  GALGAS_bool joker_2422_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2422_1 ; // Joker input parameter
  GALGAS_bool joker_2466_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2466_2 ; // Joker input parameter
  GALGAS_attributeMap joker_2466_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2524_11 ; // Joker input parameter
  GALGAS_getterMap joker_2524_10 ; // Joker input parameter
  GALGAS_setterMap joker_2524_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2524_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2524_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2524_6 ; // Joker input parameter
  GALGAS_stringlist joker_2524_5 ; // Joker input parameter
  GALGAS_uint joker_2524_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2524_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2524_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2524_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2583_6 ; // Joker input parameter
  GALGAS_bool joker_2583_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2583_4 ; // Joker input parameter
  GALGAS_string joker_2583_3 ; // Joker input parameter
  GALGAS_string joker_2583_2 ; // Joker input parameter
  GALGAS_headerKind joker_2583_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_2422_3, joker_2422_2, joker_2422_1, var_typeKindEnum_2460, joker_2466_3, joker_2466_2, joker_2466_1, var_mapTypedAttributeList_2518, joker_2524_11, joker_2524_10, joker_2524_9, joker_2524_8, joker_2524_7, joker_2524_6, joker_2524_5, joker_2524_4, joker_2524_3, joker_2524_2, joker_2524_1, var_searchMethodList_2577, joker_2583_6, joker_2583_5, joker_2583_4, joker_2583_3, joker_2583_2, joker_2583_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 35)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_2460.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-map-proxy.galgas", 45)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 46)), GALGAS_string ("the @").add_operation (object->mAttribute_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)), fixItArray1  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)) ;
    var_mapTypedAttributeList_2518 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 47)) ;
  }
  GALGAS_constructorMap var_constructorMap_2835 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 50)) ;
  GALGAS_getterMap var_getterMap_2949 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_2949, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 51)) ;
  }
  GALGAS_setterMap var_setterMap_2967 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 52)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3014 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 53)) ;
  GALGAS_classMethodMap var_classMethodMap_3066 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 54)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedMapTypeIndex_3263 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, var_associatedMapTypeIndex_3263 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 56)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_3327 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_3327 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 59)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_3494 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_3494 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 62)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_mapProxyTypeProxy_3666 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, var_mapProxyTypeProxy_3666 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 65)) ;
  }
  GALGAS_formalParameterSignature var_argList_3813 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 67)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 68)), var_associatedMapTypeIndex_3263, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-proxy.galgas", 68)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 68)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 69)), var_lstringTypeIndex_3494, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-proxy.galgas", 69)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 69)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 70)), var_mapProxyTypeProxy_3666, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-proxy.galgas", 70)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 70)) ;
  {
  var_classMethodMap_3066.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 72))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 72)), var_argList_3813, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 71)) ;
  }
  var_argList_3813 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 77)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 78)), var_associatedMapTypeIndex_3263, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-proxy.galgas", 78)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 78)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 79)), var_stringTypeIndex_3327, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-proxy.galgas", 79)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 79)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 80)), var_mapProxyTypeProxy_3666, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-proxy.galgas", 80)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 80)) ;
  {
  var_classMethodMap_3066.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 82))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 82)), var_argList_3813, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 81)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_2835, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("null"), object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 91)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 87)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_5082 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 95)) ;
  var_constructorAttributeTypeList_5082.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 96)), var_associatedMapTypeIndex_3263, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 96)) ;
  var_constructorAttributeTypeList_5082.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 97)), var_lstringTypeIndex_3494, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 97)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5291 (var_searchMethodList_2577, kEnumeration_up) ;
  while (enumerator_5291.hasCurrentObject ()) {
    {
    var_constructorMap_2835.setter_insertKey (enumerator_5291.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_5082, GALGAS_bool (true), var_mapProxyTypeProxy_3666, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 99)) ;
    }
    enumerator_5291.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 107)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 114)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 121)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 128)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 135)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 142)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap_6507 = var_getterMap_2949 ;
  cEnumerator_typedPropertyList enumerator_6553 (var_mapTypedAttributeList_2518, kEnumeration_up) ;
  while (enumerator_6553.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedGetterMap_6507.getter_hasKey (enumerator_6553.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-map-proxy.galgas", 152)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s_6637 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6686 (var_inheritedGetterMap_6507.getter_keySet (SOURCE_FILE ("type-map-proxy.galgas", 154)), kEnumeration_up) ;
      while (enumerator_6686.hasCurrentObject ()) {
        var_s_6637.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6686.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)) ;
        if (enumerator_6686.hasNextObject ()) {
          var_s_6637.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 156)) ;
        }
        enumerator_6686.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_6553.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-map-proxy.galgas", 158)), GALGAS_string ("the map has a associated map proxy, which has predefined getters: ").add_operation (var_s_6637, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)), fixItArray3  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_getterMap_2949.setter_insertKey (enumerator_6553.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-proxy.galgas", 163)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 164)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 165)), GALGAS_bool (true), enumerator_6553.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-proxy.galgas", 168)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 161)) ;
      }
    }
    enumerator_6553.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapProxyTypeName, var_getterMap_2949, var_setterMap_2967, var_instanceMethodMap_3014, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 174)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapProxyTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map-proxy.galgas", 189)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("type-map-proxy.galgas", 190)), GALGAS_bool (false), var_mapTypedAttributeList_2518, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 193)), var_mapTypedAttributeList_2518, var_constructorMap_2835, var_getterMap_2949, var_setterMap_2967, var_instanceMethodMap_3014, var_classMethodMap_3066, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 200)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 201)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 202)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 203)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 204)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 205)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 206)), var_searchMethodList_2577, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map-proxy.galgas", 209)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 211)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-map-proxy.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 185)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                               extensionMethod_mapProxyDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapProxyDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapProxyDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_9203 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mMapProxyTypeName, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 229)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9203, var_nameForUsefulness_9203, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 230)) ;
  }
  GALGAS_typedPropertyList var_listTypeAttributeList_9499 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9558 ;
  GALGAS_bool joker_9447_7 ; // Joker input parameter
  GALGAS_bool joker_9447_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9447_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9447_4 ; // Joker input parameter
  GALGAS_bool joker_9447_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9447_2 ; // Joker input parameter
  GALGAS_attributeMap joker_9447_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9505_11 ; // Joker input parameter
  GALGAS_getterMap joker_9505_10 ; // Joker input parameter
  GALGAS_setterMap joker_9505_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9505_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9505_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9505_6 ; // Joker input parameter
  GALGAS_stringlist joker_9505_5 ; // Joker input parameter
  GALGAS_uint joker_9505_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9505_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9505_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9505_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9564_6 ; // Joker input parameter
  GALGAS_bool joker_9564_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9564_4 ; // Joker input parameter
  GALGAS_string joker_9564_3 ; // Joker input parameter
  GALGAS_string joker_9564_2 ; // Joker input parameter
  GALGAS_headerKind joker_9564_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_9447_7, joker_9447_6, joker_9447_5, joker_9447_4, joker_9447_3, joker_9447_2, joker_9447_1, var_listTypeAttributeList_9499, joker_9505_11, joker_9505_10, joker_9505_9, joker_9505_8, joker_9505_7, joker_9505_6, joker_9505_5, joker_9505_4, joker_9505_3, joker_9505_2, joker_9505_1, var_searchMethodList_9558, joker_9564_6, joker_9564_5, joker_9564_4, joker_9564_3, joker_9564_2, joker_9564_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 232)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 242)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 244)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 245)), var_listTypeAttributeList_9499, var_searchMethodList_9558  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 243)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 241)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                         extensionMethod_mapProxyDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_semanticAnalysis (defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@mapProxyTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 286)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 287)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 285))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 290)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 291)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 292)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 293)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 294)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 295)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 296)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 297)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 298)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 299)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 300)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 301)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 289))), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 289)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                              extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@mapProxyTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 311)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 312)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 314)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 315)), object->mAttribute_mAssociatedMapTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 316)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-map-proxy.galgas", 313))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                     extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_key_11990 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 308)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 308))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 308)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11990, temp_0, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 309)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_12133 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_12133.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12133.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 311)), enumerator_12133.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 311))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 311)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 311)) ;
    }
    enumerator_12133.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                                extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@sharedMapDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  result_outString = GALGAS_string ("shared map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 318)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                          extensionGetter_sharedMapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sharedMapDeclarationAST_keyRepresentation (defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sharedMapDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_13363 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_13363 COMMA_SOURCE_FILE ("type-shared-map.galgas", 332)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_13495 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13495 COMMA_SOURCE_FILE ("type-shared-map.galgas", 334)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex_13639 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_13639 COMMA_SOURCE_FILE ("type-shared-map.galgas", 336)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 338)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13495, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 338)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13720 = temp_0 ;
  GALGAS_stringlist var_enumerationVariants_13784 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 339)) ;
  var_enumerationVariants_13784.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 340)) ;
  var_enumerationVariants_13784.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 341)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13908 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_13944 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_13944.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13944.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_13944.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 347)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 347)) ;
      }
      var_usesSelectorsInInsertAndSearch_13908 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_13944.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 351)), GALGAS_string ("unknown attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 351)) ;
    }
    enumerator_13944.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_14220 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 355)) ;
  GALGAS_getterMap var_getterMap_14310 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_14310, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 356)) ;
  }
  GALGAS_setterMap var_setterMap_14335 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 357)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14379 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 358)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_14220, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 364)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 360)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 368)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 375)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 382)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 391)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 400)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 407)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 414)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 421)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16124 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 429)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_16188 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 430)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_16188.addAssign_operation (temp_5.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 432)), var_lstringTypeIndex_13495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 434)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 431)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16422 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 436)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16422.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 438)), var_lstringTypeIndex_13495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 440)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 437)) ;
  cEnumerator_propertyInCollectionListAST enumerator_16623 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_16623.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_16671 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_16623.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16671 COMMA_SOURCE_FILE ("type-shared-map.galgas", 444)) ;
    }
    GALGAS_bool var_hasGetter_16797 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_16824 = GALGAS_bool (true) ;
    var_typedAttributeList_16124.addAssign_operation (var_attributeTypeIndex_16671, enumerator_16623.current_mPropertyName (HERE), var_hasSetter_16824, var_hasGetter_16797  COMMA_SOURCE_FILE ("type-shared-map.galgas", 447)) ;
    var_enumerationDescriptor_13720.addAssign_operation (var_attributeTypeIndex_16671, enumerator_16623.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 448))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 448)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_16623.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 450)) ;
    }
    var_insertMethodFormalArgumentList_16188.addAssign_operation (temp_9, var_attributeTypeIndex_16671, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 452)), enumerator_16623.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 449)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_16623.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 455)) ;
    }
    var_removeMethodFormalArgumentList_16422.addAssign_operation (temp_11, var_attributeTypeIndex_16671, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 457)), enumerator_16623.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 454)) ;
    enumerator_16623.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_17464 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_17464.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_setterMap_14335.getter_hasKey (enumerator_17464.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 462)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 462)).boolEnum () ;
    if (kBoolTrue == test_13) {
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (enumerator_17464.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 463)), GALGAS_string ("the '").add_operation (enumerator_17464.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 463)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 463)), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 463)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_setterMap_14335.setter_insertOrReplace (enumerator_17464.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 467)), var_insertMethodFormalArgumentList_16188, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 470)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 465)) ;
      }
    }
    enumerator_17464.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_17953 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 476)) ;
  var_enterEdgeFormalArgumentList_17953.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 477)), var_lstringTypeIndex_13495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 477)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 477)) ;
  var_enterEdgeFormalArgumentList_17953.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 478)), var_lstringTypeIndex_13495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 478)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 478)) ;
  {
  var_setterMap_14335.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 480)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 481)), var_enterEdgeFormalArgumentList_17953, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 484)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 479)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_18472 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 488)) ;
  var_topologicalSortFormalArgumentList_18472.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 489)), var_lstringlistTypeIndex_13639, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 489)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 489)) ;
  var_topologicalSortFormalArgumentList_18472.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 490)), var_lstringlistTypeIndex_13639, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 490)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 490)) ;
  {
  var_instanceMethodMap_14379.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 492)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 493)), var_topologicalSortFormalArgumentList_18472, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 495)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 497)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 491)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 501)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_19090 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_19090.hasCurrentObject ()) {
      {
      var_instanceMethodMap_14379.setter_insertKey (enumerator_19090.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 505)), var_removeMethodFormalArgumentList_16422, enumerator_19090.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 507)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 509)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 503)) ;
      }
      enumerator_19090.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_19406 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_19406.hasCurrentObject ()) {
      {
      var_setterMap_14335.setter_insertKey (enumerator_19406.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 517)), var_removeMethodFormalArgumentList_16422, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 520)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 515)) ;
      }
      enumerator_19406.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 526)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex_19801 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_19801 COMMA_SOURCE_FILE ("type-shared-map.galgas", 528)) ;
    }
    {
    var_setterMap_14335.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 530))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 530)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 531)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 532)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 534)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 529)) ;
    }
    {
    var_setterMap_14335.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 538))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 538)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 539)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 540)), var_locationTypeIndex_19801, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 540)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 540)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 542)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 537)) ;
    }
    {
    var_setterMap_14335.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 546))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 546)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 547)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 548)), var_locationTypeIndex_19801, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 548)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 548)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 550)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 545)) ;
    }
    {
    var_instanceMethodMap_14379.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 554))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 554)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 555)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 556)), var_locationTypeIndex_19801, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 556)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 556)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 557)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 559)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 553)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_21162 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_21162.hasCurrentObject ()) {
      {
      var_setterMap_14335.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_21162.current_mOverrideBlockName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 564)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 564))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 564)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 565)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 566)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 568)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 563)) ;
      }
      enumerator_21162.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_21557 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_21557.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21581 = GALGAS_lstring::constructor_new (enumerator_21557.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 575)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 575)), enumerator_21557.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 575))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 575)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_21704 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_21557.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21704 COMMA_SOURCE_FILE ("type-shared-map.galgas", 577)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 581)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 581)), var_stringTypeIndex_13363, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 581)) ;
    var_getterMap_14310.setter_insertOrReplace (var_accessorName_21581, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 580)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 582)), GALGAS_bool (true), var_attributeTypeIndex_21704, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 585)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 578)) ;
    }
    enumerator_21557.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_22209 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_22209.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_22233 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_22209.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 591)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 591)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 591)), enumerator_22209.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 591))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 591)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_22487 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_22209.current_mPropertyTypeName (HERE), var_attributeTypeIndex_22487 COMMA_SOURCE_FILE ("type-shared-map.galgas", 592)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_22523 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 593)) ;
    var_accessorFormalArgumentList_22523.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 594)), var_attributeTypeIndex_22487, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 594)), enumerator_22209.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 594)) ;
    var_accessorFormalArgumentList_22523.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 595)), var_stringTypeIndex_13363, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 595)), enumerator_22209.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 595)) ;
    {
    var_setterMap_14335.setter_insertOrReplace (var_accessorName_22233, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 598)), var_accessorFormalArgumentList_22523, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 601)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 596)) ;
    }
    enumerator_22209.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap_14310, var_setterMap_14335, var_instanceMethodMap_14379, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 606)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 621)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-shared-map.galgas", 622)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 624)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 625)), var_typedAttributeList_16124, var_constructorMap_14220, var_getterMap_14310, var_setterMap_14335, var_instanceMethodMap_14379, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 631)), var_enumerationDescriptor_13720, var_enumerationVariants_13784, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 634)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 634)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 634)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 635)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 636)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 637)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 639)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 641)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 643)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 617)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               extensionMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@sharedMapDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_string constinArgument_inProductDirectory,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_27068 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mMapTypeName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 726)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_27068, var_nameForUsefulness_27068, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 727)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_27226 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (GALGAS_string ("-proxy"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 728))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27068, var_elementTypeNameForUsefulness_27226 COMMA_SOURCE_FILE ("type-shared-map.galgas", 729)) ;
  }
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_27447 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 731)) ;
  GALGAS_string var_shadowMessage_27480 = GALGAS_string::makeEmptyString () ;
  cEnumerator_sharedMapAttributeListAST enumerator_27557 (object->mAttribute_mSharedMapAttributeListAST, kEnumeration_up) ;
  while (enumerator_27557.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_27557.current_mAttributeName (HERE).mAttribute_string.objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_27557.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 735)), GALGAS_string ("only %shadow attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-shared-map.galgas", 735)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_27447.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 736)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_27557.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 737)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 737)) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_mapAutomatonMessageKind temp_4 ;
        const enumGalgasBool test_5 = enumerator_27557.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 739)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 739)) ;
        }
        var_shadowBehaviour_27447 = temp_4 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_27557.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 740)) ;
        }
        var_shadowMessage_27480 = enumerator_27557.current_mMessage (HERE).mAttribute_string ;
      }
    }
    enumerator_27557.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_28014 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 745)) ;
  cEnumerator_insertMethodListAST enumerator_28060 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_28060.hasCurrentObject ()) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 747)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_28060.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 748)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_28060.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 749)), GALGAS_string ("the '").add_operation (enumerator_28060.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 749)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 749)), fixItArray8  COMMA_SOURCE_FILE ("type-shared-map.galgas", 749)) ;
      }else if (kBoolFalse == test_7) {
        var_initialStateSet_28014.addAssign_operation (enumerator_28060.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 751))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 751)) ;
      }
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_28060.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 753)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_28060.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 754)), GALGAS_string ("the '").add_operation (enumerator_28060.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 754)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 754)), fixItArray10  COMMA_SOURCE_FILE ("type-shared-map.galgas", 754)) ;
      }
    }
    enumerator_28060.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_28596 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 758)) ;
  cEnumerator_mapSearchMethodListAST enumerator_28631 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_28631.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 760)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_28631.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 761)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_28631.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 762)), GALGAS_string ("the '").add_operation (enumerator_28631.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)), fixItArray13  COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_14 = var_mapAutomatonActionMap_28596.getter_hasKey (enumerator_28631.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 763)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 763)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 763)).boolEnum () ;
        if (kBoolTrue == test_14) {
          {
          var_mapAutomatonActionMap_28596.setter_insertKey (enumerator_28631.current_mActionName (HERE), var_mapAutomatonActionMap_28596.getter_count (SOURCE_FILE ("type-shared-map.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 764)) ;
          }
        }
      }
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_28631.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 766)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_28631.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 767)), GALGAS_string ("the '").add_operation (enumerator_28631.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 767)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 767)), fixItArray16  COMMA_SOURCE_FILE ("type-shared-map.galgas", 767)) ;
      }
    }
    enumerator_28631.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_29242 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 771)) ;
  cEnumerator_mapStateList enumerator_29273 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_29273.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_29242.setter_insertKey (enumerator_29273.current_mStateName (HERE), var_mapAutomatonStateMap_29242.getter_count (SOURCE_FILE ("type-shared-map.galgas", 773)), enumerator_29273.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 773)) ;
    }
    enumerator_29273.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_29408 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_29408.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_29441 (enumerator_29408.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_29441.hasCurrentObject ()) {
      GALGAS_uint joker_29502_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_29502_1 ; // Joker input parameter
      var_mapAutomatonStateMap_29242.method_searchKey (enumerator_29441.current_mTargetStateName (HERE), joker_29502_2, joker_29502_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 777)) ;
      enumerator_29441.gotoNextObject () ;
    }
    enumerator_29408.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_29592 = var_mapAutomatonActionMap_28596.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 781)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_29666 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 782)) ;
  cEnumerator_mapStateList enumerator_29697 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_29697.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_29738 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 784)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_29806 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 785)) ;
    cEnumerator_mapStateTransitionList enumerator_29841 (enumerator_29697.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_29841.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_29919 ;
      var_mapAutomatonActionMap_28596.method_searchKey (enumerator_29841.current_mActionName (HERE), var_actionIndex_29919, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 787)) ;
      const enumGalgasBool test_17 = var_actionsForCurrentState_29738.getter_hasKey (enumerator_29841.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 788)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 788)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_29841.current_mActionName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 789)), GALGAS_string ("the '").add_operation (enumerator_29841.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 789)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 789)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 789)) ;
      }
      var_actionsForCurrentState_29738.addAssign_operation (enumerator_29841.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 791))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 791)) ;
      GALGAS_uint var_targetStateIndex_30230 ;
      GALGAS_mapAutomatonMessageKind joker_30232 ; // Joker input parameter
      var_mapAutomatonStateMap_29242.method_searchKey (enumerator_29841.current_mTargetStateName (HERE), var_targetStateIndex_30230, joker_30232, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 792)) ;
      var_mapStateTransitionSortedList_29806.addAssign_operation (var_actionIndex_29919, enumerator_29841.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 795)), var_targetStateIndex_30230, enumerator_29841.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 797)), enumerator_29841.current_mTransitionMessageKind (HERE), enumerator_29841.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 799))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 793)) ;
      enumerator_29841.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_30531 ;
    GALGAS_mapAutomatonMessageKind joker_30533 ; // Joker input parameter
    var_mapAutomatonStateMap_29242.method_searchKey (enumerator_29697.current_mStateName (HERE), var_stateIndex_30531, joker_30533, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 801)) ;
    var_mapStateSortedList_29666.addAssign_operation (var_stateIndex_30531, enumerator_29697.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 804)), enumerator_29697.current_mStateMessageKind (HERE), enumerator_29697.current_mStateMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 806)), var_mapStateTransitionSortedList_29806  COMMA_SOURCE_FILE ("type-shared-map.galgas", 802)) ;
    GALGAS_stringset var_missingActions_30731 = var_allActions_29592.substract_operation (var_actionsForCurrentState_29738, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 808)) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_missingActions_30731.getter_count (SOURCE_FILE ("type-shared-map.galgas", 809)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_s_30824 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_30860 (var_missingActions_30731, kEnumeration_up) ;
      while (enumerator_30860.hasCurrentObject ()) {
        var_s_30824.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_30860.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)) ;
        if (enumerator_30860.hasNextObject ()) {
          var_s_30824.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 813)) ;
        }
        enumerator_30860.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (enumerator_29697.current_mStateName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 815)), GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_30824, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 815)), fixItArray20  COMMA_SOURCE_FILE ("type-shared-map.galgas", 815)) ;
    }
    enumerator_29697.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_31105 = var_initialStateSet_28014 ;
  GALGAS_bool var_progress_31140 = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 821)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 821)).isValid ()) {
    uint32_t variant_31154 = object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 821)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 821)).uintValue () ;
    bool loop_31154 = true ;
    while (loop_31154) {
      loop_31154 = var_progress_31140.isValid () ;
      if (loop_31154) {
        loop_31154 = var_progress_31140.boolValue () ;
      }
      if (loop_31154 && (0 == variant_31154)) {
        loop_31154 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 821)) ;
      }
      if (loop_31154) {
        variant_31154 -- ;
        var_progress_31140 = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_31250 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_31250.hasCurrentObject ()) {
          const enumGalgasBool test_21 = var_accessibleStates_31105.getter_hasKey (enumerator_31250.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 824)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 824)).boolEnum () ;
          if (kBoolTrue == test_21) {
            cEnumerator_mapStateTransitionList enumerator_31348 (enumerator_31250.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_31348.hasCurrentObject ()) {
              const enumGalgasBool test_22 = var_accessibleStates_31105.getter_hasKey (enumerator_31348.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 826)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 826)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 826)).boolEnum () ;
              if (kBoolTrue == test_22) {
                var_accessibleStates_31105.addAssign_operation (enumerator_31348.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 827))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 827)) ;
                var_progress_31140 = GALGAS_bool (true) ;
              }
              enumerator_31348.gotoNextObject () ;
            }
          }
          enumerator_31250.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_31594 = var_mapAutomatonStateMap_29242.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 834)).substract_operation (var_accessibleStates_31105, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 834)) ;
  const enumGalgasBool test_23 = GALGAS_bool (kIsStrictSup, var_uselessStates_31594.getter_count (SOURCE_FILE ("type-shared-map.galgas", 835)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    GALGAS_string var_s_31691 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_31724 (var_uselessStates_31594, kEnumeration_up) ;
    while (enumerator_31724.hasCurrentObject ()) {
      var_s_31691.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_31724.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 838)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 838)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 838)) ;
      if (enumerator_31724.hasNextObject ()) {
        var_s_31691.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 839)) ;
      }
      enumerator_31724.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_31691, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)), fixItArray24  COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)) ;
  }
  GALGAS_stringset var_neededAssociations_31994 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 845)) ;
  GALGAS_stringset var_accessibilityGraph_32031 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 846)) ;
  cEnumerator_mapAutomatonStateMap enumerator_32084 (var_mapAutomatonStateMap_29242, kEnumeration_up) ;
  while (enumerator_32084.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_32118 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 848)) ;
    var_reachableStates_32118.addAssign_operation (enumerator_32084.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 849))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 849)) ;
    var_progress_31140 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_29242.getter_count (SOURCE_FILE ("type-shared-map.galgas", 851)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 851)).isValid ()) {
      uint32_t variant_32208 = var_mapAutomatonStateMap_29242.getter_count (SOURCE_FILE ("type-shared-map.galgas", 851)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 851)).uintValue () ;
      bool loop_32208 = true ;
      while (loop_32208) {
        loop_32208 = var_progress_31140.isValid () ;
        if (loop_32208) {
          loop_32208 = var_progress_31140.boolValue () ;
        }
        if (loop_32208 && (0 == variant_32208)) {
          loop_32208 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 851)) ;
        }
        if (loop_32208) {
          variant_32208 -- ;
          var_progress_31140 = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_32314 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_32314.hasCurrentObject ()) {
            const enumGalgasBool test_25 = var_reachableStates_32118.getter_hasKey (enumerator_32314.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 854)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 854)).boolEnum () ;
            if (kBoolTrue == test_25) {
              cEnumerator_mapStateTransitionList enumerator_32415 (enumerator_32314.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_32415.hasCurrentObject ()) {
                const enumGalgasBool test_26 = var_reachableStates_32118.getter_hasKey (enumerator_32415.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 856)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 856)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 856)).boolEnum () ;
                if (kBoolTrue == test_26) {
                  var_reachableStates_32118.addAssign_operation (enumerator_32415.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 857))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 857)) ;
                  var_accessibilityGraph_32031.addAssign_operation (enumerator_32084.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 858)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 858)).add_operation (enumerator_32415.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 858))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 858)) ;
                  var_progress_31140 = GALGAS_bool (true) ;
                }
                enumerator_32415.gotoNextObject () ;
              }
            }
            enumerator_32314.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_32777 (var_reachableStates_32118, kEnumeration_up) ;
    while (enumerator_32777.hasCurrentObject ()) {
      const enumGalgasBool test_27 = GALGAS_bool (kIsNotEqual, enumerator_32084.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 866)).objectCompare (enumerator_32777.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_27) {
        var_neededAssociations_31994.addAssign_operation (enumerator_32084.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 867)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)).add_operation (enumerator_32777.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 867))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)) ;
      }
      enumerator_32777.gotoNextObject () ;
    }
    enumerator_32084.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_32972 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 872)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_33014 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_33014.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_33045 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 874)) ;
    GALGAS_stringset var_neededCombinaisons_33087 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 875)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__33151 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 876)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_33257 (enumerator_33014.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_33257.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_33335 ;
      GALGAS_mapAutomatonMessageKind joker_33337 ; // Joker input parameter
      var_mapAutomatonStateMap_29242.method_searchKey (enumerator_33257.current_mLeftState (HERE), var_startStateNameIndex_33335, joker_33337, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 878)) ;
      GALGAS_uint var_currentStateNameIndex_33417 ;
      GALGAS_mapAutomatonMessageKind joker_33419 ; // Joker input parameter
      var_mapAutomatonStateMap_29242.method_searchKey (enumerator_33257.current_mRightState (HERE), var_currentStateNameIndex_33417, joker_33419, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 879)) ;
      GALGAS_string var_association_33451 = enumerator_33257.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 880)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 880)).add_operation (enumerator_33257.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 880)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 880)) ;
      const enumGalgasBool test_28 = var_neededAssociations_31994.getter_hasKey (var_association_33451 COMMA_SOURCE_FILE ("type-shared-map.galgas", 881)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 881)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticWarning (enumerator_33257.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 882)), GALGAS_string ("the '").add_operation (var_association_33451, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 882)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 882)), fixItArray29  COMMA_SOURCE_FILE ("type-shared-map.galgas", 882)) ;
      }
      const enumGalgasBool test_30 = var_handledAssociations_33045.getter_hasKey (var_association_33451 COMMA_SOURCE_FILE ("type-shared-map.galgas", 884)).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_33257.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 885)), GALGAS_string ("the '").add_operation (var_association_33451, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 886)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 886)), fixItArray31  COMMA_SOURCE_FILE ("type-shared-map.galgas", 885)) ;
      }
      var_handledAssociations_33045.addAssign_operation (var_association_33451  COMMA_SOURCE_FILE ("type-shared-map.galgas", 888)) ;
      GALGAS_uint var_finalStateNameIndex_33933 ;
      GALGAS_mapAutomatonMessageKind joker_33935 ; // Joker input parameter
      var_mapAutomatonStateMap_29242.method_searchKey (enumerator_33257.current_mResultingState (HERE), var_finalStateNameIndex_33933, joker_33935, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, enumerator_33257.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 890)).objectCompare (enumerator_33257.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 890)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        var_neededCombinaisons_33087.addAssign_operation (enumerator_33257.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 891)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 891)).add_operation (enumerator_33257.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 891)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 891))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 891)) ;
        var_neededCombinaisons_33087.addAssign_operation (enumerator_33257.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 892)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 892)).add_operation (enumerator_33257.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 892))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 892)) ;
        const enumGalgasBool test_33 = var_accessibilityGraph_32031.getter_hasKey (enumerator_33257.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 893)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 893)).add_operation (enumerator_33257.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 893)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 893)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 893)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 893)).boolEnum () ;
        if (kBoolTrue == test_33) {
          TC_Array <C_FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (enumerator_33257.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 894)), GALGAS_string ("the '").add_operation (enumerator_33257.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 895)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 895)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 895)).add_operation (enumerator_33257.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 895)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 895)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 895)), fixItArray34  COMMA_SOURCE_FILE ("type-shared-map.galgas", 894)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_33257.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 898)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__33151.addAssign_operation (var_startStateNameIndex_33335, enumerator_33257.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 901)), var_currentStateNameIndex_33417, enumerator_33257.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 903)), var_finalStateNameIndex_33933, enumerator_33257.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 905)), enumerator_33257.current_mMessageKind (HERE), enumerator_33257.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 907))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)) ;
      enumerator_33257.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_34808 = var_neededAssociations_31994.substract_operation (var_handledAssociations_33045, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 909)) ;
    const enumGalgasBool test_35 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_34808.getter_count (SOURCE_FILE ("type-shared-map.galgas", 910)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_35) {
      GALGAS_string var_s_34913 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_34956 (var_forgottenAssociations_34808, kEnumeration_up) ;
      while (enumerator_34956.hasCurrentObject ()) {
        var_s_34913.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_34956.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 913)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 913)) ;
        enumerator_34956.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray36 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)), var_forgottenAssociations_34808.getter_count (SOURCE_FILE ("type-shared-map.galgas", 915)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 915)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)).add_operation (var_s_34913, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)), fixItArray36  COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)) ;
    }
    GALGAS_stringset var_definedCombinaisons_35141 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 917)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__35205 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 918)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_35311 (enumerator_33014.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_35311.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_35384 ;
      GALGAS_mapAutomatonMessageKind joker_35386 ; // Joker input parameter
      var_mapAutomatonStateMap_29242.method_searchKey (enumerator_35311.current_mLeftState (HERE), var_leftStateIndex_35384, joker_35386, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 920)) ;
      GALGAS_uint var_rightStateIndex_35460 ;
      GALGAS_mapAutomatonMessageKind joker_35462 ; // Joker input parameter
      var_mapAutomatonStateMap_29242.method_searchKey (enumerator_35311.current_mRightState (HERE), var_rightStateIndex_35460, joker_35462, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 921)) ;
      GALGAS_string var_combinaison_35494 = enumerator_35311.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)).add_operation (enumerator_35311.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)) ;
      const enumGalgasBool test_37 = var_neededCombinaisons_33087.getter_hasKey (var_combinaison_35494 COMMA_SOURCE_FILE ("type-shared-map.galgas", 923)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 923)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_35311.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 924)), GALGAS_string ("the '").add_operation (enumerator_35311.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 925)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)).add_operation (enumerator_35311.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 925)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)), fixItArray38  COMMA_SOURCE_FILE ("type-shared-map.galgas", 924)) ;
      }
      const enumGalgasBool test_39 = var_definedCombinaisons_35141.getter_hasKey (var_combinaison_35494 COMMA_SOURCE_FILE ("type-shared-map.galgas", 927)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_35311.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 928)), GALGAS_string ("the '").add_operation (enumerator_35311.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 929)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 929)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 929)).add_operation (enumerator_35311.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 929)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 929)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 929)), fixItArray40  COMMA_SOURCE_FILE ("type-shared-map.galgas", 928)) ;
      }
      var_definedCombinaisons_35141.addAssign_operation (var_combinaison_35494  COMMA_SOURCE_FILE ("type-shared-map.galgas", 931)) ;
      GALGAS_uint var_resultingStateNameIndex_36024 ;
      GALGAS_mapAutomatonMessageKind joker_36026 ; // Joker input parameter
      var_mapAutomatonStateMap_29242.method_searchKey (enumerator_35311.current_mResultingState (HERE), var_resultingStateNameIndex_36024, joker_36026, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)) ;
      const enumGalgasBool test_41 = GALGAS_bool (kIsNotEqual, enumerator_35311.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 933)).objectCompare (enumerator_35311.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 933)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_35311.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 934)).objectCompare (enumerator_35311.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 934)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 933)).operator_and (var_accessibilityGraph_32031.getter_hasKey (enumerator_35311.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 935)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 935)).add_operation (enumerator_35311.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 935)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 935)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 935)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 935)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 934)).boolEnum () ;
      if (kBoolTrue == test_41) {
        TC_Array <C_FixItDescription> fixItArray42 ;
        inCompiler->emitSemanticError (enumerator_35311.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 936)), GALGAS_string ("the '").add_operation (enumerator_35311.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)).add_operation (enumerator_35311.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)), fixItArray42  COMMA_SOURCE_FILE ("type-shared-map.galgas", 936)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_35311.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 939)) ;
      }
      const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_35311.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 940)))).boolEnum () ;
      if (kBoolTrue == test_43) {
        var_definedCombinaisons_35141.addAssign_operation (enumerator_35311.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 941)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)).add_operation (enumerator_35311.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 941)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 941))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)) ;
        var_branchBehaviourSortedListForMapOverride_32__35205.addAssign_operation (var_rightStateIndex_35460, enumerator_35311.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 944)), var_leftStateIndex_35384, enumerator_35311.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 946)), var_resultingStateNameIndex_36024, enumerator_35311.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 948)), enumerator_35311.current_mMessageKind (HERE), enumerator_35311.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 950))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 942)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32__35205.addAssign_operation (var_leftStateIndex_35384, enumerator_35311.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 954)), var_rightStateIndex_35460, enumerator_35311.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 956)), var_resultingStateNameIndex_36024, enumerator_35311.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 958)), enumerator_35311.current_mMessageKind (HERE), enumerator_35311.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 960))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 952)) ;
      enumerator_35311.gotoNextObject () ;
    }
    const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, var_forgottenAssociations_34808.getter_count (SOURCE_FILE ("type-shared-map.galgas", 962)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      GALGAS_stringset var_forgottenCombinaisons_37329 = var_neededCombinaisons_33087.substract_operation (var_definedCombinaisons_35141, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 963)) ;
      const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_37329.getter_count (SOURCE_FILE ("type-shared-map.galgas", 964)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_45) {
        GALGAS_string var_s_37438 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_37483 (var_forgottenCombinaisons_37329, kEnumeration_up) ;
        while (enumerator_37483.hasCurrentObject ()) {
          var_s_37438.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_37483.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 967)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 967)) ;
          enumerator_37483.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray46 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)), var_forgottenCombinaisons_37329.getter_count (SOURCE_FILE ("type-shared-map.galgas", 969)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 969)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)).add_operation (var_s_37438, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)), fixItArray46  COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)) ;
      }
    }
    var_mapOverrideList_32972.addAssign_operation (enumerator_33014.current_mOverrideBlockName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 973)), var_branchBehaviourSortedListForMapOverride_31__33151, var_branchBehaviourSortedListForMapOverride_32__35205  COMMA_SOURCE_FILE ("type-shared-map.galgas", 972)) ;
    enumerator_33014.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_37877 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 978)) ;
  GALGAS_attributeIndexMap var_attributeMap_37916 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 979)) ;
  cEnumerator_propertyInCollectionListAST enumerator_37947 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_37947.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_37988 = function_typeNameForUsefulEntitiesGraph (enumerator_37947.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 981)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27068, var_propertyTypeNameForUsefulness_37988 COMMA_SOURCE_FILE ("type-shared-map.galgas", 982)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_38140 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_37947.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 983)) ;
    GALGAS_bool var_hasSetter_38241 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_38266 = GALGAS_bool (true) ;
    var_typedAttributeList_37877.addAssign_operation (var_t_38140, enumerator_37947.current_mPropertyName (HERE), var_hasSetter_38241, var_hasGetter_38266  COMMA_SOURCE_FILE ("type-shared-map.galgas", 986)) ;
    {
    var_attributeMap_37916.setter_insertKey (enumerator_37947.current_mPropertyName (HERE), var_t_38140, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 991)) ;
    }
    enumerator_37947.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_38479 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 994)) ;
  cEnumerator_insertMethodListAST enumerator_38524 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_38524.hasCurrentObject ()) {
    {
    var_insertMethodMap_38479.setter_insertKey (enumerator_38524.current (HERE).mAttribute_mInsertMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 996)) ;
    }
    cEnumerator_stringlist enumerator_38757 (enumerator_38524.current (HERE).mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 998)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 998)), kEnumeration_up) ;
    while (enumerator_38757.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_38792 = enumerator_38757.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 999)) ;
      {
      GALGAS_string joker_38887 ; // Joker input parameter
      var_explodedArray_38792.setter_popFirst (joker_38887, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1000)) ;
      }
      cEnumerator_stringlist enumerator_38919 (var_explodedArray_38792, kEnumeration_up) ;
      while (enumerator_38919.hasCurrentObject ()) {
        const enumGalgasBool test_47 = GALGAS_bool (kIsStrictSup, enumerator_38919.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1002)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_47) {
          GALGAS_char var_c_38980 = enumerator_38919.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1003)) ;
          const enumGalgasBool test_48 = GALGAS_bool (kIsNotEqual, var_c_38980.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_38980.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1004)).boolEnum () ;
          if (kBoolTrue == test_48) {
            TC_Array <C_FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (enumerator_38524.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 1005)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray49  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1005)) ;
          }
        }
        enumerator_38919.gotoNextObject () ;
      }
      enumerator_38757.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_39409 (enumerator_38524.current (HERE).mAttribute_mShadowErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1011)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1011)), kEnumeration_up) ;
    while (enumerator_39409.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_39444 = enumerator_39409.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1012)) ;
      {
      GALGAS_string joker_39545 ; // Joker input parameter
      var_explodedArray_39444.setter_popFirst (joker_39545, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1013)) ;
      }
      cEnumerator_stringlist enumerator_39584 (var_explodedArray_39444, kEnumeration_up) ;
      while (enumerator_39584.hasCurrentObject ()) {
        const enumGalgasBool test_50 = GALGAS_bool (kIsStrictSup, enumerator_39584.current (HERE).mAttribute_mValue.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1015)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_50) {
          GALGAS_char var_c_39655 = enumerator_39584.current (HERE).mAttribute_mValue.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1016)) ;
          const enumGalgasBool test_51 = GALGAS_bool (kIsNotEqual, var_c_39655.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_39655.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1017)).boolEnum () ;
          if (kBoolTrue == test_51) {
            TC_Array <C_FixItDescription> fixItArray52 ;
            inCompiler->emitSemanticError (enumerator_38524.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 1018)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray52  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1018)) ;
          }
        }
        enumerator_39584.gotoNextObject () ;
      }
      enumerator_39409.gotoNextObject () ;
    }
    enumerator_38524.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_39977 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1025)) ;
  cEnumerator_mapSearchMethodListAST enumerator_40022 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_40022.hasCurrentObject ()) {
    const enumGalgasBool test_53 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1027)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_53) {
      {
      var_searchMethodMap_39977.setter_insertKey (enumerator_40022.current (HERE).mAttribute_mSearchMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1028)) ;
      }
    }else if (kBoolFalse == test_53) {
      {
      var_searchMethodMap_39977.setter_insertKey (enumerator_40022.current (HERE).mAttribute_mSearchMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1030)) ;
      }
    }
    cEnumerator_stringlist enumerator_40383 (enumerator_40022.current (HERE).mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1033)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1033)), kEnumeration_up) ;
    while (enumerator_40383.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_40418 = enumerator_40383.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1034)) ;
      {
      GALGAS_string joker_40518 ; // Joker input parameter
      var_explodedArray_40418.setter_popFirst (joker_40518, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1035)) ;
      }
      cEnumerator_stringlist enumerator_40557 (var_explodedArray_40418, kEnumeration_up) ;
      while (enumerator_40557.hasCurrentObject ()) {
        const enumGalgasBool test_54 = GALGAS_bool (kIsStrictSup, enumerator_40557.current (HERE).mAttribute_mValue.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1037)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_54) {
          GALGAS_char var_c_40628 = enumerator_40557.current (HERE).mAttribute_mValue.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1038)) ;
          const enumGalgasBool test_55 = GALGAS_bool (kIsNotEqual, var_c_40628.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_55) {
            TC_Array <C_FixItDescription> fixItArray56 ;
            inCompiler->emitSemanticError (enumerator_40022.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 1040)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray56  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)) ;
          }
        }
        enumerator_40557.gotoNextObject () ;
      }
      enumerator_40383.gotoNextObject () ;
    }
    enumerator_40022.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1048)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1048)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1050)), object->mAttribute_mMapTypeName, var_typedAttributeList_37877, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap_29242, var_mapAutomatonActionMap_28596, var_mapStateSortedList_29666, var_mapOverrideList_32972, var_shadowBehaviour_27447, var_shadowMessage_27480  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1049)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1047)) ;
  GALGAS_string var_graphFile_41402 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1064)).add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1064)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1064)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1064)) ;
  const enumGalgasBool test_57 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_57) {
    GALGAS_string var_theGraph_41571 = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_41624 (var_mapAutomatonStateMap_29242, kEnumeration_up) ;
    while (enumerator_41624.hasCurrentObject ()) {
      var_theGraph_41571.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_41624.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1068)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)).add_operation (enumerator_41624.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1068)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)) ;
      const enumGalgasBool test_58 = var_initialStateSet_28014.getter_hasKey (enumerator_41624.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-shared-map.galgas", 1069)).boolEnum () ;
      if (kBoolTrue == test_58) {
        var_theGraph_41571.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1070)) ;
      }else if (kBoolFalse == test_58) {
        var_theGraph_41571.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1072)) ;
      }
      switch (enumerator_41624.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph_41571.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1077)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph_41571.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1079)) ;
        }
        break ;
      }
      var_theGraph_41571.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1081)) ;
      enumerator_41624.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_42102 (object->mAttribute_mMapStateList, kEnumeration_up) ;
    while (enumerator_42102.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_42137 (enumerator_42102.current_mTransitionList (HERE), kEnumeration_up) ;
      while (enumerator_42137.hasCurrentObject ()) {
        var_theGraph_41571.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_42102.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1085)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1085)).add_operation (enumerator_42137.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1085)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1085)).add_operation (enumerator_42137.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1085)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1085)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1085)) ;
        switch (enumerator_42137.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_41571.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1089)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_41571.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1091)) ;
          }
          break ;
        }
        var_theGraph_41571.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1093)) ;
        enumerator_42137.gotoNextObject () ;
      }
      enumerator_42102.gotoNextObject () ;
    }
    var_theGraph_41571.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1096)) ;
    GALGAS_bool joker_42632 ; // Joker input parameter
    var_theGraph_41571.method_writeToFileWhenDifferentContents (var_graphFile_41402, joker_42632, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1097)) ;
  }else if (kBoolFalse == test_57) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_41402, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1099)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         extensionMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sharedMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_44994 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_44994.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_44994.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1159)) ;
    enumerator_44994.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1163)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1164)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-shared-map.galgas", 1162))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1169)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1170)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1171)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1172)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1173)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1174)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1175)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1176)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1177)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1178)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1179)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1180)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1168))), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1168)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                              extensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sharedMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1192)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1193)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-shared-map.galgas", 1191))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                              extensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@sharedMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1204)) ;
  GALGAS_keySortedList var_keySortedList_46578 = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1205)) ;
  cEnumerator_mapAutomatonStateMap enumerator_46646 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_46646.hasCurrentObject ()) {
    var_keySortedList_46578.addAssign_operation (enumerator_46646.current_lkey (HERE).mAttribute_string, enumerator_46646.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1207)) ;
    enumerator_46646.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1210)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList_46578, object->mAttribute_mShadowBehaviour, object->mAttribute_mShadowMessage COMMA_SOURCE_FILE ("type-shared-map.galgas", 1209))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                                     extensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_lstring var_key_3469 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)), object->mAttribute_mSortedListTypeName.getter_location (SOURCE_FILE ("type-sorted-list.galgas", 84))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3469, temp_0, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_3627 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3627.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3627.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)), enumerator_3627.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-sorted-list.galgas", 87))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
    }
    enumerator_3627.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                                extensionMethod_sortedListDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sortedListDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sortedListDeclarationAST addAssociatedElement'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_4270 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  cEnumerator_propertyInCollectionListAST enumerator_4330 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_4330.hasCurrentObject ()) {
    var_structAttributeList_4270.addAssign_operation (enumerator_4330.current_mPropertyTypeName (HERE), enumerator_4330.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 103))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 99)) ;
    enumerator_4330.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), var_structAttributeList_4270, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 105))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                             extensionMethod_sortedListDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_addAssociatedElement (defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement, NULL) ;

